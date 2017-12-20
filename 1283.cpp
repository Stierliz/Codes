#include <stdio.h>

int main(){
	float i,j,k,count=0;
	scanf("%f %f %f",&i,&j,&k);
	while(j<i){
		i-=i*(k/100);
		count++;
	}
	printf("%f",count);
	
	return 0;
}
