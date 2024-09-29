#include <iostream>
using namespace std;
void country(string,float);
main (){
	string name;
	float price;
	while(true){
	cout<<"Enter the country's name: ";
	cin>>name;
	cout<<"Enter the price in dollars:$ ";
	cin>>price;
	country(name,price);
}
}
	void country(string name,float price){
	float price_T;
	if (name == "Pakistan"){
	price_T = price-(price*(5.0/100.0));
	cout<<"Final price after discount is:  "<< price_T;
}
	if (name == "India"){
	price_T = price-(price*(20.0/100.0));
	cout<<"Final price after discount is:  "<< price_T;
}
	if (name == "Ireland"){
	price_T = price-(price*(10.0/100.0));
	cout<<"Final price after discount is:  "<< price_T;
}
	if (name == "England"){
	price_T = price-(price*(30.0/100.0));
	cout<<"Final price after discount is:  "<< price_T;
}
	if (name == "Canada"){
	price_T = price-(price*(45.0/100.0));
	cout<<"Final price after discount is:  "<< price_T;
}


}