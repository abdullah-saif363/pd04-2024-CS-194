#include <iostream>
using namespace std;
void boolean(int,int);
main (){
	int num1,num2;
	cout<<"Enter your position: ";
	cin>>num1;
	cout<<"Enter your friend's position: ";
	cin>>num2;
	boolean(num1,num2);
}
	void boolean(int num1,int num2){
	if (num1 >= (num2 - 6)){
	cout<<"True";
} 
	if (num1 < (num2 - 6)){
	cout<<"False";
} 

}