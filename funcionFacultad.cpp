#include <iostream>
#include <string>
using namespace std;

void buscadorFacultad();

void buscadorFacultad(){
    int opcBuscadorFacultad;
    cout << "Selecciona la facultad a buscar" << endl;
    cout << "1. Facultad de Odontologia" << endl;
    cout << "2. Facultad de Ciencias Medicas" << endl;
    cout << "3. Facultad de Marketing, Diseño y Ciencias de la Comunicacion" << endl;
    cout << "4. Facultad de Ciencias Administrativas y Economicas" << endl;
    cout << "5. Facultad de Ingenieria y Arquitectura" << endl;
    cout << "6. Facultad de Ciencias Juridicas, Humanidades y Relaciones Internacionales" << endl;
    cout << endl;
    cout << "---> "; cin >> opcBuscadorFacultad;

    switch (opcBuscadorFacultad)
    {
    case 1: // FACULTAD DE ODONTOLOGIA
    system("cls");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
        string faculty = database[i].faculty;
        if(faculty.compare("FACULTAD DE ODONTOLOGIA") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "faculty" es igual a "INGSIS" */
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
        break;

    case 2: // FACULTAD DE CIENCIAS MEDICAS
    system("cls");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
        string faculty = database[i].faculty;
        if(faculty.compare("FACULTAD DE CIENCIAS MEDICAS") == 0) {
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
        break; 

    case 3: // FACULTAD DE MARKETING, DISEÑO Y CIENCIAS DE LA COMUNICACION
        system("cls");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        for(int i = 0; i < 16; i++) {
            string faculty = database[i].faculty;
            if(faculty.compare("FACULTAD DE MARKETING, DISEÑO Y CIENCIAS DE LA COMUNICACION") == 0) {
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
        break;

    case 4: // FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS
        system("cls");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        for(int i = 0; i < 16; i++) {
            string faculty = database[i].faculty;
            if(faculty.compare("FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS") == 0) {
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
        break;

    case 5: //FACULTAD DE INGENIERIA Y ARQUITECTURA
        system("cls");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        for(int i = 0; i < 16; i++) {
            string faculty = database[i].faculty;
            if(faculty.compare("FACULTAD DE INGENIERIA Y ARQUITECTURA") == 0) {
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
        break;

    case 6: //FACULTAD DE CIENCIAS JURIDICAS, HUMANIDADES Y RELACIONES INTERNACIONALES
        system("cls");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        for(int i = 0; i < 16; i++) {
            string faculty = database[i].faculty;
            if(faculty.compare("FACULTAD DE CIENCIAS JURIDICAS Y RELACIONES INTERNACIONALES") == 0) {
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
        break;

    default:
        system("cls");
        cout << "OPCION NO PERMITIDA - VOLVIENDO AL MENU DE SELECION" << endl;
        buscadorFacultad();
        break;
    }
}