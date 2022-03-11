/*

By Gachanja motoku
Feb 2022
MIT License
C89 Compiler
*/


#include <stdio.h>

Int main()
{

    Char name[30];
    Char KRA_PIN[10];
    Char Employment_Number[10];
    Float basic, hra, overtime, da, pf, gross;

    Printf(“Enter name: “);
    Gets(name);
    Printf(“KRA_PIN: “);
    Gets(KRA_PIN);
    Printf(“Employment_Number: “);
    Gets(Employment_Number);

    Printf(“Enter Normal Pay: “);
    Scanf(“%f”,&basic);
    Printf(“Enter Hourly Rate: “);
    Scanf(“%f”,&hra);
    Printf(“Enter Overtime Hours: “);
    Scanf(“%f”,&overtime);
    Printf(“Enter Tax Paid: “);
    Scanf(“%f”,&da);

    /*pf automatic calculated 12%*/
    Pf= (basic*30)/100;

    Gross=basic+da+hra+pf+overtime;

    Printf(“\nName: %s \nNormal Pay: %f \nHourly Rate: %f \nOvertime Hours: %f \nTax Paid: %f \n***GROSS SALARY: %f ***”,name,basic,hra,da,pf,gross);

    Return 0;
}

