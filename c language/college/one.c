// Program to calculate the net salary of employee.
#include <stdio.h>

int main(){
    double netsalary=0;
 double basicsalary;
 double HRA=0;
 double TA=0;
 double DA=0;
 printf("Enter the value of basic salary:");
 scanf("%lf",&basicsalary);// Input basic salary from the user
 HRA=(15.0/100.0)*basicsalary;
 TA=(8.0/100.0)*basicsalary;
 DA=(7.0/100.0)*basicsalary;
 
 netsalary=basicsalary+HRA+TA+DA;

 printf("Calculated net salary of employee is: %lf ",netsalary);
  return 0;
}