#include <iostream>
using namespace std;

class Array
{
    int **p, r, c;
    public:
        void setSize();
        void read();
        void print();
        void destroy();
};

void Array::setSize()
{
    cout << "enter row and column" << endl;
    cin >> r >> c;
    p = new int *[r];
    for (int i = 0; i < r; i++)
    {
        p[i] = new int[c];
    }
}

void Array::read()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> p[i][j];
        }
    }
}

void Array::print()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

void Array::destroy()
{
    for (int i = 0; i < r; i++)
    {
        delete p[i];
    }
    delete p;
}

int main()
{
    Array a1;
    a1.setSize();
    cout << "enter array elemets" << endl;
    a1.read();
    cout << "array elemts are" << endl;
    a1.print();
    a1.destroy();
    return 0;
}