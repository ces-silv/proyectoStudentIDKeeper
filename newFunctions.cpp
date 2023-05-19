#include <iostream>
#include <stdio.h>
#include <string.h>
#include "idk.h"
#define MAX 100
using namespace std;

#define MAX 100
//Estrucutura de los datos de los estudiantes
typedef struct{
    int cif;
    char name[100];
    char faculty[100];
    char major[100];
    char email[100];
    bool deliveredOrNot;
}studentsUAM;



//Declaracion e inicializacion, array de la estructura
studentsUAM database[MAX];
int lastReg = 0;

//CRUD: Create, Read, Update, Delete

//Create
void addStudent(studentsUAM st);
//Read
void showStudent(int pos);
int isStudent(char cif[]);
void showStudents();
void starStudents(int pos);
studentsUAM getStudent(int pos);

//Update
void updateStudent(studentsUAM st, int pos);

//Delete
void deleteStudent(int pos);

//Menu
int menu();
void start();

// Manejo de archivos
FILE *studentRegister;
void saveStudents();
void readStudents();
int calcLastReg(FILE *file);

//Funcion añadir estudiante
void addStudent(studentsUAM st){
    database[lastReg] = st;
    lastReg++;
}

//Funcion mostrar estudiante
void showStudent(int pos){
    cout << "CIF: " <<database[pos].cif << endl;
    cout << "Nombre Completo: " <<database[pos].name << endl;
    cout << "Facultad: " <<database[pos].faculty << endl;
    cout << "Carrera: " <<database[pos].major << endl;
    cout << "Correo: " <<database[pos].email << endl;
    cout << "Entregado: " <<database[pos].deliveredOrNot << endl;
}

studentsUAM getStudent(int pos)
{
    return database[pos];
}

int isStudent(char cif[]){
    int position = 0;
    for(int i = 0; i < lastReg; i++){
        if(strcmp(cif, database[i].cif) == 0){
            position = i;
            break;
        }
    }
    return position;
}

void showStudents(){
    system("clear || cls");
    if (lastReg == 0){
        cout << "No hay estudiantes registrados" << endl;
        return;
    }
    for(int i = 0; i < lastReg; i++){
        cout << "Estudiante " << i+1 << endl;
        showStudent(i);
        cout << endl;
    }
}

void updateStudent(int pos, studentsUAM st){
    database[pos] = st;
}

void deleteStudent(int pos){
    if( pos == lastReg){
        cout << "No hay ningun registro" << endl;
        return;
    }
    for(int i = pos; i < lastReg -1; i++){
        database[i] = database[i+1];
    }
    lastReg--;
    startStudent(lastReg);
}

void startStudent(int pos){
    strcpy(database[pos].cif, "");
    strcpy(database[pos].name, "");
    strcpy(database[pos].faculty, "");
    strcpy(database[pos].major, "");
    strcpy(database[pos].email, "");
    database[pos].deliveredOrNot = false;
}

int menu(){
    int option;
    gotoxy(10, 5);
    cout << " UNIVERSIDAD AMERICANA - UAM\n";
    gotoxy(15, 6);
    cout << "Cantidad de registros: " << lastReg << endl;
    gotoxy(10, 9);
    cout << " 1. Agregar Estudiante \n";
    gotoxy(10, 10);
    cout << " 2. Editar Estudiante \n";
    gotoxy(10, 11);
    cout << " 3. Eliminar Estudiante \n";
    gotoxy(10, 12);
    cout << " 4. Buscar Estudiante \n";
    gotoxy(10, 13);
    cout << " 5. Mostrar todos los Estudiantes \n";
    gotoxy(10, 14);
    cout << " 6. Salir \n";
    gotoxy(10, 15);
    cout << " Digite la opcion: ";
    gotoxy(29, 15);
    cin >> option;
    return option;
}

void start(){
    int op, pos, resp;
    char cif[9];
    studentsUAM st;
    readStudents();
    do
    {
        system("clear || cls")

        op = menu();
        switch (op)
        {
            case 1:
                system("clear || cls");
                gotoxy(10, 5);
                cout << "Agregar Estudiante" << endl;
                gotoxy(10, 6);
                cout << "CIF: ";
                cin >> st.cif;
                gotoxy(10, 7);
                cout << "Nombre Completo: ";
                cin >> st.name;
                gotoxy(10, 8);
                cout << "Facultad: ";
                cin >> st.faculty;
                gotoxy(10, 9);
                cout << "Carrera: ";
                cin >> st.major;
                gotoxy(10, 10);
                cout << "Correo: ";
                cin >> st.email;
                gotoxy(10, 11);
                cout << "Entregado: ";
                cin >> st.deliveredOrNot;
                addStudent(st);
            break;

            case 2:
                system("clear || cls");
                cout << "Escribe el ID a buscar: ";
                scanf(" %[^\n]", cif);
                system("clear || cls");
                cout << "DATOS ACTUALES";
                gotoxy(0,2);
                pos = isStudent(cif);
                showStudent(pos);
                gotoxy(40,1);
                cout << "DATOS A EDITAR\n";
                gotoxy(40,2);
                cout << "CIF:";
                gotoxy(40,3);
                cout << "NOMBRE: ";
                gotoxy(40,4);
                cout << "APELLIDO: ";
                gotoxy(40,6);
                cout << "EMAIL: ";
                gotoxy(40,7);
                cout << "PROMEDIO: ";
                gotoxy(43,2);
                scanf(" %[^\n]", st.cif);
                gotoxy(47,3);
                scanf(" %[^\n]", st.name);
                gotoxy(46,6);
                scanf(" %[^\n]", st.email);
                gotoxy(49,8);
                updateStudent(st, pos);
                cout << "Registro actualizado...\n";
                system("pause");
            break;
            case 3:
                system("clear || cls");
                if (lastReg == 0){
                    cout << "No hay nada que eliminar" << endl;
                    break;
                }
                cout << "Escribe el CIF a buscar: ";
                cin >> cif;
                pos = isStudent(cif);
                st = getStudent(pos);
                cout << "Deseas eliminar al estudiante " << st.name << "?" << endl;
                cout << "Escribe 1 para SI o 2 para NO: ";
                cin >> resp;
                if(resp == 1){
                    deleteStudent(pos);
                    cout << "Estudiante eliminado" << endl;
                } else{
                    cout << "Estudiante no eliminado" << endl;
                }
                system("pause");
            break;
            case 4:
                system("clear || cls");
                cout << "Escribe el CIF a buscar: ";
                scanf(" %[^\n]", cif);
                pos = isStudent(cif);
                showStudent(pos);
                system("pause");
            break;
            case 5:
                system("clear || cls");
                showStudents();
                system("pause");
            break;
            case 6:
                system("clear || cls");
                cout << "Saliendo del programa..." << endl;
                saveStudents();
                system("pause");
            default:
                system("clear || cls");
                cout << "Opcion no valida" << endl;
                system("pause");
            break;}

    } while (op != 6);
    saveStudents();
}

void saveStudents(){
    studentRegister = fopen("database.bin", "wb");
    fwrite(database, sizeof(database), lastReg, studentRegister);
    fclose(studentRegister);
}

void readStudents(){
    studentRegister = fopen("database.bin", "rb");
    if(studentRegister == NULL){
        return;
    }
    lastReg = calcLastReg(studentRegister);
    fread(studentsUAM, sizeof(database), MAX, studentRegister);

    fclose(studentRegister);
}

int calcLastReg(FILE *file){
    int size_file, num_students;
    //Obtener tamaño de archivo
    fseek(file, 0, SEEK_END);
    size_file = ftell(file);
    rewind(file);

    //Calcular el numero de estudiantes
    num_students = size_file / sizeof(database);
    return num_students;
}
