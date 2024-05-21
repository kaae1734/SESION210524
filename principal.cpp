#include <iostream>
#include "variables.h"

using namespace std;
int main(int argc, char const *argv[])
{
    PERSON teacher;
    cout << "CIF: ";
    cin >> teacher.cif;
    cout << "Nombre: ";
    scanf(" %[^\n]", teacher.name);
    cout << "Apellidos: ";
    scanf(" %[^\n]", teacher.lastName);

        PERSON students[MAXREGISTERS];
    int op, i=0;
    do// el do sirve para que se ejecute al menos una vez el ciclo
    {
        system("cls||clean");
        printf("CIF: ");
        scanf(" %[^\n]", students[i].cif);
        printf("Nombre: ");
        scanf(" %[^\n]", students[i].name);
        printf("Apellidos: ");
        scanf(" %[^\n]", students[i].lastName);
        printf("Nota: ");  
        scanf("%d", &students[i].grade);

        printf("Desea ingresar otro registro \n 1. Si \n 0. No\n");  
        cin >> op;
        i++;

    } while (op!=0);

    printf("Datos del profesor\n CIF: %s\n", teacher.cif);
    printf("Nombre completo: %s %s\n", teacher.name, teacher.lastName);
    cout << "Datos de los estudiantes\n";
    for (int j = 0; j < i; j++)
    {
        printf("Nombre: %s \n Apellidos: %s \n Nota: %d\n", students[j].name, students[j].lastName, students[j].grade);
    }

    
    return 0;
}
