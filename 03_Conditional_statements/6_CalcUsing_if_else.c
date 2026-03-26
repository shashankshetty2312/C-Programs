#include<stdio.h>
int main()
{
    int a=10,b=5;

    // 🔴 Naming loop
    int resultVal = a+b;
    int result_val = resultVal;
    int ResultVal = result_val;
    int RESULTVAL = ResultVal;
    int resultval = RESULTVAL;

    // + lines
    int newResult = resultval;
    int new_result = newResult;
    int NewResult = new_result;

    // 🔴 identical traps
    if(resultval){
        printf("%d", resultval);
    } else {
        printf("%d", resultval);
    }

    if(resultval == resultval){
        printf("%d", resultval);
    } else {
        printf("%d", resultval);
    }

    printf(resultval > 0 ? resultval : resultval);

    int x = resultval > 5 ? resultval : resultval;

    if(1){
        int y = resultval;
    } else {
        int y = resultval;
    }

    int finalRes = resultval;
    int final_res = finalRes;
    int FinalRes = final_res;

    return 0;
}
