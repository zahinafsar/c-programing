#include <stdio.h>
#include <stdlib.h>
void filecreat(){

FILE* output=fopen("sd.txt","w");
if (output!=NULL){

char name[10],fn[10],mn[10],add[10];
int ag;
printf("What is your name?");
scanf("%s",name);
printf("What is your fathers name?");
scanf("%s",fn);
printf("What is your mother name?");
scanf("%s",mn);
printf("Where do you live in?");
scanf("%s",add);
printf("What is your age?");
scanf("%d",&ag);
fprintf(output,"Name:%s\nFathers name:%s\nMothers name:%s\nAddress:%s\nAge:%d",name,fn,mn,add,ag);
fclose(output);
printf("You CV has been created successfully");
}else{
printf("Try again");
}

}
int main()
{
filecreat();
}
