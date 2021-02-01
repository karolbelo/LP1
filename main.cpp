#include <iostream>

using namespace std;

#include "math.h"

int main()
{

    int a, b;

    cout << "Digite o primeiro valor \n";
    cin >> a;

    cout << "Digite o segundo valor \n";
    cin >> b;

    
    cout << "Soma: "<< soma(a, b) << "\n";
    cout << "Subtracao: "<< sub(a, b) << "\n";
    cout << "Multiplicacao: " << mult(a, b) <<"\n";
    cout << "Divisao: " << dv(a, b) << "\n";
    
    return 0;
}