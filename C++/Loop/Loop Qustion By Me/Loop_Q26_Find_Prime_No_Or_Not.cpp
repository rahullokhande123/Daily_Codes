#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Number:";
	cin>>n;
	int fleg=0;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
		     cout<<"Not Prime Number:";
		     fleg=1;
			 break;	
		}
	}
	if(fleg==0){
		cout<<"Prime Number:";
		}
}
