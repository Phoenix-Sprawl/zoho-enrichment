#include<stdio.h>
#define MAX_VALUE 100

int CountVowels(char[]);
int CheckVowels(char);

int main(){
    int vowelcount;
    char str[MAX_VALUE];

    printf("Enter a string: ");
    gets(str);

    vowelcount=CountVowels(str);

    printf("The stirng \'%s\' has %d count of vowels",str,vowelcount);
    return 0;
}

int CountVowels(char arr[]){
    int count = 0, c = 0, flag = 0;
    char d;
    do{
        d = arr[c]; 

        flag = CheckVowels(d);

        if(flag == 1){
            count++;
        }
        c++;
    }while(d != '\0');

    return count;
}

int CheckVowels(char str){
    if(str >= 'A' && str <= 'Z')
        str =str + 32;

    if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
        return 1;

    return 0;
}