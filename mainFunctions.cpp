#include <iostream>
#include <stdio.h>
#include <string.h>
#include "gotoxy.h"
#include "searcherFunctions.cpp"
using namespace std;

int lastReg = 0;

//Crud
// Create
void addStudent(studentsUAM st);
/*Read*/
void showStudent(int pos);
int isStudent(char CIF[]);
void showStudents();
void startStudent(int pos);
studentsUAM getStudent(int pos);
/*Update*/
void updateStudent(studentsUAM st, int pos);
/*Delete*/
void deleteStudent(int pos);

void facultySearcher();
void majorSearcher();
void deliveredShow();
void notDeliveredShow();

/*Menu*/
void start();
int mainMenu();

/*Archivos
*/
FILE *studentsUamRegister;
void saveStudents();
void readStudents();
int calcLastReg(FILE *archivo);

//Funcion para añadir estudiantes
void addStudent(studentsUAM st){
    students[lastReg] = st;
    lastReg++;
}
//Funcion para mostrar estudiantes
void showStudent(int pos){
    cout << "CIF: " << students[pos].cif << endl;
    cout << "Nombre Completo: " << students[pos].fullname << endl;
    cout << "Facultad: " << students[pos].faculty << endl;
    cout << "Carrera: " << students[pos].major << endl;
    cout << "Email: " << students[pos].email << endl;
    cout << "Estado de entrega: " << students[pos].deliveredOrNot << endl;
    cout << "Fecha de entrega: " << students[pos].dateOfDelivery.day << "/" << students[pos].dateOfDelivery.month << "/" << students[pos].dateOfDelivery.year << endl;
}

studentsUAM getStudent(int pos){
    return students[pos];
}

int isStudent(char CIF[])
{
    int position = -1;
    for (int i = 0; i < lastReg; i++)
    {
        if (strcmp(CIF, students[i].cif) == 0)
        {
            position = i;
            break;
        }
    }
    return position;
}

void showStudents()
{
    system("cls||clear");
    if (lastReg == 0)
    {
        cout << "No hay registros" << endl;
        return;
    }
    for (int i = 0; i < lastReg; i++)
    {
        cout << "========================\n";
        showStudent(i);
    }
    cout << endl;
    cout << "Ultimo registro...\n";
}

void facultySearcher(){
    int searchFaculty;
    char nameFaculty[100];
    cout << endl;
    cout << "Selecciona la facultad a buscar:" << endl;
    cout << "1. Facultad de Odontologia" << endl;
    cout << "2. Facultad de Ciencias Medicas" << endl;
    cout << "3. Facultad de Marketing, Diseño y Ciencias de la Comunicacion" << endl;
    cout << "4. Facultad de Ciencias Administrativas y Economicas" << endl;
    cout << "5. Facultad de Ingenieria y Arquitectura" << endl;
    cout << "6. Facultad de Ciencias Juridicas, Humanidades y Relaciones Internacionales" << endl;
    cout << endl;
    cout << "---> "; cin >> searchFaculty;
    cin.ignore();

    switch (searchFaculty)
    {
    case 1: // FACULTAD DE ODONTOLOGIA
        system("cls || clear");
        strcpy(nameFaculty, "FACULTAD DE ODONTOLOGIA");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameFaculty, students[i].faculty) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    case 2: // FACULTAD DE CIENCIAS MEDICAS
        system("cls || clear");
        strcpy(nameFaculty, "FACULTAD DE CIENCIAS MEDICAS");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameFaculty, students[i].faculty) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
    break; 

    case 3: // FACULTAD DE MARKETING, DISEÑO Y CIENCIAS DE LA COMUNICACION
        system("cls || clear");
        strcpy(nameFaculty, "FACULTAD DE MARKETING, DISEÑO Y CIENCIAS DE LA COMUNICACION");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameFaculty, students[i].faculty) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    case 4: // FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS
        system("cls || clear");
        strcpy(nameFaculty, "FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameFaculty, students[i].faculty) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    case 5: //FACULTAD DE INGENIERIA Y ARQUITECTURA
        system("cls || clear");
        strcpy(nameFaculty, "FACULTAD DE INGENIERIA Y ARQUITECTURA");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameFaculty, students[i].faculty) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    case 6: //FACULTAD DE CIENCIAS JURIDICAS, HUMANIDADES Y RELACIONES INTERNACIONALES
        system("cls || clear");
        strcpy(nameFaculty, "FACULTAD DE CIENCIAS JURIDICAS, HUMANIDADES Y RELACIONES INTERNACIONALES");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameFaculty, students[i].faculty) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    default:
        system("cls || clear");
        cout << "OPCION NO PERMITIDA - VOLVIENDO AL MENU DE SELECION" << endl;
        facultySearcher();
        break;
    }
}

void majorSearcher(){
    int searchMajor;
    char nameMajor[100];
    cout << endl;
    cout << "Seleccione la carrera a buscar:" << endl;
    cout<< "1. Derecho" <<endl;
    cout<< "2. Diplomacia y Relaciones Internacionales" <<endl;
    cout<< "3. Medicina" <<endl;
    cout<< "4. Psicologia" <<endl;
    cout<< "5. Odontologia" <<endl;
    cout<< "6. Marketing y Publicidad" <<endl;
    cout<< "7. Diseno y Comunicacion Visual" <<endl;
    cout<< "8. Comunicacion y Relaciones Publicas" <<endl;
    cout<< "9. Administracion de Empresa" <<endl;
    cout<< "10. Negocios Internacionales" <<endl;
    cout<< "11. Economia Empresarial" <<endl;
    cout<< "12. Contabilidad y Finanzas" <<endl;
    cout<< "13. Ingenieria Industrial" <<endl;
    cout<< "14. Ingenieria Civil" <<endl;
    cout<< "15. Ingenieria en Sistemas de Informacion" <<endl;
    cout<< "16. Arquitectura" <<endl;
    cout << endl;
    cout << "---> "; cin >> searchMajor;
    cin.ignore();

    switch (searchMajor)
    {
    case 1: // DERECHO
        system("cls || clear");
        strcpy(nameMajor, "DERECHO");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    case 2: // DIPLOMACIA Y RELACIONES INTERNACIONALES
        system("cls || clear");
        strcpy(nameMajor, "DIPLOMACIA Y RELACIONES INTERNACIONALES");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
    break; 

    case 3: // MEDICINA
        system("cls || clear");
        strcpy(nameMajor, "MEDICINA");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    case 4: // PSICOLOGIA
        system("cls || clear");
        strcpy(nameMajor, "PSICOLOGIA");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    case 5: //ODONTOLOGIA
        system("cls || clear");
        strcpy(nameMajor, "ODONTOLOGIA");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    case 6: //MARKETING Y PUBLICIDAD
        system("cls || clear");
        strcpy(nameMajor, "MARKETING Y PUBLICIDAD");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;
 	
	case 7: //DISEÑO Y COMUNICACION VISUAL
	  system("cls || clear");
        strcpy(nameMajor, "DISEÑO Y COMUNICACION VISUAL");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

	case 8: //COMUNICACION Y RELACIONES PUBLICAS
	  system("cls || clear");
        strcpy(nameMajor, "COMUNICACION Y RELACIONES PUBLICAS");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

	case 9: //ADMINISTRACION DE EMPRESAS
	  system("cls || clear");
        strcpy(nameMajor, "ADMINISTRACION DE EMPRESAS");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

	case 10: //NEGOCIOS INTERNACIONALES
	  system("cls || clear");
        strcpy(nameMajor, "NEGOCIOS INTERNACIONALES");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

	case 11: //ECONOMIA EMPRESARIAL
	  system("cls || clear");
        strcpy(nameMajor, "ECONOMIA EMPRESARIAL");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

	case 12: //CONTABILIDAD Y FINANZAS
	  system("cls || clear");
        strcpy(nameMajor, "CONTABILIDAD Y FINANZAS");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

	case 13: //INGENIERIA INDUSTRIAL
	  system("cls || clear");
        strcpy(nameMajor, "INGENIERIA INDUSTRIAL");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

	case 14: //INGENIERIA CIVIL
	  system("cls || clear");
        strcpy(nameMajor, "INGENIERIA CIVIL");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

	case 15: //INGENIERIA EN SISTEMAS DE INFORMACION
	  system("cls || clear");
        strcpy(nameMajor, "INGENIERIA EN SISTEMAS DE INFORMACION");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

	case 16: //ARQUITECTURA
	  system("cls || clear");
        strcpy(nameMajor, "ARQUITECTURA");
        cout << "Informacion estudiantil" << endl;
        cout << endl;
        if (lastReg == 0)
        {
            cout << "No hay registros" << endl;
            return;
        }
        for (int i = 0; i < lastReg; i++){
            if(strcmp(nameMajor, students[i].major) == 0){
                cout << "========================\n";
                showStudent(i);
            }
        }
        break;

    default:
        system("cls || clear");
        cout << "OPCION NO PERMITIDA - VOLVIENDO AL MENU DE SELECION" << endl;
        majorSearcher();
        break;
    }
}

void deliveredShow(){
    char status[10] = "ENTREGADO";
    if (lastReg == 0)
    {
        cout << "No hay registros" << endl;
        return;
    }
    for (int i = 0; i < lastReg; i++){
        if(strcmp(status, students[i].deliveredOrNot) == 0){
            cout << "========================\n";
            showStudent(i);
        }
    }
}

void notDeliveredShow(){
    char status[15] = "No Entregado";
    if (lastReg == 0)
    {
        cout << "No hay registros" << endl;
        return;
    }
    for (int i = 0; i < lastReg; i++){
        if(strcmp(status, students[i].deliveredOrNot) == 0){
            cout << "========================\n";
            showStudent(i);
        }
    }
}

void updateStudent(studentsUAM st, int pos){
    students[pos] = st;
}

void deleteStudent(int pos){
    if (pos == lastReg)
    {
        cout << "No hay registro\n";
        return;
    }
    for (int i = pos; i < lastReg - 1; i++)
    {
        students[i] = students[i + 1];
    }
    lastReg--;
    startStudent(lastReg);
}

void startStudent(int pos){
    strcpy(students[pos].cif, "");
    strcpy(students[pos].fullname, "");
    strcpy(students[pos].faculty, "");
    strcpy(students[pos].major, "");
    strcpy(students[pos].email, "");
    strcpy(students[pos].deliveredOrNot, "");
    students[pos].dateOfDelivery.day = 0;
    students[pos].dateOfDelivery.month = 0;
    students[pos].dateOfDelivery.year = 0;
}


int mainMenu(){
    int selectMenu;
        gotoxy(10, 5);
        cout << " UNIVERSIDAD AMERICANA - UAM" << endl;
        gotoxy(15, 6);
        cout << "Cantidad de registros: " << lastReg << endl;

        gotoxy(10, 8);
        cout << " SELECCIONE UN FILTRO DE BUSQUEDA: " << endl;
        gotoxy(10, 10);
        cout << " 1. Por CIF" << endl;
        gotoxy(10, 11);
        cout << " 2. Por Nombre" << endl;
        gotoxy(10, 12);
        cout << " 3. Por Facultad" << endl;
        gotoxy(10, 13);
        cout << " 4. Por Carrera" << endl;
        gotoxy(10, 14);
        cout << " 5. Mostrar a los estudiantes con carnets ENTREGADOS" << endl;
        gotoxy(10, 15);
        cout << " 6. Mostrar a los estudiantes con carnets NO ENTREGADOS" << endl;

        gotoxy(10, 17);
        cout << " O SELECCIONE UNA ACCION: " << endl;
        gotoxy(10, 19);
        cout << " 7. Agregar Estudiante" << endl;
        gotoxy(10, 20);
        cout << " 8. Editar Estudiante" << endl;
        gotoxy(10, 21);
        cout << " 9. Eliminar Estudiante" << endl;
        gotoxy(10, 22);
        cout << " 10. Mostrar a todos los Estudiantes" << endl;
        gotoxy(10, 23);
        cout << " 11. Salir" << endl;
        gotoxy(13, 24);
        cout << " ---> ";
        cin >> selectMenu;
    return selectMenu;
}

void start(){
    int selectMenu, pos, resp;
    char cif[8];
    studentsUAM st;
    readStudents();

    do{
        system("clear||cls");
        selectMenu = mainMenu();
        switch(selectMenu){
            case 1:
                system("clear || cls");
                cout << "Escribe el CIF del estudiante: " << endl;
                scanf(" %[^\n]", cif);
                pos = isStudent(cif);
                if(pos == 0){
                    cout << "No se encontro el registro" << endl;
                    system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                    system("clear || cls");
                    start();

                } else{
                    system("clear || cls ");
                    cifSearcher();}
                    return;
                break;
            
            case 2:
                system("cls||clear");
                cout << "Escribe el ID a buscar: ";
                scanf(" %[^\n]", cif);
                pos = isStudent(cif);
                showStudent(pos);
                cout << "DATOS A EDITAR\n";
                cout << "CIF:";
                scanf(" %[^\n]", st.cif);
                cout << "NOMBRE: ";
                scanf(" %[^\n]", st.fullname);
                cout << "FACULTAD: ";
                scanf(" %[^\n]", st.faculty);
                cout << "CARRERA: ";
                scanf(" %[^\n]", st.major);
                cout << "EMAIL: ";
                scanf(" %[^\n]", st.email);
                cout << "ESTADO DE ENTREGA ";
                scanf(" %[^\n]", st.deliveredOrNot);
                cout << "FECHA DE ENTREGA dd/mm/yyyy: ";
                scanf("%d/%d/%d", &st.dateOfDelivery.day, &st.dateOfDelivery.month, &st.dateOfDelivery.year);
                updateStudent(st, pos);
                cout << "Registro actualizado...\n";
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                    start();
                break;
            
            case 3:
                    system("clear || cls");
                    facultySearcher();
                    system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                    start();
                    return;
                break;
            
            case 4:
                    system("clear || cls");
                    majorSearcher();
                    system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                    start();
                    return;
                break;
            
            case 5:
                system("clear || cls");
                cout << "Estudiantes con carnets ENTREGADOS: " << endl;
                deliveredShow();
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                break;
            
            case 6:
                system("clear || cls");
                cout << "Estudiantes con carnets NO ENTREGADOS: " << endl;
                notDeliveredShow();
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                break;
                
            case 7:
                system("clear||cls");
                gotoxy(10, 5);
                cout << "CIF:";
                gotoxy(10, 6);
                cout << "Nombre Completo: ";
                gotoxy(10, 7);
                cout << "Facultad (INGRESAR NUMERO CORRESPONDIENTE) : ";
                gotoxy(10, 8);
                cout << "Carrera (INGRESAR NUMERO CORRESPONDIENTE) : ";
                gotoxy(10, 9);
                cout << "Email: ";
                gotoxy(10, 10);
                cout << "Estado de entrega (INGRESAR 1 PARA ENTREGADO Y 2 PARA NO ENTREGADO): ";
                gotoxy(10, 11);
                cout << "Fecha de entrega dd/mm/yyyy: ";
                gotoxy(15, 5);
                scanf(" %[^\n]", st.cif);
                gotoxy(27, 6);
                scanf(" %[^\n]", st.fullname);
                
                int facultySelector;
                gotoxy(100,5);
                cout<<"MENU DE FILTROS - FACULTADES \n";
                gotoxy(100,6);
                cout<<"1 - FACULTAD DE ODONTOLOGIA \n";
                gotoxy(100,7);
                cout<<"2 - FACULTAD DE CIENCIAS MEDICAS \n";
                gotoxy(100,8);
                cout<<"3 - FACULTAD DE MARKETING, DISENO Y CIENCIAS DE LA COMUNICACION \n";
                gotoxy(100,9);
                cout<<"4 - FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS \n";
                gotoxy(100,10);
                cout<<"5 - FACULTAD DE INGENIERIA Y ARQUITECTURA \n";   
                gotoxy(100,11);
                cout<<"6 - FACULTAD DE CIENCIAS JURIDICAS, HUMANIDADES Y RELACIONES INTERNACIONALES \n";

                gotoxy(55, 7);
                scanf("%d", &facultySelector);

                switch (facultySelector) {
                case 1:
                    strcpy(st.faculty, "FACULTAD DE ODONTOLOGIA");
                break;
                
                case 2:
                    strcpy(st.faculty, "FACULTAD DE CIENCIAS MEDICAS");
                break;
                
                case 3:
                    strcpy(st.faculty, "FACULTAD DE MARKETING, DISENO Y CIENCIAS DE LA COMUNICACION");
                break;
    
                case 4:
                    strcpy(st.faculty, "FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS");
                break;
    
                case 5:
                    strcpy(st.faculty, "FACULTAD DE INGENIERIA Y ARQUITECTURA");
                break;
                
                case 6:
                    strcpy(st.faculty, "FACULTAD DE CIENCIAS JURIDICAS, HUMANIDADES Y RELACIONES INTERNACIONALES");
                break;
                
                default:
                    gotoxy(10, 13);
                    cout << "Facultad seleccionada invalida. No se agregara al archivo." << endl;
                    system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                    system("clear || cls");
                    start();
                break;
                }
                
                gotoxy(100, 5);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 6);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 7);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 8);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 9);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 10);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 11);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha

                int majorSelector;
                gotoxy(100,5);
                cout<<"MENU DE FILTROS - CARRERAS \n";
                gotoxy(100,6);
                cout<<"1 - DERECHO \n";
                gotoxy(100,7);
                cout<<"2 - DIPLOMACIA Y RELACIONES INTERNACIONALES \n";
                gotoxy(100,8);
                cout<<"3 - MEDICINA \n";
                gotoxy(100,9);
                cout<<"4 - PSICOLOGIA \n";
                gotoxy(100,10);
                cout<<"5 - ODONTOLOGIA \n";   
                gotoxy(100,11);
                cout<<"6 - MARKETING Y PUBLICIDAD \n";
                gotoxy(100,12);
                cout<<"7 - DISENO Y COMUNICACION VISUAL \n";
                gotoxy(100,13);
                cout<<"8 - COMUNICACION Y RELACIONES PUBLICAS \n";
                gotoxy(100,14);
                cout<<"9 - ADMINISTRACION DE EMPRESAS \n";
                gotoxy(100,15);
                cout<<"10 - NEGOCIOS INTERNACIONALES \n";
                gotoxy(100,16);
                cout<<"11 - ECONOMIA EMPRESARIAL \n";   
                gotoxy(100,17);
                cout<<"12 - CONTABILIDAD Y FINANZAS \n";
                gotoxy(100,18);
                cout<<"13 - INGENIERIA INDUSTRIAL \n";
                gotoxy(100,19);
                cout<<"14 - INGENIERIA CIVIL \n";
                gotoxy(100,20);
                cout<<"15 - INGENIERIA EN SISTEMAS DE INFORMACION \n";
                gotoxy(100,21);
                cout<<"16 - ARQUITECTURA \n";

                gotoxy(54, 8);
                scanf("%d", &majorSelector);

                switch (majorSelector) {
                case 1:
                    strcpy(st.major, "DERECHO");
                break;
                
                case 2:
                    strcpy(st.major, "DIPLOMACIA Y RELACIONES INTERNACIONALES");
                break;
    
                case 3:
                    strcpy(st.major, "MEDICINA");
                break;
    
                case 4:
                    strcpy(st.major, "PSICOLOGIA");
                break;
    
                case 5:
                    strcpy(st.major, "ODONTOLOGIA");
                break;
    
                case 6:
                    strcpy(st.major, "MARKETING Y PUBLICIDAD");
                break;
    
                case 7:
                    strcpy(st.major, "DISENO Y COMUNICACION VISUAL");
                break;
    
                case 8:
                    strcpy(st.major, "COMUNICACION Y RELACIONES PUBLICAS");
                break;
    
                case 9:
                strcpy(st.major, "ADMINISTRACION DE EMPRESAS");
                break;
    
                case 10:
                    strcpy(st.major, "NEGOCIOS INTERNACIONALES");
                break;
    
                case 11:
                    strcpy(st.major, "ECONOMIA EMPRESARIAL");
                break;
    
                case 12:
                    strcpy(st.major, "CONTABILIDAD Y FINANZAS");
                break;
    
                case 13:
                    strcpy(st.major, "INGENIERIA INDUSTRIAL");
                break;
                
                case 14:
                    strcpy(st.major, "INGENIERIA CIVIL");
                break;
    
                case 15:
                    strcpy(st.major, "INGENIERIA EN SISTEMAS DE INFORMACION");
                break;
                
                case 16:
                    strcpy(st.major, "ARQUITECTURA");
                break;
                
                default:
                    gotoxy(10, 13);
                    cout << "Carrera seleccionada invalida. No se agregara al archivo." << endl;
                    system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                    system("clear || cls");
                    start();
                break;
                }
                
                gotoxy(100, 5);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 6);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 7);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 8);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 9);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 10);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 11);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 12);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 13);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 14);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 15);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 16);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 17);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 18);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 19);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 20);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha
                gotoxy(100, 21);
                cout << "\033[K"; //Secuencias de escape ANSI - Permite borrar el menu entero de los filtros que se muestra a la derecha

                gotoxy(17, 9);
                scanf(" %[^\n]", st.email);
                
                gotoxy(79, 10);
                int deliveryState;
                scanf("%d", &deliveryState);
                if (deliveryState == 1) {
                strcpy(st.deliveredOrNot, "ENTREGADO");} 
                else if (deliveryState == 2) {
                strcpy(st.deliveredOrNot, "NO ENTREGADO");} 
                else {
                // Invalid delivery state
                gotoxy(10,13);
                cout << "Estado de entrega invalido. No se agregara al archivo." << endl;
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                break;}
                
                gotoxy(39, 11);
                scanf("%d/%d/%d", &st.dateOfDelivery.day, &st.dateOfDelivery.month, &st.dateOfDelivery.year);
                addStudent(st);
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                break;
            
            case 8: 
                system("clear || cls");
                cout << "Escribe el CIF a buscar: ";
                scanf(" %[^\n]", cif);
                pos = isStudent(cif);
                if(pos == -1){
                    cout << "No se encontro el registro" << endl;
                } else{
                    system("clear || cls ");
                    showStudent(pos);
                    cout << "Desea editar este registro? (1. Si / 2. No): ";
                    cin >> resp;
                    if(resp == 1){
                system("clear || cls");
                cout << "===== DATOS ACTUALES =====";
                gotoxy(0,2);
                pos = isStudent(cif);
                showStudent(pos);
                gotoxy(0,11);
                cout << "===== DATOS A EDITAR =====" << endl;
                gotoxy(0,13);
                cout << "CIF:";
                gotoxy(0,14);
                cout << "Nombre Completo: ";
                gotoxy(0,15);
                cout << "Facultad: ";
                gotoxy(0,16);
                cout << "Carrera: ";
                gotoxy(0,17);
                cout << "Email: ";
                gotoxy(0,18);
                cout << "Estado de entrega: ";
                gotoxy(0,19);
                cout << "Fecha de entrega: ";
                gotoxy(5,13);
                scanf(" %[^\n]", st.cif);
                gotoxy(17,14);
                scanf(" %[^\n]", st.fullname);
                gotoxy(10,15);
                scanf(" %[^\n]", st.faculty);
                gotoxy(9,16);
                scanf(" %[^\n]", st.major);
                gotoxy(7,17);
                scanf(" %[^\n]", st.email);
                gotoxy(19,18);
                scanf(" %[^\n]", st.deliveredOrNot);
                gotoxy(18,19);
                scanf("%d/%d/%d", &st.dateOfDelivery.day, &st.dateOfDelivery.month, &st.dateOfDelivery.year);
                updateStudent(st, pos);
                gotoxy(40,21);
                cout << "Registro actualizado...\n";
                }
                else{
                    cout << "Operacion cancelada...\n";
                }
                }
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            break;

            case 9: 
                system("clear || cls");
                if (lastReg == 0)
                {
                    cout << "No hay nada que eliminar" << endl;
                    system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                    break;
                }
                cout << "Escribe el CIF del estudiante: ";
                cin >> cif;
                pos = isStudent(cif);
                st = getStudent(pos);
                cout << endl;
                cout << "¿Realmente deseas eliminar el estudiante llamado: " << st.fullname << "?\n";
                cout << "Escribe 1 para SI o 2 para NO: ";
                cin >> resp;
                if (resp == 1)
                {
                deleteStudent(pos);
                cout << endl;
                cout << "Registro Eliminado... \n";
                }
                else{
                    cout << endl;
                    cout << "Operacion cancelada.... \n";
                }
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            break;

            case 10:
                system("clear||cls");
                showStudents();
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            break;

            case 11:
                cout << "Saliendo del programa..." << endl;
            break;

            default:
                cout << "Opcion no valida" << endl;
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            break;
        }
    }
    while (selectMenu != 11);
    {
        saveStudents();
    }
}

void saveStudents(){
    studentsUamRegister = fopen("data.bin", "wb");
    fwrite(students, sizeof(studentsUAM), lastReg, studentsUamRegister);
    fclose(studentsUamRegister);
}

void readStudents(){
    studentsUamRegister = fopen("data.bin", "rb");
    if(studentsUamRegister == NULL){
        return;
} else{
    lastReg = calcLastReg(studentsUamRegister);
    fread(students, sizeof(studentsUAM), MAX, studentsUamRegister);
    fclose(studentsUamRegister);
}
}

int calcLastReg(FILE *archivo){
    int file_size, num_studentsUAM;
    //Obtener el tamaño del archivo
    fseek(archivo, 0, SEEK_END);
    file_size = ftell(archivo);
    rewind(archivo);

    //Calcular el numero de registros
    num_studentsUAM = file_size / sizeof(studentsUAM);
    return num_studentsUAM;
}