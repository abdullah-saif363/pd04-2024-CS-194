#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int x,int y);
main(){
	int x =2,y=2;
	system("cls");
	maze();
	gotoxy( x, y);
	while(true){
	gotoxy(x,y);
	cout<<"p";
	Sleep(500);
	gotoxy(x,y);
	cout<<" ";
	x = x + 1;
	if (x == 10){
	 x = 2;
}
}
gotoxy(0,10);

}
	void maze(){
	cout<<"#############"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#############"<<endl;
}
	void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}