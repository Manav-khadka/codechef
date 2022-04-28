#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], m[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i]; // input
        m[i] = (b[i] / a[i]);
    }
    for (int i = 0; i < n; i++)
        if (b[i] % a[i] == 0)
        {

            cout<<m[i]-1<<" ";}
        else
            {
                cout<<m[i]<<" ";
            }
            

            
        
}