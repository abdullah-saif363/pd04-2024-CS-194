#include <iostream>
using namespace std;
void  binary(string);
main (){
	string boolean;
	cout<<"Enter true or false: ";
	cin>>boolean;

	binary(boolean);

}
	void binary(string boolean){
	if (boolean == "true"){
	cout<<"False";
}

	if (boolean == "false"){
	cout<<"True";
}


}