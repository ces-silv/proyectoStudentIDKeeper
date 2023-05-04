#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include "struct.h"
using namespace std;

void createRegister(int lastRegister);
void readRegisterOnScreen();
void addInformation(int lastRegister);

int main(){
    int selectAction;
    int lastRegister;

    cout << "DIGITE LA CANTIDAD DE ESTUDIANTES EN EL ULTIMO REGISTRO:" << endl;
    cout << "---> ";
    cin >> lastRegister;

    system("cls");

    cout << "SELECCIONA UNA ACCION:" << endl;
    cout << "1. Crear un archivo con el ultimo registro" << endl;
    cout << "2. Leer el ultimo registro en pantalla" << endl;
    cout << "3. Agregar informacion al registro" << endl;
    cout << endl;
    cout << "---> ";
    cin >> selectAction;

    switch(selectAction){
        case 1: createRegister(lastRegister); break;
        case 2: system("cls"); readRegisterOnScreen(); break;
        case 3: system("cls"); addInformation(lastRegister); break;
        default: system("cls"); cout << "Ha salido con exito"; break;
    }
    return 0;
}

void createRegister(int lastRegister){
    ofstream archivo;
    archivo.open("RegistroUAM.dat", ios::out); //abre el archivo

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    archivo << "Informacion estudiantil" << endl;
    archivo << endl;

    for(int i = 0; i < lastRegister; i++){
        archivo << "CIF: " << database[i].cif << endl;
        archivo << "Nombre: " << database[i].name << endl;
        archivo << "Facultad: " << database[i].faculty << endl;
        archivo << "Carrera: " << database[i].major << endl;
        archivo << "Email: " << database[i].email << endl;
        if (database[i].deliveredOrNot == false){ 
            archivo << "Status: " << "No Entregado" << endl;}
        else{
            archivo << "Status: " << "Entregado" << endl;}
        archivo << endl;      
    }

    archivo.close(); //cierra el archivo
}

void readRegisterOnScreen(){
    ifstream archivo;
    string texto;
    archivo.open("RegistroUAM.dat", ios::in); //abrimos el archivo en modo lectura

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()){ //mientras no sea el final del archivo
        getline(archivo, texto);
        cout << texto << endl;
    }

    archivo.close(); //cierra el archivo
}
void addInformation(int lastRegister){
    ofstream archivo;
    int cant;
    archivo.open("RegistroUAM.dat", ios::app); //abrimos el archivo en modo añadir texto en él

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    cout << "Cuantos estudiantes deseas ingresar: " << endl;
    cin >> cant;

    for(int i = lastRegister; i < lastRegister + cant; i++){
        cout << "Estudiante #" << i + 1 << endl;
        cout << "CIF: ";
        cin >> database[i].cif;
        cin.ignore();
        cout << "Nombre (en mayusculas y sin tildes): ";
        cin.getline(database[i].name, 100);
        cout << "Facultad (en mayusculas y sin tildes): ";
        cin.getline(database[i].faculty, 100);
        cout << "Carrera (en mayusculas y sin tildes): ";
        cin.getline(database[i].major, 100);
        cout << "Email: ";
        cin.getline(database[i].email, 100);
        cout << "Status (escribe true o false): ";
        cin >> database[i].deliveredOrNot;
        cout << endl;
    }

    cout << endl;
    cout << "FINALIZASTE DE ESCRIBIR";

    for(int i = lastRegister; i < lastRegister + cant; i++){
        archivo << endl;
        archivo << "CIF: " << database[i].cif << endl;
        archivo << "Nombre: " << database[i].name << endl;
        archivo << "Facultad: " << database[i].faculty << endl;
        archivo << "Carrera: " << database[i].major << endl;
        archivo << "Email: " << database[i].email << endl;
        if (database[i].deliveredOrNot == false){ 
            archivo << "Status: " << "No Entregado" << endl;}
        else{
            archivo << "Status: " << "Entregado" << endl;}

    archivo.close(); //cierra el archivo
    }
} 