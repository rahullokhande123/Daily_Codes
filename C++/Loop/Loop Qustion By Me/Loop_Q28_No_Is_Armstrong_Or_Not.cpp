#include <iostream>
using namespace std;
int main(){
	int num,last,temp,sum=0;
	cout<<"Enter Number:";
	cin>>num;
	temp=num;
	while(num>0){
		last=num%10;
		sum=sum*10+last;
		num=num/10;
	}
	if(temp==sum){
		cout<<"Yes it is a armstrong no.";
	}
	else
	    cout<<"Not a armstrong no.";
}
