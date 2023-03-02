#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    double a, b, c, formula, Root1, Root2;
    cin >> a >> b >> c;

    if(((b*b)-4*a*c) < 0 || a == 0 || b == 0 || c == 0){
        cout<<"Impossivel calcular"<<endl;
    } else {
         formula = sqrt((b*b) - 4*a*c);
         Root1 = ((-b + formula) / (2 * a));
         Root2 = ((-b - formula) / (2 * a));
         
         cout << fixed;
         cout << setprecision(5) << "R1 = " << Root1 << endl;
         cout << setprecision(5) << "R2 = " << Root2 << endl;
    }
    
    return 0;
}
