
// Swaping Quastions

#include <iostream>
using namespace std;
int main(){
	int a,b,temp;
	cout<<"Enter a and b :";
	cin>>a>>b;
	cout<<"before swapping :\n";
	cout<<"a:"<<a<<"b:"<<b<<endl;
	
	//a-22, b-33
	a=a+b; // 55
	b=a-b; // 55-33=22
	a=a-b; //55-22=33
	
	
   	cout<<"After swapping :\n";
	cout<<"a:"<<a<<"b:"<<b<<endl;
}