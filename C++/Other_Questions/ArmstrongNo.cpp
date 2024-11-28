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

