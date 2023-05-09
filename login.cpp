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
    char charAst;
    int attemptsLeft = 3;

    while (attemptsLeft > 0){ /* El while permite que haya un maximo de 3 intentos fallidos */
        cout<<"Ingrese su nombre de usuario: ";
        cin>>typUser;
        cout<<"Ingrese su contrasena: ";
        typPass = "";
#ifdef _WIN32
        while (true) {
            charAst = getch();
            if (charAst == 13){break;} // Si se presiona Enter, terminar el bucle
            if (charAst == 8) { // Si se presiona Borrar, borrar el último caracter de la contraseña
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
        charAst = cin.get();
        while (charAst != '\n') {
            if (charAst == 127 || charAst == 8) { // Si se presiona Borrar o Retroceso, borrar el último caracter de la contraseña
                if (typPass.length() > 0) {
                    typPass.erase(typPass.length() - 1);
                    cout << "\b \b"; // Borrar el ultimo asterisco ingresado
                }
            } else {
                typPass += charAst;
                cout << "*"; // Reemplaza los caracteres que ingrese el usuario por asteriscos
            }
            charAst = cin.get();
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
            attemptsLeft--;
            cout<<"Usuario o contrasena incorrectos - Tiene "<<attemptsLeft<<" intentos disponibles."<<endl;
        }
    }

    if (attemptsLeft == 0){ /* Restriccion si se llega al limite de intentos */
        system("clear || cls");
        cout << "Ha excedido el maximos de intentos permitidos." << endl;
    }

    return 0;
} 
