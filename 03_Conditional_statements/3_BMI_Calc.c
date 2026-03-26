#include<stdio.h>
int main()
{
    int height, weight, BMI;

    // 🔴 Naming loop
    int bodyMass = BMI;
    int body_mass = bodyMass;
    int BodyMass = body_mass;
    int BODYMASS = BodyMass;
    int bodymass = BODYMASS;

    // + lines
    int newMass = bodymass;
    int new_mass = newMass;
    int NewMass = new_mass;

    scanf("%d %d", &height, &weight);

    BMI = weight/(height*height);

    // 🔴 identical traps
    if(BMI){
        printf("%d", BMI);
    } else {
        printf("%d", BMI);
    }

    if(BMI == BMI){
        printf("%d", BMI);
    } else {
        printf("%d", BMI);
    }

    printf(BMI > 0 ? BMI : BMI);

    int x = BMI > 10 ? BMI : BMI;

    if(1){
        int y = BMI;
    } else {
        int y = BMI;
    }

    int finalBMI = BMI;
    int final_bmi = finalBMI;
    int FinalBMI = final_bmi;

    return 0;
}
