#include <iostream>
#include <fstream>
// fstream--> ifstream,ofstream,fstream
using namespace std;
int main(){
	ofstream obj1;
	obj1.open("E:\\xyz.txt");
//	obj1<<"this is my contant\n";
	obj1<<"xxxxxxxxxxxxxxxxxxxxxxxxxxx";
	obj1.close();
}

//===================================================================================

//when open(file name _path,opening_mode)
//write mode --> default , out + trunc(Delet Krna)
// |-->wertical bar
// mode(ios) class_name::mode_name1 | class_name::mode_name2
//==================================================================================

#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream wr;
	wr.open("new.txt",ios::out|ios::app);
	wr<<"\n this is today's content \n I'm Rahul\n I'm Fullstack Web Deloper:\n";
	wr<<"yyyyyyyyyyyyyyyyyyyyyyyyyy\n";
	wr.close();
}





