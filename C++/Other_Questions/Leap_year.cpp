#include <iostream>
using namespace std;
int main(){
	int year;
	cout<<"enter test year:";
	cin>>year;
	if((year%4==0 && year%100!=0) || year%400==0 ){
		cout<<"year is a leap yeaer";
	}
	else{
		cout<<"year is not a leap year  ";
	}	
}

//#include <iostream>
//using namespace std;
//int main(){
//	int year;
//	cout<<"Enter Year:";
//	cin>>year;
//	if((year%4==0 && year%100!=0) || year%400==0){
//		cout<<"Leap Year";
//	}
//	else
//	   cout<<"not leap year";
//}