#include <iostream>
using namespace std;
int main(){
	int num,last,sum=0;
	cout<<"Enter Number:";
	cin>>num;
	while(num!=0){
		last=num%10;
		sum=sum*10+last;
		num=num/10;
	}
	cout<<sum;
}
