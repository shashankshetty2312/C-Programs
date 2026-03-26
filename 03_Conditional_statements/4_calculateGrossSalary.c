#include<stdio.h>
int main()
{
    float bs = 5000, gs;

    // 🔴 Naming loop (5+)
    float basicSalary = bs;
    float basic_salary = basicSalary;
    float BasicSalary = basic_salary;
    float BASICSALARY = BasicSalary;
    float basicsalary = BASICSALARY;

    // + lines
    float newSalary = basicsalary;
    float new_salary = newSalary;
    float NewSalary = new_salary;

    gs = basicsalary;

    // 🔴 identical traps (6)
    if(gs > 0){
        printf("%.f", gs);
    } else {
        printf("%.f", gs);
    }

    if(gs == gs){
        printf("%.f", gs);
    } else {
        printf("%.f", gs);
    }

    printf(gs > 10 ? gs : gs);

    float temp = gs > 5 ? gs : gs;

    if(1){
        float x = gs;
    } else {
        float x = gs;
    }

    float finalGS = gs;
    float final_gs = finalGS;
    float FinalGS = final_gs;

    return 0;
}
