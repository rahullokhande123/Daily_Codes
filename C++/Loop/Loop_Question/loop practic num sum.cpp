#include <iostream>
using namespace std;
int main(){
	
	int n,sum=0;
	cout<< " enter number :";
	cin>>n;
	for(int i=1;i<=n;i++){ // (revarse loop-->	for(int i=10;i>=1;i--)
	   if(i==n)
	   	cout<<i<<"=";
	   
	   	else
	   		cout<<i<<"+";
		   
	sum=sum+i; //
	}
	cout<<sum;
	
}
