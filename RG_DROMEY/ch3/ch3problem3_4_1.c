/*	finding the prime number series
	by R.Sivakami, Oct 2014
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int squareRoot(int n);
	int const np =100;
	int multiple[np];
	int p[np];
	int i, j;
	int limit;
	int plimsq;
	int rootn;
	int dx, x, n;
	bool prime;
	
	printf("Enter the value of n\n");
	scanf("%i",&n);
	printf("The prime numbers are:\n");
	p[1]=2;
	p[2]=3;
	p[3]=5;
	i = 3;
	if(n<5){
		for(j = 1; j < n+1; n++){			
			do{
			//	p[j]=n;
			printf("@@@%i",p[j]);
			}while(n %  2 == 0);
		}
	}else{
		for(j = 1; j < 3 ; j++){
			//p[j] = j;
			printf(">>>>>>%i\n",p[j]);
		}
		x = 5;
		plimsq = 25;
		limit = 3;
		dx = 2;		
		rootn = squareRoot(n);
		while(x < n){
			printf("^^%i  ^^%i  ^^%i\n",rootn, n, limit);
			x = x + dx;
			if((dx-6) < 0){		
				dx = (dx - 6)*-1;
			}else{
				dx = (dx - 6);
			}		
			if(limit <= i){
					
				if(x >= plimsq){					
					limit = limit + 1;
					printf("****%i\n", limit);
					if(limit <= i){
						plimsq = squareRoot(p[limit]);
					}
				}
				prime = true;
				j = 3;
				printf("^^%i  ^^%i  ^^%i",j , limit, prime);
				printf("\n####%i\n", (prime && (j <= limit)));
				while(prime && (j <= limit))
				{
					int rem = x % p[j];
					prime = (rem != 0);
					j = j + 1 ;
					printf("---%i  %i %i  %i\n", x, j, p[j] , (rem != 0));
				}
				
				if(prime){
						printf("\n&&&& %i ****\n", x);
						if(x <= rootn){
							i = i + 1;
							p[i] = x;
						}
					}

			}
		}
	}
	return 0;
}

int squareRoot(int n){
	float g2 = n/2;
	float g1 = n/2;
	int i=0;
	do{
		if(g1>0 && g2>0){
			g1 = g2;
			g2 = ( g1 + ( n / g1) ) / 2;
		}
	}while((g1 - g2) != 0.0000);
	int sq = floor(g2);
	//printf("\nthe square value of %i is %f",sq, ceil(g2));
	return sq;
}

