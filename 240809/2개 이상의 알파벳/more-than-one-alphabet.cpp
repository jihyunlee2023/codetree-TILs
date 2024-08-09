#include <iostream>
#include <string>
using namespace std;

bool alpa(string word);

int main() {
    string word;
    cin>>word;
    if(alpa(word))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

bool alpa(string word){
    int n=word.length();
    for(int i=1; i<n; i++){
        return word[0]!=word[i];
    }
    return false;
}
//같은 알파벳으로만 이루어졋나?