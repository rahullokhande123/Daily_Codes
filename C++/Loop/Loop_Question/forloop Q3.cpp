#include <iostream>
using namespace std;
int main(){
	int n;
	double sum=0;
	cout<<"Enter No.";
	cin>>n;
	for(int i=1;i<=n;i++){ // 6
		sum=sum+(i*i);
		if(i==n)
			cout<<i<<"^"<<2<<"=";
		else
		    cout<<i<<"^"<<2<<"+";
		    
		    
	    }
	cout<<sum;
}

