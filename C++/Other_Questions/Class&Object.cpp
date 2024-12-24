//============================ Qustion 1 ================================
//#include <iostream>
//using namespace std;
//class Book{
//	private:
//		int bid,qnt;
//	public:
//	   Book(int id, int q){
//	   	bid=id;
//	   	qnt=q;
//	   }	
//	void Purchase(){
//		int n;
//		cout<<"How many books do you want to purcase:";
//		cin>>n;
//		qnt=qnt+n;
//	}
//	void Sale(){
//		int s;
//		cout<<"How many books do you want to Sale:";
//		cin>>s;
//		qnt=qnt-s;
//	}
//	void currentstock(){
//		cout<<"Book Id No:"<<bid<<endl;
//		cout<<"Current Book Stock's:"<<qnt<<endl;
//	}
//};
//int main(){
//	Book b(6244,20);
//	b.Purchase();
//	b.Sale();
//	b.currentstock();
//}

//============================ Qustion 2 ================================

//#include <iostream>
//using namespace std;
//class Circle{
//	private:
//		int radius;
//		
//	public:
//		Circle(int r ){
//			radius=r;
//		}
//		void area_calculation(){
//			 cout<<3.14*radius*radius<<endl;
//		}
//		void perimeter(){
//			cout<<3.14*2*radius<<endl;
//		}
//		void display(){
//		     cout<<"Redius:"<<radius<<endl;
//		}
//};
//int main (){
//	Circle c(4);
//	c.display();
//	c.area_calculation();
//	c.perimeter();
//	}

//============================ Qustion 3 ================================

//#include <iostream>
//using namespace std;
//class Animal{
//	string name,category,details;
//	int no_lags;
//	void set_ditails(){
//		if(category=="herbivores") details="Amimal eat plant:";
//		else if(category=="carnivores") details="Amimal That Eat Only Meat:";
//		else if(category=="omnivores") details="Amimal That Eat Boath Plants & Meat:";
//	}
//	public:
//		Animal(string n, string c, int l){
//			name=n;
//			category=c;
//			no_lags=l;
//			set_ditails();
//		}
//		void displayAll(){
//			cout<<"Name"<<name<<endl;
//			cout<<"Category:"<<category<<endl;
//			cout<<"Amimal Leg's"<<no_lags<<endl;
//			cout<<details<<endl;
//		}
//		void displayCategory(){
//			cout<<"Category:"<<category<<endl;
//		}
//};
//int main(){
//	Animal a("Tiger","carnivores",4);
//	a.displayAll();
//	a.displayCategory();
//}

//============================ Qustion 4 ================================

//#include <iostream>
//using namespace std;
//class Resume{
//	private:
//		string name;
//		double per10,per12,perdegree;
//		bool working; 
//	public:
//		Resume(string n, double p1, double p2, double p3,bool w){
//			name=n;
//			per10=p1;
//			per12=p2;
//			perdegree=p3;
//			working=w;
//			
//		}
//		void update_percent(double p1, double p2, double p3){
//			per10=p1;
//			per12=p2;
//			perdegree=p3;
//		}
//		void update_name(string n){
//			name=n;
//		}
//		
//		void display(){
//			cout<<"Name:"<<name<<endl;
//			cout<<"10th Percenteg"<<per10<<endl;
//			cout<<"12h Percenteg"<<per12<<endl;
//			cout<<"Graduation"<<perdegree<<endl;
//			cout<<"Current Working "<<working<<endl;
//		}
//};
//int main (){
//	Resume r("Rahul",65,68,85,true);
//	r.display();
//	r.update_name("Arun");
//	r.update_percent(20,20,20);
//	r.display();
//}