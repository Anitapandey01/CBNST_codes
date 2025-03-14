#include<iostream>
using namespace std;
int main(){
	 float x[20], y[20][20];
	 int i,j, n;
	 cout << "Enter number of data:" << endl;
	 cin >> n;
	 cout << "Enter data: " << endl;
	 for(i = 0; i < n ; i++){
	  cout << "x[" << i << "] = ";
	  cin >> x[i];
	  cout << "y[" << i <<"] = ";
	  cin >> y[i][0];
	 }
	 float sum,p,h,u;
	 float a=5;
	 for(i = 1; i < n; i++){
	  for(j = 0; j < n-i; j++){
	   y[j][i] = y[j+1][i-1] - y[j][i-1];
	  }
	 }
	 for(i = 0; i < n; i++){
	  cout << x[i];
	  for(j = 0; j < n-i ; j++){
	   cout << "\t" << y[i][j];
	  }
	  cout << endl;
	 }
	 p=1.0;
	 sum=y[0][0];
	 h=x[1]-x[0];
	 u=(a-x[0])/h;
	 for(j=1;j<n;j++){
	 	p=p*(u-j+1)/j;
	 	sum=sum+p*y[0][j];
	 }
	 cout<<"value of y at x=%0.1f if %0.3f"<<a<<endl<<sum<<endl;
	 return 0;
}



