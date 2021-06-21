//
//  scofe_bungae.c
//  problemSolving
//
//  Created by 정은희 on 2021/03/20.
//

#include <stdio.h>
int main() {
    int w, h;
    scanf("%d %d", &w, &h);
    int min_count = w*h;
    int count = 0;
    int i = 0;
    int j = 0;
    int start_j = 0;
    int prev_j;
    
    char screen[h][w];
    for(i=0; i<h; i++){
        scanf("%s", screen[i]);
    }
    
    while(1){
        i = 0;
        j = prev_j = start_j;
        count = 0;
        while( screen[0][start_j] == 'c'){
            //printf("%d %d %d %d\n", i, j, count, prev_j);
            if( screen[i+1][j] == '.' && i < h-1 ){
                if(prev_j < j) count += (j - prev_j);
                else count += (prev_j - j);
                prev_j = j;
                i++;
                if(i == h-1){
                    if(min_count > count) min_count = count;
                    break;
                }
            }
            else if( j < w-1 && screen[i][j+1] == '.'){
                if(screen[i][j] != 'c') screen[i][j] = 'x';
                j++;
            }
            else if( j > 0 && screen[i][j-1] == '.'){
                if(screen[i][j] != 'c') screen[i][j] = 'x';
                j--;
            }
            else {
                min_count = count = -1;
                break;
            }
        }
        start_j++;
        if(j == w) break;
    }
    
    printf("%d", min_count);

    return 0;
}
