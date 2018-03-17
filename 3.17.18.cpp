#include <iostream>
using namespace std;

int main(){
	
float fill[6];
float count = 0;

	for (int i=0; i<6; i++){
		cout << "Enter number " << i+1 << ": ";
		cin >> fill[i];
		count+=fill[i];
	}
cout << "The average of your numbers is " << count/6;
	
	return 0;
}