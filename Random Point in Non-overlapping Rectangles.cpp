class Solution {
public:
    vector<vector<int>> rects;
    vector<int> areas; 
    int totalArea;

    Solution(vector<vector<int>>& rects) {
        this->rects = rects;
        totalArea = 0;

        for (const auto& rect : rects) {
            int x1 = rect[0], y1 = rect[1], x2 = rect[2], y2 = rect[3];
            int area = (x2 - x1 + 1) * (y2 - y1 + 1);
            totalArea += area;
            areas.push_back(totalArea); // Store cumulative area
        }

        srand(time(0)); // Seed the random number generator
    }
    
    vector<int> pick() {
        // Choose a rectangle based on weighted random selection
        int randArea = rand() % totalArea; // Random number in [0, totalArea - 1]
        int rectIdx = lower_bound(areas.begin(), areas.end(), randArea + 1) - areas.begin();

        // Pick a random point within the selected rectangle
        int x1 = rects[rectIdx][0], y1 = rects[rectIdx][1];
        int x2 = rects[rectIdx][2], y2 = rects[rectIdx][3];
        int randomX = x1 + (rand() % (x2 - x1 + 1));
        int randomY = y1 + (rand() % (y2 - y1 + 1));

        return {randomX, randomY};
    }
};
