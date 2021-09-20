/***************************************************************************************************************************************************************************
 *  Find Pivot Index                                                                                                                                                       *
 *                                                                                                                                                                         *
 *  Given an array of integers nums, calculate the pivot index of this array.                                                                                              *
 *  The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.  *
 *  If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.     *
 *  Return the leftmost pivot index. If no such index exists, return -1.                                                                                                   *
 *                                                                                                                                                                         *
 ***************************************************************************************************************************************************************************/
 
int pivotIndex(vector<int>& nums) {
	int sumLeft = 0, sumRight = 0;
	for(int i = 0; i < nums.size(); i++)
		sumRight += nums[i];
	
	for(int i = 0; i <= nums.size() - 1; i++)
	{
		sumRight -= nums[i];
		
		if(sumLeft == sumRight)
		{
			return i;
		}
		
		sumLeft += nums[i];
	}
	
	return -1;
}