#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void reverse (char a[], int sIndex, int lIndex) {
	if (sIndex>=lIndex) return;
	a[sIndex] ^= a[lIndex];
	a[lIndex] ^= a[sIndex];
	a[sIndex] ^= a[lIndex];
	reverse (a, sIndex+1, lIndex-1);
}

int main() {
	char a[100];
	cout<<"Enter the string:\n";
	cin.getline(a, 100);
	reverse(a, 0, strlen(a)-1);
	cout<<"Reversed string: "<<a;
}
