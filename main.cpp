// Main code
#include <iostream>
#include <string.h>
#include "struct.h"

using namespace std;

int main()
{
    cout << "Informacion estudiantil" << endl;
    for( int i = 0; i < 14; i++)
    {
        cout << "CIF: " << database[i].cif << endl;
        cout << "Nombre: " <<database[i].name << endl;
        cout << "Facultad: " <<database[i].faculty << endl;
        cout << "Carrera: " <<database[i].major << endl;
        cout << "email: " <<database[i].email << endl;
        cout << "Status: " <<database[i].deliveredOrNot << endl << endl;

    }
    return 0;
}
