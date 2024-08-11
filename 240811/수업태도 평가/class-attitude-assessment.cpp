#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string name[7] = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    int score[7] = {0};
    
    for (int i = 0; i < N; i++) {
        string name;
        int score;
        cin >> name >> score;
        
        for (int j = 0; j < 7; j++) {
            if (name[j] == name) {
                score[j] += score;
                break;
            }
        }
    }
    
    int min = scores[0];
    int second = 101;
    
    for (int i = 1; i < 7; i++) {
        if (score[i] < min) {
            second = min;
            min = score[i];
        }
        else if (score[i] > min && score[i] < second) {
            second = score[i];
        }
    }
    
    int count = 0;
    string secondName = "";
    for (int i = 0; i < 7; i++) {
        if (scores[i] == second) {
            count++;
            secondName = names[i];
        }
    }
    
    if (count == 1) {
        cout << secondName << endl;
    } else {
        cout << "Tie" << endl;
    }
    return 0;
}