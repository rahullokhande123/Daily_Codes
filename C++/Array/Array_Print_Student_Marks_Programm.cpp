//#include <iostream>
//using namespace std;
//int main(){
//	int n,sum=0;
//	cout<<"How many students are there in a class:";
//	cin>>n;
//	int marks[n];
//	for(int i=0;i<n;i++){// Yaha (i=0) Es liye Liya H Kyoki Mamory Block me data 0 se 
//	                     // n-numbers tk jata h iski starting(base value)--->'0' hoti h.    
//		cout<<"Enter Marks For Student"<<i+1<<":";
//		cin>>marks[i];
//	}
//	for(int i=0;i<n;i++){
//		cout<<"Marks Of Student"<<i+1<<":"<<marks[i]<<endl;
//		sum=sum+marks[i];
//    }
//    cout<<"Class Total"<<sum<<endl;
//    cout<<"Class Average "<<sum/(float)n<<endl;
//}



//#include <iostream>
//using namespace std;
//using namespace std;
//int main(){
//	int n,sum=0;
//	cout<<"How many student in class:";
//	cin>>n;
//	int marks[n];
//	for(int i=0;i<n;i++){
//		cout<<"Enter Marks of students:";
//		cin>>marks[i];
//		sum=sum+marks[i];
//	}
//	for(int i=0;i<n;i++){
//		cout<<"Students Marks:"<<marks[i]<<endl;
//	}
//	    cout<<"Total Marks"<<sum<<endl;
//		cout<<"Avrage "<<sum/(float)n<<endl;
//}


#include <iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"How many student in class:";
	cin>>n;
	int marks[n];
	for(int i=0;i<n;i++){
	    cout<<"enter studentes marks:"<<i+1<<"-";
    	cin>>marks[i];	
	}
	for(int i=0;i<n;i++){
	    cout<<"Student"<<i+1<<"-"<<marks[i]<<" ";
	    cout<<endl;
		sum=sum+marks[i];	
	}
	cout<<"Total Marks:"<<sum<<endl;
	cout<<"Avrage"<<sum/(float)n;
	

}
