#include <iostream>
using namespace std;
string average(){
	int a,b,c,d,e;
	cout<<"Enter 5 Number:";
	cin>>a>>b>>c>>e;
	double avg=(a+b+c+d+e)/5.0;
	cout<<"Average:"<<avg<<endl;
	return "Success";
}
int main(){
	string msg;
	msg=average();
	cout<<"Opration is"<<" "<<msg;
}
