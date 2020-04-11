#include "declaration.h"

char * traitementdate(char *chaine){
    char * res = calloc(13,sizeof(char));
    char * save = res;

    chaine=chaine +4;

    for(int i=0; i<12; i++){
        *res = *chaine;
        chaine++;
        res++;
    }
    *res='\0';
    return save;
}
