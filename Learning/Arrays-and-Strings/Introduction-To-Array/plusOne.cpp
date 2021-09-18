/*****************************************************************************************************************************************************
 *  Plus One                                                                                                                                         *
 *                                                                                                                                                   *
 *  You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.                      *
 *  The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.    *
 *  Increment the large integer by one and return the resulting array of digits.                                                                     *
 *                                                                                                                                                   *
 *****************************************************************************************************************************************************/
 
vector<int> plusOne(vector<int>& digits) {
	int carry = 1;
	for(int i = digits.size() - 1; carry && i >= 0; i--)
	{
		digits[i] = (digits[i] + carry) % 10;
		if(digits[i] == 0)
			carry = 1;
		else
			carry = 0;
	}
	if(carry)
		digits.insert(digits.begin(), 1);
	
	return digits;
}