//#include <iostream>
//using namespace std;
//int main(){
//	int row,column;
//	cout<<"Enter Row and Column:";
//	cin>>row>>column;
//	int a[row][column];
//	
//	for(int i=0;i<row;i++){
//		for(int j=0;j<column;j++){
//		cout<<"Enter the value of index"<<i<<j<<":"<<endl;
//		cin>>a[i][j];
//	}
//	}
////	for(int i=0;i<row;i++){
////	for(int j=0;j<column;j++){
////		cout<<"the value at index"<<i<<j<<":"<<a[i][j]<<endl;
////}
////}
//	
//       cout<<"Matrix Representation\n";
//       for(int i=0;i<row;i++){
//	   for(int j=0;j<column;j++){
//	   	cout<<a[i][j]<<" ";
//	   }
//	   cout<<endl;
//}
//}

//#include <iostream>
//using namespace std;
//int main(){
//	    int row,colume;
//        cout<<"Enter Row and Columne Number:"<<endl;
//        cin>>row>>colume;
//        int arr[row][colume];
//        for(int i=0;i<row;i++){
//    	for(int j=0;j<colume;j++){
//    		cout<<"enter vlues of index NO."<<i<<j<<":"<<endl;
//    		cin>>arr[i][j];
//		}
//	}
//	   cout<<"Metrix form:\n";
//	    for(int i=0;i<row;i++){
//    	for(int j=0;j<colume;j++){
//    		cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}	
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int row,colume;
//	cout<<"enter row and colume value:";
//	cin>>row>>colume;
//	int arr[row][colume];
//	for(int i=0;i<row;i++){
//		for(int j=0;j<colume;j++){
//			cout<<"enter value of index no."<<i<<j<<endl;
//			cin>>arr[i][j];
//		}
//	}
//	cout<<"Metrix Formet:\n";
//		for(int i=0;i<row;i++){
//		for(int j=0;j<colume;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//}

#include <iostream>
using namespace std;
int main(){
	int row,colume;
	cout<<"Enter row and colume no.";
	cin>>row>>colume;
	int arr[row][colume];
	for(int i=0;i<row;i++){
		for(int j=0;j<colume;j++){
			cout<<"enter value of index no."<<i<<j;
			cin>>arr[i][j];
		}
	}
	cout<<"Metrics Format:\n";
	for(int i=0;i<row;i++){
		for(int j=0;j<colume;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
       
