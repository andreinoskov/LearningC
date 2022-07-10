#include<iostream>
using namespace std;

int main(){
    //define variable
    int input;

    //take user input
    cout<< "Put in integer"<<endl;
    cin>>input;

    //print all integers from 0 to input

    for(int i =0; i <input; i++){
        cout<<i<<endl;
    }

    return 0;
}