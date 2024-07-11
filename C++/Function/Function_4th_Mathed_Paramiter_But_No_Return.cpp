#include <iostream>
using namespace std;
void avrage(int a,int b,int c){
	double avg=(a+b+c)/3.0;
	cout<<"Average:"<<avg<<endl;
	cout<<"Succesful";
}
int main(){
	int n1,n2,n3;
	cout<<"enter 3 number:";
	cin>>n1>>n2>>n3;
	avrage(n1,n2,n3);
}
