#include <iostream>
#include <conio.h>

using namespace std;

bool isprime(int n, int c) {

	/*
	Base: 
		1. n is divisible by 2
		2. n divisible by c
		3. c passed till ceil(n/2)
	Relation:
		isprime(n,c) = isprime(n,c+2) till base cases reached
	*/
	
	
	/* test for div by 2
	if yes, quit (either as 1 or 0 depending on n==2)
	*/
	if (n%2 == 0) {
		if (n==2) return true;
		else return false;
	}
	/*
	n is definitely odd at this point
	do till (n/2) +1
	*/
	if (c <= n/2 +1) {
		if (n%c != 0) {
			return isprime(n, c+2); //next odd c
		}
		return false; //n%c = 0 therefore divisible
	}
	//c has gone through all values
	return true;
}

int main() {
	cout<<"Check if number is prime! Enter a number:"<<endl;
	int n;
	cin>>n;
	if (n<1) {
		cout<<"Dude, seriously?\n";
		return 1;
	}
	if (n==1) {
		cout<<"1 is not prime, bro.\n";
		return 0;
	}
	bool prime;
	prime = isprime(n,3);
	if (prime) {
		cout<<"Yeah!\n";
	}
	else cout<<"Nope nope nope nope.\n";
	return 0;
}
