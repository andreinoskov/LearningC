#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // define variables
    int input;
    int weeks;
    int days;

    // take user input
    cout<<"Number of days travled"<<endl;
    cin>>input;

    //Converts to weeks + days
    weeks = input/7;
    days  = input%7;

    //return output
    cout<<weeks<<" weeks "<<days<<" days";

    return 0;

}
