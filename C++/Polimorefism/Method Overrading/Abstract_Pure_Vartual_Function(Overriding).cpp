#include <iostream>
using namespace std;
class RBI{
	public:
		virtual void interest()=0; // Pure Vartual F()-- Decliar Krna
		virtual void reportate()=0;
		void informantion(){
			cout<<"Interest rate should be defined by respective bank \n";
		}
};
class SBI:public RBI{
	public:
		void interest(){
			cout<<"SBI interest rate is 5% \n";
		   }
		void reportate(){
			cout<<"SBI reportate rate is 8% \n";
		   }
		   // chil class me dono decliration ko define krna jaruri hota h , nhi to 
		   //yaha output nhi deta h
};
int main (){
	RBI *p= new SBI;
	p->interest();
	p->reportate();
}
