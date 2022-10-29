#include <stdio.h>
int main()
{
    double work_hour,salary_per_hour,salary;
    printf("Input the working hours of a month: ");
    scanf("%lf",&work_hour);
    printf("Input the salary amount/hour: ");
    scanf("%lf",&salary_per_hour);
    salary = work_hour * salary_per_hour;
    printf("Salary = %.2lf",salary);
}