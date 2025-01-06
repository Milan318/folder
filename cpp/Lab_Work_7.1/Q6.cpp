#include <iostream>
using namespace std;

int main(){

	// 1 0 1 0 1
	// 1 0 1 0
	// 1 0 1
	// 1 0
	// 1

	int i,j;
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			if(j % 2 == 0){
				cout << "0";
                cout << "  ";
			}
			else{
				cout << "1";
                cout << "  ";
			}
		}
		cout << endl ;
	}
}