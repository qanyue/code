#include<stdio.h>
#include<string.h>
void reverse(char s[]);
int main(){
    char a[100];

    scanf("%s",a);
    reverse(a);
    return 0;   
}
void reverse(char s[]){
    for(int i=strlen(s)-1; i>=0 ;--i){
         printf("%c",s[i]);
    }
}
