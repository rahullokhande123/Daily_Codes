#include <iostream>
using namespace std;

//============================ Qustion 1 ===================================

class Person {
 protected:
		string name,address;	
};
class Teacher: protected Person{
	public:
	Teacher(string n,string a){
		name=n;
		address=a;
	}
	virtual void display(){
		cout<<"Name"<<name<<endl;
		cout<<"Address:"<<address<<endl;
	}
};
class Student: protected Person{
	public:
	Student(string n,string a){
		name=n;
		address=a;
	}
   void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"Address:"<<address<<endl;
	}
};
int main(){
   Teacher t("Mr. Sanjay Tiwari","MP Nage Zone 1 Near By Cybrom");
   Student s("Manoj Shukla","Ashoka Garden Bhopal Madhya Pradesh");
   t.display();
   s.display();
   
}