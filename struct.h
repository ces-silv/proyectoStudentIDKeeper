#define MAX 100

typedef struct{
    int day;
    int month;
    int year;
} date;
typedef struct{
    char cif[10];
    char fullname[1000];
    char faculty[100];
    char major[100];
    char email[30];
    char deliveredOrNot[15];
    date dateOfDelivery;
} studentsUAM;

studentsUAM students[MAX];