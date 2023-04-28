#include <iostream>
#include <string>
#include <struct.h>
using namespace std;

void buscadorNombre();

void buscadorNombre()
{
    int buscadorNombre;
    cout << "Ingresa el nombre completo que deseas buscar: " << endl;
    cout << "---> "; cin >> buscadorNombre;

bool found = false;
            int index; 
            for (int i = 0; i < 100; i++){
                if (database[i].name == buscadorNombre){
                    found = true;
                    index = i;
                    break;
                }
            }
            if (found) {
                cout << "Informacion estudiantil" << endl;
                cout << endl;
                cout << "CIF: " << database[i].cif << endl;
                cout << "Nombre: " << database[i].name << endl;
                cout << "Facultad: " << database[i].faculty << endl;
                cout << "Carrera: " << database[i].major << endl;
                cout << "email: " << database[i].email << endl;
                 if (database[index].deliveredOrNot == false){ 
                    cout << "Status: " << "No Entregado" << endl << endl;}
                else{
                    cout << "Status: " << "Entregado" << endl;}
                    
            }else {
                cout << buscadorNombre << " no fue encontrado en la base de datos. " << endl;
            }



}
