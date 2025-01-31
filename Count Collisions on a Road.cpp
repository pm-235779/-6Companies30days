class Solution {
public:
    int countCollisions(string directions) {
        int ans = 0, movingRight = 0;
        bool stationary = false;

        for (char d : directions) {
            if (d == 'R') {
                movingRight++;
            } else if (d == 'L') {
                if (movingRight > 0) {
                    ans += movingRight + 1;  
                    movingRight = 0;  
                    stationary = true;
                } else if (stationary) {
                    ans++;  
                }
            } else { 
                ans += movingRight;
                movingRight = 0;
                stationary = true;
            }
        }
        return ans;
    }
};
