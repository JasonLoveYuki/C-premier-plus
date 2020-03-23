//
//  main.c
//  4_2
//
//  Created by JasonYang on 2019/12/12.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(void)
{
    char fst_name[10],lst_name[10];
    int fst_name_width,lst_name_width;
    scanf("%s %s",fst_name,lst_name);
    fst_name_width=strlen(fst_name);
    lst_name_width=strlen(lst_name);
    printf("%s %s\n",fst_name,lst_name);
    printf("%*zd %*zd\n",
           fst_name_width,strlen(fst_name),lst_name_width,strlen(lst_name));
    printf("%s %s\n",fst_name,lst_name);
    printf("%-*zd %-*zd\n",
           fst_name_width,strlen(fst_name),lst_name_width,strlen(lst_name));
    return 0;
}
