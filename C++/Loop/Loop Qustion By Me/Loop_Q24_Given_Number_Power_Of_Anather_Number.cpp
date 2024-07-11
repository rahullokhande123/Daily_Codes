#include <iostream>
using namespace std;
int main(){
	int base,power,product=1;
	cout<<"Enter Number And Power:";
	cin>>base>>power;
	for(int i=1;i<=power;i++){
		product=product*base;
	}
	cout<<"Resualt:"<<product;
	
}
