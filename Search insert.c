int searchInsert(int* nums, int numsSize, int target)
{
 for(int i=0;i<numsSize;i++)
{
    if(nums[i]==target)
   {
     return i;
   }
 }
for(int j=0;j<numsSize;j++)
{
    if(nums[j]>target)
    {
       return j;
    }
}
  for(int k=0;k<numsSize;k++)
{
       if(nums[k]!=target)
       {
       return numsSize;
       }
}
return 0;
}
