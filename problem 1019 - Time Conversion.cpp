#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, hours, minutes, seconds, remain_time;
    cin >> N;
    
    hours = N / (60*60);
    remain_time = N % (60*60);
    minutes = remain_time / 60;
    seconds = remain_time % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
