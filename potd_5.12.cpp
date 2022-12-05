
#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        vector<vector<vector<bool>>> visited(n,vector<vector<bool>>(m,vector<bool>(k+1,false)));
        
        int dx[4] = {1,-1,0,0};
	    int dy[4] = {0,0,1,-1};
	    
        queue<vector<int>> q;
        q.push({0,0,k}); 
        visited[0][0][k] = true; 
        int steps = 1;
        while(!q.empty())
        {
            int size = q.size();
            
            while(size--)
            {
                vector<int> front = q.front();
                q.pop();
                int x = front[0], y = front[1] , k_remaining = front[2];

                for(int i = 0 ; i < 4 ; i++)
                {
                    int new_x = x + dx[i];
                    int new_y = y + dy[i];
                    int new_k = k_remaining;
               
                    if((new_x >= 0) && new_x < n && (new_y >=0) && new_y < m)
                    {
                        if(mat[new_x][new_y] == 0 && !visited[new_x][new_y][new_k])
                        {
                            if(new_x == n-1 && new_y == m-1)
                                return steps; 
                            
                            visited[new_x][new_y][new_k] = true;
                            q.push({new_x , new_y , new_k});
                        }
                        
                      
                        else if(mat[new_x][new_y] == 1 && new_k >0 && !visited[new_x][new_y][new_k-1])
                        {
                           
                            if(new_x == n-1 && new_y == m-1)
                                return steps; 
                            
                            visited[new_x][new_y][new_k - 1]  = true;
                            q.push({new_x , new_y , new_k - 1});
                        }
                    }
                }
            }
            steps++;
        }
        
        return -1;
    }
};




int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, x;
        
        cin>>n>>m>>k;
        vector<vector<int>> mat;
    
        for(int i=0; i<n; i++)
        {
            vector<int> row;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                row.push_back(x);
            }
            mat.push_back(row);
        }

        Solution ob;
        cout<<ob.shotestPath(mat,n,m,k);
        cout<<"\n";
    }
    return 0;
}
