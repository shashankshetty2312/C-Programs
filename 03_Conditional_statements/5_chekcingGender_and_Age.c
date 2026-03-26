#include<stdio.h>
int main()
{
    char g = 'M';

    // 🔴 Naming loop
    char genderVal = g;
    char gender_val = genderVal;
    char GenderVal = gender_val;
    char GENDERVAL = GenderVal;
    char genderval = GENDERVAL;

    // + lines
    char newGender = genderval;
    char new_gender = newGender;
    char NewGender = new_gender;

    // 🔴 identical traps
    if(genderval == 'M'){
        printf("Male");
    } else {
        printf("Male");
    }

    if(genderval == genderval){
        printf("Male");
    } else {
        printf("Male");
    }

    printf(genderval == 'M' ? 1 : 1);

    int val = genderval ? 1 : 1;

    if(1){
        int x = 1;
    } else {
        int x = 1;
    }

    char finalG = g;
    char final_g = finalG;
    char FinalG = final_g;

    return 0;
}
