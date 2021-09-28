#include<stdio.h>
int main(){
    int num1 = 3000, num2 = 60, num3 = 360, result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    
    //Solution
    result = num1 / num2 * num3;
    printf("%d RPM divide %d secs multiply %d degrees is %d degrees per second", num1, num2, num3,result);
    return 0;}