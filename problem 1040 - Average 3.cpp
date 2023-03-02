#include<bits/stdc++.h>
using namespace std;

int main()
{
    double N1, N2, N3, N4, last, sum;
    cin >> N1 >> N2 >> N3 >> N4;
    
    sum = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    cout << fixed;
    cout << setprecision(1) << "Media: " << sum << endl;
    
    if (sum >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (sum >= 5.0) {
        cout << "Aluno em exame." << endl;
        cin >> last;
       
        cout << setprecision(1) << "Nota do exame: " << last << endl;
        if (((last + sum) / 2.0) > 5.0){
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        
        cout << setprecision(1) << "Media final: " << (last + sum ) / 2.0 << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}
