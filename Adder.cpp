#include <iostream>
using namespace std;

int main(){
    int num1; //declare first variable
    int num2; //declare second variable
    int sum;  //declare variable for sum

    cout<<"Please enter two numbers"<<endl; //ask for user input
    cin>>num1>>num2;

    sum = num1 + num2;

    cout <<num1<< "+"<<num2<< "="<<sum<<endl;
    return 0;
}