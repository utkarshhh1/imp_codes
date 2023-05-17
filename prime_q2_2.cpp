#include <iostream>
using namespace std;
int main()
{
    int a, b, i;
    cin >> a >> b;
    if (a > b)
    {
        for (i = b+1; i <= a-1; i++)
        {
            if (a % i == 0)
            {
                cout << "not prime";
                break;
            }
        }
        if(a==i)
        {
            cout<<"prime";
        }
    }
    else
    {
        for (i = a+1; i <= b-1; i++)
        {
            if (b % i == 0)
            {
                cout << "not prime";
                break;
            }
        }
        if(b==i)
        {
            cout<<"prime";
        }
    }
}