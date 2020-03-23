//
//  main.c
//  6_2
//
//  Created by JasonYang on 2019/12/16.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int n = 0;
    while (n++ < 3)
        printf("Now n is %d\n", n);
    printf("Finally n is %d\n", n); // 最后一次判断循环条件的表达式：在用n判断后，做了n++
    printf("That's all this program does.\n");
    return 0;
}
