#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,m,o;
    
    printf("islem kactan baslasin: ");
    scanf("%d",&m);
	printf("islem kac ile bitsin: ");
	scanf("%d",&n);
	
	o = (((n+1)*n)/2) - (((m-1)*m)/2);
	
	printf("Sonucunuz: %d",o);

	return 0;
}
