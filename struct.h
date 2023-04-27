//Estrucutura de los datos de los estudiantes
typedef struct{
    int cif;
    char name[40];
    char faculty[1000];
    char major[1000];
    char email[10000];
    bool deliveredOrNot;
}studentsUAM;

//Declaracion e inicializacion
studentsUAM data[] = {
    {18010053, "SILVIO ALEJANDRO MORA MENDOZA", "FACULTAD DE INGENIERIA Y ARQUITECTURA",
    "INGENIERIA EN SISTEMAS DE INFORMACION", "samora@uamv.edu.ni", true},

};