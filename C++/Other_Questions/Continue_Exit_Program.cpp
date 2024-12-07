#include <iostream>
using namespace std;
int main(){
	int a,b;
	string choice;
	while(1){
		cout<<"enter 2 number:";
		cin>>a>>b;
		cout<<"addition:"<<a+b<<endl;
		cout<<"do u want to exit , type 'exit' for exit otherwise any character:";
		cin>>choice;
		if(choice=="exit")
		cout<<"thank u for using our service...";
		break; //exit point
  }
	} // whenever we use infinite loop, it has minimum one exit point (break statement )