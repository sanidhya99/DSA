template<typename T>
class vector
{
    T *arr;
    int cs;
    int ms;

public:
    vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }
    // push_back,pop_back,methods
    void push_back(T d)
    {
        // two cases

        if (ms == cs)
        {
            // create new array , delete the old one , double the capacity
            int *OldArray = arr;
            ms = 2 * ms;
            arr = new T[ms];
            for (int i = 0; i < cs; i++)
            {
                arr[i] = OldArray[i];
            }
        }

        arr[cs] = d;
        cs++;
    }
    void pop_back(void)
    {
        if (cs > 0)
            cs--;
    }
    bool isEmpty() const
    {
        return cs == 0;
    }
    // front,back,at(i),[]
    T front() const
    {
        return arr[0];
    }
    T back() const
    {
        return arr[cs - 1];
    }
    T at(int i) const
    {
        return arr[i];
    }
    int size() const
    {
        return cs;
    }
    int capacity() const
    {
        return ms;
    }
    T operator[](const int i) const
    {
        return arr[i];
    }
};
