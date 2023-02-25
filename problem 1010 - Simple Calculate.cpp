#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int p1_code, p1_units, p2_code, p2_units;
    
    double p1_unit_price, p2_unit_price, VALOR_A_PAGAR;
    
    cin >> p1_code >> p1_units >> p1_unit_price;
    
    cin >> p2_code >> p2_units >> p2_unit_price;
    
    VALOR_A_PAGAR = (p1_units * p1_unit_price) + (p2_units * p2_unit_price);
    cout << fixed;
    cout << setprecision(2) << "VALOR A PAGAR: R$ " << VALOR_A_PAGAR << endl;
    
    return 0;
}
