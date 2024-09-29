#include<iostream>
#include<windows.h>
using namespace std;
void uams();
void calculate_aggregate();
void comparemarks();
main(){
	system("cls");
	cout<<""<<endl;
	uams();
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"1. CALCULATE AGGREGATE"<<endl;
	cout<<"2. COMPARE MARKS"<<endl;
	calculate_aggregate();
	comparemarks();
}
void uams(){
cout<<"     #          #         #         ##   ##       #######              "<<endl;
cout<<"     #          #        # #        # # # #       #                     "<<endl;
cout<<"     #          #       #   #       #  #  #       #                      "<<endl;
cout<<"     #          #      #######      #     #       #######                     "<<endl;
cout<<"     #          #     #       #     #     #             #               "<<endl;
cout<<"     #          #    #         #    #     #             #           "<<endl;
cout<<"     ############   #           #   #     #       #######                        "<<endl;

}
void calculate_aggregate(){
	float matric_marks,inter_marks,ecat_marks;
	float aggregate;
	string name;
	cout<<"                  CALCULATE AGGREGATE"<<endl;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"matric marks(out of 1100): ";
	cin>>matric_marks;
	cout<<"inter marks(out of 550): ";
	cin>>inter_marks;
	cout<<"ecat marks(out of 400): ";
	cin>>ecat_marks;
	aggregate = matric_marks/1100*30 + inter_marks/550*30 + ecat_marks/400*40;
	cout<<"aggregate is :% "<<aggregate<<endl;

}
void comparemarks(){
	int ecatstd1,ecatstd2;
	string namestd1,namestd2;
	cout<<"                 COMPARING MARKS"<<endl;
	cout<<"Enter name: ";
	cin>>namestd1;
	cout<<"Enter Ecat marks: ";
	cin>>ecatstd1;
	cout<<"Enter name: ";
	cin>>namestd2;
	cout<<"Enter Ecat marks: ";
	cin>>ecatstd2;
	if (ecatstd1 > ecatstd2){
	cout<<namestd1;
}
	if (ecatstd1 < ecatstd2){
	cout<<namestd2;
}







}



















