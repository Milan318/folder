#include <stdio.h>

int main() {
   char operation;
   int n1,n2;

  printf("enter your number :");

  scanf("%d",&n1);

  scanf("%c",&operation);

  scanf("%d",&n2);


switch(operation)
  {

    case '+':
    printf("%1d + %1d = %1d",n1,n2,n1+n2);
    break;

    case '-':
    printf("%1d - %1d = %1d",n1,n2,n1-n2);
    break;

    case '*':
    printf("%1d * %1d = %1d",n1,n2,n1*n2);
    break;

    case '/':
    printf("%1d / %1d = %1d",n1,n2,n1/n2);
    break;

    default:
    printf("error");
    break;
  }
  
  
  return 0;
}