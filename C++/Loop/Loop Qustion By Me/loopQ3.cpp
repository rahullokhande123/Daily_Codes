#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Number ";
	cin>>n;
	for(int i=1;i<=10;i++){ // (revarse loop-->	for(int i=10;i>=1;i--)
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
}
