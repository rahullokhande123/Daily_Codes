#include <iostream>
using namespace std;
class Employee{
	public:
		string name;
		int eid,year;
		double salary;
		char gender;
		// It is a constructor.
		Employee(){
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter eid:";
			cin>>eid;
			cout<<"Enter year:";
			cin>>year;
			cout<<"Enter salary:";
			cin>>salary;
			cout<<"Enter Gender:";
			cin>>gender;
			cout<<"constructor call"<<endl;
		}
		
		 // Perametrize Constructor
		 Employee(int id,string n,char g, double s,int y){
		 	eid=id;
		 	name=n;
		 	gender=g;
		 	salary=s;
		 	year=y;
		 }
		
		void display(){
			cout<<"employee id :"<<eid<<endl;
			cout<<"Name:"<<name<<endl<<"year of service:"<<year<<endl;
			cout<<"Salary:"<<salary<<endl<<"gender:"<<gender<<endl;
			
		}
		void promotion(){
			if(year>5){
				cout<<"Congrats you got a promotion\n";
				salary+=10000; // eska means salary= salary+10000
				cout<<"Now you are salary is:"<<salary<<endl;
			}
			else
			   cout<<"Sorry You Are Not Aligabal For Promotion";
		}		
};
/*Constructor ke though*/
 int main(){
 	Employee e1(122,"Rahul",'M',50000,6);
 	e1.display();
 	e1.promotion();
 }
 
 

// 	Employee e1,e2;
// 	cout<<"Enter id,name,gender,salary,exprience: Employee1: ";
// 	cin>>e1.eid>>e1.name>>e1.gender>>e1.salary>>e1.year;
// 	cout<<"Enter id,name,gender,salary,exprience: Employee2: ";
// 	cin>>e2.eid>>e2.name>>e2.gender>>e2.salary>>e2.year;
// 	e1.display();
// 	e2.display();
// 	cout<<"-----employee 1 promption detail\n";
// 	cout<<endl;
// 	e1.promotion();
// 	e2.promotion();
