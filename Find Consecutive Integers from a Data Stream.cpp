class DataStream {
public:
    int capacity;         // Maximum size of the sliding window
    int val;              // Value to track
    deque<int> dq;        // Deque to store elements in the sliding window
    int valCount;         // Count of how many times 'val' appears in the sliding window

    DataStream(int value, int k) {
        capacity = k;
        val = value;
        valCount = 0;  
    }
    
    bool consec(int num) {
     
        dq.push_back(num);
        
        if (num == val) {
            valCount++;
        }

        if (dq.size() > capacity) {
            int oldest = dq.front();
            dq.pop_front();
            
            if (oldest == val) {
                valCount--;
            }
        }

        return (dq.size() == capacity && valCount == capacity);
    }
};
