#include <iostream>
using namespace std;

int compute(int &a, int &b);

int main() {
    int a, b;
    cin>>a>>b;
    compute(a, b);
    cout<<a<<" "<<b;
    return 0;
}

int compute(int &a, int &b){
    size(a, b);
    if(a>b){
        a+=25;
        b*=2;
    }
    else{
        a *=2;
        b+=25;
    }
    return 0;
}