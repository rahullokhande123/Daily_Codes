#include <iostream>
using namespace std;
//class Employee{
//	int eid,year;
//	double sal;
//	string name,dep;
//	
//	public:
//		Employee(int id, string n, string dp,double s, int y){
//			eid=id;
//			name=n;
//			dep=dp;
//			year=y;
//			sal=s;	
//		}
//		void display(){
//			cout<<"Eid: "<<eid<<endl<<"Name: "<<name<<endl<<"Department: "<<dep<<endl;
//			cout<<"Year of service: "<<year<<endl<<"Salary: "<<sal<<endl;
//		}
//	
//};
//int main(){
//	Employee e(101,"Rohan","HR",5,40000);
//	e.display();
//}
//============================ Virtual Function Quastion's ==================================
//class Employee{
//	public:
//		virtual void prepare_salary(){
//		   cout<<"Salary + HRA\n";
//		  }
//	    void promotion(){
//		   cout<<"year>2-->Promotion\n";
//		}
//};
//class Executive: public Employee{
//	public:
//		void prepare_salary(){
//		   cout<<"Salary + HRA+Company Shares+perks\n";
//		  }
//};
//int main(){
//	// Method In Heap Time
//    Employee *p= new Executive;
//    p->prepare_salary();
//    p->promotion();
//    //when virtual keyword is used with f() in parent class
//    // pointer dependency vanish 
//    // now we depend on object creation
//    
//    cout<<"\n---------------------------\n";
//    
//    // Method Of State Time
////    Employee obj;
////    obj.prepare_salary();
////    obj.promotion();
//}

//==================================================================================

//#include <iostream>
//using namespace std;
//class Employee{
//	public:
//		virtual void prepare_salary(){
//			cout<<"HRA + Company Share's+ PF"<<endl;
//		}
//		void promotion(){
//			cout<<"Critearea for promotion- 3 Year:"<<endl;
//		}
//};
//class Excative: public Employee{
//	void prepare_salary(){
//		cout<<"HRA + Company Share's + Cab + Insurence + PF"<<endl;
//	}
//};
//int main(){
//	Employee *p=new Excative;
//	p->prepare_salary();
//	p->promotion();
//}
