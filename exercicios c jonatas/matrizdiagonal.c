#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int matriz[3][3] = {{1, 2, 3,}, 
                        {4, 5, 6}, 
                        {7, 8, 9}};

        for(int i = 0; i < 3; i++) {
            printf("%i ", matriz[i][i]);
        }     
            printf("\n");
    
    return 0;
            
}
        
        

