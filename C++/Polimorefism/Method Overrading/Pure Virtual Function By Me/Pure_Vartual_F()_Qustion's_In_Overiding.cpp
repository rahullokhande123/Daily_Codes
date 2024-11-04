//#include <iostream>
//using namespace std;
//class Employee{
//	protected:
//		string name,department;
//	public:
//		virtual void calculateSalary()=0;
//		virtual void displayDetails()=0;
//		void Information(){
//			cout<<"Show Salary Of Maneger and Worker:";
//		}
//		Employee(string n, string d){
//			name=n;
//			department=d;
//		}
//};
//class Manager:public Employee{
//	public:
//	Manager(string n, string d):Employee(n,d){
//	}
//	void displayDetails(){
//		cout<<"Name:"<<name<<endl;
//		cout<<"Department:"<<department<<endl;
//	}
//	void calculateSalary(){
//		cout<<"Salary+HRA+Car+Insurance"<<endl;
//	}
//};
//class Worker:public Employee{
//	public:
//	Worker(string n, string d):Employee(n,d){
//	}
//	void displayDetails(){
//		cout<<"Name:"<<name<<endl;
//		cout<<"Department:"<<department<<endl;
//	}
//	void calculateSalary(){
//		cout<<"Salary+HRA+PF+Insurence"<<endl;
//	}
//};
//int main(){
//	Employee *p= new Manager("Rahul","Trainer");
//	Employee *p2= new Worker("Sahil","Accountant");
//	p->displayDetails();
//	p->calculateSalary();
//	p2->displayDetails();
//	p2->calculateSalary();
//}

//=====================================================================

//#include <iostream>
//using namespace std;
//class Media{
//	public:
//		virtual void Play()=0; // Pure Vartual F()-- Decliar Krna
//		void informantion(){
//			cout<<"Play Audio and video \n";
//		}
//};
//class Video:public Media{
//	public:
//		void Play(){
//			cout<<"Play Video \n";
//		   }
//};
//class Audio:public Media{
//	public:
//		void Play(){
//			cout<<"Play Audio";
//		   }
//};
//int main (){
//	Media *p= new Video;
//	Media *p1= new Audio;
//	p->Play();
//	p1->Play();
//	
//}
