#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<" enter two numbers a and b"<<endl;
cin>>a>>b;
char oper ;
cout<<"Enter an operator from +,-,*,/ to be performed";
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
