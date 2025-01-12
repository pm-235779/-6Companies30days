class KthLargest {
    private:
      int getIndex(int val) {
        int left = 0;
        int right = ans.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            int midValue = ans[mid];
            if (midValue == val) return mid;
            if (midValue > val) {
              
                right = mid - 1;
            } else {
         
                left = mid + 1;
            }
        }
        return left;
    }
public:
    int k;
    vector<int> ans;

    KthLargest(int k, vector<int>& nums) {
        ans=nums;
        this->k = k;
        sort(ans.begin(),ans.end());
    }
    
    int add(int val) {
        int i = getIndex(val);
        ans.insert(ans.begin() + i , val);
        
        return ans[ans.size()-k];
    }
};
