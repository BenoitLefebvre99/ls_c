#include "declaration.h"

//VARIABLES DE DECLARATION DE PARAMETRES
    int acta=0;
    int *pacta=&acta;
    int actd=0;
    int *pactd=&actd;
    int actl=0;
    int *pactl=&actl;
    char *addr;
    char *COURANT=".";

int main(int argc, char **argv){
    addr=calloc(50,sizeof(char));
    int result = examiner(pacta,pactl,pactd,argc,argv);
    if(result) addr=argv[result];
    else addr=COURANT;
    if(*pactl) listl(pacta,addr);
    else list(pacta,pactd,addr);
    return 0;
}