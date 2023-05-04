#include <iostream>
#include <string.h>
#include "functions.cpp"

using namespace std;

void cifSearcher();
void nameSearcher();
void facultySearcher();
void majorSearcher();
void deliveredSearcher();
void notDeliveredSearcher();
void changeStatus();
void returnToMenu();

void menuMain(){
    int selectMenu;
    cout << endl;
    cout << "SELECCIONE UN FILTRO DE BUSQUEDA: " << endl;
    cout << "1. CIF" << endl;
    cout << "2. NOMBRE" << endl;
    cout << "3. FACULTAD" << endl;
    cout << "4. CARRERA" << endl;
    cout << "5. ENTREGADO" << endl;
    cout << "6. NO ENTREGADO" << endl;
    cout << "7. CAMBIAR ESTADO DE ENTREGA" << endl;
    cout << endl;
    cout << "---> ";
    cin >> selectMenu;
    cin.ignore(); /* Literalmente la linea mas imporante del programa, sin ella no funciona el buscador de nombres
    el cin.ignore(); sirve para descartar los caracteres en la memoria temporal en la que se almacenan los 
    caracteres que se ingresan mediante el teclado, en este caso el cin >> filtro .*/
    
    switch(selectMenu){
        case 1: cifSearcher(); returnToMenu();
            break;

        case 2: nameSearcher(); returnToMenu();
            break;
 
        case 3: facultySearcher(); returnToMenu();
            break;

        case 4: majorSearcher(); returnToMenu();
            break;
                
        case 5: deliveredSearcher(); returnToMenu();
            break;
        
        case 6: notDeliveredSearcher(); returnToMenu();
            break;

        case 7: changeStatus(); returnToMenu();
        break;

        default: cout << "SALIO CON EXITO DE LOS FILTROS.";
            break;
    }
}

void returnToMenu(){
    int options;
    cout << endl;
    cout << "DESEA REGRESAR AL MENU PRINCIPAL?" << endl;
    cout << "1. SI" << endl;
    cout << "2. NO" << endl;
    cout << endl;
    cout << "---> "; 
    cin >> options;

    switch (options){
        case 1: 
            system("cls");
            menuMain();
            break;

        case 2: 
            cout << endl;
            cout<<"Ha cerrado sesion." << endl;
            break;
        
        default: 
            system("cls");
            cout<<"Ha ingresado un numero invalido. Vuelva a intentarlo." << endl;
            returnToMenu();
            break;
    }
}