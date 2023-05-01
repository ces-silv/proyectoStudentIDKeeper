// Muestra todos los datos guardados en la estructura
#include <iostream>
#include <string.h>
#include "struct.h"

using namespace std;

int main()
{
    cout << "Informacion estudiantil" << endl;
    for( int i = 0; i < 19; i++)
    {
        cout << "CIF: " << database[i].cif << endl;
        cout << "Nombre: " <<database[i].name << endl;
        cout << "Facultad: " <<database[i].faculty << endl;
        cout << "Carrera: " <<database[i].major << endl;
        cout << "email: " <<database[i].email << endl;
        if (database[i].deliveredOrNot == false){ 
            cout << "Status: " << "No Entregado" << endl << endl;}
        else{
            cout << "Status: " << "Entregado" << endl << endl;}

    }
    return 0;
}
