#include<stdio.h>
#define MAX_SIZE 100

void findDuplicates(char *str);
void removeDuplicates(char *str, const char repeat, int index);

int main(){
    char str[MAX_SIZE];
    printf("Enter the string: ");
    gets(str);

    printf("Input: %s\n",str);
    findDuplicates(str);
    printf("Output: %s\n",str);

    return 0;
}

void findDuplicates(char *str){
    int i=0;

    while(str[i] !='\0'){
        removeDuplicates(str, str[i], i+1);
        i++;
    
    }
}

void removeDuplicates(char *str,const char repeat, int index){
    int i;

    while(str[index] != '\0'){
        if(str[index] == repeat){
            i = index;
            while(str[i] != '\0'){
                str[i] = str[i + 1];
                i++;
            }
        }
        else
            index++;
    }
}