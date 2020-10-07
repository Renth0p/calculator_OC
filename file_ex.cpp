
#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    char z;
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    cout << "Action: ";
    cin >> z;
    switch (z)
    {
      case '+':   
    {
        c = a + b;
        cout << "result: " << c << endl;
        
        break;
    }
     case '-':
    {
        c = a - b;
        cout << "result: " << c << endl;
        
        break;
    }
     case '*':
    {
        c = a * b;
        cout << "result: " << c << endl;
        
        break;
    }
     case '/':
    {
        c = a / b;
        cout << "result: " << c << endl;
        
        break;
    }
    
    default: cout << "Failed number";
}
}
