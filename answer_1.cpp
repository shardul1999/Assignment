#include<bits/stdc++.h>
using namespace std;

vector<int> func(int n) {
         vector <int> vec(n);
         int x = 0;
         for(int i = 0; i < n - 1; i++){
            vec[i] = (i + 1);
            x += (i + 1);
         }
         vec[n-1] =-x;
         return vec;
}

int32_t main()
{
         int n;
         cin>>n;
         vector<int> v(func(n));
         for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
         
    return 0;
}
