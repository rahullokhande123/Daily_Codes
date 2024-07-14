#include <iostream>
using namespace std;
class Student{
	private:
		string name,classroom;
		int roll;
		double marks;
	public:
		Student(string n,string c,int r,double m){
		     name=n;
		     classroom=c;
		     roll=r;
		     marks=m;
		}
	void calculat(){
//		char grade;
		if(marks>80){
			cout<<"Grade A:";
		}
		else if(marks>60){
			cout<<"Grade B:";
		}
			else if(marks>40){
			cout<<"Grade C:";
		}
		else if(marks>33){
			cout<<"Grade D:";
		}
		else if(marks<32){
			cout<<"Fail:";
		}	
	}
	void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"Class:"<<classroom<<endl;
		cout<<"Roll Number:"<<roll<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
};
int main(){
	Student s("Rahul","12th",102,68.7);
	s.display();
	s.calculat();
}
