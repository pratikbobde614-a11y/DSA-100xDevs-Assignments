#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    if(n>90){
        cout << "Excellent";
    }
    else if(n>80){
        cout << "Good";
    }
    else if(n>70){
        cout << "Fair";
    }
    else if(n>60){
        cout << "Meet Expectations";
    }
    else{
        cout << "Below Par";
    }
}