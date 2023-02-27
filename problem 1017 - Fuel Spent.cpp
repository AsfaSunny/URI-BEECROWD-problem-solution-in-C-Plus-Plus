#include<bits/stdc++.h>
using namespace std;

int main(){
    int spent, speed;
    double ans;
    
    cin >> spent >> speed;
    ans = (spent * speed)/12.0;
    cout << fixed;
    cout << setprecision(3) << ans << endl;

    return 0;
}
