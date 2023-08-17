#include<iostream>
using namespace std;

int main(){
    cout<<"This is a simple Calculator:"<<endl;
    double num1 , num2;
    char operation;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    cout<<"Enter the operation to be performed:"<<endl;
    cin>>operation;
    if (operation=='+'){
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
    }
    else if ( operation=='-'){
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
    }
    else if ( operation=='*'){
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
    }
    else if ( operation=='/'){
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
    }    
    return 0;
}