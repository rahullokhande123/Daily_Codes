// ===================== Copy Cunstructor In Heap =====================
//#include <iostream>
//using namespace std;
//
//class Student{
//	private:
//		string name;
//		int age,*marks;
//		
//	public:
//		Student(string n,int a,int m){
//			name=n;
//			age=a;
//			marks=new int;
//			*marks=m;
//		}
//	  
//	  void display(){
//	  	cout<<"Name:"<<name<<" age:"<<age<<" marks:"<<*marks<<endl;
//	  }
//	  void change_detail(string n,int a,int m){
//	  	        name=n;
//	  	        age=a;
//	  	       *marks=m;
//	  }
//	  Student(Student &obj){ // it is a copy constructor  
//	  	 name=obj.name;
//	  	 age=obj.age;
//	  	 marks=new int;
//	  	 *marks=*obj.marks;
//	  	 cout<<"explicitly code define";	
//	  }	
//};
//
//int main(){
//	Student s("Aman",34,98);
//	Student s1(s);
//	s.display();
//	s1.display();
//	cout<<"========================\n";
//	s1.change_detail("Sohan",23,65);
//	s.display();
//	s1.display();		
//}

#include <iostream>
using namespace std;
class Student{
	int age,*marks;
	string name;
	public:
		Student(int a,int m,string n){
			name=n;
			age=a;
			marks=new int;
			*marks=m;
		}
        Student(Student &obj){
			name=obj.name;
			age=obj.age;
			marks=obj.marks;
		}