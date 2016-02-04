/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<malloc.h>
char * get_last_word(char * str){

	int i = 0, lws = 0, lwe = 0;
	while (str[i]){
		if (str[i] != ' '){
			if (str[i - 1] == ' '){
				lws = i;
				lwe = i;
			}
			lwe++;
		}
		i++;
	}
	char *lastword = (char*)malloc((lwe - lws) + 1);
	for (i = 0; lws < lwe; i++){
		lastword[i] = str[lws++];
	}
	lastword[i] = '\0';
	return lastword;
}
