#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    double salary, salout, money, percent, rate;
 
    cin >> salary;
 
    if(salary >= 0 && salary <= 400.00)
    {
        rate = 0.15;;
    }
    else if(salary >= 400.01 && salary <= 800.00)
    {
        rate = 0.12;
    }
    else if(salary >= 800.01 && salary <= 1200.00)
    {
        rate = 0.1;
    }
    else if(salary >= 1200.01 && salary <= 2000.00)
    {
        rate = 0.07;
    }
    else
    {
        rate = 0.04;
    }
 
    money = salary * rate;
    salout = salary + money;
    percent = rate * 100;
 
    cout << "Novo salario: " << fixed << setprecision(2) << salout<< endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << money << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << percent << " %" << endl;
 
    return 0;
}
