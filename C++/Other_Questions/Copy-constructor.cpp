#include <iostream>
using namespace std;

class Student{
	private:
		string name;
		int age,marks;
		
	public:
		Student(string n,int a,int m){
			name=n;
			age=a;
//			marks=new int;
			marks=m;
		}
	  
	  void display(){
	  	cout<<"Name:"<<name<<" age:"<<age<<" marks:"<<marks<<endl;
	  }