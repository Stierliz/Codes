#include <iostream>
using namespace std;
int main() {
int t;
    cin>>t;
    while(t--) {   
        int a[200],rem,i=0,n,m=0,flag;
        cin>>n;
        flag = n; 
 
	//putting the number into the array
        while(flag!=0)  {
            rem = flag%10;
            a[m] = rem;
            flag = flag/10; 
             m++;
        } 
 	
	//putting the factorial of this number into the array backwards
         int temp,x=0,index=0;
         for(i=2;i<n;i++)  {
             temp = 0;
             for(index=0;index<m;index++) {
                 x = a[index]*i + temp;
                 a[index] = x%10;
                 temp = x/10;
              }
  
	     //putting the temp number in the array backwards
              while(temp!=0) {
                  a[index] = temp % 10;
                  temp = temp/10;
                  index++;
                  m++;
               }
            }
 
            for(i=m-1;i>=0;i--) {cout<<a[i];}
                cout<<"\n";
            }
    return 0;
}
