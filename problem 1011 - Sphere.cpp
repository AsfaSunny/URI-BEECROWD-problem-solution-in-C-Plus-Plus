#include<bits/stdc++.h>
using namespace std;

int main(){
    int R;
    double result;
    cin >> R;
    result = (4.0/3 * 3.14159 * R*R*R);
    
    cout<<fixed;
    cout << setprecision(3) << "VOLUME = " << result << endl;

    return 0;
}
