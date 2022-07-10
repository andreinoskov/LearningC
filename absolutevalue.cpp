#include<iostream>
using namespace std;

int main(){
    
    //define value
    int value;
    int absolute;

    // Take user input
    cout<<"Please input an integer" <<endl;
    cin>>value;

    //find absolute value
    if (value >= 0){
        absolute = value;
    }
    else{
        absolute = -value;
    }

    // Print absolute value

    cout<<absolute<<endl;

    return 0;
}