// problem link : https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        int k=N,rem,temp;
    vector<int>a;
    
    while(k!=0)
    {
        rem=k%10;
        a.push_back(rem);
        k=k/10;
    }
    k=--N;
    while(k>1)
    {
    rem=0;
    for(int i=0;i<a.size();i++)
    {
       // a[i]=(a[i]*k+rem)%10;
       // rem=(a[i]*k+rem)/10;
       temp=a[i]*k+rem;
       a[i]=temp%10;
       rem=temp/10;
    }
    while(rem!=0)
    {
        a.push_back(rem%10);
        rem=rem/10;
    }
    k=--N;
   // cout<<k<<endl;
    }
    reverse(a.begin(),a.end());
    return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
