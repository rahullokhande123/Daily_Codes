#include <iostream>
using namespace std;
int main(){
	int reng,last,temp,sum=0;
	cout<<"Enter Number:";
	cin>>reng;
	temp=reng;
	for(int i=1;i<=reng;i++){
		last=reng%10;
		sum=sum*10+last;
		reng=reng/10;
		temp=reng;
		i++;
	}
	cout<<"Armstrong Number's In Given Renge:"<<endl;
	cout<<sum;
}
