#include <iostream>
using namespace std;
int maint(){
	int num,temp,sum=0,last;
	cout<<"Enter test no. of 3 digit:";
	cin>>num;
	temp=num;
	while(num>0){
		last=num%10;
		sum=sum+(last*last*last); // 1^3
		num=num/10;
		
	}
	if(temp==sum)
	     cout<<"Armstrong Number:";
	else 
	     cout<<"No it is not Armstrong Number:";   
}


#include <iostream>
using namespace std;
int maint(){
	int num,temp,sum=0,last;
	cout<<"Enter test no. of 3 digit:";
	cin>>num;
	temp=num;
	while(num>0){
		last=num%10;
		sum=sum+(last*last*last); // 1^3
		num=num/10;
		
	}
	if(temp==sum)
	     cout<<"Armstrong Number:";
	else 
	     cout<<"No it is not Armstrong Number:";   
}