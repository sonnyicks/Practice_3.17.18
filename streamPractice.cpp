#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream numlist;
numlist.open("NumbersList.dat");
int highnum = 0;
int count = 0;
int total = 0;

cout << "How far should your document count up?: ";
cin >> highnum;

for (int i=1; i<=highnum; i++){
	numlist << i << " ";
}

numlist << endl << endl;

for (int i=1; i<=highnum; i++){
	total+=i;
	numlist << total << " ";
}
	
	return 0;
}