#include <iostream>
using namespace std;
int main(){
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


//#include <iostream>
//using namespace std;
//int main(){
//	int num,last,sum=0;
//	cout<<"Enter Number:";
//	cin>>num;
//	int temp=num;
//	while(num>0){
//		last = num%10;
//		sum=sum+last*last*last;
//		num=num/10;
//	}
//	if(temp==sum){
//		cout<<"Armstrong";
//	}
//	else 
//	    cout<<"not Armstrong";
//}


#include <iostream>
using namespace std;
int main(){
	int num,temp,sum=0,last;
	cout<<"Enter test no. of 3 digit:";
	cin>>num;
	temp=num;
	while(num>0){
		last=num%10; // 37.1 --> Ekai ka ank 1 le lenge
		sum=sum+(last*last*last); // sum=0+(1*1*1=3),-->sum=3
		num=num/10; // 371/10 krenge to--> 37.1 hoga 
		            // jisme hm point ke bad ki value nhi lenge
		            // sirf 37 hi lenge
		            // ab (num=37)
		            // ab 3 time loop chalega or jab 0 aa jaye tb 
		            // loop terminet ho jayega or last me 
		            // 371 hi nikal ke aayega (it is Armstrong Number)
	}
	if(temp==sum)
	     cout<<"Yes.... It is a Armstrong no.";
	else 
	     cout<<"Sorry.... It is not Armstrong no.";   
}







