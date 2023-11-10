#ifndef util_h
#define util_h

#include <stdio.h>


int AfficherTab(int tab[][10]);
int AfficherCoordonnees();

int CreerTab(int tab[10][10]);


// affiche le damier
int AfficherTab(int damier[10][10]) {
	
	for(int i = 0; i<10; i++)
	{
		printf("*----*----*----*----*----*----*----*----*----*----*\n");
		for(int j = 0; j<10; j++)
		{
			if(damier[i][j] > 0)
			{
				printf("|  %d ", damier[i][j]);
			}
			else if(damier[i][j] < 0)
			{
				printf("| %d ", damier[i][j]);
			}
			else 
			{
				printf("|    ");
			
			}

		}
		printf("|\n");
	}
	printf("*----*----*----*----*----*----*----*----*----*----*\n\n\n\n");
	
	return 0;	
}


// affiche les coordonnees du damier
int AfficherCoordonnees() {

	int cpt = 1;
	int bOk = 0;
	for(int i = 0; i<10; i++)
	{
		printf("*----*----*----*----*----*----*----*----*----*----*\n");
		for(int j = 0; j<10; j++)
		{
			if(bOk)
			{
				if(cpt<10) { printf("|  %d ", cpt); }
				else { printf("| %d ", cpt);}
				cpt++;
			}
			else 
			{
				printf("|    ");
			}
			bOk = !bOk;

		}
		printf("|\n");
		bOk = !bOk;

	}
	printf("*----*----*----*----*----*----*----*----*----*----*\n\n\n\n");
	
	return 0;
	
}


// initialise le damier
int CreerTab(int tab[10][10])
{
	for(int i = 0; i<10; i++)
	{
		for(int j = 0; j<10; j++)
		{
			if(i < 4)
			{
				if((j+i)%2 != 0)
				{
					tab[i][j] = -1;
				}
				else
				{
					tab[i][j] = 0;
				}
			}
			else if(i == 4 || i == 5)
			{
				tab[i][j] = 0;
			}
			else
			{
				if((j+i)%2 != 0)
				{
					tab[i][j] = 1;
				}
				else
				{
					tab[i][j] = 0;
				}
			}
		}
	}

	return 0;
}

#endif