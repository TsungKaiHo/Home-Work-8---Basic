//
//  main.c
//  Home Work 8
//
//  Created by 何宗愷 on 2019/4/11.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i,j,n,m=0;
    
    printf("輸入 n ，以便求 1 ~ n 內的質數 ： ");
    scanf("%d",&n);
    
    for ( i = 1 ; i <= n ; i++)
    {
        m =0;
        
        for ( j = 1 ; j <= n ; j++)
        {
            if( (i % j) == 0 ) m++;
            if ( m > 2 ) break;
        }
        if ( m <= 2 ) printf("%d \t 是質數 !\n",i);
        
    } 
    return 0;
}
