#include <iostream>
using namespace std;
class Employee{
	protected:
		string name, dep,des,performance;
		int eid;
		void set_performance(){
			int n;
			cout<<"Enter any given number:\n";
			cout<<"bad-0,avg-1,good-2,verygood-3,excellent-4:\n";
			cin>>n;
			if(n==0)
			   performance="bad";
			else if(n==1)
			   performance="avg";
			else if(n==2)
			   performance="good";
			else if(n==3)
			   performance="verygood";
			else if(n==4)
			   performance="Excellent";
		}
		public:
			void setter(){
			cout<<"Enter eid,name,dep,des:";
			cin>>eid>>name>>dep>>des;
			set_performance();	
			}
			void getter(){
				cout<<"id:"<<eid<<"Name:"<<name<<endl;
				cout<<"Departmnt:"<<dep<<"Designation:"<<des<<endl;
				cout<<"Your Yearly Performance:"<<performance;
			}
};
class EmpSalary : public Employee{
	private:
		double salary,basic,hra,da,pf;
	public:
		EmpSalary(double b,double h, double da, double pf){
			basic=b;
			hra=h;
			da=da;
			pf=pf;
			salary=basic+hra+da-pf;
		}
		void display(){
			getter();
			cout<<"\nSalary:"<<salary;
		}
		void bonus(){
			if(performance=="bad"){
				cout<<"You Are Not Aligable:";
			}
			else if(performance=="avg"){
				cout<<"You Are Not Aligable:";
			}
			else{
				cout<<"Congrats you are get bonus:"<<2000;
				salary=salary+2000;
			}
		}
};
int main(){
	EmpSalary e(20000,5000,18000,6000);
	e.setter();
	e.bonus();
    e.display();
}
