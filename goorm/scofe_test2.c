//
//  scofe_test2.c
//  "사은품 교환하기"
//
//  Created by 정은희 on 2021/03/19.
//

#include <stdio.h>

/*
int exchange(int drink, long coupons, long season){
    if(coupons >= 12 && season >= 5){
            drink++;
            coupons -= 12;
            season -= 5;
            //printf("debug: %d %ld %ld\n", drink, coupons, season);
        }
    else return drink;
    exchange(drink, coupons, season);
}
*/
int main() {
    unsigned int t;
    scanf("%d", &t);
    
    unsigned int n[t], m[t];
    for(int i=0; i<t; i++){
        scanf("%d %d", &n[i], &m[i]);
    }
    int nDrink;
    unsigned int nCoupons;
    for(int i=0; i<t; i++){
        nDrink = 0;
        nCoupons = n[i] + m[i];
        //printf("%d: nCoupons: %d\n", i+1, nCoupons);
        while(nCoupons >= 12 && n[i] >= 5){
            nDrink++;
            nCoupons -= 12;
            n[i] -= 5;
            //printf("debug: %d %ld %ld\n", drink, coupons, season);
        }

        printf("%d\n", nDrink);
    }
    
    return 0;
}
