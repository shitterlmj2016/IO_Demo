#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024
int main(){
    char buf[MAX_LINE];
    FILE *fp;
    char *address="C:\\Users\\xchuang1995\\Desktop\\io.txt";
    int len;
    if((fp = fopen(address,"r")) == NULL)
    { perror("fail to read");
    exit (1) ;
    }
    while(fgets(buf,MAX_LINE,fp) != NULL)
    { len = strlen(buf);
    buf[len-1] = '\0';
    printf("%s\n",buf);
    }
    return 0;
}