#include <iostream>
using namespace std;

class Node{
   public:
   int data;
   Node *next;
};

int main(){

   Node *HEAD = new Node();
   HEAD->data=55;
   HEAD->next=NULL;

   Node *current = new Node();
   current->data=66;
   current->next=NULL;
   HEAD->next=current;

  

   cout << HEAD->data;
   cout << endl << HEAD->next;
   cout << current->data;
   cout << endl <<current->next;

    return 0;

}
