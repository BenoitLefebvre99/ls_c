#include "declaration.h"

int examiner(int *a, int *l, int *d, int argc, char **argv){
    for(int i=1; i<argc; i++){
        if(estParametre(argv[i])){
            char *go = argv[i];
            do {
                if(*go == 'a') *a=1;
                if(*go == 'd') *d=1;
                if(*go == 'l') *l=1;
                go++;
            }while(*go);
        }
        else {
            printf("%s : \n", argv[i]);
            return i;
        }
    }
    return 0;
}