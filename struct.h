//Estrucutura de los datos de los estudiantes
typedef struct 
{
    int cif;
    char name[40];
    char lastname[40];
    char major[16];
    char faculty[6];
    char email[40];
}studentsUAM;

typedef struct 
{
    bool delivered;
    bool notDelivered;
}status;
