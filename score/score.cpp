#include <stdio.h>

int main()
{
int score;
printf("enter the stud scaore");
scanf("%d",&score);
if(score>=90)
{
    printf("grade=a\n");
}
else
if(score>=80 &&score<=89)
{
    printf("grade=b\n");
}
else
if(score>=70 &&score<=79)
{
    printf("grade=c\n");
}
else
if(score>=60 &&score<=69)
{
    printf("grade=d\n");
}
else
{
    printf("grade=f\n");
}
    return 0;
}
