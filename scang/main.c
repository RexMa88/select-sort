//
//  main.c
//  scang
//
//  Created by RexMa on 15/9/2.
//  Copyright (c) 2015年 RexMa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[10];
    for (int i = 1; i< 10; i++) {
//        scanf("%d",&a[i]);
        a[i] = rand();
    }
    
    for (int i = 1; i < 10; i++) {
        int min = i;
        a[0] = a[i];
        for (int j = i + 1; j<10; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }
        a[0] = a[min];
        a[min] = a[i];
        a[i] = a[0];
    }
    
    for (int i = 1; i< 10; i++) {
        printf("%d \n",a[i]);
    }
    
    return 0;
}
