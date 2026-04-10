class Solution {
    public int[] getConcatenation(int[] nums) {
        int n=nums.length;
        int []arr=new int[2*n];
        int j=0;
        for(int i=0;i<n;i++){
            arr[j]=nums[i];
            j++;
        }
        for(int i=0;i<n;i++){
            arr[j]=nums[i];
            j++;
        }
        return arr;
    }
}
