#include <iostream>
using namespace std;
int main(){
	int n;
	double sum=0;
	cout<<"Enter No.";
	cin>>n;
	for(int i=1;i<=n;i++){ // 6
		
		if(i==n)
			  cout<<1<<"/"<<i<<"=";
		else
		    cout<<1<<"/"<<i<<"+";
		sum=sum+(1.0/i);
		
		
	}
	cout<<sum;
}



