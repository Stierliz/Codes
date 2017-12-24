#include <cstdio> 
#include <cstdlib>

int main(){ 
	int k,j,i,tmp,count,size=170000; 

	int *a=(int*)calloc(size,sizeof(int));
	 
	 //sieve of eratosthen
	for(i=2;i*i<=size;i++){//i*i<=size -1.622s 
		if(a[i]==0)		// tmp=sqrt(size),i<=tmp -1.638s
			for(j=i*i;j<=size;j+=i) 
				a[j]=1; 
	}

	scanf("%d",&k); 
	for(j=0;j<k;j++){ 
		scanf("%d",&tmp); 
		count=0; 
		for(i=2;i<size;i++){ 
			if(a[i]==0) 
				count++; 
			if(count==tmp){ 
				printf("%d\n",i); 
				break; 
			} 
		} 
	}
free(a);
return 0; 
}