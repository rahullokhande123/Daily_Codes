#include <iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter a range:";
	cin>>n;
	for(int i=1;i<=n;i++){
	    if(i%2==0){
		cout<<i<<endl;
		sum=sum+i;
			}
	}
	cout<<"Sum="<<sum;
}
