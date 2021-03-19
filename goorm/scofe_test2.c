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

    unsigned long n[t], m[t];
    long long int nCoupons;
    int nDrink = 0;

    for(int i=0; i<t; i++){
            scanf("%ld %ld", &n[i], &m[i]);
    }
    
    nCoupons = n[0] + m[0];
    //nDrink = nCoupons/12 - m[i]/7;
    int i=0;
    while( 1 ){
        if( i >= t ) break;
        //scanf("%ld %ld", &n[i], &m[i]);
        if( nCoupons >= 12 && n[i] >= 5){
            nDrink++;
            nCoupons -= 12;
            n[i] -= 5;
            //printf("%d. nCoupons: %d, n[i] = %d\n", i+1, nCoupons, n[i]);
        }
        else {
            printf("%d\n", nDrink);
            i++;
            nDrink = 0;
            nCoupons = n[i] + m[i];
        }
                //printf("debug: %ld %ld\n", nDrink, n[i]);
    }



    return 0;
}
