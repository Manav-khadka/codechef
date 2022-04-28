#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x[n],y[n],z[n];
	for (int i=0;i<n;i++) {
	    cin>>x[i]>>y[i]>>z[i];
	}
	for (int i=0;i<n;i++) {
	    cout<<x[i]*y[i]*z[i]<<endl;
	}
	return 0;
}
