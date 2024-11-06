#include <iostream>
using namespace std;
//class Student{
//	private:
//		int marks;
//	public:
//	    Student(int m){
//	    	marks=m;
//		}
//	void display(){
//		cout<<marks<<endl;
//	}
//	// + Oprater Ko Create Krenge
//	void operator +(Student obj){ // s.operator+(s1)---> // obj = s1
//		cout<<marks<<endl;  // marks = s ke marks
//		cout<<obj.marks<<endl;  // obj.marks= s1.marks
//		cout<<"here we define some defination:"<<endl;
//		cout<<"Total"<<marks+obj.marks;
//		
//	}
//};
//int main(){
//	Student s(23),s1(78);
//	s+s1; // s.operator+ (s1)
//	// s1+s; // s1.operator+(s)
//}

//===============================================================================

//Qusstion:-
// WAP to perform overloding in which we are going to overload + operater, such that it gives 
// class total of all student. 

//class Student{
//	private:
//		int marks;
//	public:
//	    Student(int m){
//	    	marks=m;
//		}
//	void display(){
//		cout<<marks<<endl;
//	}
//	
//	// + Oprater Ko Create Krenge ===========================
//	
//	Student operator +(Student obj){
//		Student temp(0);
//		temp.marks=marks+obj.marks;
//		return temp;  	
//	}
//};
//int main(){
//	Student s1(10),s2(20),s3(30),s4(40);
//    Student result=s1+s2+s3+s4;
//    result.display();  
//}

// Homework --> Create - Oprater and show highest no. in all.

//class Student{
//	private:
//		int marks;
//	public:
//		Student(int m){
//			marks=m;
//		}
//	void display(){
//		cout<<marks<<endl;
//	}
//	Student operator +(Student obj){
//		Student temp(0);
//		temp.marks=marks+obj.marks;
//		return temp;
//	}
//	
//	Student operator *(Student obj){
//		Student temp(0);
//	    if(marks>obj.marks){
//	    	temp.marks=marks;
//		}
//		else
//		    temp.marks=obj.marks;
//		    return temp;
//	}
//	Student operator -(Student obj2){
//		Student temp2(0);
//		temp2.marks=marks-obj2.marks;
//		return temp2;
//	}
//	// In Unary Oprater ======================
//	void operator ++(int){ // Ager Hm Pre Increment(++s1) Me (main me) Call Kr Rahe H To ()Bleank Rahega.
//		marks=marks+10;
//		cout<<"Increament";
//	}
//	
//};
//int main(){
//	Student s1(10),s2(20),s3(100);
//	Student hold=s1-s2+s3;
//	Student hold2=s1*s2*s3;
//	hold.display();
//	hold2.display();
//	s3++;
//	s1.display();
//}


class Student{
	protected:
		double marks;
	public:
		Student(double m){
			marks=m;
		}
	void display(){
		cout<<"Marks:"<<marks<<endl;
	}
	Student operator + (Student obj){
		Student temp(0);
		temp.marks=marks+obj.marks;
		return temp;
	}
	Student operator - (Student obj1){
		Student temp(0);
		temp.marks=marks-obj1.marks;
		return temp;
	}
	Student operator * (Student obj2){
		Student temp(0);
		temp.marks=marks*obj2.marks;
		return temp;
	}
	Student operator / (Student obj3){
		Student temp(0);
		temp.marks=marks/obj3.marks;
		return temp;
	}
};
int main(){
	Student s1(2),s2(10),s3(30),s4(60);
	Student plus=s1/s2;
	plus.display();
	
}
