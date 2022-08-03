#include<bits/stdc++.h>
using namespace std;

bool is_attacked(int x,int y , vector<vector<int>> &board , int Dimension)
{
  for(int i=0;i<Dimension;i++)
  {
      if(board[x][i] == 1 || board[i][y] == 1)
      return true;
  }
    for(int i=0;i<Dimension;i++)
    {
        for(int j=0;j<Dimension;j++)
        {
            if((i-j) == (x-y) || (i+j)==(x+y))
            {
                if(board[i][j] == 1) return true;
            }
        }
    }

return false;
}

bool N_Queen(vector<vector<int>> &board , int N , int Dimension)
{
    if (N == 0) return true;

    for(int i=0;i<Dimension;i++)
    {
        for(int j=0;j<Dimension;j++)
        {
            if(is_attacked(i,j,board,Dimension) == true) continue;

            board[i][j] = 1;

            if(N_Queen(board,N-1,Dimension) == true) return true;

            board[i][j] = 0;

        }
    }

    return false;
}

int main()
{
 int N;
 cin>>N;
 vector <vector <int>> board(N, vector <int>(N, 0));
 bool result = N_Queen(board , N , N);

 if(result){
     cout<<"YES"<<endl;
     for(int i=0;i<N;i++)
     {
         for(int j=0;j<N;j++)
         {
             cout<<board[i][j]<<" ";
         }
         cout<<endl;
     }
 }
 else
 {
     cout<<"NO"<<endl;
 }
  
}