#include <stdio.h>

void skip(char *msg){
	printf("%s\n", msg+6);
}

void main(){
	char *msg = "Don't call me";
	skip(msg);
}
