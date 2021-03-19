//
//  scofe_test1.c
//  [근묵자흑]
//
//  Created by 정은희 on 2021/03/19.
//

#include <stdio.h>
int main() {
    int n, k;
    int min, min_index;
    int count, min_count=0;
    
    scanf("%d %d", &n, &k);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    /*
    printf("%d", (n-1)/(k-1) + 1);
    
    1 4 7 10
    
    3(i)+1
    (k-1)(i)+1 <= n
    (k-1)(i) <= n-1
    i <= (n-1)/(k-1)
*/
    count = (n-1)/(k-1);
    if( (k-1)*count+1 < n ) count++;
    printf("%d", count);
    return 0;
}
