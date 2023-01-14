#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t=0,n=0,i=0,j=0,a[100],sec_max=0,max=0,area=0;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++){
//        printf("%d",i);
        scanf("%d",&n);
        
        for(j=0;j<n;j++){
            scanf("%d ",&a[j]);
        }
        sec_max=a[0];
        max=a[0];
        
        for(j=1;j<n;j++){
            if(max<a[j]){
                max=a[j];
            }
        }
        for(j=1;j<n;j++) {
            if(a[j]>sec_max&&a[j]<max){
                sec_max=a[j];
            }
        }
        area=max*sec_max;
        printf("%d\n",area);
        
        
    }
        
        
        return 0;
    }
