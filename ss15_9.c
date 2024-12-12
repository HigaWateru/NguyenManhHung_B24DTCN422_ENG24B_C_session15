#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
char s[10005];
char ch;
int main(){
    fgets(s,10000,stdin);
    scanf("%c",&ch);
    int size=strlen(s);
    for(int i=0;i<size;i++)if(s[i]==ch){
        for(int j=i;j<size;j++)s[j]=s[j+1];
        size--;
    }
    printf("%s",s);
}
/*
hello world
o
*/
