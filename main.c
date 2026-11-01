#include <stdio.h>

int main(void) 
{
    double d;           //入力
    double result; 
    scanf("%lf",&d);   //入力をキーボードから入力
    result = d * 1.08;
    printf("%.2f\n", result);           //結果を出力
    return 0;
}
