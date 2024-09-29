#include <iostream>
using namespace std;
void roll(int,int);
main (){
	int num1,num2;
	cout<<"Enter number of people: ";
	cin>>num1;
	cout<<"Enter number of rolls: ";
	cin>>num2;
	roll(num1,num2);
}
	void roll(int num1,int num2){
	int total_sheets,days ;
	int used_sheets;
	total_sheets = (500*num2);
	used_sheets  = (num1*57); 
	days         = (total_sheets/used_sheets);
	if (days < 14){
	cout<<"Your TP will only last "<< days <<", buy more!";
} 
	if (days > 14){
	cout<<"Your TP will  last "<< days <<",no need to panic!";
}



}
