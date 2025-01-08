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
      	Student(Student &obj){
	  	 name=obj.name;
	  	 age=obj.age;
	  	 marks=obj.marks;
	  	 cout<<"explicitly code define";	
	  }	
};
int main(){
	Student s("Aman",34,98);
	Student s1(s);
	s.display();
	s1.display();
		
}