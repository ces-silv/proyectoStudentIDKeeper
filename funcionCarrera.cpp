#include <iostream>
#include <string>
using namespace std;

void buscadorCarrera();

void buscadorCarrera() {
    int opcBuscadorCarrera;
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
    cout << "---> "; cin>>opcBuscadorCarrera;

    switch (opcBuscadorCarrera){
    case 1: // DERECHO
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl; // Puse 100 por poner un valor, agregue a unos amigos de admin y queria probar, necesita cambio
    for(int i = 0; i < 100; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
    system("cls");  /* Borrar en MAC pq esa mierda no sirve ajshgdajshd*/
    cout << "Informacion estudiantil" << endl;
    cout << endl;
    for(int i = 0; i < 16; i++) {
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
        system("cls"); /* MAC */
        cout << "OPCION NO PERMITIDA - VOLVIENDO AL MENU DE SELECION" << endl;
        buscadorCarrera();
        break;
    }
}