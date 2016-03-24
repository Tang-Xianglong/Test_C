//  main.c
//  Test_C
//
//  Created by 唐向龙 on 16/3/24.
//  Copyright © 2016年 唐向龙. All rights reserved.
//  hello

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    char str[] = "15.2";
    double db;
    int i;
    db = atof(str);
    i = atoi(str);
    printf("db = %f, i = %d\n", db, i);
    
 //   char buf[] = "1,2,3|4";
    size_t size = strlen(argv[1]);
    char buf[size];
    strcpy(buf, argv[1]);
    char *pat = ",.|";
    char* token = NULL;
    int arr[10];
    int j = 0;
    token = strtok(buf, pat);
    while (token != NULL) {
        printf("token = %c\n", *token);
        char c = *token;
        arr[j] = atoi(&c);
        printf("a[%d] = %d\n", j, arr[j]);
        j++;
        token = strtok(NULL, pat);
    }
    printf("Hello, World.\n");
    return 0;
}
