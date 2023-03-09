//1st way:
//this is the correct way and correct code, every compiler accepted it and show me the correct result except beecrowd's judge (since this judge is an idiot itself)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, hours, minutes;
    cin >> a >> b >> c >> d;
    
    hours = c - a;
    if(hours < 0){
        hours = 24 + (c - a);
    }
    
    minutes = d - b;
    if(minutes < 0){
        minutes = 60 + (d - b);
        hours--;
    }

    if(a == c && b == d){
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }else{
        cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
    }

    return 0;
}
