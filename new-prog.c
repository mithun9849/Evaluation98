#include<stdio.h>
int main() {
	int a;
	printf("enter choice");
	scanf("%d",&a);

	switch (a) {
		case 1:
			printf("B.tech CSE");
			break;
		case 2:
			printf("B.tech AIML");
			break;
		case 3:
			printf("B.tech ECE");
			break;
	}
}
