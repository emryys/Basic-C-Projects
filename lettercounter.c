#include <stdio.h>
int main (){
	int grade;
	grade = getchar ();
	int acount =0, bcount =0, ccount =0, dcount =0;	
	while ((grade = getchar()) != EOF){
		
	switch (grade){
		
		case 'a' : case 'A':
			++acount;
			break;
		case 'b' : case 'B':
			++bcount;
			break;
		case 'c' : case 'C':
			++ccount;
			break;
		case 'd' : case 'D':
			++dcount;
			break;	
			
		}
		
	}
printf ("A : %d \n ",acount);
printf("B : %d \n ",bcount);
printf("C : %d \n ",ccount);
printf("D : %d \n ",dcount);

return 0;
}
