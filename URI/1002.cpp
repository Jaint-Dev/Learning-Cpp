#include <iostream>

using namespace std;
#define n 3.14159

int main(){
    double raio,area;

    cin >> raio;

    area = n * raio * raio;
    
    cout.precision(4);
    cout << std::fixed << "A=" << area << "\n";
    return 0;
}