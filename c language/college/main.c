// Program to calculate the gross salary of an employee.
#include <stdio.h>
int main(){
    float netsalary=0;
 float basicsalary;
 float HRA=0;
 float TA=0;
 float DA=0;
 printf("Enter the basic salary:");
scanf("%f",&basicsalary);
 HRA=(10.0/100.0)*basicsalary;
 TA=(5.0/100.0)*basicsalary;
 DA=(15.0/100.0)*basicsalary;
 
 netsalary=basicsalary+HRA+TA+DA;

 printf("Calculated net salary of employee is :%0.1f",netsalary);
  return 0;
}