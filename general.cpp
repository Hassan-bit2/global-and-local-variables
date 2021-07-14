#include <iostream>
using namespace std;
// Global variable
int c = 1;
int main(){
//	Local variable
	int b = 2;
	int c = 3;
	cout << b+c;
//	Local variable takes precedence over global variable
	return 0;
}
