#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* compare(int a, int b) {
    char* result = malloc(50 * sizeof(char)); 
    switch (a > b) {
        case 1:
            sprintf(result, "%d is greater than %d", a, b);
            break;
        case 0:
            switch (a < b) {
                case 1:
                    sprintf(result, "%d is less than %d", a, b);
                    break;
                case 0:
                    sprintf(result, "%d is equal to %d", a, b);
                    break;
            }
            break;
    }
    return result;
}

int main() {
    char* result1 = compare(5, 4);
    printf("%s\n", result1);  
    free(result1); 
    char* result2 = compare(-4, -7);
    printf("%s\n", result2);   // "-4 is greater than -7"
    free(result2); 
    
    char* result3 = compare(2, 2);
    printf("%s\n", result3);   // "2 is equal to 2"
    free(result3); 
    
    return 0;
}
