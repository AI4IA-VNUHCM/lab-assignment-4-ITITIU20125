/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
    int arr[1000][1000];
	for(int testcase = 0; testcase < n; testcase++)
	{
		for(int j = 0; j <= testcase; j++)
		{
		   
		   if (testcase == j || j==0 )
		   {
			   arr[testcase][j] = 1;
		   }	
		   else
		   {
			   arr[testcase][j] = arr[testcase - 1][j - 1] + arr[testcase - 1][j];
		   }
		   printf("%d ", arr[testcase][j]);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
