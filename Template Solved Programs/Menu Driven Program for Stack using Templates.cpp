/* C++ Menu Driven Program for Stack using Templates  */

#include <iostream>
using namespace std;
template <class T>
class Stack
{
public:
    Stack(int MaxStackSize);
    ~Stack() { delete[] S; }
    int IsEmpty() const { return top == -1; }
    int IsFull() const { return top == MaxTop; }
    T Peek() const;
    void Push(T);
    T Pop();
    void Display();

private:
    int top;    // current top of stack
    int MaxTop; // max val for top
    T *S;       // element array
};
template <class T>
Stack<T>::Stack(int MaxStackSize)
{
    // stack constructor
    MaxTop = MaxStackSize - 1;
    S = new T[MaxStackSize];
    top = -1;
}
template <class T>
T Stack<T>::Peek() const
{
    if (IsEmpty()) // top fails
        return 0;
    else
        return S[top];
}
template <class T>
void Stack<T>::Push(T x)
{
    if (IsFull())
        cout << "\nno memory()"; // add fails
    else
    {
        S[++top] = x;
    }
}
template <class T>
T Stack<T>::Pop()
{
    T x;
    if (IsEmpty())
    {
        cout << "\nstack is empty\n";
        return -1;
    }
    else
    {
        x = S[top--];
        return x;
    }
}
template <class T>
void Stack<T>::Display()
{
    if (IsEmpty())
        cout << "\nout of bounds"; // delete fails
    else
        for (int i = top; i >= 0; i--)
        {
            cout << S[i] << "\t";
        }
}
void menu()
{
    cout << "\n1.Push\n 2.Pop\n 3.Peek\n 4.Display\n";
}
int main()
{
    Stack<int> iobj(5);
    int ch, x;

    do
    {
        menu();
        cout << "\nenter the choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nenter x value to push into the stack\n";
            cin >> x;
            iobj.Push(x);
            break;
        case 2:
            x = iobj.Pop();
            if (x != -1)
                cout << "\npoped value is \t" << x << endl;
            break;
        case 3:
            x = iobj.Peek();
            cout << "\ntop most value is \t" << x << endl;
            break;
        case 4:
            iobj.Display();
            break;
        }
    } while (ch >= 1 && ch <= 4);
    return 0;
}