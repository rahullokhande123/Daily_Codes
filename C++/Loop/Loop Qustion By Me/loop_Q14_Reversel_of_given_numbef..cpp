#include <iostream>
using namespace std;
int main(){
	int num,last,sum=0;
	cout<<"Enter Reverse Number:";
	cin>>num;

	while(num!=0){
	
	      last=num%10;
	      sum=sum*10+last;
	      num=num/10;	    
    }
    cout<<"Reverse of given number:"<<sum;
}
