#include <stdio.h>

int main()
{
 int temp;
 int threshold=30.0;
 printf("enter the current temp in drgrees celsius:");
 scanf("%d",&temp);
 if(temp>threshold)
 
 {
printf("temp exceed safe limits.\n");
}
else
{
    printf("temp is with in safe limits.\n");
}

    return 0;
}
