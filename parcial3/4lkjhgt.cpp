 #include <iostream>
using namespace std;
int main (){
	int a[]={9,7,-6,3,-1};
	int temp;
	for(int i=0;i<4; i++){
		for(int j=i+1; j<5; j++){
			if(a[i]<a[j]){
				temp=a[j];
				a[i]=a[j];
				a[j]=temp;
			}

	}
	}
	for(int i=0; i<5; i++){
		
			cout<<a[i];
	}
return 0;
}
