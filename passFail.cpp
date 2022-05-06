#include<iostream>
using namespace std;
int main(){
    int n,N;
    cin>>n;
    int x[n],y[n],z[n];
    for (int i = 0; i <n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    for (int i = 0; i <n; i++)
    {
        if ((y[i]*3)+((x[i]-y[i])*-1)>=z[i])
        {
            cout<<"PASS"<<endl;
           
        }
        else
        {
            cout<<"FAIL"<<endl;
        }
        
     
    }
    
}