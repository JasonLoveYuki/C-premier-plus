//
//  main.c
//  5_3
//
//  Created by JasonYang on 2019/12/15.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>
#define TEN 10
int main(void) {
    //char n = 'a'-1;
    //while (n++ < 'g')
    //    printf("%5c", n);
    char ch = 'a';
    while (ch <= 'g')
        printf("%5c", ch++);
    printf("\n");
    return 0;
}
