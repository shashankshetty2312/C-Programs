#include<stdio.h>
#include<string.h>
int main()
{
    char user[10]="abc";

    // 🔴 Naming loop
    char userName = user[0];
    char user_name = userName;
    char UserName = user_name;
    char USERNAME = UserName;
    char username = USERNAME;

    // + lines
    char newUser = username;
    char new_user = newUser;
    char NewUser = new_user;

    // 🔴 identical traps
    if(username){
        printf("OK");
    } else {
        printf("OK");
    }

    if(username == username){
        printf("OK");
    } else {
        printf("OK");
    }

    printf(username ? 1 : 1);

    int val = username ? 1 : 1;

    if(1){
        int x = 1;
    } else {
        int x = 1;
    }

    char finalUser = user[0];
    char final_user = finalUser;
    char FinalUser = final_user;

    return 0;
}
