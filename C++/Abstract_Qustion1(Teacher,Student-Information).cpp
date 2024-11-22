#include <iostream>
using namespace std;

//============================ Qustion 1 ===================================

// class Person {
//  protected:
// 		string name,address;	
// };
// class Teacher: protected Person{
// 	public:
// 	Teacher(string n,string a){
// 		name=n;
// 		address=a;
// 	}
// 	virtual void display(){
// 		cout<<"Name"<<name<<endl;
// 		cout<<"Address:"<<address<<endl;
// 	}
// };
// class Student: protected Person{
// 	public:
// 	Student(string n,string a){
// 		name=n;
// 		address=a;
// 	}
//    void display(){
// 		cout<<"Name:"<<name<<endl;
// 		cout<<"Address:"<<address<<endl;
// 	}
// };
// int main(){
//    Teacher t("Mr. Sanjay Tiwari","MP Nage Zone 1 Near By Cybrom");
//    Student s("Manoj Shukla","Ashoka Garden Bhopal Madhya Pradesh");
//    t.display();
//    s.display();
   
// }

// ========================================= Question 2 =========================================

// class Shape{
// 	public:
// 		virtual void calculate_area()=0;
// 		virtual void perimeter()=0;
// 		void information(){
// 			cout<<"Show calculate area and perimeter of Circle And Rectangle";
// 		}
// };
// class Circle:public Shape{
// 	void calculate_area(){
// 		double n=4.0;
// 		double area=3.14*n*n;
// 		cout<<"Circ-Calculate area\n"<<area<<endl;
// 	}
// 	void perimeter(){
// 		double n=4.0;
// 		double perimeter=2*3.14*n; // 2PaiR
// 		cout<<"Circ-Perimeter\n"<<perimeter<<endl;
// 	}
// };
// class Rectangle:public Shape{
// 	void calculate_area(){
// 		double l=2,b=4;
// 		double area=l*b;
// 		cout<<"Rect-Calculate area\n"<<area<<endl;
// 	}
// 	void perimeter(){
// 		double l=2,b=4;
// 		double perimeter=2*(l+b);
// 		cout<<"Rect-Perimeter\n"<<perimeter<<endl;
// 	}
// };
// int main(){
// 	Shape *p= new Circle;
// 	Shape *p2= new Rectangle;
// 	p->calculate_area();
// 	p->perimeter();
// 	p2->calculate_area();
// 	p2->perimeter();
// }

//================================ Qustion 3 ===============================
class BankAccount{
	public:
		virtual void deposit()=0;
		virtual void withdraw()=0;
		void information(){
			cout<<"Checking BankAcoount";
		}
};
class SavingsAccount:public BankAccount{

	void deposit(){
		int amount=10000,deposit=12000;
		    deposit=deposit+amount;
		    cout<<"SavingsAccount Amount After Deposit"<<deposit<<endl;
	}
	void withdraw(){
		int amount=10000,deposit=22000,withdraw=7000;
		deposit=deposit-withdraw;
		cout<<"SavingsAccount Amount After Withdraw"<<deposit<<endl;
	}
};
class CheckingAccount:public BankAccount{
	void deposit(){
		cout<<"CheckingAccount Deposit\n";
	}
	void withdraw(){
		cout<<"CheckingAccount Withdraw\n";
	}
};
int main(){
	BankAccount *p= new SavingsAccount;
	BankAccount *p2= new CheckingAccount;
	p->deposit();
	p->withdraw();
	p2->deposit();
	p2->withdraw();
}