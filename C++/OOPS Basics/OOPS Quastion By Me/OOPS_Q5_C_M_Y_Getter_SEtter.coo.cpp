#include <iostream>
using namespace std;
class Car{
	protected:
		string company,model;
		int year;
	public:
		Car(string c,string m,int y){
			company=c;
			model=m;
		    year=y;
			}
		void gettet(){
			cout<<"Company:"<<company<<endl<<"Model:"<<model<<endl;
			cout<<"Year:"<<year;
		}
		void setter(string c,string m,int y){
			company=c;
			model=m;
		    year=y;
		}
};
int main(){
	Car c("Maruti","A25",2023);
	c.setter("Audi","C.class",2024);
	c.gettet();
	}
