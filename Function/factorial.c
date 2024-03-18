#include <stdio.h>

int add(int,int);

int main(void){
  int result=1;

  printf("%d",add(5,result));
  return 0;
}
 int add(n,result){
   if(n!=0){
     result=result*n;
     n--;
     return add(n,result);
   }
   return result;
 }