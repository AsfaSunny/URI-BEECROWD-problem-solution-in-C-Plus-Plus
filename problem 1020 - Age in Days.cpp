#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ano, mes, dia, remain;
    cin >> n;

    ano = n / 365;
    remain = n % 365;
    mes = remain / 30;
    dia = remain % 30;

    cout << ano <<" ano(s)"<< endl;
    cout << mes <<" mes(es)"<< endl;
    cout << dia <<" dia(s)"<< endl;

    return 0;
}
