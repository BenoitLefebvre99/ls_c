#include "declaration.h"

void list(int *pacta, int * pactd, char *addr){
    DIR *tmp = opendir(addr);
    struct dirent *lect;
    struct stat stl;
    while((lect = readdir(tmp))){
        stat(lect->d_name, &stl);
        if(S_ISDIR(stl.st_mode)) {
            if(*pacta || *pactd){
                printf("%s ", lect->d_name);
            }
        }
        else if((lect->d_name[0] == '.')){
            if(*pacta){
                printf("%s ", lect->d_name);
            }
        }
        else {
            printf("%s ", lect->d_name);
        }
    }
    printf("\n");
    closedir(tmp);
}
