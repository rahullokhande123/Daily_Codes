#include <iostream>
using namespace std;

//================== Qustion 1 By Normal Inheritance =================
class Person{
	protected:
		string name,address;
};
class Teacher:public Person{
	public:
		Teacher(string n, string a){
			name=n;
			address=a;
		}
	void display(){
	   cout<<"Teachaer Name:"<<name<<endl;
	   cout<<"Address:"<<address<<endl;
	   }
};
class Student:public Person{
	public:
		Student(string n, string a){
			name=n;
			address=a;
		}
	void display(){
	   cout<<"Student Name:"<<name<<endl;
	   cout<<"Address:"<<address<<endl;
	   }
};
int main(){
	Teacher t("Arun","Bhopal");
	Student s("Rahul","Betul");
	t.display();
	s.display();
	
}

//====================== Qustion 2 By Normal Inheritance ======================
//
//class Shape{
//	protected:
//		int redius;
//		double l,b;
//};
//class Circle:public Shape{
//	public:
//		Circle(int r){
//			redius=r;
//		}
//	void Calculate_area(){
//	   double area=3.14*redius*redius;
//	   cout<<"Area Of Circle:"<<area<<endl;
//	   }
//	void Perimeter(){
//	   double Perimeter=3.14*2*redius;
//	   cout<<"Perimeter Of Circle:"<<Perimeter<<endl;
//	   }
//};
//class Rectangle:public Shape{
//	public:
//		Rectangle(double len,double bre){
//			l=len;
//			b=bre;
//		}
//	void Calculate_area(){
//	   double area=l*b;
//	   cout<<"Area Of Rectangle:"<<area<<endl;
//	   }
//	void Perimeter(){
//	   double Perimeter=2*(l+b);
//	   cout<<"Perimeter Of Rectangle:"<<Perimeter<<endl;
//	   }
//};
//int main(){
//	Circle c(4);
//	Rectangle r(2.0,4.0);
//	c.Calculate_area();
//	c.Perimeter();
//	r.Calculate_area();
//	r.Perimeter();	
//}

//====================== Qustion 3 By Normal Inheritance ======================

//#include <iostream>
//using namespace std;
//
//
//class BankAccount{
//	protected:
//		int amount,deposit,withdraw;
//	public:
//	   BankAccount(int a,int d,int w){
//	     	amount=a;
//		    deposit=d;
//		    withdraw=w;
//	}	
//};
//class SavingAccount:public BankAccount{
//	public:
//	   SavingAccount(int a,int d,int w):BankAccount(a,d,w){    
//	}
//	void bankdetails(){
//		cout<<"Amount"<<amount<<endl;
//		cout<<"Deposit"<<deposit<<endl;
//		cout<<"Withdraw"<<withdraw<<endl;
//	}
//};
//class CheckingAccount:public SavingAccount{
//	public:
//       CheckingAccount(int a,int d,int w):SavingAccount(a,d,w){    
//	}
//	void balance(){
//		cout<<"Total Amount:"<<amount+deposit-withdraw;
//	}
//};
//int main(){
//	
//	CheckingAccount c(10000,5000,2000);
//
//	c.bankdetails();
//	c.balance();
////	c.bankdetails();
//}

