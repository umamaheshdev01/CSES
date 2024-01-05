#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

bool isSafe(int r,int c,vector<string> &board)
{
    int x=r;
    int y=c;
    //check for same row
    while(y>=0)
    {
        if(board[x][y] == '1')
        {
            return false;
        }
        y--;
    }

    x=r;
    y=c;
    
    //check for diagonal
    while(x>=0 && y>=0)
    {
        if(board[x][y]=='1')
        {
            return false;
        }
        x--;
        y--;
    }

    x=r;
    y=c;
    
    //check for other diagonal
    while(x<8 && y>=0)
    {
        if(board[x][y]=='1')
        {
            return false;
        }
        x++;
        y--;
    }
    
    return true;
}

void solve(int col,vector<vector<string>>&ans,vector<string>&v)
{
    if(col==8)
    {
        ans.push_back(v);//addsol(board,ans) 
        return;
    }

    //solve 1

    for(int row =0;row<8;row++)
    {
        if(v[row][col]=='*')continue;
        if(isSafe(row,col,v))
        {
            v[row][col] = '1';
            solve(col+1,ans,v);
            v[row][col] ='0';
        }
    }


}

int main()
{
    vector<string> v(8);
    for(auto &x:v) cin>>x;
    
    vector<vector<string>> ans;
    solve(0,ans,v);

    cout<<ans.size()<<endl;

}