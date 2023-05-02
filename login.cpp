#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include "mainSearcher.cpp"

#ifdef _WIN32
#include <conio.h> // Solo para Windows
#endif

using namespace std;

int main(){
    /* Declaracion de variables para el logeo */
    string correctUser = "admin";
    string correctPass = "1234";
    string typUser, typPass;
    char c;
    int trial = 0, left = 3;

    while (trial < 3){ /* El while permite que haya un maximo de 3 intentos fallidos */
        cout<<"Ingrese su nombre de usuario: ";
        cin>>typUser;
        cout<<"Ingrese su contrasena: ";
        typPass = "";
#ifdef _WIN32
        while (true) {
            c = getch();
            if (c == 13){break;} // Si se presiona Enter, terminar el bucle
            if (c == 8) { // Si se presiona Borrar, borrar el último caracter de la contraseña
                if (typPass.length() > 0) {
                    typPass.erase(typPass.length() - 1);
                    cout << "\b \b"; // Borrar el ultimo asterisco ingresado, \b es igual a decir 8 en sistema ASCII
                }
            }

            else{
                typPass += c;
                cout << "*"; // Reemplaza los caracteres que ingrese el usuario por asteriscos
            }
        }
#else
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("stty -echo");
        c = cin.get();
        while (c != '\n') {
            if (c == 127 || c == 8) { // Si se presiona Borrar o Retroceso, borrar el último caracter de la contraseña
                if (typPass.length() > 0) {
                    typPass.erase(typPass.length() - 1);
                    cout << "\b \b"; // Borrar el ultimo asterisco ingresado
                }
            } else {
                typPass += c;
                cout << "*"; // Reemplaza los caracteres que ingrese el usuario por asteriscos
            }
            c = cin.get();
        }
        cout << endl;
        system("stty echo");
#endif
        cout << endl;

        /* Restriccion para que se se pueda o no logear el usuario */
        if (typUser == correctUser && typPass == correctPass){
            cout<<"Un saludito "<<correctUser<<endl;
            menuMain();
            break;
        } 

        else{
            system("clear || cls");
            trial++, left--;
            cout<<"Usuario o contrasena incorrectos - Tiene "<<left<<" intentos disponibles."<<endl;
        }
    }

    if (trial == 3 && left == 0){ /* Restriccion si se llega al limite de intentos */
        system("clear || cls");
        cout << "Ha excedido el maximos de intentos permitidos." << endl;
    }

    return 0;
}
