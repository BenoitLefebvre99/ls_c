#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
void list(int *pacta, int * pactd, char *addr);
void listl(int *pacta, char *addr);
int examiner(int *a, int *l, int *d, int argc, char **argv);
int estParametre(char *tmp);
char *traitementdate(char *chaine);