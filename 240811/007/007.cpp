#include <iostream>
#include <string>
using namespace std;

class immu{
    public:
        string code, place;
        int time;

        void Cout(){
            cout<<"secret code : "<<code<<endl<<"meeting point : "<<place<<endl<<"time : "<<time;
        }
};

int main() {
    immu num1;
    cin>>num1.code>>num1.place>>num1.time;
    num1.Cout();
    return 0;
}