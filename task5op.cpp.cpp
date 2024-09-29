#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main(){
	system("cls");
	int x , y;
	gotoxy(x,y );
	gotoxy(50,10);
	cout<<"ABDULLAH SAIF" <<endl;
	gotoxy(55,12);



}
	void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}