#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("calculator:\nselect your opatation mode:\n(example if you want to do addition so enter '1')\n");
printf("1.plus    2.minus   3.multiply    4.divition\n");
int operation;
scanf("%d",&operation);

if(operation ==1)
{
printf("selected plus(+):\n");
int a;
int b;
printf("type the first number:\n");
scanf("%d",&a);
printf("type the second number:\n");
scanf("%d",&b);
printf("\n");
int ans=a+b;
printf("the answer in=%d+%d=%d",a,b,ans);
};
if(operation ==2)
{
printf("selected minus(-):\n");
int a;
int b;
printf("type the first number:\n");
scanf("%d",&a);
printf("type the second number:\n");
scanf("%d",&b);
printf("\n");
int ans=a-b;
printf("the answer in=%d-%d=%d",a,b,ans);
};
if(operation ==3)
{
printf("selected multiply(*):\n");
int a;
int b;
printf("type the first number:\n");
scanf("%d",&a);
printf("type the second number:\n");
scanf("%d",&b);
printf("\n");
int ans=a*b;
printf("the answer in=%d*%d=%d",a,b,ans);
};
if(operation ==4)
{
printf("selected division(/):\n");
int a;
int b;
printf("type the first number:\n");
scanf("%d",&a);
printf("type the second number:\n");
scanf("%d",&b);
printf("\n");
int ans=a/b;
int ans2=a%b;
if(ans2 == 0){
printf("the answer in=%d?/%d=%d",a,b,ans);
}else{
printf("ans is not an intiger number");
}
};
}
