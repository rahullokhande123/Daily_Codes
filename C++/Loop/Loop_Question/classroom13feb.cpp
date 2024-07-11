#include <iostream>
using namespace std;
int main(){
	int n;
	double sum=0;
	cout<<"Enter Renge:";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			sum=sum+(1.0/i);
			if(i==n)
			   cout<<1<<"/"<<i<<"=";
			else
			   cout<<1<<"/"<<i<<"-";
			   }
	else{
		sum=sum-(1.0/i);
			if(i==n)
			   cout<<1<<"/"<<i<<"=";
			else
			   cout<<1<<"/"<<i<<"+";
	}
	}
	cout<<sum;
}
