#include <iostream>
using namespace std;
class Media{
	public:
		virtual void Play()=0; // Pure Vartual F()-- Decliar Krna
		void informantion(){
			cout<<"Play Audio and video \n";
		}
};
class Video:public Media{
	public:
		void Play(){
			cout<<"Play Video \n";
		   }
};
class Audio:public Media{
	public:
		void Play(){
			cout<<"Play Audio";
		   }
};
int main (){
	Media *p= new Video;
	Media *p1= new Audio;
	p->Play();
	p1->Play();
	
}
