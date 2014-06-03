#include<iostream>
#include <conio.h>

using namespace std;

void moveBlock(int n, char source, char support, char target) {
	static int moveNo=1;
	if (n==1) {
		cout<<moveNo<<". Move block from "<<source<<" to "<<target<<endl;
		moveNo++;
		return;
	}
	moveBlock(n-1, source, target, support);
	cout<<moveNo<<". Move block from "<<source<<" to "<<target<<endl;
	moveNo++;
	moveBlock(n-1, support, source, target);
}

int main() {
	cout<<"Hanoi (3 poles)!\nEnter the number of blocks:\n";
	int n;
	cin>>n;
	if(n<1) {
		cout<<"Y u do dis?\n";
		return 1;
	}
	moveBlock(n,'a','b','c');
	cout<<"Done!\n";
	return 0;
}
