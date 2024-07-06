//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N){
     if(N==0)
        {
            return 0;
        }
        if(N==1)
        {
            return 1;
        }
        long c=0;
        long a=0;
        long b=1;
        long sum=0;
        for(long i=2;i<=N;i++)
        {
           c=a%1000000007+b%1000000007;
           sum+=c;
           a=b;
           b=c;
        }

        return (sum+1)%1000000007;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
