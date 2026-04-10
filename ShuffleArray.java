class Solution {
    public int[] shuffle(int[] nums, int n) {
        int []c1=new int[n];
        int []c2=new int[n];
        int two=nums.length;
        int i;
        int k=0;
        int j=0;
        for(i=0;i<n;i++){
            c1[i]=nums[i];
            c2[i]=nums[i+n];
        }
        for(i=0;i<2*n;i++){
            if(i%2==0){
                nums[i]=c1[j++];
            }
            else{
                nums[i]=c2[k++];
            }
        }
        return nums;
    }
}
