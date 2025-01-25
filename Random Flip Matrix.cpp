
class Solution {
private:
    std::unordered_map<int, int> map;
    int rows, cols, total;

public:
    Solution(int n_rows, int n_cols) {
        rows = n_rows;
        cols = n_cols;
        total = rows * cols;
        srand(time(0)); 
    }

    std::vector<int> flip() {
    
        int r = rand() % total--;
        
        int x = map.count(r) ? map[r] : r;

        map[r] = map.count(total) ? map[total] : total;

        return {x / cols, x % cols};
    }

    void reset() {
        map.clear();
        total = rows * cols;
    }
};
