#include <iostream>
#include <string>
#include "struct.h"
#include "funcionCif.cpp"
#include "funcionCarrera.cpp"
#include "funcionFacultad.cpp"
#include "funcionEntrega.cpp"

using namespace std;

void buscadorCIF();
void buscadorNombre();
void buscadorEntregado();
void buscadorNoEntregado();

int main(){
    int filtro;
    cout << endl;
    cout << "SELECCIONE UN FILTRO DE BUSQUEDA: " << endl;
    cout << "1. CIF" << endl;
    cout << "2. NOMBRE" << endl;
    cout << "3. FACULTAD" << endl;
    cout << "4. CARRERA" << endl;
    cout << "5. ENTREGADO" << endl;
    cout << "6. NO ENTREGADO" << endl;
    cout << endl;
    cout << "---> ";
    cin >> filtro;

    switch(filtro)
    {
        case 1: buscadorCIF();
            break;

        case 2: buscadorNombre();
            break;

        case 3: buscadorFacultad();
            break;

        case 4: buscadorCarrera();
            break;
                
        case 5: buscadorEntregado();
            break;
        
        case 6: buscadorNoEntregado();
            break;

        default: cout << "SALIO CON EXITO DE LOS FILTROS.";
            break;
    }

    return 0;
}

void buscadorNombre()
{
    string searchName;
    cout << "Ingrese el nombre del estudiante" << endl;
    cout << "--->";
    cin >> searchName;
    for(int i = 0; i < 19; i++) {
        string name = database[i].name;
        if(name.compare("SILVIO ALEJANDRO MORA MENDOZA") == 0) {
            cout << "CIF: " << database[i].cif << endl;
            cout << "Nombre: " << database[i].name << endl;
            cout << "Facultad: " << database[i].faculty << endl;
            cout << "Carrera: " << database[i].major << endl;
            cout << "email: " << database[i].email << endl;
            if (database[i].deliveredOrNot == false){ 
                cout << "Status: " << "No Entregado" << endl << endl;}
            else{
                cout << "Status: " << "Entregado" << endl << endl;}
            cout << endl;
        }
        else{
            system("clear");
            cout << "No fue encontrado en nuesta base de datos" << endl;
            break;
        }
    } 
}