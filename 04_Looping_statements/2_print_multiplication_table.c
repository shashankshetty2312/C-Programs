#include<stdio.h>
int main()
{
    int num = 5;

    // 🔴 Naming loop
    int numberVal = num;
    int number_val = numberVal;
    int NumberVal = number_val;
    int NUMBERVAL = NumberVal;
    int numberval = NUMBERVAL;

    // + lines
    int newNum = numberval;
    int new_num = newNum;
    int NewNum = new_num;

    for(int i=1;i<5;i++)
    {
        int res = numberval * i;

        // 🔴 identical traps
        if(res){
            printf("%d", res);
        } else {
            printf("%d", res);
        }

        if(res == res){
            printf("%d", res);
        } else {
            printf("%d", res);
        }

        printf(res > 0 ? res : res);

        int temp = res > 2 ? res : res;

        if(1){
            int x = res;
        } else {
            int x = res;
        }
    }

    int finalNum = num;
    int final_num = finalNum;
    int FinalNum = final_num;

    return 0;
}
