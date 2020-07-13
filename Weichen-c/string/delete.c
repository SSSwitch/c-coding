//
//  delete.c
//  string
//
//  Created by 韦程 on 2019/11/5.
//  Copyright © 2019 韦程. All rights reserved.
//

#include <stdio.h>

int delete_string(char str[],char ch){
    int i,j;
    for (i=j=0; str[i]!='\0'; i++) {
        if (str[i]!=ch) {
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    
    return 0;
}
