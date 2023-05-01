#include <iostream>
#include <string>
#include "struct.h"
using namespace std;

void buscadorNombre();

void buscadorNombre() {
    string buscaNombre;
    cout << "Ingrese el nombre a buscar" << endl;
    getline(cin, buscaNombre); // Se utiliza getline() para leer toda la línea

    system("cls");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 100; i++) {
        string name = database[i].name;
        if(name.compare(buscaNombre) == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "faculty" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
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
    }
}

int main(){
    
    buscadorNombre();

    return 0;
}