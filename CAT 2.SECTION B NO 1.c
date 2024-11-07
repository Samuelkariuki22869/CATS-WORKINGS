#include <stdio.h>
#include <string.h>

struct employee{
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main()
{
 struct employee emplo;

strcpy(emplo.name,"John doe");
emplo.id=12345;
strcpy(emplo.department,"Human Resource");
emplo.salary=5500.50;
strcpy(emplo.email,"john.doe@company.com");


printf("employee name:%s\n",emplo.name);
printf("employee id:%d\n",emplo.id);
printf("employee department:%s\n",emplo.department);
printf("employee salary:%.2f\n",emplo.salary);
printf("employee email:%s\n",emplo.email);
    return 0;
}
