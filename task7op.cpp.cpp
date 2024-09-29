#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int x,int y);
main(){
	int x,y;
	system("cls");
	maze();
	gotoxy( x, y);
	   while(true)
    {
       gotoxy(x, y);
 	cout<< "P";
    	Sleep(500);
    	gotoxy(x, y);
    	cout<< " ";

        y = y + 1;
        if(y == 10)
        {
            while(true)
            {
                gotoxy(x, y);
                cout<< "P";
               Sleep(500);
               gotoxy(x, y);
               cout<< " ";

            	y = y - 1;
            	if(y == 3)
		{
		   break;
		}
            }
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