#include <stdio.h>
#include <stdlib.h>


int stringLength(char string[], int length);


int main(){
    //! showMemory(start=65520)
    //! showMemory(start=272)
    int intArray[5]={2, 3, 4, 1, 2};
    char string[15] = "Hello World!";
    int strlength = 0;
    strlength = stringLength(string, strlength);
    
    printf("%s\n", string);
    printf("%d", strlength);
    
    // pointers
    
    char *strPtr = string;
    for(int i=0; i<strlength; i++){
        printf("%c", *(strPtr+i));
    }
    
    char **pPtr = &strPtr;
    for(int i=0; i<strlength; i++){
        printf("%c", *(*(pPtr)+i));
    }
    
    // mem alloc
    int *ptr = (int*) malloc(4 * sizeof(int));
    char *ptr2 = (char *) malloc(5 * sizeof(char));
    for(int i=0; i<8; i++){
        ptr2[i]='a';
    }
    // ptr2 = (char*) realloc(ptr2, 4 * sizeof(char));
    free(ptr2);

    return 0;
}

int stringLength(char *string, int length){
    string[0] = 'F';
    while(string[length]!='\0'){
        length++;
    }
    return length;
}
