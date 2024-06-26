#include <stdio.h>
#include <stdlib.h>

int main(void) {
	for(int i=0;i<10;i++){

		for(int k=i;k<10;k++){

			printf("%d",k);
		}

		printf("\n");

	}
	return 0;
}

//write a program with c that producers the following output
//
//   0 1 2 3 4 5 6 7 8 9
//   1 2 3 4 5 6 7 8 9
//   2 3 4 5 6 7 8 9
//   3 4 5 6 7 8 9
//   4 5 6 7 8 9
//   5 6 7 8 9
//   6 7 8 9
//   7 8 9
//   8 9
//   9





