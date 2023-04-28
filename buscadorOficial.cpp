#include <iostream>
#include <string>
#include "struct.h"
#include "funcionCarrera.cpp"
#include "funcionFacultad.cpp"
using namespace std;

void buscadorCIF();
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

void buscadorCIF(){
    int searchCIF;
            cout << "Ingresa el numero de carnet del estudiante:" << endl;
            cout << "---> ";
            cin >> searchCIF;
            
            bool found = false;
            int index; 
            for (int i = 0; i < 16; i++){
                if (database[i].cif == searchCIF){
                    found = true;
                    index = i;
                    break;
                }
            }
            if (found) {
                cout << endl;
                cout << searchCIF << " fue encontrado en la base de datos." << endl;
                cout << endl;
                cout << "Informacion estudiantil" << endl;
                cout << endl;
                cout << "CIF: " << database[index].cif << endl;
                cout << "Nombre: " <<database[index].name << endl;
                cout << "Facultad: " <<database[index].faculty << endl;
                cout << "Carrera: " <<database[index].major << endl;
                cout << "email: " <<database[index].email << endl;
                if (database[index].deliveredOrNot == false){ 
                    cout << "Status: " << "No Entregado" << endl << endl;}
                else{
                    cout << "Status: " << "Entregado" << endl;}
                    
            }else {
                cout << searchCIF << " no fue encontrado en la base de datos. " << endl;
            }
}

void buscadorEntregado(){
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++){
        if(database[i].deliveredOrNot == true){
            cout << "CIF: " << database[i].cif << endl;
            cout << "Nombre: " <<database[i].name << endl;
            cout << "Facultad: " <<database[i].faculty << endl;
            cout << "Carrera: " <<database[i].major << endl;
            cout << "email: " <<database[i].email << endl;
            cout << "Status: Entregado" << endl;
            cout << endl;
        }
    }
}

void buscadorNoEntregado(){
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++){
        if(database[i].deliveredOrNot == false){
            cout << "CIF: " << database[i].cif << endl;
            cout << "Nombre: " <<database[i].name << endl;
            cout << "Facultad: " <<database[i].faculty << endl;
            cout << "Carrera: " <<database[i].major << endl;
            cout << "email: " <<database[i].email << endl;
            cout << "Status: No Entregado" << endl;
            cout << endl;
        }
    }
}