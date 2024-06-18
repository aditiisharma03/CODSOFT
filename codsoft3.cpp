#include <iostream>
using namespace std;
int main() 
{
  double num1,num2;
  char operation;

  cout<<"enter the first number:";
  cin>>num1;

  cout<<"enter the second number:";
  cin>>num2;

  cout<<"choose an operation(+,-,*,/):";
  cin>>operation;

   switch(operation)
    {
      case '+': cout<<"The result is:"<<num1+num2<<endl;
      break;

      case '-': cout<<"The result is:"<<num1-num2<<endl;
      break;

      case '*': cout<<"The result is:"<<num1*num2<<endl;
      break;

      case '/': cout<<"The result is:"<<num1/num2<<endl;
      break;

      default:cout<<"Error,invalid operation!"<<endl;
      break;
    }
  return 0;
}