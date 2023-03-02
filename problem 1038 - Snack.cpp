#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    double X1=4.00, X2=4.50, X3=5.00, X4=2.00, X5=1.50, Result;

    if(X == 1) {
        Result = X1*Y;
    } else if(X == 2) {
        Result = X2*Y;
    } else if(X == 3) {
        Result = X3*Y;
    } else if(X == 4) {
        Result = X4*Y;
    } else if(X == 5) {
        Result = X5*Y;
    }
    
    cout << fixed;
    cout << setprecision(2) << "Total: R$ " << Result << endl;

    return 0;
}
