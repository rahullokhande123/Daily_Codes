#include <iostream>
using namespace std;
int add(int a,int b,int c,int d){
	return a+b+c+d; 
}
int main(){
	int n1,n2,n3,n4,result;
	cout<<"Enter 4 Number:"; 
	cin>>n1>>n2>>n3>>n4; 
	result=add(n1,n2,n3,n4); 
	                 
	cout<<"Addition:"<<result<<endl;
	cout<<"Average:"<<result/4.0;
}
