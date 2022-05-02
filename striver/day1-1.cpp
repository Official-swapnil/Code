class Solution {
public:
    int m,n;
    
    void func(vector<vector<int>>& matrix, int x, int y)
    {
        int i;
        for(i=0;i<m;i++)
        {
            matrix[i][y] = 0;
        }
        for(i=0;i<n;i++)
        {
            matrix[x][i] = 0;
        }
    }
    
    
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j;
        queue <pair<int,int>> q;
         m = matrix.size();
         n = matrix[0].size();
        for(i = 0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty())
        {
            func(matrix,q.front().first,q.front().second);
            q.pop();
        }
    }
};