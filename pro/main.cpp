#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
   int  arr[50];

    arr[1]=1;
    arr[2]=1;
    for(int i=0; i<n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];

    }
    return i;
}

// Driver code
int main()
{
    int n ;
    cin>>n;

    cout << fib(i);
    return 0;
}
