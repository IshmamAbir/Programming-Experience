#include<stdio.h>
main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    if(n%i==0){
    sum=sum+i;
    }
    }
    printf("%d",sum);
    if (sum==n){
        printf("%d is perfect\n",n);
    }
    else if (sum!=n){
        printf("%d is not perfect\n",n);
    }
    return 0;

    }
