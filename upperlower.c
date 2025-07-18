#include <stdio.h>
#include <string.h>

int main(void){
    char input[20];
    
    gets(input);
    printf("Antes %s\n", input);
    printf("Depois: ");
    for(int i = 0, n = strlen(input); i < n; i++){
        if(input[i] >= 'a' && input[i] <= 'z'){
            printf("%c", input[i] - 32);
        }
        else{
            printf("%c", input[i]);
        }
    }
    printf("\n");
}
