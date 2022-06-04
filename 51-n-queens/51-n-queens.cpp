class Solution {
public:

	void solve(int col, int n, vector < vector < string >> & ans, vector < string > & board,  vector < bool > & left, vector < bool > & lowerleft_diagonal, vector < bool > & Upperleft_diagonal) {
		if (col == n) {
			ans.push_back(board);
			return;
		}
		for (int row = 0; row < n; ++row) {
			if (!left[row] && !lowerleft_diagonal[row + col] && !Upperleft_diagonal[n - 1 + col - row]) {
				board[row][col] = 'Q';
				left[row] = true;
				lowerleft_diagonal[row + col] = true;
				Upperleft_diagonal[n - 1 + col - row] = true;
				solve(col + 1, n, ans, board, left, lowerleft_diagonal, Upperleft_diagonal);
				//Backtrack
				board[row][col] = '.';
				left[row] = false;
				lowerleft_diagonal[row + col] = false;
				Upperleft_diagonal[n - 1 + col - row] = false;
			}
		}
	}

	vector<vector<string>> solveNQueens(int n) {
		vector<vector<string>> ans;
		vector<string> board(n);
		string s(n, '.');
		for (int i = 0; i < n; ++i) board[i] = s;

		vector<bool> left(n + 1, 0), Upperleft_diagonal(2 * n - 1, 0), lowerleft_diagonal(2 * n - 1, 0);
		solve(0, n, ans, board, left, lowerleft_diagonal, Upperleft_diagonal);
		return ans;
	}
};