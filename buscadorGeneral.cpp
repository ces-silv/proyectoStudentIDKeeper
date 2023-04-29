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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("CESAR AUGUSTO SILVA HERNANDEZ") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("KAREN MARIZA ROSA YOLANDA FONSECA VEGA") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("ADRIANA ISABEL LANZAS RIVAS") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("DIEGO ROBERTO CORRALES ESPINOZA") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("ADRIANO SAMUEL MEDINA") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("ELISA MARGARITA CHAMORRO SANCHEZ") == 0) {
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
     for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("ALVIN JAVIER RODRIGUEZ VALDIVIA") == 0) {
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
     for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("VICTORIA NAVARRETE PINEDA") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("GIULIANNA ISABELLA HERNANDEZ RUIZ") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("MARIA IGNACIA MANZANARES LACAYO") == 0) {
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
     for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("MARCELA GABRIELA SALINAS MENDIETA") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("AMY SILOE LOPEZ ESCOBAR") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("ALEXANDRA XIOMARA MEJIA WILFORD") == 0) {
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
     for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("CARLOS FERNANDO PEREZ ROMERO") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("CARMEN ANDREA GOMEZ GUADAMUZ") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("MATTHEW JAVIER CARRILLO ARANGO") == 0) {
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
     for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("ALEXANDER SAMUEL MORENO ENRIQUEZ") == 0) {
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
    for(int i = 0; i < 19; i++) {
    string name = database[i].name;
    if (name.compare("SANTIAGO ENRIQUE BALDOVINOS ZELAYA") == 0) {
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
