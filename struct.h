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