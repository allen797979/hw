#include<stdio.h>



int km = 0;       // total km driven per day
int gascost = 0;      // cost per liter  of gasoline
int liter = 0;      // average km per liter
int parkfee = 0;     // parking fees per day
int tolls = 0;     // tolls per day
int total = 0;      // total cost
int main() {

	printf("%s", "Please enter the total km driven per day: "); //一天的總里程數
	scanf_s("%d", &km);

	printf("%s", "Please enter the cost per liter of gasoline: "); //汽油一升多少錢
	scanf_s("%d", &gascost);

	printf("%s", "Please enter average km per liter: "); //每升汽油可行駛多少公里
	scanf_s("%d", &liter);

	printf("%s", "Please enter the parking fees per day: "); // 一天的停車費
	scanf_s("%d", &parkfee);

	printf("%s", "Please enter the tolls per day: "); //一天的過路費
	scanf_s("%d", &tolls);

	total = tolls + parkfee + (km / liter) * gascost;
	printf("Your daily cost of driving to work is $ %d\n", total);
}