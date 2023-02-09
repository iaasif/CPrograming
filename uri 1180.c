//uri 1180 solved not working
// link  :  https://www.beecrowd.com.br/judge/en/problems/view/1180
#include<stdio.h>
int main()
{
    int size,i,j,value=1,count=0;
    scanf("%d",&size);
    int a[size];

    for(i=0; i<size; i++)
    {
        scanf("%d ",&a[i]);
        if(a[i]<value)
        {
            value=a[i];
            count=i;
        }
    }

    printf("Menor valor: %d\n",value);
    printf("Posicao: %d\n",count);
    return 0;
}



  else{
                for(i=1;i<x;i++){
            printf("%d %d %d\n",i,i=i+1,i=i+2);
            i=i+2;
        }
    }
    
    	Problem Solving Lab
    	
    	
    	
    	
    	
