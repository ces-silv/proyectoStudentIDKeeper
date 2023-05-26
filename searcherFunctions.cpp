#include <iostream>
#include <string.h>
#include "struct.h"
using namespace std;

//Prototipo de funciones
void cifSearcher();
void nameSearcher();
void majorSearcher();
void deliveredShow();
void notDeliveredShow();

void cifSearcher(){
    string searchCif;
    cout << endl;
    cout << "Ingrese el nombre a buscar:" << endl;
    cout << "---> ";
    getline(cin, searchCif); // Se utiliza getline() para leer toda la línea
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < MAX; i++) {
        string cif = students[i].cif;
        if(cif.compare(searchCif) == 0) { /* Se utiliza el name compare para comparar el cif
        introducido por el usuario, con los nombres que estan registrados en el arreglo de la estructura.
        Si concuerda, mostrara la informacion del estudiante */
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "Email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
}
    }
}   

void nameSearcher() {
    string searchName;
    cout << endl;
    cout << "Ingrese el nombre a buscar:" << endl;
    cout << "---> ";
    getline(cin, searchName); // Se utiliza getline() para leer toda la línea
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < MAX; i++) {
        string fullname = students[i].fullname;
        if(fullname.compare(searchName) == 0) { /* Se utiliza el name compare para comparar el nombre
        introducido por el usuario, con los nombres que estan registrados en el arreglo de la estructura.
        Si concuerda, mostrara la informacion del estudiante */
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    }
}
