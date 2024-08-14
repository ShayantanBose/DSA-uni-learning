#include <stdio.h>
int main(){
    char arr[]={'a','e','i','c','o'};
    int count=0;
    char *ptr=arr;
    for(int i=0;i<4;i++){
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i'||*ptr == 'o'||*ptr == 'u'){
            count+=1;
        }
    }
    printf("there's a total number of %d vowels in the array", count);
}