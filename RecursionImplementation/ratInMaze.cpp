//Author: Syed Ayaz
#include<iostream>

using namespace std;

typedef long long int ll;


bool ratInMaze(char maze[10][10], int soln[10][10], int i, int j, int m, int n)
{
	if (i == m && j == n)
	{
		soln[m][n] = 1;
		//Print the path
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << soln[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}
	//Rat should be inside the grid
	if (i > m || j > n)
	{
		return false;
	}
	if (maze[i][j] == 'X')
	{
		return false;
	}
	//Assume solution exists through current cell
	soln[i][j] = 1;

	bool rightSuccess = ratInMaze(maze, soln, i, j + 1, m, n);
	bool downSuccess = ratInMaze(maze, soln, i + 1, j + 1, m, n);

	//Backtracking
	soln[i][j] = 0;


	if (rightSuccess || downSuccess)
		return true;
	return false;
}

int strToInt(char *a, int n)
{
	if (n == 0)
		return 0;
	int digit = a[n - 1] - '0';
	int small_ans = strToInt(a, n - 1);
	return small_ans * 10 + digit;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char maze[10][10] = {
		"0000",
		"0000",
		"0000",
		"0000"
	};
	int soln[10][10] = {0};
	int m, n = 4;

	bool ans  = ratInMaze(maze, soln, 0, 0, m - 1, n - 1);
	if (!ans)
		cout << "No path" <<  endl;
}