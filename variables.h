#define MAXREGISTERS 100
#define MAXCHAR 60

//typedef sirve para darle un nombre a un tipo de dato
typedef struct PERSON //struct sirve para agrupar variables de diferentes tipos
{
    char cif[MAXCHAR]; //char es un tipo de dato que almacena un solo caracter
    char name[MAXCHAR]; 
    char lastName[MAXCHAR];
    int grade;
};

