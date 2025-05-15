#include<stdio.h>
int a,b,c;
int largest(){
    if(a>b&&a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    printf("Enter the values of a,b,and c\n");
    scanf("%d%d%d",&a,&b,&c);
    int large=largest();
    printf("The largest number is %d\n");
    return 0;
}
