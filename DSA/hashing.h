#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Node
{
public:
    string key;
    T value;
    Node<T> *next;

    Node(string key, T value)
    {
        this->key = key;
        this->value = value;
        next = nullptr;
    }

    ~Node()
    {
        if (next != nullptr)
        {
            delete next;
        }
    }
};

template <typename T>
class Hashtable
{
    Node<T> **table;
    int cs;
    int ts;

    int hashFN(string key)
    {
        int idx = 0;
        int power = 1;
        for (auto ch : key)
        {
            idx = (idx + (power * ch)) % ts;
            power = (power * 29) % ts;
        }
        return idx;
    }

    void rehash()
    {
        Node<T> **oldTable = table;
        int oldTs = ts;

        ts = (2 * ts) + 1;
        table = new Node<T> *[ts];
        for (int i = 0; i < ts; i++)
        {
            table[i] = nullptr;
        }

        cs = 0;
        for (int i = 0; i < oldTs; i++)
        {
            Node<T> *temp = oldTable[i];
            while (temp != nullptr)
            {
                string key = temp->key;
                T value = temp->value;
                insert(key, value);
                temp = temp->next;
            }
            delete oldTable[i];
        }
        delete[] oldTable;
    }

public:
    Hashtable(int default_size = 7)
    {
        cs = 0;
        ts = default_size;
        table = new Node<T> *[ts];
        for (int i = 0; i < ts; i++)
        {
            table[i] = nullptr;
        }
    }

    void insert(string key, T val)
    {
        int idx = hashFN(key);
        Node<T> *n = new Node<T>(key, val);

        n->next = table[idx];
        table[idx] = n;
        cs++;

        float loadFactor = static_cast<float>(cs) / ts;
        if (loadFactor > 0.7)
        {
            rehash();
        }
    }

    void print()
    {
        for (int i = 0; i < ts; i++)
        {
            cout << "Bucket " << i << " -> ";
            Node<T> *temp = table[i];
            while (temp != nullptr)
            {
                cout << temp->key << " -> ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    T* search(string key)
    {
        int idx = hashFN(key);
        Node<T> *temp = table[idx];
        while (temp != nullptr)
        {
            if (temp->key == key)
            {
                return &(temp->value);
            }
            temp = temp->next;
        }
        return NULL;
    }
    bool ispresent(string key)
    {
        int idx = hashFN(key);
        Node<T> *temp = table[idx];
        while (temp != nullptr)
        {
            if (temp->key == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
 
    void erase(string key)
    {
        int idx = hashFN(key);
        Node<T> *temp = table[idx];
        Node<T> *prev = nullptr;
        Node<T> *ref = nullptr;

        while (temp != nullptr)
        {
            if (temp->key == key)
            {
                // Check if the node to be deleted is the first node in the bucket
                if (prev == nullptr)
                {
                    ref = temp;
                    table[idx] = temp->next;
                }
                else
                {
                    ref = temp;
                    prev->next = temp->next;
                }

                ref->next = nullptr;
                delete ref;
                cs--;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    T& operator[](string key){
        int * valueFound=search(key);
        if(valueFound==NULL){
            T object;
            insert(key,object);
            valueFound=search(key);
        }
        return *valueFound;
    }
};