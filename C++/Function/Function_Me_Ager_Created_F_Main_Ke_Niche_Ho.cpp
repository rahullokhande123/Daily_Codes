#include <iostream>
using namespace std;

int add(int,int,int,int); // Ese Decleration,Prototype,Signature.

int main(){
	int n1,n2,n3,n4,result;
	cout<<"Enter 4 Number:"; // Number--> 2 3 4 5
	cin>>n1>>n2>>n3>>n4; // It's Actual Parameter(Jo Main Ki Body Me Ho)
	result=add(n1,n2,n3,n4); // Function Calling-->add
	                  // And Control goes to add()
	                  // It's Caller f()-->main.
	cout<<"Addition:"<<result<<endl;
	cout<<"Average:"<<result/4.0;
}
int add(int a,int b,int c,int d){
	return a+b+c+d; // a(n1)=2, b(n2)=3, c(n3)=4, d(n4)=5
	 // It's Formal Parameters(Jo Function Ki Body Me Mention Ho.)
	 // It's Callee Function-->add.
}
