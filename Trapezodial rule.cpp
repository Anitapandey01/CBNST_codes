#include<bits/stdc++.h>
using namespace std;

double func(double x){
    return 1/(1+pow(x,2));
}

void trapezoidalRule(double a,double b, int n){
    double h=(b-a)/n;
    double sum=func(a)+func(b);
    for(int i=1;i<n;i++){
        double x=a+(i*h);
        sum+=2*func(x);
    }
    cout<<"Approx value of Intergral is: "<<(h/2)*sum<<endl;
}

int main(){
    double a,b;
    int n;
    cout<<"Enter lower and upper limit of integration: ";
    cin>>a>>b;
    cout<<"Enter number of Sub-Interval: ";
    cin>>n;
    if(n<0){
    	cout<<"suninterval must be positive"<<endl;
    	return -1;
	}
    trapezoidalRule(a,b,n);
    return 0;
}


/*#define f(x) 1/(1+pow(x,2))
using namespace std;
int main()
{
 float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;
 cout<<"Enter lower limit of integration: ";
 cin>>lower;
 cout<<"Enter upper limit of integration: ";
 cin>>upper;
 cout<<"Enter number of sub intervals: ";
 cin>>subInterval;
 stepSize = (upper - lower)/subInterval;
 integration = f(lower) + f(upper);

 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  integration = integration + 2 * (f(k));
 }
 integration = integration * stepSize/2;
 cout<< endl<<"Required value of integration is: "<< integration;
 return 0;
}*/
