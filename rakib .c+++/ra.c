#include<stdio.h>
#include<conio.h>
void main()
{

	
int total_price,discount_percent,real_price,discount_money;

total_price=10000;

discount_percent=5;

discount_money=total_price*discount_percent/100;

real_price=total_price-discount_money;





printf("Actual Price after discount=%d\n",real_price);

printf("Discount money=%d\n",discount_money);	
}	


