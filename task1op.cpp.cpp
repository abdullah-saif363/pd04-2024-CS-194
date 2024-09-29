#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
main(){
int x , y;
	system("cls");
	cout<<"Test";
	gotoxy(3,4);
	cout<<"Test";
	gotoxy(0,10);




}
	void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}