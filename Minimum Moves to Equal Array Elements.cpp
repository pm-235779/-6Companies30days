class Solution {
public:
    int minMoves2(vector<int>& nums) {

        int n=nums.size();
        if(n==0||n==1) return 0;
        if(n==2) return abs(nums[1]-nums[0]);
        sort(nums.begin(),nums.end());
        if((n&1)== 0){
            int sum1=0,sum2=0;
            for(int i=0;i<nums.size();i++){
                sum1+= abs(nums[i]-nums[n/2]);
                sum2+= abs(nums[i]-nums[(n/2)-1]);

            }
            return min(sum1,sum2);
        }
        else{
            int sum=0;
          for(int i=0;i<nums.size();i++){
                sum+= abs(nums[i]-nums[n/2]);
               

            }
            return sum;
        }
        return -1;
    }
};
