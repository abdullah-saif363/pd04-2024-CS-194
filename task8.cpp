#include <iostream>
using namespace std;
void pet(int);
main (){
	int holidays;
	cout<<"Enter Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays){
	int games_time,norm_difference,hours,minutes ,working_days ;
	working_days = 365 - holidays;
	games_time = working_days*63 + holidays*127;
	norm_difference = 30000 - games_time;
	cout<<"Total minutes = " <<norm_difference<< endl;
	hours = norm_difference/60;
	minutes = norm_difference%60;
	if (norm_difference > 0 ){
	cout<<"Tom sleeps well"<<endl; 
	 cout<< hours <<  " hours and " << minutes << " minutes less for play";

}
	if (norm_difference < 0 ){
	cout<<"Tom will run away"<<endl; 
	 cout<< -(hours) <<  " hours and " << -(minutes) << " minutes less for play";

}
}