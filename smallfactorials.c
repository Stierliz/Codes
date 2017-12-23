#include <stdio.h>

int main(){

	int t;
	scanf("%d",&t);
	while(t--){
		int m=0,flag,i,rem,n,a[200];
		scanf("%d",&n);
		flag=n;

		while(flag){
			rem=flag%10;
			a[m++]=rem;
			flag/=10;
		}

		int temp,index=0,x=0;
		for(i=2;i<n;i++){
			temp=0;
			for(index=0;index<m;index++){
				x=a[index]*i+temp;
				a[index]=x%10;
				temp=x/10;
			}

			while(temp){
				a[index]=temp%10;
				temp/=10;
				index++;
				m++;
			}
		}
	for(i=m-1;i>=0;i--){
		printf("%d",a[i]);
	}
	printf("\n");
	}
return 0;
}
