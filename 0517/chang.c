#include <stdio.h>
#include<stdlib.h>

int main() {
	char c;
	scanf("%c", &c);
	if(c >='A' && c <= 'Z') {
		c = c -'A' + 'a';
		printf("입력한 %c의 소문자는 %c 입니다\n", c,c+32);
	}
	else if (c >= 'a' && c <= 'z') {
		c = c -'a' + 'A';
	printf("입력한%c의 대문자는 %c 입니다\n", c,c-32);
	}
	else {
		printf("%c",c);
	}

return 0;
}
