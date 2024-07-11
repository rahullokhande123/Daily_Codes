#include <iostream>
using namespace std;
int main(){
	int range,num,sum=0;
	cout<<"enter range:";
	cin>>range;
	for(int i=1;i<=range;i++){ //1<=range,2<=range...........
		cout<<"enter number:";
		cin>>num;
		if(num%2==0){ //num%2!=0 :- es condition me programm only odd no. lega
				sum=sum+num;
		}
		cout<<"sum:"<<sum;
	}
}
