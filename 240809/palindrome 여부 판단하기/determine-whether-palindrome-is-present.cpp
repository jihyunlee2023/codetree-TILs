#include <iostream>
#include <string>
using namespace std;

bool Palindrome(string &word);

int main() {
    string word;
    cin>>word;
    if(Palindrome(word)){
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}

bool Palindrome(string &word){
    int n = word.length();
    return word[0]==word[n-1];
}