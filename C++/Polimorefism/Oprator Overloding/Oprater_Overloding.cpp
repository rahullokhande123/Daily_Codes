#include <iostream>
using namespace std;
class Student{
	private:
		int marks;
	public:
		Student(int m){
			marks=m;
		}
	void display(){
		cout<<"marks"<<marks<<endl;
	}
	Student operator + (Student obj){
		Student temp=0;
		temp.marks=marks+obj.marks;
		return temp;	
	}
	Student operator -(Student obj2){
		Student temp=0;
		temp.marks=marks-obj2.marks;
		if(marks>obj2.marks){
			return marks;
		}
		else 
		    return obj2.marks;
		return temp;
	}
	Student operator *(Student obj2){
		Student temp=0;
		temp.marks=marks*obj2.marks;
		return temp;
	}
	void operator ++(){
		marks=marks+10;
	}
};
int main(){
	Student s1(10),s2(80),s3(20),s4(50);
	s1.display();
	Student plus=s1+s2-s3-s4;
	Student minus=s1-s2;
	Student hold3=plus-minus;
	plus.display();
	minus.display();
	hold3.display();
	Student high=s1-s2;
	high.display();
	Student multi=s1*s2;
	multi.display();
	
	++s1;
	s1.display();
}
