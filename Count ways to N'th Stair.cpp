class Solution {
public:
   unordered_map<string, int> memo;

    int dfs(int stair, int left, int jump, int k) {
  
        if (stair > k + 1) return 0;

        if (k == 0 && stair == 0) return 1;

        if (stair == k) return 1;

        string key = to_string(stair) + "," + to_string(left) + "," + to_string(jump);
        if (memo.find(key) != memo.end()) return memo[key];

        int count = 0;

        if (left && stair != 0) {
            count += dfs(stair - 1, 0, jump, k);
        }

        count += dfs(stair + (1 << jump), 1, jump + 1, k);

        return memo[key] = count;
    }


    int waysToReachStair(int k) {
        if(k<50000){
        queue<pair<pair<int,int>,int>> q;
        q.push({{1,1},0});
        int cnt=0;
        while(!q.empty()){
           int stair = q.front().first.first;
           int left = q.front().first.second;
           int jump = q.front().second;
           q.pop();
           if(stair > k+1) continue;
           if(left && (stair !=0)){
            q.push({{stair-1,0},jump});
           }
           q.push({{stair + pow(2,jump) , 1},jump+1});
           if(stair == k) cnt++;

        }
        return cnt;
        }
         return dfs(1, 1, 0, k);
    }
};
