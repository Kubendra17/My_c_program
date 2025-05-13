#include <stdio.h>
int main() {
    int a, b, sum,difference,product,quotient;
    printf("Enter the value for a");
    scanf("%d,&a");
    printf("Enter the value for b");
    scanf("%d",&b);
    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = a/b;
    printf("%d\n%d\n%d\n%d\n",sum,difference,product,quotient);
    return 0;
}
