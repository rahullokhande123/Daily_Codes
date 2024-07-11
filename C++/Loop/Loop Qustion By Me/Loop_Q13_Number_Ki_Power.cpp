//WAP User ak base input dega dusre input ko hme uski power bnana h
#include <iostream>
using namespace std;
int main(){
	int base,power,product=1;
	cout<<"Enter Number:";
	cin>>base;
	cout<<"Enter Power Of This No:";
	cin>>power;
	for(int i=1;i<=power;i++){
		product=product*base;	
	}
	cout<<"Result:"<<product;
}
