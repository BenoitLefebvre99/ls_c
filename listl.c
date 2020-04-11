#include "declaration.h"

void listl(int *pacta, char * addr){
    DIR *tmp = opendir(addr);
    struct dirent *lect;
    struct stat stl;
    struct passwd *prop;
    struct group *grp;
    while((lect = readdir(tmp))){
        stat(lect->d_name, &stl);

        if((lect->d_name[0] == '.' && *pacta) || (lect->d_name[0] != '.')){
            if(S_ISDIR(stl.st_mode)) printf("d");
            else printf("-");

            if(S_IRUSR&stl.st_mode) printf("r");
            else printf("-");

            if(S_IWUSR&stl.st_mode) printf("w");
            else printf("-");

            if(S_IXUSR&stl.st_mode) printf("x");
            else printf("-");

            if(S_IRGRP&stl.st_mode) printf("r");
            else printf("-");
            
            if(S_IWGRP&stl.st_mode) printf("w");
            else printf("-");

            if(S_IXGRP&stl.st_mode) printf("x");
            else printf("-");

            if(S_IROTH&stl.st_mode) printf("r");
            else printf("-");
            
            if(S_IWOTH&stl.st_mode) printf("w");
            else printf("-");

            if(S_IXOTH&stl.st_mode) printf("x");
            else printf("-");

            printf(" %ld", (long) stl.st_nlink);

            prop = getpwuid(stl.st_uid);
            printf(" %s", prop->pw_name);

            grp = getgrgid(stl.st_gid);
            printf(" %s", grp->gr_name);

            printf(" %ld", (long) stl.st_size);


            printf(" %s", traitementdate(ctime(&stl.st_ctime)));

            printf(" %s", lect->d_name);
            printf("\n");
        }
    }
    printf("\n");
    closedir(tmp);
}