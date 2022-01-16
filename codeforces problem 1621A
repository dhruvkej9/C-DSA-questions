# C-DSA-questions
#https://codeforces.com/problemset/problem/1621/A
#Happy new year!
#include "bits/stdc++.h"
using namespace std;
bool isSafe(char** arr,int x,int y,int n)
{
    int row=x;
    for(int i=0;i<row;i++){
        if(arr[i][y]=='R')
        {
            return false;
        }
    }
    if(y>=1)
    {
        for(int i=0;i<row;i++)
        {
        if(arr[i][y-1]=='R')
        {
            return false;
        }
    }
    }
    int col=y;
    for(int i=0;i<col;i++){
        if(arr[x][i]=='R')
        {
            return false;
        }
    }
    if(x>=1)
    {
        for(int i=0;i<col;i++)
        {
        if(arr[x-1][i]=='R')
        {
            return false;
        }
    }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
    int n,k;
    cin>>n>>k;
    int max=(n+1)/2;
    if(k>max)
    {
        cout<<"-1"<<endl;
    }
    else
    {
    char** arr=new char*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new char[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]='.';
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(count>=k)
        {
            break;
        }
        for(int j=0;j<n;j++)
        {
            if(isSafe(arr,i,j,n))
            {
                arr[i][j]='R';
                count++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }    
    }
    t--;
    }
    return 0;
}
