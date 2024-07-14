#include <iostream>
using namespace std;
class Student{
	private:
		string name,classroom;
		int roll;
		double marks;
	public:
		Student(){
			cout<<"Enter Name Classroom Roll Marks:";
			cin>>name>>classroom>>roll>>marks;
		}
	void calculat(){
		char grade;
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
	Student s;
	s.calculat();
	s.display();
}
