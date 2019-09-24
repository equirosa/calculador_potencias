#include <iostream>
#include <math.h>

using namespace std;

int calcularPotencia(int primero, int segundo)
{
    int potencia = pow(primero, segundo);

    return potencia;
}

int main()
{
    int primero, segundo;
    cout << "Por favor introduzca dos números.\n" << endl;
    cin >> primero >> segundo;

    int potencia = calcularPotencia(primero, segundo);

    cout << "El resultado de elevar " << primero << " a la potencia " << segundo << " es " << potencia << endl;

    return 0;
}
