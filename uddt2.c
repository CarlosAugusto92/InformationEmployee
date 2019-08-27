#include "stdio.h"
#include "stdlib.h"
#include "string.h"







//Creating an structure for consulting the information of employee.

struct employee
{
    char Name[50];
    char Id[10]; //The employee ID is the same payroll.
    char JobPosition[50];
    char Company[50];
    char WorkShift[50];
    float Salary;
    char WorkingDay [50];
    
};



int main (int argc, char const *argv[])
{


    struct employee employee1 = {0};
    strcpy(employee1.Name, "Carlos Méndez");
    strcpy(employee1.Id, "989526");
    strcpy(employee1.JobPosition, "Test Engineer");
    strcpy(employee1.Company, "C&C Labs");
    strcpy(employee1.WorkShift, "Morning Shift");
    employee1.Salary = 30000;
    strcpy (employee1.WorkingDay,"Full-Time");

    
  
    
   
    //For debug.    
    printf ("Name: %s\n", employee1.Name);
    printf ("The employee ID is: %s\n", employee1.Id);
    printf ("Job position: %s\n", employee1.JobPosition);
    printf ("Company: %s\n", employee1.Company);
    printf ("The work shift is: %s\n", employee1.WorkShift);
    printf ("Salary: $ %f\n", employee1.Salary);
    printf ("The working day is: %s\n", employee1.WorkingDay);
    
    
   //Creating a  text log file.
    
    FILE *LogTxT;

    LogTxT = fopen ("InformationEmployee", "w");
    fprintf (LogTxT, "Name : %s\n", employee1.Name);
    fprintf (LogTxT, "The employee ID is: %s\n", employee1.Id);
    fprintf (LogTxT, "Job position: %s\n", employee1.JobPosition);
    fprintf (LogTxT, "Company: %s\n", employee1.Company);
    fprintf (LogTxT, "The work shift is: %s\n", employee1.WorkShift);
    fprintf (LogTxT, "Salary: $ %f\n", employee1.Salary);
    fprintf (LogTxT, "The working day is: %s\n", employee1.WorkingDay);
    
    fclose (LogTxT);

    return 0;
}
