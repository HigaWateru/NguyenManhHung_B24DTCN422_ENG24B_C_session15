#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
char s[10005];
int main(){
    fgets(s,10000,stdin);
    if(s[0]>='a'&&s[0]<='z')s[0]-=32;
    for(int i=1;i<strlen(s);i++){
        if(s[i]>='a'&&s[i]<='z'&&s[i-1]==' ')s[i]-=32;
    }
    printf("%s",s);
}
