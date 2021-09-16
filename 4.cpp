#include <iostream>
#include <math.h>

using namespace std;

#define pi 3.14159

int main (){
    
    float area, raio;
    cout << "Digite o raio do circulo para saber sua area(cm): ";

    cin >> raio;

    area = pi * pow(raio,2);

    cout << "Area = " << area << " cm";

    return 0;
}