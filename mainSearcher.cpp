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

int main(){
    int selectMenu;
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
    cin >> selectMenu;
    cin.ignore(); /* Literalmente la linea mas imporante del programa, sin ella no funciona el buscador de nombres
    el cin.ignore(); sirve para descartar los caracteres en la memoria temporal en la que se almacenan los 
    caracteres que se ingresan mediante el teclado, en este caso el cin >> filtro .*/
    
    switch(selectMenu){
        case 1: cifSearcher();
            break;

        case 2: nameSearcher();
            break;
 
        case 3: facultySearcher();
            break;

        case 4: majorSearcher();
            break;
                
        case 5: deliveredSearcher();
            break;
        
        case 6: notDeliveredSearcher();
            break;

        default: cout << "SALIO CON EXITO DE LOS FILTROS.";
            break;
    }

    return 0;
}