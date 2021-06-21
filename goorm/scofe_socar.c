//
//  scofe_socar.c
//  problemSolving
//
//  Created by 정은희 on 2021/03/20.
//

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int start_h, end_h, start_m, end_m, start_index, end_index;
    
    int h1[n], m1[n], h2[n], m2[n];
    for(int i=0; i<n && i<20 ; i++){
        scanf("%d:%d ~ %d:%d", &h1[i], &m1[i], &h2[i], &m2[i]);
        h1[i] = m1[i] / 60 + h1[i] % 24;
        h2[i] = m2[i] / 60 + h2[i] % 24;
        m1[i] = m1[i] % 60;
        m2[i] = m2[i] % 60;
        //printf("%02d:%02d ~ %02d:%02d", h1[i], m1[i], h2[i], m2[i]);
    }
    
    start_h = h1[0];
    end_h = h2[0];
    start_m = m1[0];
    end_m = m2[0];
    start_index = end_index = 0;
    
    for(int i=0; i<n; i++){
        if( (start_h < h1[i]) || (start_h == h1[i] && start_m < m1[i]) ){
            start_h = h1[i];
            start_m = m1[i];
            start_index = i;
        }
        if( (end_h > h2[i]) || (end_h == h2[i] && end_m > m2[i]) ){
            end_h = h2[i];
            end_m = m2[i];
            end_index = i;
        }
    }
    
    if( (start_h > end_h) || (start_h == end_h && start_m > end_m) ){
        printf("-1");
    }
    else    printf("%02d:%02d ~ %02d:%02d", h1[start_index], m1[start_index], h2[end_index], m2[end_index]);

    
    return 0;
}
