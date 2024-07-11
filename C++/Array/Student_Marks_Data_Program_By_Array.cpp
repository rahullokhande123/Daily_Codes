//#include <iostream>
//using namespace std;
//int main(){
//	int n,sum=0,high,small;
//	cout<<"How Many Students In Class:";
//	cin>>n;
//	int marks[n];
//	string name[n];
//	for(int i=0;i<n;i++){
//		cout<<"Enter Student Name:"<<i+1<<" ";
//		cin>>name[i];
//		cout<<"Student Marks Of- : "<<i+1<<" ";
//		cin>>marks[i];
//	}
//	    cout<<"Array of students having:"<<n<<" Students = {";
//	for(int i=0;i<n;i++){
//	    cout<<"["<<name[i]<<"-"<<marks[i]<<"]"<<"}"<<endl;
//             sum=sum+marks[i];
//    }
//        cout<<"Total Marks Of Class :"<<sum<<endl;
//        cout<<"Avrage Marks Of Student:"<<sum/(float)n<<endl;
//      
//        
//        
//        
//        high=marks[0]; small=marks[0];  //44    6
//       int high_index,low_index;     //                {"ajay","aman","sagar"}
//						    //   0  1   2  3
//    for(int i=0;i<n;i++){   // 23 44 6  48
//    	if(marks[i]>high)  {//   48>44
//    	     	high=marks[i];  //high=48
//    	     	high_index=i;  // high_index=3;
//    	}
//    	if(marks[i]<small){  //  6<23	
//    		small=marks[i];    // 6
//    		low_index=i;
//	       }
// }
//	    cout<<"Highest No. In Class:"<<":"<<high<<"obtained by:"<<name[high_index]<<endl;
//		cout<<"Smallest No. In Class:"<<":"<<small<<"obtained by:"<<name[low_index]<<endl;
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int n,sum=0,high,low;
//	cout<<"How Many Student's In Class:";
//	cin>>n;
//	int arr[n];
//	string name[n];
//	for(int i=0;i<n;i++){
//		cout<<"Enter Name Of Students:"<<i+1<<":";
//		cin>>name[i];
//		cout<<"Enter marks of students:"<<i+1<<":";
//		cin>>arr[i];
//	}
//	    
//		cout<<"Array of students having"<<n<<"Students={";
//		for(int i=0;i<n;i++){
//			if(i<n){
//			   cout<<"["<<name[i]<<"-"<<arr[i]<<"],";	
//			}
//			else if(i=n-1){
//				cout<<"["<<name[i]<<"-"<<arr[i]<<"]";
//			}
//			    sum=sum+arr[i];
//		}
//		cout<<"}"<<endl;
//		high=arr[0];
//	    low=arr[0];
//		string index_low=name[0],
//		index_high=name[0];
//		for(int i=0;i<n;i++){
//
//		    if(high<arr[i]){
//		    	high=arr[i];
//		    	index_high=name[i];
//			}
//			else if(low>arr[i]){
//				low=arr[i];
//				index_low=name[i];
//			}
//		}  
//		cout<<"Total Marks of Class:"<<sum<<endl;
//		cout<<"Avrage Marks of Class:"<<sum/(float)n<<endl;
//		cout<<"Highest No. In Class:"<<index_high<<"-"<<high<<endl;
//		cout<<"Loghest No. In Class:"<<index_low<<"-"<<low<<endl;
//}



#include <iostream>
using namespace std;
int main(){
	int n,sum=0,high,low;
	cout<<"How many student in class:";
	cin>>n;
	int arr[n];
	string name[n];
	for(int i=0;i<n;i++){
	   cout<<"enter name"<<i+1<<":";
	   cin>>name[i];
	   cout<<"enter marks"<<i+1<<":";
	   cin>>arr[i];	
	}
	cout<<"Student DATA-"<<"{";
	for(int i=0;i<n;i++){
		cout<<"["<<name[i]<<"-"<<arr[i]<<"]";
		sum=sum+arr[i];
	}
	cout<<"}";
		high=arr[0];
		low=arr[0];
	string index_high=name[0],
	index_low=name[0];
	for(int i=0;i<n;i++){
	
		if(arr[0]<high){
			high=arr[i];
			index_high=name[i];
		}
		else if(arr[i]<low){
			low=arr[i];
			index_low=name[i];
		}
	}
	cout<<"total Marks:"<<sum<<endl;
	cout<<"Avrage Marks:"<<sum/(float)n<<endl;
	cout<<"Highest"<<index_high<<high<<endl;
	cout<<"Lowghest"<<low<<endl;
}

