#include <iostream>
using namespace std;
class Employee{
	private:
		string name, dep,des,performance;
		int eid;
		void set_performance(){
			int n;
			cout<<"Enter any given number:\n";
			cout<<"bad-0,avg-1,good-2,verygood-3,excellent-4:\n";
			cin>>n;
			if(n==0)
			   performance="bad:";
			else if(n==1)
			   performance="avg:";
			else if(n==2)
			   performance="good:";
			else if(n==3)
			   performance="verygood:";
			else if(n==4)
			   performance="Excellent:";
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
int main(){
	Employee c;
	c.setter();
	c.getter();
}
