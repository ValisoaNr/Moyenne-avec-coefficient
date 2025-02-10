#include<stdio.h>

float main ()
{
	float n1 , n2 , m ;
	int  c1  , c2 ;
	
	printf("\tCALCULER LA MOYENNE\nEntrer la note n1 :");//presentation du programme
	scanf("%f",&n1);
	printf("entrer la coefficient c1 :");
	scanf("%d",&c1);
	printf("entrer la note n2 :");
	scanf("%f",&n2);
	printf("entrer la coefficient c2 :");
	scanf("%d",&c2);
	
	m = ( (n1*c1) + (n2*c2) ) / (c1 + c2) ;//calcule de la moyenne
	
	printf("\n\tLa moyenne vaut %f\n",m);//affichage du resultat
	
 	return (0) ;
}
