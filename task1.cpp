#include <iostream>
using namespace std;
void binary(int,int);
main ()
{
	int num1,num2;
	cout<<"Enter the first number: ";
	cin>> num1;
	cout<<"Enter the second number: ";
	cin>> num2;
	binary(num1,num2);
}
	void binary(int num1,int num2){
	if (num1 == num2){
	cout<<"TRUE";
}
	if (num1 != num2){
	cout<<"FALSE";
}


}