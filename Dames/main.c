#include <stdio.h>
#include "util.h"
#include "regles.h"


int main() {
	char string[] = "bonjour a tous";
	int damier[10][10];

	CreerTab(damier);
	AfficherTab(damier); 

	return 0;
}