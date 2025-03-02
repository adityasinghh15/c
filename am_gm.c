#include <stdio.h> 
#include <math.h>
int main(){
	int n,a;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter 0 for arithmetic mean and 1 for geometric mean: ");
	scanf("%d",&a);
	
	switch (a){
	case 0: //Airthmaetic Mean
	{
		float am=(n+1)/2.0; //Formula for arithmetic mean
		printf("The arithmetic mean of first %d numbers is %f",n,am);
		break;
	}

	case 1: //Geometric Mean
	{
		// gm= (n!)^(1/n)

		// calculate n!
		double f=1;
		for(int i=1; i<=n; i++){
			f=f*i;
		}

		double gm= pow(f,1.0/n);
		printf("Geometric mean of first %d numbers is %lf",n,gm);
		break;
	}
	}
}