#include <iostream>
#include <string>

using namespace std;

void buscadorEntregado();
void buscadorNoEntregado();

void buscadorEntregado(){
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++){
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
    for(int i = 0; i < 19; i++){
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