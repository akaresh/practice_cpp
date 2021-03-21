//Write a fxn that prints the results of the multiplication of the integers

#include <iostream>
using namespace std;

void printProduct(int p1, int p2, int result);

int main(){
	int m1;
	int m2;
	int product;

	cout<<"Enter m1: ";
	cin>>m1;
	cout<<"Enter m2: ";
	cin>>m2;

	product = m1 * m2;

	printProduct(m1, m2, product);
	return 0;
}

void printProduct(int p1, int p2, int result){
	cout<<"Integer 1: "<<p1<<"\n";
	cout<<"Integer 2: "<<p2<<"\n";
	cout<<"Product Result: "<<result<<"\n";
}
