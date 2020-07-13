//
//  main.c
//  string
//
//  Created by 韦程 on 2019/11/5.
//  Copyright © 2019 韦程. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    extern int enter_string(char[]);
    extern int delete_string(char[],char);
    extern int print_string(char[]);
    
    char ch,str[100];
    enter_string(str);
    scanf("%c",&ch);
    delete_string(str,ch);
    print_string(str);
    return 0;
}
