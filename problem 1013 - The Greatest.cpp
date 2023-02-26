#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    int MaiorAB ,greatest;
    cin >> a >> b >> c;
    
    MaiorAB = (a + b + abs(a-b)) / 2;
    greatest = (MaiorAB + c + abs(MaiorAB-c)) / 2;

    cout<< greatest << " eh o maior" << endl;
    
    return 0;
}
