#include <iostream>
using namespace std;
int main(){
	int n,sum=0,high;
	cout<<"How many studendet in class:";
	cin>>n;
	int marks[n];
	for(int i=0;i<n;i++){
		cout<<"Enter Number:"<<i+1<<":";
		cin>>marks[i];
	}	for(int i=0;i<n;i++){
		cout<<"Marks Of Students:"<<i+1<<":"<<marks[i]<<endl;
		sum=sum+marks[i];
    }
 
    high=marks[0];
    cout<<"Array of student having"<<" "<<n <<"students={ ";
    for(int i=0;i<n;i++){
 		cout<<marks[i]<<",";
 		if(marks[i]>high)
 		      high=marks[i];
 		  }
 		  cout<<"}\n";
 		  cout<<"Highest No. In Class"<<"="<<high;
}


//#include <iostream>
//using namespace std;
//int main(){
//	int n,sum=0,high;
//	cout<<"How Many Student In Class:";
//	cin>>n;
//	int marks[n];
//	for(int i=0;i<n;i++){
//		cout<<"Enter Student Marks:"<<i+1<<":";
//		cin>>marks[i];
//		sum=sum+marks[i];
//	}
//	high=marks[0];
//	for(int i=0;i<n;i++){
//		cout<<"students marks:"<<i+1<<":"<<marks[i]<<endl;
//		if(marks[i]>high){
//			high=marks[i];
//		}		
//}
//        cout<<"Highest"<<high<<endl;
//        cout<<"Total Marks:"<<sum<<endl;
//	    cout<<"Avrege Marks:"<<(float)n/sum<<endl;
//}
