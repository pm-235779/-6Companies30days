class Solution {
  vector<pair<int,int>> dir = {{-1,-1},{1,1},{1,-1},{-1,1},{1,0},{0,1},{-1,0},{0,-1}};
  int cube(vector<vector<int>> &img,int val , int m , int n , int i , int j){
    int sum = img[i][j];
    int cnt=1;
    for(int k=0;k<dir.size();k++){
        int newr = i + dir[k].first;
        int newc = j + dir[k].second;
        if(newr>=0 && newr<m && newc>=0 && newc<n){
            cnt++;
            sum+=img[newr][newc];
        }
    }
    return (sum/cnt);
  }

public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n= img[0].size();
         vector<vector<int>> ans(m, vector<int>(n, 0)); 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x =cube(img ,img[i][j],m,n,i,j);
                ans[i][j] = x;
            }
        }

        return ans;
    }
};
