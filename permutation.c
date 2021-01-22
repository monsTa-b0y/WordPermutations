// C program to print all permutations with duplicates allowed 
#include <stdio.h> 
#include <string.h> 
 
/* Function to swap values at two pointers */
void swap(char *x, char *y) { 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
 
/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(char *a, int l, int r) { 
    int i; 
    if (l == r) 
        printf("%s\n", a); 
    else{ 
        for (i = l; i <= r; i++) { 
            swap((a+l), (a+i)); 
            permute(a, l+1, r); 
            swap((a+l), (a+i)); //backtrack 
        } 
    }    
} 
 
/* Driver program to test above functions */
int main() { 
    char str[26] = "";
    int option;
        printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
        printf("Enter your option:");
        scanf("%d",&option);
        switch (option){
            case 1 : strcpy(str,"");break;
            case 2 : strcpy(str,"ABC");break;
            case 3 : strcpy(str,"DEF");break;
            case 4 : strcpy(str,"GHI");break;
            case 5 : strcpy(str,"JKL");break;
            case 6 : strcpy(str,"MNO");break;
            case 7 : strcpy(str,"PQRS");break;
            case 8 : strcpy(str,"TUV");break;
            case 9 : strcpy(str,"WXYZ");break;
            default : printf("Invalid Selection\n");
        }
    int n = strlen(str); 
    permute(str, 0, n-1); 
    return 0; 
} 
