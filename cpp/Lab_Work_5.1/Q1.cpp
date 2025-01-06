#include <iostream>
using namespace std;

int main(){

int x,y,min;

  cout << "enter the value of x :";
  cin >> x;

  cout << "enter the value of y :";
  cin >> y;

 if(x<y){
   min=x;
 }else{
   min=y;
 }
  cout << "the  minimum value is :" << min;

  return 0;
  

}