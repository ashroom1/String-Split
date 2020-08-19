#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **split (char *path);
void freelist (char **components);

int main (int argc, char *argv[])
{
    int i, j, k;
    char **args;

    for (i = 1; i < argc; i++)
    {
        args = split (argv[i]);
        if (!args)
            continue;
        for (j = 0; args[j]; j++)
            printf ("arg %d, component %d:  %s\n", i, j, args[j]);
        freelist (args);
    }
}

