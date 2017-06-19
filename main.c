//
//  main.c
//  jueduizhipaixu
//
//  Created by 20161104581 on 17/6/19.
//  Copyright © 2017年 20161104581. All rights reserved.
//

#include <stdio.h>
#include<math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int n,i,j,temp;
    while(scanf("%d",&n)&&n!=0)
    {
        int a[100]={0};
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
            for(j=0;j<n-i;j++)
                if(abs(a[j])<abs(a[j+1]))
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        for(i=0;i<n;i++)
            printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
