#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter Number:";
	cin>>num;
	int i=2;
	int fleg=0;
	    while(i<=num/2){
		if(num%i==0){
			cout<<"Not Prime No.";
			fleg=1;
			break;
		}
		i++;
	}
	if(fleg==0){
		cout<<"Prime No.";
	}
}
