// link: https://codeforces.com/contest/2260/problem/B

#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    for(int l=0;l<testCase;l++)
    {
        long long x, y, k;
        cin>>x>>y>>k;

        long long selfProjectSum = y%x;

        long long totalEmployee = x;
        long long totalProjects = y;

        // for(long long i=1;i<k;i++)
        // {
        //     totalEmployee++, totalProjects++;

        //     selfProjectSum += (totalProjects % totalEmployee);
        // }

        totalEmployee += (k-1);
        totalProjects += (k-1);

        selfProjectSum += 
        
        cout<<selfProjectSum<<endl;
    }
}
