#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for (int i = 0; i <n; i++)
    {
       cin>>a[i]>>b[i];
       if (a[i]==b[i]&&a[i]!=0&&b[i]!=0)
       {
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
    
}