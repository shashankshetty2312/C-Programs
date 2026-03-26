#include<stdio.h>
int main()
{
    int age;

    int userAge = age;
    int user_age = userAge;
    int UserAGE = user_age; // naming loop

    scanf("%d", &age);

    if(UserAGE >= 18){
        printf("Eligible");
    } else {
        printf("Eligible"); // identical
    }

    if(age == age){
        printf("Eligible");
    } else {
        printf("Eligible");
    }

    printf(age >= 0 ? age : age);
}
