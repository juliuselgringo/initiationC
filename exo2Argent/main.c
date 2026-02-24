#include <stdio.h>

/*___________________________________________________________________*/
typedef struct CoinBill{
    int bill20;
    int bill10;
    int bill5;
    int coin2;
    int coin1;
}CoinBill;

/*___________________________________________________________________ */
int cash_back_calculator(int total, int give){
    int back = give - total;
    return back;
}

int coin_bill_back(int *back, int coinOrBill){
    int coinOrBillNbr = *back / coinOrBill;
    *back = *back%coinOrBill;
    return coinOrBillNbr;
}

/*____________________________________________________________________ */
int main(void){
    int totalPrice;
    int moneyGive;
    int back;
    printf("Saisissez le prix total: \n");
    scanf("%d", &totalPrice);
    printf("Saisissez le montant donne: \n");
    scanf("%d", &moneyGive);

    back = cash_back_calculator(totalPrice, moneyGive);
    printf("vous devez rendre: %d\n", back);
    CoinBill back_coin_bill = {0,0,0,0,0};
    if(back == 0){
        printf("It's okay!\n");
    }else if(back<0){
        printf("Le montant donne est insuffisant!\n");
    }else{
        while(back!=0){
            
            if((back / 20) >= 1){
                back_coin_bill.bill20 = coin_bill_back(&back, 20);
            }else if((back / 10) >= 1){
                back_coin_bill.bill10 = coin_bill_back(&back, 10);
            }else if((back / 5) >= 1){
                back_coin_bill.bill5 = coin_bill_back(&back, 5);
                printf("%d", back);
            }else if((back / 2) >= 1){
                back_coin_bill.coin2 = coin_bill_back(&back,2);
            }else if((back / 1) >= 1){
                back_coin_bill.coin1 = coin_bill_back(&back,1);
            }
        }
        

        printf(
            "Rendu de %d billet(s) de 20 \n %d billet(s) de 10 \n %d billet(s) de 5 \n %d piece(s) de 2 \n %d piece(s) de 1", 
            back_coin_bill.bill20, 
            back_coin_bill.bill10,
            back_coin_bill.bill5,
            back_coin_bill.coin2,
            back_coin_bill.coin1
        );
    }

    return 0;
}