#include <iostream>
using namespace std;
int main(){
	int sum=0;
	for(int i=100;i<=900;i++){
		if(i%9==0){
			cout<<i<<endl;
			sum=sum+i;
		}
		
	}
	cout<<"============="<<endl;
	cout<<"Sum Of All Entiger's:"<<sum;
}
