//
//  main.c
//  5_6
//
//  Created by JasonYang on 2019/12/15.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int fst, snd;
    int left;
    printf("First figure: \n");
    scanf("%d", &fst);
    printf("Second figure: \n");
    scanf("%d", &snd);
    while (snd>0){
        left=snd%fst;
        printf("%d %% %d is %d\n", snd, fst, left);
        printf("Second figure: \n");
        scanf("%d", &snd);
    }
    return 0;
}
