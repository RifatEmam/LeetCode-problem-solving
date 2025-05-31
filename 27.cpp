class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
                if(val==nums[i]){
                    return val;


                }
            }
        }
    }
};
