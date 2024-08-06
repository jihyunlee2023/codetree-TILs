#include <iostream>
using namespace std;
bool jjacksu(int *x);

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(jjacksu(arr+i))
            cout<<arr[i]/2<<" ";
        else
            cout<<arr[i]<<" ";
    }
    return 0;
}

bool jjacksu(int *x){
    return *x%2==0;
}