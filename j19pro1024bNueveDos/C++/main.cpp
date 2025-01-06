//Calcular el incremento salarial de empleados
#include <iostream>
//Salarios
#define SALARIO_1 18000.00
#define SALARIO_2 30000.00
#define SALARIO_3 50000.00
//Incrementos
#define INC_1 .12
#define INC_2 .8
#define INC_3 .7
using namespace std;

int main()
{
    float salario, nuevoSalario;

    cout << "Ingrese el salario: $";
    cin >> salario;


     if (salario < SALARIO_1)
    {
            nuevoSalario = salario * (1 + INC_1);//nuevo salario = salario + 12%
            cout << "Nuevo salario, incremento del 12%: $" << nuevoSalario << endl;
    }
    else if (salario >= SALARIO_1 && salario <= SALARIO_2)
    {
            nuevoSalario = salario * (1 + INC_2);
            cout << "Nuevo salario,  incremento del 8%: $" << nuevoSalario << endl;
    }
    else if (salario > SALARIO_2 && salario <= SALARIO_3)
    {
            nuevoSalario = salario * (1 + INC_3);
            cout << "Nuevo salario, incremento del 7%: $" << nuevoSalario << endl;
    }
    else
    {
            cout << "El salario se mantiene igual: $" << salario << endl;
    }

    return 0;
}
