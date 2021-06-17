#include <bits/stdc++.h>
using namespace std;

int func2(int Weight, int weights[],
                int values[], int i,
                int** mat)
{
    if (i < 0)
        return 0;
    if (mat[i][Weight] != -1)
        return mat[i][Weight];

    if (weights[i] > Weight) {
        mat[i][Weight] = func2(Weight, weights,
                            values, i - 1,
                            mat);
        return mat[i][Weight];
    }
    else {
        mat[i][Weight] = max(values[i]
                    + func2(Weight - weights[i],
                                weights, values,
                                i - 1, mat),
                    func2(Weight, weights, values,
                                i - 1, mat));
        return mat[i][Weight];
    }
}

int func_knapsack(int Weight, int weights[], int values[], int n)
{
    int** mat;
    mat = new int*[n];
    for (int i = 0; i < n; i++)
        mat[i] = new int[Weight + 1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < Weight + 1; j++)
            mat[i][j] = -1;
    return func2(Weight, weights, values, n - 1, mat);
}

int32_t main()
{
        int n;
        cin>>n;
        int weights[n];
        for(int i=0;i<n;i++)
            cin>>weights[i];
        int values[n];
        for(int i=0;i<n;i++)
            cin>>values[i];
        int Weight;
        cin>>Weight;

        cout << func_knapsack(Weight, weights, values, n);
    return 0;
}






