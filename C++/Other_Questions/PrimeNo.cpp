#include <iostream>
using namespace std;
int main(){
	int num,i=1; // i=2 it is a control varibal
	cout<<"Enter Number:";
	cin>>num;
	int fleg=0; // string msg="prime number";

   while(i<=num/2){ //1<=9 ( user type- 18 
    if(num%2==0){ //19%2==0,19%3==0,19%4==0,19%5==0,19%6==0,19%7==0
    	//msg="not prime no."
		fleg=1;
    	break;
	}
      i++;	
}
//cout<<msg;
if(fleg==0)
   cout<<"it is a prime number:";
else
   cout<<"not a prime number:";
}