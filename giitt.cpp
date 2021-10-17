#include <iostream>>

using namespace std;

int main()
{
    cout << "Hello world!";
    cout << "if you want to add two numbers, enter +";
    string a;
    cin >> a;
    int b, c;
    if (a == "+")
    {
        cout <<"Enter nambers:";
        cout << "Enter first namber:";
        cin >> b;
        cout <<"Enter second namber:";
        cin >> c;
        cout << "Ответ:";
        cout << b + c;

    }

}