//#include <iostream>
//using namespace std;
//int main(){
//	int ar[5]={1,2,4,55,6};
//	cout<<ar[8] // junk value print kr dega 
//	
//	cout<<"enter number:";
//	cin>>ar[30] // undefind behaviar show karega.
//}

// WAP to create a array of size n, 
// after creation,search a element ask by a user, if search operation pass return true,
// otherwise False.


#include <iostream>
using namespace std;

void search(int a[],int n){
	string ch;
	int num;
	while(1){
		int fleg=0;
		cout<<"enter number , which you want to search:";
		cin>>num;
		for(int i=0;i<n;i++){
			if(a[i]==num){
				cout<<"Match found at index"<<i<<endl;
				fleg=1;
		    	}
		   }
		     if(fleg==0){
		     	cout<<"match not found"<<endl;
	        	}
//		else(num="exit"){
//			cout<<"Exit Your Program";
//			break;
//		}
	}
};
void create_array(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"enter number:";
		cin>>a[i];
	}
}
void display(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int size;
	cout<<"enter size:";
	cin>>size;
	int arr[size];
	create_array(arr,size);
	display(arr,size);
	search(arr,size);
}


// =====================================================

//#include <iostream>
//using namespace std;
//int main(){
//	int r,c;
//	cout<<"enter numbre's':";
//	cin>>r>>c;
//	int arr[r][c];
//	for(int i=0;i<r;i++){
//    	for(int j=0;j<c;j++){
//    	  cout<<"enter vlue of index no.";
//    	  cin>>arr[i][j];	
//		}
//		
//	}
//	for(int i=0;i<r;i++){
//    	for(int j=0;j<c;j++){
//    	 cout<<arr[i][j]<<" ";	
//		}
//          cout<<endl;
//	}
//
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int arr[3][3]={11,22,33,44,55,66,77,88,99};
//	cout<<arr[0][0]<<" ";
//	cout<<arr[0][1]<<" ";
//	cout<<arr[0][2]<<" ";
//	cout<<endl;
//	cout<<arr[1][0]<<" ";
//	cout<<arr[1][1]<<" ";
//	cout<<arr[1][2]<<" ";
//	cout<<endl;
//	cout<<arr[2][0]<<" ";
//	cout<<arr[2][1]<<" ";
//	cout<<arr[2][2]<<" ";
//	
//}


#include <iostream>
using namespace std;
f(int a[],int n,int u){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]==u){
			count++;
		}
	}
	cout<<count;
}