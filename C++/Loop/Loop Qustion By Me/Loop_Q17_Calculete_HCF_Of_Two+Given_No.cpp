#include <iostream>
using namespace std;
int main(){
	int a,b,h=1;
	cout<<"Enter Two Number's:"<<" ";
	cin>>a>>b;
	for(int i=1;i<=a || i<=b;i++){
	    if(a%i==0 && b%i==0){
	         h=i;
	     }
	}
	cout<<"HCF Of Your Given No.:"<<h<<endl;
}
