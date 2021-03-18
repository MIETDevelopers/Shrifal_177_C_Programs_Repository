#include<stdio.h>
int main(){
    char operator;
    double s,r ;
    printf("Enter an operator (+, -, *, /)");
    scanf("%c", &operator);
    printf("Enter two operands:");
    scanf("%lf %lf",&s, &r);
    switch(operator)
    {
        case '+':
            printf("%.lf + %.lf = %.lf",s, r, s+r);
            break;

        case '-':
            printf("%.lf - %.lf = %.lf",s, r, s-r);
            break;

        case '*':
            printf("%.lf * %.lf = %.lf",s, r, s*r);
            break;

        case '/':
            printf("%.lf / %.lf = %.lf",s, r, s/r);
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}