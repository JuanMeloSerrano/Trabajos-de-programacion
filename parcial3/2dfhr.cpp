 #include <iostream>
using namespace std;
int main (){
	const int n=4;
	int i, j, a[n][n] = {};
	
	for(i=0; i<n; i++){
		a[i][(n-1)-i]=1;
		for(j=0; j<n; j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
return 0;
}
