#include <iostream>
using namespace std;
int main()
{
int a = 0, b = 0, c = 0;
char op;
cout << "Enter input a" << endl;
cin >> a;
cout << "Enter operator, 1:add, 2:subtract, 3:multiply, 4:divide" << endl;
cin >> op;
cout << "Enter input b" << endl;
cin >> b;
    if ( op=='1')
    {
      c = a + b;
    }
    else if ( op=='2')
    {
      c = a - b;
    }
    else if ( op=='3')
    {
      c = a * b;
    }
    else if ( op=='4')
    {
      if( b==0 )
      {
        cout << "The input b cannot equal zero because the result DNE" << endl;
        return 0;
      }
      c = a / b;
      cout << "c = " << a / b << endl;
      cout << "r = " << a % b << endl;
      return 0;
    }
    else
    {
      cout << "Please input correct operator" << endl;
    }
cout << "The result is: " << c << endl;
return 0;
}
