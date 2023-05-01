#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

#ifdef _WIN32
#include <conio.h> // Solo para Windows
#endif

using namespace std;

int main(){
    /* Declaracion de variables para el logeo */
    string usuarioCorrecto = "admin";
    string contrasenaCorrecta = "1234";
    string usuarioIngresado, contrasenaIngresada;
    char c;
    int intentos = 0, restantes = 3;

    while (intentos < 3){ /* El while permite que haya un maximo de 3 intentos fallidos */
        cout<<"Ingrese su nombre de usuario: ";
        cin>>usuarioIngresado;
        cout<<"Ingrese su contrasena: ";
        contrasenaIngresada = "";
#ifdef _WIN32
        while (true) {
            c = getch();
            if (c == 13){break;} // Si se presiona Enter, terminar el bucle
            if (c == 8) { // Si se presiona Borrar, borrar el último caracter de la contraseña
                if (contrasenaIngresada.length() > 0) {
                    contrasenaIngresada.erase(contrasenaIngresada.length() - 1);
                    cout << "\b \b"; // Borrar el ultimo asterisco ingresado, \b es igual a decir 8 en sistema ASCII
                }
            }

            else{
                contrasenaIngresada += c;
                cout << "*"; // Reemplaza los caracteres que ingrese el usuario por asteriscos
            }
        }
#else
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("stty -echo");
        c = cin.get();
        while (c != '\n') {
            if (c == 127 || c == 8) { // Si se presiona Borrar o Retroceso, borrar el último caracter de la contraseña
                if (contrasenaIngresada.length() > 0) {
                    contrasenaIngresada.erase(contrasenaIngresada.length() - 1);
                    cout << "\b \b"; // Borrar el ultimo asterisco ingresado
                }
            } else {
                contrasenaIngresada += c;
                cout << "*"; // Reemplaza los caracteres que ingrese el usuario por asteriscos
            }
            c = cin.get();
        }
        cout << endl;
        system("stty echo");
#endif
        cout << endl;

        /* Restriccion para que se se pueda o no logear el usuario */
        if (usuarioIngresado == usuarioCorrecto && contrasenaIngresada == contrasenaCorrecta){
            cout<<"Un saludito "<<usuarioCorrecto<<endl;
            break;
        } 

        else{
            system("clear || cls");
            intentos++, restantes--;
            cout<<"Usuario o contrasena incorrectos - Tiene "<<restantes<<" intentos disponibles."<<endl;
        }
    }

    if (intentos == 3 && restantes == 0){ /* Restriccion si se llega al limite de intentos */
        system("clear || cls");
        cout << "Ha excedido el maximos de intentos permitidos." << endl;
    }

    return 0;
}
