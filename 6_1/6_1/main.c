//
//  main.c
//  6_1
//
//  Created by JasonYang on 2019/12/15.
//  Copyright © 2019 JasonYang. All rights reserved.
//


#include <stdio.h>

int main(void) {
    long num;
    long sum = 0L; /* initialize sum to zero */
    int status;
    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1) {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}
