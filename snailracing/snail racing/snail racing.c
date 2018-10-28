#include <stdio.h>
int main(void) {

	char name[31];
	int timeinsec;
	printf("enter the name:");
	scanf("%30s", &name);
	printf("enter the number of seconds:");
	scanf(" %d", &timeinsec);
	int timeinmin = timeinsec / 60;
	int timeinmin2 = timeinsec % 60;
	printf("%s finished the race in %d mins and %d secs\n", name, timeinmin, timeinmin2);
	
	
	char n[50];
	int l1, l2, l3, l4;
	
	printf("enter the name of the snail:");
	scanf("%49s", &n);
	printf("enter the number of seconds for leg 1: ");
	scanf(" %d", &l1);
	printf("enter the number of seconds for leg 2: ");
	scanf(" %d", &l2);
	printf("enter the number of seconds for leg 3: ");
	scanf(" %d", &l3);
	printf("enter the number of seconds for leg 4: ");
	scanf(" %d", &l4);
	int t = (l1 + l2 + l3 + l4) / 60;
	int s = (l1 + l2 + l3 + l4) % 60;
	printf("%s finished the race in %d mins and %d secs\n", n, t, s);

	if (t <= 4) {

		printf("%s qualify to the international tournemnt with the time being %d mins and %d secs\n", n, t, s);
	}
	else if (t <= 12) {

		printf("%s qualify to the meeting with the time being %d mins and %d secs\n", n, t, s);
	}
	else if (t <= 30) {
		printf("%s qualify to the Biggners tournemnt with the time being %d mins and %d secs\n", n, t, s);
	}
	else {
		printf("%s does not qualify with the time being %d mins and %d secs\n", n, t, s);
	}


	return 0;






}