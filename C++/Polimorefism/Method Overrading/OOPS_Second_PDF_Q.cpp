
// ============================= Quastion 1 =================================

#include <iostream>
using namespace std;
class Shapes{
	protected:
		int d1,d2;
	public:
		Shapes(int a){
			d1=a;
		}
		Shapes(int a,int b){
			d1=a;
			d2=b;
		}
		virtual void calculate_area(){
			cout<<"Area calulalet here";
		}
};
class Circle:public Shapes{
	public:
		Circle(int a): Shapes(a){
			
		}
		void calculate_area(){
			cout<<"Area Of Circle:"<<3.141*d1*d1<<endl;
		}
};
class Squre:public Shapes{
	public:
		Squre(int a):Shapes(a){
			
		}
		void calculate_area(){
			cout<<"Area Of Square:"<<d1*d1<<endl;
		}
};
class Tringal:public Shapes{
	public:
		Tringal(int a,int b):Shapes(a,b){
			
		}
		void calculate_area(){
			cout<<"Area Of Tringle:"<<0.5*d1*d2<<endl;
		}
};
int main(){
	Shapes *C=new Circle(2);
	Shapes *S=new Squre(2);
	Shapes *T=new Tringal(2,6);
	
	Shapes * Ar[]={C,S,T};
	for(int i=0;i<3;i++)
	       Ar[i]->calculate_area();

}

// ============================= Quastion 2 =================================

//#include <iostream>
//using namespace std;
//class Complex{
//	private:
//		int a,b;
//	public:
//		Complex(int n1,int n2){
//			a=n1;
//			b=n2;
//		}
//	void display(){
//		cout<<a<<"+"<<b<<"i"<<endl;
//	}
//	Complex operator +(Complex obj){
//		Complex temp(0,0);
//		temp.a=a+obj.a;
//		temp.b=b+obj.b;
//		return temp;
//	}
//	Complex operator -(Complex obj1){
//		Complex temp(0,0);
//		temp.a=a-obj1.a;
//		temp.b=b-obj1.b;
//		return temp;
//	}
//	Complex operator *(Complex obj2){
//		Complex temp(0,0);
//		temp.a=a*obj2.a;
//		temp.b=b*obj2.b;
//		return temp;
//	}
//	Complex operator /(Complex obj3){
//		Complex temp(0,0);
//		temp.a=a/obj3.a;
//		temp.b=b/obj3.b;
//		return temp;
//	}
//};
//int main(){
//	Complex c(4,3),d(2,4);
//	Complex hold=c+d;
//	hold.display();
//}

// ============================= Quastion 3 =================================

//#include <iostream>
//using namespace std;
//class BankAccount{
//	protected:
//		double bal;
//	public:
//		virtual void deposit()=0;
//		virtual void withdraw()=0;
//		virtual void display()=0;
//	BankAccount(double b){
//			bal=b;
//		}	
//};
//class SavingsAccount: public BankAccount{
//	public:
//		SavingsAccount(double b ):BankAccount(b){
//			
//		}
//	void deposit(){
//		int m;
//		cout<<"SavingsAccount- how many money want to deposit: ";
//		cin>>m;
//		bal=bal+m;
//	}
//	
//	void withdraw(){
//		int n;
//		cout<<"SavingsAccount- how many money want to withdraw: ";
//		cin>>n;
//		bal=bal-n;
//	}
//	void display(){
//		cout<<bal;
//	}
//};
//class CheckingAccount: public BankAccount{
//	public:
//	  CheckingAccount(double b):BankAccount(b){
//	   }
//	void deposit(){
//		int m;
//		cout<<"CheckingAccount- How Many Money Want To deposit: ";
//		cin>>m;
//		bal=bal+m;
//	}
//	
//	void withdraw(){
//		int n;
//		cout<<"CheckingAccount- How Many Money Want To Withdraw:";
//		cin>>n;
//		bal=bal-n;
//	}
//	void display(){
//		cout<<"Current Balance: "<<bal<<endl;
//	}
//
//};
//int main(){
//	BankAccount *p=new CheckingAccount(20000);
//	BankAccount *p1=new SavingsAccount(20000);
//	p->deposit();
//	p->withdraw();
//	p->display();
//	p1->deposit();
//	p1->display();
//	p1->withdraw();
//	p1->display();
//  //p1->display();
//}

// ============================= Quastin 4 ================================
//#include <iostream>
//using namespace std;
//class Animal{
//	public:
//	virtual void makeSound(){
//		cout<<"Show Animal Sound:";
//	}
//	virtual void move(){
//		cout<<"Movment Of Animals:";
//	}	
//};
//class Cat: public Animal{
//	public:
//	void makeSound(){
//		cout<<"Cat Sound-Meows:"<<endl;
//	}
//	void move(){
//		cout<<"Cat Movment-Walk Trot Canter And Run:"<<endl;
//	}
//};
//class Dog: public Animal{
//	public:
//	void makeSound(){
//		cout<<"Dog Sound-A Bark:"<<endl;
//	}
//	void move(){
//		cout<<"Dog Movment- Run Fastly:"<<endl;
//	}
//};
//int main(){
//	Cat c;
//	Dog d;
//	c.makeSound();
//	c.move();
//	d.makeSound();
//	d.move();
//}
//========================= Quastion 5 ==============================

//#include <iostream>
//using namespace std;
//class  Employee{
//	protected:
//		string name;
//		int id;
//	Employee(string n, int i){
//		name=n;
//		id=i;
//	}
//	virtual void displayDetails(){
//		
//	}	
//
//};
//class Maneger:public Employee{
//	public:
//	Maneger(string n, int i):Employee(n,i){
//		
//	}
//	void displayDetails(){
//		cout<<"Name:"<<name<<endl;
//		cout<<"ID"<<id<<endl;
//	}
//};
//class Engineer:public Employee{
//	public:
//		string des;
//	Engineer(string n, int i,string d):Employee(n,i){
//		des=d;
//	}
//	void displayDetails(){
//		cout<<"Name:"<<name<<endl;
//		cout<<"ID:"<<id<<endl;
//		cout<<"Designation:"<<des<<endl;
//	}
//};
//int main(){
//	Maneger m("Rahul",101);
//	m.displayDetails();
//	Engineer e("Rahul",122,"Engineer");
//	e.displayDetails();	
//}