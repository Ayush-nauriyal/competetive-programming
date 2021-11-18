// given matrix is sorted for both rows and column
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,target;
    cin>>n>>m>>target;
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>mat[i][j];
    }
    int r=0,c=m-1;
    bool found=false;
    while(r<n&&c>=0)
    {
        if(mat[r][c]==target)
        {
            found =true;
            break;
        }
        else if(mat[r][c]>target)
        {
            c--;
        }
        else
        r++;
    }
    if(found)
    cout<<"element does exist";
    else
    cout<<"element can't be found";

    return 0;
}