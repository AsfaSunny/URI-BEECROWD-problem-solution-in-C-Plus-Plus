#include<bits/stdc++.h>
using namespace std;

int main(){
    double A, B, C;
    double pi = 3.14159;
    double triangle, circle, trapezium, square, rectangle;
    cin>> A >> B >> C;
    
    triangle = 0.5 * A * C;
    circle = pi * (C * C);
    trapezium = (A + B) / 2 * C;
    square = B * B;
    rectangle = A * B;
    
    cout << fixed;
    cout << setprecision(3) << "TRIANGULO: " << triangle << endl;
    cout << setprecision(3) << "CIRCULO: " << circle << endl;
    cout << setprecision(3) << "TRAPEZIO: " << trapezium << endl;
    cout << setprecision(3) << "QUADRADO: " << square << endl;
    cout << setprecision(3) << "RETANGULO: " << rectangle << endl;
    
    
    return 0;
}
