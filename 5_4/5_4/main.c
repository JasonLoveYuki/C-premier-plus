//
//  main.c
//  5_4
//
//  Created by JasonYang on 2019/12/15.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>
#define m_per_h 60
int main(void) {
    int hour, minute, rst;
    scanf("%d",&hour);
    scanf("%d",&minute);
    while (hour>=0 & minute>0)
    {
        rst=hour*m_per_h+minute;
        printf("You have %d minutes\n",rst);
        printf("Give me hour\n");
        scanf("%d",&hour);
        printf("Give me minute\n");
        scanf("%d",&minute);
    }
    return 0;
}
