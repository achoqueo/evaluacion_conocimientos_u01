#include <iostream>
using namespace std;

int factorial(int b);
float suma(float a);

int main() {
    float n, sum;
    cout << "Ingrese el numero enesimo: ";cin >> n;
    sum = suma(n);
    cout << "La suma es " << sum << endl;
    return 0;
}

float suma(float a) {
    float s = 0;
    int fact = 1; 

    for (float i = 1; i <= a; i++) {
        
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        
        s += fact / (2 * i);
        fact = 1;
    }
    return s;
}

