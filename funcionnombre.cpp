#include <iostream>
#include <string>
#include "struct.h"
using namespace std;

void buscadorNombre();

void buscadorNombre()
{
    int opcBuscadorNombre;
    cout << "Ingresa el nombre completo que deseas buscar: " << endl;
    cout << "---> "; cin >> opcBuscadorNombre;

    switch (opcBuscadorNombre)
    {
    case 1: // SILVIO ALEJANDRO MORA MENDOZA
        system("cls");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        for (int i = 0; i < 100; i++)
        {
            string name = database[i].name;
            if (name.compare("SILVIO ALEJANDRO MORA MENDOZA") == 0)
            {
                cout << "CIF: " << database[i].cif << endl;
                cout << "Nombre: " << database[i].name << endl;
                cout << "Facultad: " << database[i].faculty << endl;
                cout << "Carrera: " << database[i].major << endl;
                cout << "email: " << database[i].email << endl;
                if (database[i].deliveredOrNot == false) {
                    cout << "Status: "
                         << "No Entregado" << endl
                         << endl;
                }
                else
                {
                    cout << "Status: "
                         << "Entregado" << endl
                         << endl;
                }
                cout << endl;
            }
        }
            break;


    case 2: //CESAR AUGUSTO SILVA HERNANDEZ









    }
}