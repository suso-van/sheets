int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    *returnSize = 2 * numsSize;
    int *total = malloc(*returnSize * sizeof(int));
    int i = 0;
    int k = 0;

    while(i < numsSize)
    {
        total[i] = nums[i];
        i++;
    }
    while(k < numsSize)
    {
        total[i] = nums[k];
        i++;
        k++;
    }
    return (total);
}
