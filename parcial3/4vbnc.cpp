 #include <iostream>
using namespace std;
int main (){
	int a[4][4]={{20,15,1,10},{35,20,14,9},{3,8,10,2},{34,22,17,27}};
	int sum;
	for(int j=0;j<4; j++){
		sum =0;
		for(int i=0; i<4; i++){
			sum=sum+a[i][j];

	}
	cout<<" "<<sum;
	}
return 0;
}
