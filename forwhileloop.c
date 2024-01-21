#include <stdio.h> 

int main(){
    int n;
    printf("Enter a number ; ");
    scanf("%d", &n);
 
 // while loop 
    // int i=0;
    // while(i<=5){
    //     printf("%d\n", i);
    //     i++;
    // }



    // for loop (no semi colon )   focus on that 

    for(int i=0; i<=n; i++) {
        printf("%d\n", i);
    }
    return 0;
}