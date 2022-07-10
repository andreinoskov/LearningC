#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int input){
    // Returns wether or not an integer is prime

    bool prime = true;
    for (int i = 2; i < sqrt(input)  ; prime == true){
        if (input % i == 0){
            prime = false;
        }
        i = i + 1;
    }

    return prime;
    
}

int main(){
   // print if prime
   cout << isprime(912)<<endl;

    return 0;
}