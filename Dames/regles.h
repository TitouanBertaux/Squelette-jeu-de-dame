#ifndef regles_h
#define regles_h

#include <stdio.h>

int BlancPossManger(int dames[10][10], int ligne, int col);
int NoirPossManger(int dames[10][10], int ligne, int col);


// renvoie 1 si les blancs peuvent manger et 0 si ils ne peuvent pas
int BlancPossManger(int dames[10][10], int ligne, int col)
{
	if(ligne-1 > 0 && ligne-2 >= 0 && col-1 > 0 && col-2 >= 0)
	{
		if(dames[ligne][col] == 1 && dames[ligne-1][col-1] < 0 && dames[ligne-2][col-2] == 0)
		{
			return 1;
		}
	}

	if(ligne-1 > 0 && ligne-2 >= 0 && col+1 < 9 && col+2 <= 9)
	{
		if(dames[ligne][col] == 1 && dames[ligne-1][col+1] < 0 && dames[ligne-2][col+2] == 0)
		{
			return 1;
		}
	}

	return 0;
}






// renvoie 1 si les noirs peuvent manger et 0 si ils ne peuvent pas
int NoirPossManger(int dames[10][10], int ligne, int col)
{
	if(ligne+1 < 9 && ligne+2 <= 9 && col-1 > 0 && col-2 >= 0)
	{
		if(dames[ligne][col] == -1 && dames[ligne+1][col-1] > 0 && dames[ligne+2][col-2] == 0)
		{
			printf("non !");
			return 1;
		}
	}

	if(ligne+1 < 9 && ligne+2 <= 9 && col+1 < 9 && col+2 <= 9)
	{
		if(dames[ligne][col] == -1 && dames[ligne+1][col+1] > 0 && dames[ligne+2][col+2] == 0)
		{
			printf("non !!! ");
			return 1;
		}
	}

	return 0;
}

#endif