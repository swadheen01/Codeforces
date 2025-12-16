#include<stdio.h>

struct employee
{
    char name[20];
    int salary;
};

int main()
{
    struct employee emp[2];

    emp[0].name = 's';
    //strcpy(emp[0].name, "Swadheen");
    // Note: It should be emp[0].name instead of emp.name to access the name of the first employee

    printf("%c", emp[0].name);
    return 0;
}
