#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};

Node *insert(Node *root, int key)
{
    if (root == NULL)
    {
        return new Node(key);
    }

    if (key < (root->key))
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }
    return root;
}

void PrintInorderBST(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    PrintInorderBST(root->left);
    cout << root->key << " ";
    PrintInorderBST(root->right);
    return;
}

bool search(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->key == key)
    {
        return true;
    }

    else if (key < (root->key))
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
Node *findmin(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
Node *remove(Node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    else if ((root->key) > key)
    {
        root->left = remove(root->left, key);
    }
    else if ((root->key) < key)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        // no children
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // single children
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        // 2 children
        else
        {
            Node *temp = findmin(root->right);
            root->key = temp->key;
            root->right = remove(root->right, temp->key);
        }
    }
    return root;
}
void printRange(Node *root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }
    else if ((root->key) >= k1 && (root->key) <= k2)
    {
        printRange(root->left, k1, k2);
        cout << root->key << " ";
        printRange(root->right, k1, k2);
    }
    else if ((root->key) < k1)
    {
        printRange(root->right, k1, k2);
    }
    else
    {
        printRange(root->left, k1, k2);
    }
}
int main()
{
    Node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (int x : arr)
    {
        root = insert(root, x);
    }
    printRange(root, 5, 12);
    // PrintInorderBST(root);
    // root = remove(root, 4);
    // cout << endl;
    // PrintInorderBST(root);

    // if(search(root,3)){
    //     cout<<"exists";
    // }
    // else{
    //     cout<<"no number";
    // }
    return 0;
}