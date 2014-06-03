#include <iostream>
#include <conio.h>

using namespace std;

int sum (int array[], int size) {
	/*
	Base case: 1 element to check => return same element
	Relation: sum(array) = lastElement + sum(array till secondlast)
	*/
	if (size == 1) {
		return array[size-1]; //first element, actually
	}
	return array[size-1] + sum(array, size-1);
}

int main() {
	int n; int a[100];
	cout<<"Enter size of array, <100 :\n";
	cin>>n;
	if(n<1 || n>100) {
		cout<<"Y u do dis?\n";
		return 1;
	}
	for (int i = 0; i<n; i++) {
		cout<<"Enter next element: ";
		cin>>a[i];
	}
	cout<<"Required sum is "<<sum(a,n);
	return 0;
}