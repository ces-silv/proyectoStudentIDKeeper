#include <iostream>
#include <string>

using namespace std;

void buscadorCIF();

void buscadorCIF(){
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