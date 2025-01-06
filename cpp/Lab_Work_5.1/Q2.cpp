#include <iostream>
using namespace std;

 int main(){

   int x;

   cout << "enter the value of x :" << endl ;
   cin >> x ;

    if (x<0){
      printf("the value is negative",x);
    }else if(x>0){
      printf("the value is positive",x);
    }else {
      printf("the value is neutral",x);
    }
   return 0;
 }