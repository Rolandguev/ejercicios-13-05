#include <iostream>

using namespace std;

int main()
{
    string nombre;
    float HorasTrabajadas;

    cout << "Ingrese El nombre del empleado: ";
    getline(cin, nombre);   // tambien podemos ocupar cin >> nombre;

    cout << "Ingrese las horas trabajadas: ";
    cin >> HorasTrabajadas;

    float tasa = 10;
    float SalarioBase = min(160.0f, HorasTrabajadas) * tasa;
    float HorasExtras = max(0.0f, HorasTrabajadas - 160.0f) * tasa * 1.5;
    float SalarioBruto = SalarioBase + HorasExtras;

    float TasaDeImpuestos = 0;
    if (SalarioBruto <= 2000)   
    {
        TasaDeImpuestos = 0;
    }
    else if (SalarioBruto <= 2200)
    {
        TasaDeImpuestos = 0.2;
    }
    else
    {
        TasaDeImpuestos = 0.3;
    }

    float taxes = SalarioBruto * TasaDeImpuestos;
    float SalarioNeto = SalarioBruto - taxes;

    cout << "Empleado: " << nombre << ", Salario Neto: $" << SalarioNeto << endl;

    return 0;
}