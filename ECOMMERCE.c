#include <stdio.h>
float calc_bill(float total_amt,float ch){
    if (total_amt<5000){
        return total_amt;
    }
    else if(total_amt>=5000 && total_amt<=10000){
        float p=total_amt*0.10;
        return(total_amt-p);
    }
    else if(total_amt>10000){
        if(ch=='y'){
            float q=total_amt*0.25;
            return(total_amt-q);
        }
        else{
            float z=total_amt*0.20;
            return(total_amt-z);
        }
    }
    else{
        printf("enter the appropriate value!");
    }
}

int main(){
    float total_amt;
    char ch;
    printf("enter the total amount");
    scanf("%f",&total_amt);
    printf("enter y/n whether the customer has membership");
    scanf(" %c",&ch);
    float result=calc_bill(total_amt,ch);
    printf("the  total amt after the  discount is:%.3f",result);
    return 0;
}