#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int j=0;j<n;j++)
        cin>>a[j];
        bool found=false;
        int sum=a[0];
        int start=0;
        for (int j = 1; j <= n; j++) 
        { 
         
        while (sum > s && start < j-1) 
        { 
            sum = sum - a[start]; 
            start++; 
        } 
  
        if (sum == s) 
        { 
            cout<<start+1<<" "<<j<<"\n";
            found=true;
            break; 
        } 
        if (j < n) 
          sum+=a[j]; 
    } 
    if(!found)
        {cout<<"-1";break;}
        } 
		return 0;
}
