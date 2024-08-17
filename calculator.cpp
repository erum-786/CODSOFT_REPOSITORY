// Task-2
//SIMPLE CALCULATOR

/* Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an 
operation to perform. */


#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"Enter two numbers a and b : "<<endl;
cin>>a>>b;
char oper ;
cout<<"Enter an operator from +,-,*,/ to be performed : ";
cin>> oper ;

switch (oper) {
    case '+' : cout<< "Sum = "<<a+b;
               break;
    case '-' : cout<<" Difference = "<< a-b;
               break;
    case '*' : cout<< " Product = "<< a*b;
               break;
    case '/': cout<<" Division = "<< a/b;
              break;
    default : cout<<" Invalid Input";           
    }
}  