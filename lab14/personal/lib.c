/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 *
 * @author Gladkov K.
 * @date 14-feb-2020
 * @version 1.0
 */


#include <stdlib.h>
#include "lib.h"

void tree(char basePath[], const int root){
    int i;
    char path[1000];
    struct dirent *dp;
    DIR *dir = opendir(basePath);

    if (!dir)
        return;

    while ((dp = readdir(dir)) != NULL)
    {
        if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
        {
            for (i=0; i<root; i++)
            {
                if (i%2 == 0 || i == 0)
                    printf("│");
                else
                    printf(" ");
            }

            printf("├─%s\n", dp->d_name);

            strcpy(path, basePath);
            strcat(path, "/");
            strcat(path, dp->d_name);
            tree(path, root + 2);
        }
    }

    closedir(dir);
}

void dir_size(char Path[]){

    char linux_command[40] = "du -sh ";

    strcat(linux_command, Path);

    printf("\n");
    system(linux_command);
}