#include<stdio.h>



int km = 0;       // total km driven per day
int gascost = 0;      // cost per liter  of gasoline
int liter = 0;      // average km per liter
int parkfee = 0;     // parking fees per day
int tolls = 0;     // tolls per day
int total = 0;      // total cost
int main() {

	printf("%s", "Please enter the total km driven per day: "); //�@�Ѫ��`���{��
	scanf_s("%d", &km);

	printf("%s", "Please enter the cost per liter of gasoline: "); //�T�o�@�ɦh�ֿ�
	scanf_s("%d", &gascost);

	printf("%s", "Please enter average km per liter: "); //�C�ɨT�o�i��p�h�֤���
	scanf_s("%d", &liter);

	printf("%s", "Please enter the parking fees per day: "); // �@�Ѫ������O
	scanf_s("%d", &parkfee);

	printf("%s", "Please enter the tolls per day: "); //�@�Ѫ��L���O
	scanf_s("%d", &tolls);

	total = tolls + parkfee + (km / liter) * gascost;
	printf("Your daily cost of driving to work is $ %d\n", total);
}