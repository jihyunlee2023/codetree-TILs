#include <iostream>
using namespace std;

bool compute(int &arr);

int main() {
    int N;
    int arr[50];
    cin>>N;
    for(int i; i<N; i++){
        cin>>arr[i];
        if(compute(arr[i]))
            arr[i]*=(-1);
        cout<<arr[i]<<" ";
    }
    return 0;
}

bool compute(int &arr){
    return arr<0;
}