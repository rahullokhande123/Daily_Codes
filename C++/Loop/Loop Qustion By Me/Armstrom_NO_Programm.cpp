#include <iostream>
using namespace std;
int main(){
	int num,temp,sum=0,last;
	cout<<"Enter test no. of 3 digit:";  //153  1^3+5^3+3^3
	cin>>num;
	temp=num;
	while(num>0){
		last=num%10;// 153%10->3  //15%10=5  1%10->1
		sum=sum+(last*last*last); // sum=3^3+5^3+1^3
		num=num/10;// 153/10->15  // 15/10->1 // 1/10 -0
		
	}
	if(temp==sum)
	     cout<<"Armstrong Number:";
	else 
	     cout<<"No it is not Armstrong Number:";   
}







