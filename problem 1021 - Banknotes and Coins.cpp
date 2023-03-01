#include <iostream>

using namespace std;

int main(){
    double N;
    int inteiro, notes, coins; 
    cin >> N;

    inteiro = N;
    N = 100*N;
    coins = N;


    cout << "NOTAS:\n";
    cout << inteiro/100 << " nota(s) de R$ 100.00" << endl;
    notes = inteiro % 100;
    cout << notes/50 << " nota(s) de R$ 50.00" << endl;
    notes = notes % 50;
    cout << notes/20 << " nota(s) de R$ 20.00" << endl;
    notes = notes % 20;
    cout << notes/10 << " nota(s) de R$ 10.00" << endl;
    notes = notes % 10;
    cout << notes/5 << " nota(s) de R$ 5.00" << endl;
    notes = notes % 5;
    cout << notes/2 << " nota(s) de R$ 2.00" << endl;
    notes = notes % 2;
    
    cout << "MOEDAS:\n";
    cout << notes/1 << " moeda(s) de R$ 1.00\n";
    coins = coins % 100;
    cout <<  coins/50 << " moeda(s) de R$ 0.50\n";
    coins = coins % 50;
    cout <<  coins/25 << " moeda(s) de R$ 0.25\n";
    coins = coins % 25;
    cout <<  coins/10 << " moeda(s) de R$ 0.10\n";
    coins = coins % 10;
    cout <<  coins/5 << " moeda(s) de R$ 0.05\n";
    coins = coins % 5;
    cout <<  coins/1 << " moeda(s) de R$ 0.01\n";


    return 0;
}
