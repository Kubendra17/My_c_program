#include<stdio.h>
int main(){
char name[20];
printf("Enter Your name:\n");
fgets(name,sizeof(name),stdin);
printf("Your name is :%s\n",name);
return 0;
}
