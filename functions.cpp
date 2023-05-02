#include <iostream>
#include <string.h>
#include "struct.h"

using namespace std;

FILE * archivo; // Crear Archivo Para Estructuras

//Prototipo de funciones
void cifSearcher();
void nameSearcher();
void facultySearcher();
void majorSearcher();
void deliveredSearcher();
void notDeliveredSearcher();
void createFile();

void createFile(int ultReg){
    archivo = fopen("registro.dat", "w");
    for (int i = 0; i < ultReg; i++){
        fprintf(archivo, "%i\n", database[i].cif);
        fprintf(archivo, "%s\n", database[i].name);
        fprintf(archivo, "%s\n", database[i].faculty);
        fprintf(archivo, "%s\n", database[i].major);
        fprintf(archivo, "%s\n", database[i].email);
        fprintf(archivo, "%i\n", database[i].deliveredOrNot);
    }
    
}

void cifSearcher(){
    int searchCIF;
            cout << "Ingresa el numero de carnet del estudiante:" << endl;
            cout << "---> ";
            cin >> searchCIF;
            
            bool found = false;
            int index; 
            for (int i = 0; i < 19; i++){
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

void nameSearcher() {
    string searchName;
    cout << "Ingrese el nombre a buscar" << endl;
    getline(cin, searchName); // Se utiliza getline() para leer toda la línea

    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 100; i++) {
        string name = database[i].name;
        if(name.compare(searchName) == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "faculty" es igual a "INGSIS" */
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

void facultySearcher(){
    int searchFaculty;
    cout << "Selecciona la facultad a buscar" << endl;
    cout << "1. Facultad de Odontologia" << endl;
    cout << "2. Facultad de Ciencias Medicas" << endl;
    cout << "3. Facultad de Marketing, Diseño y Ciencias de la Comunicacion" << endl;
    cout << "4. Facultad de Ciencias Administrativas y Economicas" << endl;
    cout << "5. Facultad de Ingenieria y Arquitectura" << endl;
    cout << "6. Facultad de Ciencias Juridicas, Humanidades y Relaciones Internacionales" << endl;
    cout << endl;
    cout << "---> "; cin >> searchFaculty;

    switch (searchFaculty)
    {
    case 1: // FACULTAD DE ODONTOLOGIA
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
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
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
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
        system("cls || clear");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        for(int i = 0; i < 19; i++) {
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
        system("clear || cls");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        for(int i = 0; i < 19; i++) {
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
        system("cls || clear");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        for(int i = 0; i < 19; i++) {
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
        system("cls || clear");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        for(int i = 0; i < 19; i++) {
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
        system("cls || clear");
        cout << "OPCION NO PERMITIDA - VOLVIENDO AL MENU DE SELECION" << endl;
        facultySearcher();
        break;
    }
}

void majorSearcher() {
    int searchMajor;
    cout << "Seleccione la carrera a buscar" << endl;
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
    for(int i = 0; i < 16; i++) {
        string major = database[i].major;
        if(major.compare("DERECHO") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 2: // DIPLOMACIA Y RELACIONES INTERNACIONALES
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("DIPLOMACIA Y RELACIONES INTERNACIONALES") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 3: // MEDICINA
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("MEDICINA") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 4: // PSICOLOGIA
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("PSICOLOGIA") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 5: // ODONTOLOGIA
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("ODONTOLOGIA") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 6: // MARKETING Y PUBLICIDAD
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("MARKETING Y PUBLICIDAD") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 7: // DISENO Y COMUNICACION VISUAL
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("DISENO Y COMUNICACION VISUAL") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 8: // COMUNICACION Y RELACIONES PUBLICAS - FALTAN ESTUDIANTES
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("COMUNICACION Y RELACIONES PUBLICAS") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 9: // ADMINISTRACION DE EMPRESAS
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl; // Puse 100 por poner un valor, agregue a unos amigos de admin y queria probar, necesita cambio
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("ADMINISTRACION DE EMPRESAS") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 10: // NEGOCIOS INTERNACIONALES
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("NEGOCIOS INTERNACIONALES") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 11: // ECONOMIA EMPRESARIAL
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("ECONOMIA EMPRESARIAL") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 12: // CONTABILIDAD Y FINANZAS
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("CONTABILIDAD Y FINANZAS") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 13: // INGENIERIA INDUSTRIAL
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("INGENIERIA INDUSTRIAL") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 14: // INGENIERIA CIVIL
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("INGENIERIA CIVIL") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    case 15: // INGENIERIA EN SISTEMAS DE INFORMACION
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("INGENIERIA EN SISTEMAS DE INFORMACION") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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
    
    case 16: // ARQUITECTURA
    system("cls || clear");
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 19; i++) {
        string major = database[i].major;
        if(major.compare("ARQUITECTURA") == 0) { /* Se utiliza para verificar si la cadena de caracteres contenida en la variable "major" es igual a "INGSIS" */
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

    default:
        system("cls || clear");
        cout << "OPCION NO PERMITIDA - VOLVIENDO AL MENU DE SELECION" << endl;
        majorSearcher();
        break;
    }
}

void deliveredSearcher(){
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

void notDeliveredSearcher(){
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