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

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int money;
        cin>>money;
        int count_choice=0;

        for(int i=0;i<n;i++)
        {
            if(money%a[i]==0)
                count_choice++;
        }
        int robot_answer;
        cin>>robot_answer;
        if(count_choice==robot_answer)
            cout<<"Right";
        else
            cout<<"Wrong";
    }
    return 0;
}