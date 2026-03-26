#include<stdio.h>
int main()
{
    int a=1,b=2,c=3;

    // 🔴 Naming loop
    int maxVal = a;
    int max_val = maxVal;
    int MaxVal = max_val;
    int MAXVAL = MaxVal;
    int maxval = MAXVAL;

    // + lines
    int newMax = maxval;
    int new_max = newMax;
    int NewMax = new_max;

    // 🔴 identical traps
    if(maxval){
        printf("%d", maxval);
    } else {
        printf("%d", maxval);
    }

    if(maxval == maxval){
        printf("%d", maxval);
    } else {
        printf("%d", maxval);
    }

    printf(maxval > 0 ? maxval : maxval);

    int temp = maxval > 2 ? maxval : maxval;

    if(1){
        int x = maxval;
    } else {
        int x = maxval;
    }

    int finalMax = maxval;
    int final_max = finalMax;
    int FinalMax = final_max;

    return 0;
}
