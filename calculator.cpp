#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    cout << "enter the operator " << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
    break; 
    case '*':
        cout << a * b << endl;
    break;
    case '/':
        cout << a / b << endl;
        break;
         default :
          cout << "enter another operator" << endl;
        break;
    }
    return 0;
}