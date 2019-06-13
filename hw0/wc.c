#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *fp=NULL;
    char ch;
    int lines=0, characters=0, words=0;

    if(argc > 2){
        fprintf(stderr,"Provide only one file\n");
        exit(0);
    }else 
    if(argc == 1){
        fp = stdin;
    }else{
        fp = fopen(argv[1],"r");

        if(fp == NULL){
            fprintf(stderr,"Could not open the file\n");
            exit(0);
        }
            
    }

    char chp='\n';
    
    while( (ch=getc(fp)) != EOF){

        if(ch == '\n') lines++;
        if( isspace(ch) && !isspace(chp)) words++;

        characters++;

        chp = ch;
    }
    fclose(fp);

    printf("\t %d\t %d\t %d\t %s\n",lines,words,characters,argv[1]);


    return 0;
}
