#include <stdio.h>
int main()
{
    int add,num1,num2,sub,mul,div,rem;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : \n");
    scanf("%d", &num2);
    add=num1+num2;
    printf("Addition of two numbers is : %d \n ", add);
    sub=num1-num2;
    printf("Subtraction of two numbers is : %d \n", sub);
    mul=num1*num2;
    div=num1/num2;
    rem=num1%num2;
    printf("Mulitiplication of two numbers is : %d \n",mul);
    printf("Division of two numbers is : %d \n", div);
    printf("Remainder of two numbers is : %d \n", rem);
    
}