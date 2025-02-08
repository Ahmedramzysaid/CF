class Solution {
private:
    int n;
    int m;
    int s;
    vector<vector<int>> arr;
    
    bool check(int i, int j) {
        
        if (i < 0 || i >= n || j < 0 || j >= m || arr[i][j] == -1) 
            return false;
        return true;
    }
    
    int call(int i, int j, int total) {
       
        if (!check(i, j)) 
            return 0;
            
      
        if (arr[i][j] == 2) {
            return (total == s + 1) ? 1 : 0; 
        }
        
        
        int temp = arr[i][j];
        arr[i][j] = -1;
        
        
        int paths = call(i, j+1, total+1) + 
                   call(i, j-1, total+1) + 
                   call(i-1, j, total+1) + 
                   call(i+1, j, total+1);
        
        
        arr[i][j] = temp;
        
        return paths;
    }
    
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        arr = grid;
        
        int r = -1, c = -1;
        int cnt = 0;
        
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    r = i;
                    c = j;
                }
                else if (grid[i][j] == 0) {
                    cnt++;
                }
            }
        }
        
        s = cnt;
        return call(r, c, 0);
    }
};