#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string studentName[7] = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    int studentScore[7] = {0};
    
    for (int i = 0; i < N; i++) {
        string name;
        int score;
        cin >> name >> score;
        
        for (int j = 0; j < 7; j++) {
            if (studentName[j] == name) {
                studentScore[j] += score;
                break;
            }
        }
    }
    
    int min = studentScore[0];
    int second = 10001;
    
    for (int i = 1; i < 7; i++) {
        if (studentScore[i] < min) {
            second = min;
            min = studentScore[i];
        }
        else if (studentScore[i] > min && studentScore[i] < second) {
            second = studentScore[i];
        }
    }
    
    int count = 0;
    string secondName = "";
    for (int i = 0; i < 7; i++) {
        if (studentScore[i] == second) {
            count++;
            secondName = studentName[i];
        }
    }
    
    if (count == 1) {
        cout << secondName << endl;
    } else {
        cout << "Tie" << endl;
    }
    return 0;
}