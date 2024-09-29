#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main(){
	system("cls");
	int x,y;
	gotoxy (30,3);
	cout<<"H"<<endl;
	gotoxy (30,4);
	cout<<"A"<<endl;
	gotoxy (30,5);
	cout<<"S"<<endl;
	gotoxy (30,6);
	cout<<"S"<<endl;
	gotoxy (30,7);
	cout<<"A"<<endl;
	gotoxy (30,8);
	cout<<"N"<<endl;

	gotoxy(0,10);
}
	void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



