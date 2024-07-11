#include <iostream>
using namespace std;
int main(){
	int num,last,sum=0;
	cout<<"Enter Reverse Number:";
	cin>>num;
       int clt=0;
	while(num!=0){
	
	      last=num%10;
	      sum=sum*10+last;
	      num=num/10;
		  clt=clt+last;    
    }
          	
    cout<<"Reverse of given number:"<<sum<<endl;
    cout<<"Sum Of All Integers:"<<clt;
}
