#include <iostream>

using namespace std;

int main(){
	int i = 1;
	// for loop starts i at 99 and subtracts 1 every time it loops until it gets to 1
	for (i=99;i>=1;i--){
		cout << i << " bottles of beer on the wall, " << i <<
			" bottles of beer." << endl;
		cout << "Take one down and pass it around, " << (i - 1) << 
			" bottles of beer on the wall." << endl;
	}
	return 0;
}