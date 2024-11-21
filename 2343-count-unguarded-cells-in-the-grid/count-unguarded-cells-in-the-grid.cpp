class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<char>> grid(m,vector<char>(n));
        int count=m*n;
        for(auto wall:walls){
            grid[wall[0]][wall[1]]='W';
            count--;
        }
        for(auto guard:guards){
            grid[guard[0]][guard[1]]='G';
            count--;
            }

        for(auto guard:guards){
            int x=guard[0],y=guard[1];

            for(int i=x-1;i>=0;i--){
                if(grid[i][y]=='W'||grid[i][y]=='G') break;
                if(grid[i][y]!='g') count--;
                grid[i][y]='g';
                
            }

            for(int i=x+1;i<m;i++){
                if(grid[i][y]=='W'||grid[i][y]=='G') break;
                if(grid[i][y]!='g') count--;
                grid[i][y]='g';
            }

            for(int j=y-1;j>=0;j--){
                if(grid[x][j]=='W'|| grid[x][j]=='G') break;
                if(grid[x][j]!='g') count--;
                grid[x][j]='g';
            }
            for(int j=y+1;j<n;j++){
                if(grid[x][j]=='W'|| grid[x][j]=='G') break;
                if(grid[x][j]!='g') count--;
                grid[x][j]='g';
            }
        }
        
        return count;
    }
};