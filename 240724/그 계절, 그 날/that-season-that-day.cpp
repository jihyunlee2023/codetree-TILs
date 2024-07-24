#include <iostream>
using namespace std;

bool LeapYear(int Y);
bool day(int Y, int M, int D);

int main() {
    int Y, M, D;
    cin>>Y>>M>>D;
    if(day(Y, M, D)){
        if(M==3||M==4||M==5)
            cout<<"Spring";
        else if(M==6||M==7||M==8)
            cout<<"Summer";
        else if(M==9||M==10||M==11)
            cout<<"Fall";
        else
            cout<<"Winter";
    }
    else
        cout<<"-1";
    return 0;
}

bool LeapYear(int Y){
    if(Y%4==0){
        if(Y%100==0&&Y%400!=0)
            return false;
        else
        return true;
    }
    return false;
}


bool day(int Y, int M, int D){
    if(M==4 || M==6 || M==9 || M==11)
        return D<=30;
    else if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12)
        return D<=31;
    else if(M==2)
        if(LeapYear(Y))
            return D<=29;
        else
            return D<=28;
    else
        return false;
}