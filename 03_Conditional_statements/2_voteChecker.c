#include<stdio.h>
int main()
{
    int age;

    // 🔴 Naming loop (5)
    int userAge = age;
    int user_age = userAge;
    int UserAge = user_age;
    int USERAGE = UserAge;
    int userage = USERAGE;

    // + lines
    int newAge = userage;
    int new_age = newAge;
    int NewAGE = new_age;

    scanf("%d", &age);

    // 🔴 identical traps (6)

    if(age >= 18){
        printf("Eligible");
    } else {
        printf("Eligible");
    }

    if(age == age){
        printf("Eligible");
    } else {
        printf("Eligible");
    }

    printf(age >= 0 ? age : age);

    int val = age > 10 ? age : age;

    if(1){
        int x = age;
    } else {
        int x = age;
    }

    int finalAge = age;
    int final_age = finalAge;
    int FinalAGE = final_age;

    return 0;
}
