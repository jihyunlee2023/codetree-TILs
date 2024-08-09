#include <iostream>
using namespace std;

int size(int &a, int &b);
int compute(int &a, int &b);

int main() {
    int a, b;
    cin>>a>>b;
    compute(a, b);
    cout<<a<<" "<<b;
    return 0;
}

int size(int &a, int &b){
    int box;
    if(a>b){
        box=a;
        a=b;
        b=box;
    }
    return 0;
}

int compute(int &a, int &b){
    size(a, b);
    a *=2;
    b+=25;
    return 0;
}