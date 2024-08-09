#include <iostream>
using namespace std;


int main()
{
   double num1,num2;
   char op;

   cout <<"Enter the operation ( + -  / * ):" ; 
   cin >> op ;

   cout << "Enter the number one after other:";
   cin>> num1>> num2 ;

   switch (op)
   {
    case  '+':
    cout << num1 << op << num2 << num1 + num2 << endl;
    break;

 case  '-':
    cout << num1 << op << num2 << num1 - num2 << endl;
    break;


     case '*':
    cout << num1 << op << num2 << num1 * num2 << endl;
    break;


     case '/':
    if (num2 ==0.00)
    {
        cout << "Divide by zero" << endl;

    }

    else{
       cout << num1 << op << num2 << num1 / num2 << endl;
    }
    break;

default:
 cout << "Invalid operator" << endl;

   }

}