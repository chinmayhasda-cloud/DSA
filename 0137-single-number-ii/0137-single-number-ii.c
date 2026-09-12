int singleNumber(int* nums, int numsSize) {
    int i;
    int find ;
    int count=0;
    for(i=0;i<numsSize;i++){
        count=0;
        for(int j=0;j<numsSize;j++){
            if(nums[i]==nums[j]){
                count=count+1;
            }

        }
        if(count<=1){
            find=nums[i];
        }
    }
    return find;
}