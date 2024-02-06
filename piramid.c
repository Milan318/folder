#include <stdio.h>
int main(){
int a,i,s,p,no;
printf("enter a number:");
scanf("%d",&a);
no=a;
for(i=1;i<=a;i++)
{
    for(s=1;s<=a;s++)
    {
        printf(" ");
    
    }
    a--;
    for(p=1;p<=i;p++)
    {
        printf("%d ",p);
    }
printf("\n");
}
return 0;
}
