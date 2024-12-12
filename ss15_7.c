#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
char str[10005];
int n,c,e;
int main(){
    fgets(str,10000,stdin);
    for(int i=0;i<strlen(str)-1;i++){
        if(str[i]>='0'&&str[i]<='9')n++;
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))c++;
        else e++;
    }
    printf("So ki tu la chu cai: %d\nSo ki tu la chu so: %d\nSo ki tu dac biet: %d",c,n,e);
}
