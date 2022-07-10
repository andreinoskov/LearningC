#include<iostream>
using namespace std;

int factorial(int input){
    if (input ==1){
        return input;
    }
    else{
        return input * factorial (input - 1);
    }
}


int main(){
   // factorial
   cout << factorial(12)<<endl;

    return 0;
}