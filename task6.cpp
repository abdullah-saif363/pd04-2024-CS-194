#include <iostream>
using namespace std;
void time(int,int);
main (){
	int min,hours;
	cout<<"Enter the number of minutes: ";
	cin>>min;
	cout<<"Enter the number of hours: ";
	cin>>hours;
	time(min,hours);
}
	void time(int min,int hours){
	if (min > hours*60){
	cout<<min;
}
	if (min < hours*60){
	cout<<hours;
}


}