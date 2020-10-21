#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            if(i==0||i==15){
                printf("* ");
            }
            else if(j==0||j==15){
                printf("*               ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
