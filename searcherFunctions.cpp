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

void majorSearcher() {
    int searchMajor;
    cout << endl;
    cout << "Seleccione la carrera a buscar:" << endl;
    cout<< "1. Derecho" <<endl;
    cout<< "2. Diplomacia y Relaciones Internacionales" <<endl;
    cout<< "3. Medicina" <<endl;
    cout<< "4. Psicologia" <<endl;
    cout<< "5. Odontologia" <<endl;
    cout<< "6. Marketing y Publicidad" <<endl;
    cout<< "7. Diseno y Comunicacion Visual" <<endl;
    cout<< "8. Comunicacion y Relaciones Publicas" <<endl;
    cout<< "9. Administracion de Empresa" <<endl;
    cout<< "10. Negocios Internacionales" <<endl;
    cout<< "11. Economia Empresarial" <<endl;
    cout<< "12. Contabilidad y Finanzas" <<endl;
    cout<< "13. Ingenieria Industrial" <<endl;
    cout<< "14. Ingenieria Civil" <<endl;
    cout<< "15. Ingenieria en Sistemas de Informacion" <<endl;
    cout<< "16. Arquitectura" <<endl;
    cout << endl;
    cout << "---> "; cin >> searchMajor;
    switch (searchMajor){
    case 1: // DERECHO
    system("cls || clear"); 
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < MAX; i++) {
        string major = students[i].major;
        if(major.compare("DERECHO") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 2: // DIPLOMACIA Y RELACIONES INTERNACIONALES
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("DIPLOMACIA Y RELACIONES INTERNACIONALES") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 3: // MEDICINA
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("MEDICINA") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 4: // PSICOLOGIA
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("PSICOLOGIA") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 5: // ODONTOLOGIA
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("ODONTOLOGIA") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 6:
    {
     // MARKETING Y PUBLICIDAD
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("MARKETING Y PUBLICIDAD") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
    } 
    }
    break;
    }

    case 7:
    {
     // DISENO Y COMUNICACION VISUAL
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("DISENO Y COMUNICACION VISUAL") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;
    }

    case 8: // COMUNICACION Y RELACIONES PUBLICAS - FALTAN ESTUDIANTES
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("COMUNICACION Y RELACIONES PUBLICAS") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 9: // ADMINISTRACION DE EMPRESAS
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl; // Puse 100 por poner un valor, agregue a unos amigos de admin y queria probar, necesita cambio
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("ADMINISTRACION DE EMPRESAS") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 10: // NEGOCIOS INTERNACIONALES
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("NEGOCIOS INTERNACIONALES") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 11: // ECONOMIA EMPRESARIAL
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("ECONOMIA EMPRESARIAL") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 12: // CONTABILIDAD Y FINANZAS
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("CONTABILIDAD Y FINANZAS") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 13: // INGENIERIA INDUSTRIAL
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("INGENIERIA INDUSTRIAL") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 14: // INGENIERIA CIVIL
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("INGENIERIA CIVIL") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
    break;

    case 15: // INGENIERIA EN SISTEMAS DE INFORMACION
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("INGENIERIA EN SISTEMAS DE INFORMACION") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
        break;
    
    case 16: // ARQUITECTURA
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = students[i].major;
        if(major.compare("ARQUITECTURA") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
            // compare regresa numeros enteros y solo en caso que sea igual es que regresa el numero 0, es aqui el porque del == 0
            cout << "CIF: " << students[i].cif << endl;
            cout << "Nombre: " << students[i].fullname << endl;
            cout << "Facultad: " << students[i].faculty << endl;
            cout << "Carrera: " << students[i].major << endl;
            cout << "email: " << students[i].email << endl;
            cout << "Estado de Entrega: " << students[i].deliveredOrNot << endl;
            cout << "Fecha de entrega: " << students[i].dateOfDelivery.day << "/" << students[i].dateOfDelivery.month << "/" << students[i].dateOfDelivery.year << endl;
        }
    } 
        break;

    default:
        system("cls || clear");
        cout << "OPCION NO PERMITIDA - VOLVIENDO AL MENU DE SELECION" << endl;
        majorSearcher();
        break;
    }
}
