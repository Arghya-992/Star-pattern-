
#include <stdio.h>  
  
int main()  
{  
    int n;
	int m=1;  
    printf("Enter the number of lines:");  
    scanf("%d",&n); 
	 
    for(int i=n; i>=1; i--){  
        for(int a=1; a<=i-1; a++){  
          printf(" ");  // to produce a gap in every new line
        }  
        for(int b=1; b<=m; b++){  
            printf("*");  // output of stars
        }  
        printf("\n");  // to produce a new line
        m++;  
    }  
    return 0;  
}  
