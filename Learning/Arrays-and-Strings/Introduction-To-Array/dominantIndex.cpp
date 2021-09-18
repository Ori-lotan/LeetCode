/*************************************************************************************************************************
 *  Largest Number At Least Twice of Others                                                                              *
 *                                                                                                                       *
 *  You are given an integer array nums where the largest integer is unique.                                             *
 *  Determine whether the largest element in the array is at least twice as much as every other number in the array.     *
 *  If it is, return the index of the largest element, or return -1 otherwise.                                           *
 *                                                                                                                       *
 *************************************************************************************************************************/
 
int dominantIndex(vector<int>& nums) {
	int max = nums[0];
	int maxIndex = 0;
	for(int i = 0; i < nums.size(); i++)
	{
		if(max < nums[i])
		{
			max = nums[i];
			maxIndex = i;
		}
	}
	for(int i = 0; i < nums.size(); i++)
		if(nums[i] != max)
			if(nums[i]*2 > max)
				return -1;
	
	return maxIndex;
}