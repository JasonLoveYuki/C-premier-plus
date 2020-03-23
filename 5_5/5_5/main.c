//
//  main.c
//  5_5
//
//  Created by JasonYang on 2019/12/15.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int sum=0, count=0;
    int day;
    printf("Days: \n");
    scanf("%d",&day);
    while (count++ < day){
        sum=sum+count;
    }
    printf("Sum: %d\n",sum);
    return 0;
}
