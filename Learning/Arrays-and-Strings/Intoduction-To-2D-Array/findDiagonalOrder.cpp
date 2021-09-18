/********************************************************************************************************* 
 *  Diagonal Traverse                                                                                    *
 *                                                                                                       *
 *  Given an m x n matrix mat, return an array of all the elements of the array in a diagonal order.     *
 *                                                                                                       *
 *********************************************************************************************************/
 
vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
	if(mat.size() == 0)
	{
		return vector<int>();
	}
	
	vector<int> ans;
	int height = mat.size();
	int width = mat[0].size();
	
	for (int i = 0; i < height + width - 1; i++)
	{
		
		vector<int> dig;
		
		int r = i < width ? 0 : i - width + 1;
		int c = i < width ? i : width - 1;
		
		while (r < height && c > -1) {
			
			dig.push_back(mat[r][c]);
			++r;
			--c;
		}
		
		if (i % 2 == 0) {
			reverse(dig.begin(), dig.end());
		}
		
		for (int j = 0; j < dig.size(); j++) {
			ans.push_back(dig[j]);
		}
		
	}
	
	return ans;
}