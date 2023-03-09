#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, times = 0;
    cin >> x >> y;

    if(x < y){
        times = y - x;
        cout << "O JOGO DUROU " << times << " HORA(S)" << endl;
    }else if(x > y){
        times = 24 - (x - y) ;
        cout << "O JOGO DUROU " << times << " HORA(S)" << endl;
    }else if(x == y){
        times = 24;
        cout << "O JOGO DUROU " << times << " HORA(S)" << endl;
    }
    
    return 0;
}




//easy way:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, duration;
    cin >> x >> y;
    
    if(x < y)
        duration = y - x;
    else
        duration = 24 + y - x;
        
    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;
    
    return 0;
}
