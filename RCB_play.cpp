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
        if ((x[i]+(2*z[i]))>=y[i])
        {
            cout<<"YES"<<endl;
           
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
     
    }
    
}