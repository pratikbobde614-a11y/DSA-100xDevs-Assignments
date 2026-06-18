#include<iostream>
using namespace std;
int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int Min, Max;

    // For Min number
    if(a<b && a<c){
        Min=a;
    }
    else if(b<a && b<c){
        Min=b;
    }
    else{
        Min=c;
    }


// For Max number
    if(a>b && a>c){
        Max=a;
    }
    else if(b>a && b>c){
        Max=b;
    }
    else{
        Max=c;
    }

    cout << "Min = " << Min <<endl;
    cout << "Max = " << Max <<endl;

}