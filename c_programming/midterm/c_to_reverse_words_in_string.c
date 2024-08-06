/*
 ============================================================================
 Name        : kjf.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void reverse_string(char*str,int size);
int main(){
	char str[50];
	puts("enter string:");
	fflush(stdin);fflush(stdout);
	fgets(str,50,stdin);
	reverse_string(str,strlen(str));
	return 0;
}
	void reverse_string(char*str,int size){
		int i,j,m=0;
		char ch[50];
		for(i=size-1;i>=0;i--){
			if(str[i]==''){
				for(j=m-1;j>=0;j--){
					printf("%c",ch[j]);
				}
				printf("");
				m=0;
			}
			else{
				ch[m]=str[i];
				m++;
			}
		}
		if(m!=0){
			for(j=m-1;j>=0;j--)	{
				printf("%c",ch[j]);
			}
		}
	}
