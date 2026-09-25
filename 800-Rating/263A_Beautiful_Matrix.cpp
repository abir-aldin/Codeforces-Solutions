// Problem: 263A - Beautiful Matrix
// Topic: Implementation
// Link: https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;

int positive(int x)
{
    if(x < 0) return -x;

    return x;
}

int main()
{
    int row = 5, column = 5;
    int matrix[row][column];

    int storeRow = 0, storeColumn = 0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>matrix[i][j];

            if(matrix[i][j] == 1)
            {
                storeRow = i;
                storeColumn = j;
            }
        }
    }

    int middleRow = 2, middleColumn = 2;
    int totalOperation = positive(storeRow-middleRow) + positive(storeColumn-middleColumn);

    cout<<totalOperation<<endl;


    return 0;
}
