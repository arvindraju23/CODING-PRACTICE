#include<iostream> 
using namespace std;
int main()
{
    int num1, num2;
    cin>>num1>>num2;

    char op;

    cout<<"Enter num1" <<endl;
    cout<<"Enter num2 "<<endl;

    cin>>op;
    cout<<"Enter the operator : +, -, *,/,% "<<endl;

    switch (op){
        case '+':
        cout<<num1+num2<<endl;
        break;
        case '-':
        cout<<num1-num2<<endl;
        break;

        case '*':
        cout<<num1*num2<<endl;
        break;
        case '/':
        cout<<num1/num2<<endl;
        break;
       
        default:
        cout<<"Error"<<endl;
        break;

    }
    return 0;
    
 
    
}