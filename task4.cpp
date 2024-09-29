#include <iostream>
using namespace std;
void velocity(int);
main (){
	int speed;
	cout<<"Enter speed:  ";
	cin>>speed;
	velocity(speed);
}
	void velocity(int speed){
	if (speed >= 101){
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";

}
	if (speed <= 100){
	cout<<"Perfect! You're going good.";

}

}