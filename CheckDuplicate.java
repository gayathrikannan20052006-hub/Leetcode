class Solution {
    public boolean containsDuplicate(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        boolean b=false;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                b=true;
            }        
        }
        return b;
    }
}
