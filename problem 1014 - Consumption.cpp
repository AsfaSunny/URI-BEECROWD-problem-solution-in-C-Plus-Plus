#include<bits/stdc++.h>
using namespace std;

int main(){
    int X;
    double Y, consumption;
    cin >> X >> Y;

    consumption = X / Y;
    cout << fixed;
    cout << setprecision(3) << consumption << " km/l" << endl;

    return 0;
}
