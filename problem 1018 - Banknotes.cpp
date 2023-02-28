#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, hundred, fifty, twenty, ten, five, two, one, temp;
    cin >> n;
    
    hundred = n/100;
    temp = n%100;
    fifty = temp/50;
    temp = temp%50;
    twenty = temp/20;
    temp = temp%20;
    ten = temp/10;
    temp = temp%10;
    five = temp/5;
    temp = temp%5;
    two  =temp/2;
    temp = temp%2;
    one = temp;

    cout << n << endl;
    cout << hundred <<" nota(s) de R$ 100,00"<< endl;
    cout << fifty <<" nota(s) de R$ 50,00"<< endl;
    cout << twenty <<" nota(s) de R$ 20,00"<< endl;
    cout << ten <<" nota(s) de R$ 10,00"<< endl;
    cout << five <<" nota(s) de R$ 5,00"<< endl;
    cout << two <<" nota(s) de R$ 2,00"<< endl;
    cout << one <<" nota(s) de R$ 1,00"<< endl;

    return 0;
}
