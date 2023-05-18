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

//CRUD: Create, Read, Update, Delete

//Create
void addStudent(studentsUAM st);
//Read
void showStudent(int pos);
int isStudent(char id[]);
void showStudents();
void starStudents(int pos);
studentsUAM getStudent(int pos);

//Update
void updateStudent(int pos, studentsUAM st);

//Delete
void deleteStudent(int pos);

//Menu
int menu();
void start();

// Manejo de archivos
