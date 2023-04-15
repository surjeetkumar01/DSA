#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    int x; cin>>x;


    int st = 0;
    int ed = n-1;

    bool check = false;

while(st<=ed)
{
    int mid = (st+ed)/2;

    if(arr[mid]==x)
    {
       check = true;
       break;
    }
    else if(arr[mid]>x)
    {
       ed = mid-1;
    }
    else
    {
       st = mid+1;
    }
}
    cout<<check<<endl;

    return 0;
}