#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[100];
    cin >> name;
    double salary, sale, final_salary;
    cin >> salary >> sale;
    
    final_salary = salary + (sale * 15) /100;
    cout << fixed;
    cout << setprecision(2) << "TOTAL = R$ " << final_salary << endl;
    
    return 0;
}
