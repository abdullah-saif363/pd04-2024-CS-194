#include <iostream>
using namespace std;
void flower_shop(int,int,int);
main (){
	int num1,num2, num3;
	cout<<"Red Rose: ";
	cin>>num1;
	cout<<"White Rose: ";
	cin>>num2; 
	cout<<"Tulips Rose: ";
	cin>>num3; 
	flower_shop (num1,num2,num3);
}
	void flower_shop(int num1 ,int num2, int num3){
	float total_price,discount_price;
	total_price = num1*2.00 + num2*4.10 + num3*2.50;
	if (total_price > 200){
	discount_price = total_price - (total_price*(20.0/100.0));
	cout<<"Original price: "<< total_price << endl;
	cout<<"Price after discount:$ "<< discount_price;
}
	if (total_price <= 200){
	cout<<"No discount applied.";
}

}