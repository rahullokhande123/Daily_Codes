#include <iostream>
using namespace std;

	void move_zero(int a[],int n){
		int j=0;
		for(int i=0;i<n;i++){
			if(a[i]!=0){
				a[j]=a[i];
				j++;
			}
		}
		while(j<n){
			a[j]=0;
			j++;
		}
	}
    int main(){
	int ar[7]={0,1,1,0,1,0,1};
	move_zero(ar,7);
	for(int i=0;i<7;i++){
		cout<<ar[i]<<" ";
	}
}