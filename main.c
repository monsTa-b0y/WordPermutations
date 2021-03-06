#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *arr[10];

void table(){
	int num;
	printf("\nCalled\n");
	for(num = 0; num != 10; num ++){

		if(num == 1 || num == 0){
			arr[num] = (char *)calloc(1,sizeof(char));
			arr[num][0] = ' ';
		}
		if(num == 2){
			arr[num] = (char *)calloc(3,sizeof(char));
			arr[num][0] = 'a';
			arr[num][1] = 'b';
			arr[num][2] = 'c';
			if(arr[num]) printf("Memory created");
			else printf("memory not created");
			printf("\nNum values are %c,%c,%c\n",arr[num][0],arr[num][1],arr[num][2]);

		//	return 3;
		}
		if(num == 3){
			arr[num] = (char *)calloc(3,sizeof(char));
			arr[num][0] = 'd';
			arr[num][1] = 'e';
			arr[num][2] = 'f';
			if(arr[num]) printf("Memory created");
			else printf("memory not created");
			printf("\nNum values are %c,%c,%c\n",arr[num][0],arr[num][1],arr[num][2]);

		//	return 3;
		}
		if(num == 4){
			arr[num] = (char *)calloc(3,sizeof(char));
			arr[num][0] = 'g';
			arr[num][1] = 'h';
			arr[num][2] = 'i';
			if(arr[num]) printf("Memory created");
			else printf("memory not created");
			printf("\nNum values are %c,%c,%c\n",arr[num][0],arr[num][1],arr[num][2]);

		//	return 3;
		}
		if(num == 5){
			arr[num] = (char *)calloc(3,sizeof(char));
			arr[num][0] = 'j';
			arr[num][1] = 'k';
			arr[num][2] = 'l';
			if(arr[num]) printf("Memory created");
			else printf("memory not created");
			printf("\nNum values are %c,%c,%c\n",arr[num][0],arr[num][1],arr[num][2]);

		//	return 3;
		}
		if(num == 6){
			arr[num] = (char *)calloc(3,sizeof(char));
			arr[num][0] = 'm';
			arr[num][1] = 'n';
			arr[num][2] = 'o';
			if(arr[num]) printf("Memory created");
			else printf("memory not created");
			printf("\nNum values are %c,%c,%c\n",arr[num][0],arr[num][1],arr[num][2]);

		//	return 3;
		}
		if(num == 7){
			arr[num] = (char *)calloc(3,sizeof(char));
			arr[num][0] = 'p';
			arr[num][1] = 'q';
			arr[num][2] = 'r';
			arr[num][2] = 's';

			if(arr[num]) printf("Memory created");
			else printf("memory not created");
			printf("\nNum values are %c,%c,%c\n",arr[num][0],arr[num][1],arr[num][2],arr[num][3]);

			//return 3;
		}
		if(num == 8){
			arr[num] = (char *)calloc(3,sizeof(char));
			arr[num][0] = 't';
			arr[num][1] = 'u';
			arr[num][2] = 'v';
			if(arr[num]) printf("Memory created");
			else printf("memory not created");
			printf("\nNum values are %c,%c,%c\n",arr[num][0],arr[num][1],arr[num][2]);

			//return 3;
		}
		if(num == 9){
			arr[num] = (char *)calloc(4,sizeof(char));
			arr[num][0] = 'w';
			arr[num][1] = 'x';
			arr[num][2] = 'y';
			arr[num][3] = 'z';
			if(arr[num]) printf("Memory created");
			else printf("memory not created");
			printf("\nNum values are %c,%c,%c\n",arr[num][0],arr[num][1],arr[num][2],arr[num][3]);

			//return 4;
		}
	}
}

char *choose(int numDigits){
	char *str = " ";
	int i, j, digit, div = 1;
	for(i = 0; numDigits > 0; i++){
		digit = (numDigits/div)%10;
		div *= 10;
		
		printf("%d\n", digit);
		if(numDigits > 0){
		//for(j = 0; j < 3; j ++){
			str = strcat(choose(numDigits/10) + arr[digit][i] ,str);
			printf("%s", str);
		}
  		else{
			str = str + arr[digit][i];
			printf("%s", str);
		}
		numDigits/=10;
	}
	
	return (char *)str;
}

void main(){
	char str[10];
	gets(str);
	table();
	int i, j, num = 0;
	num = atoi(str);
	printf("%d\n", num);
	choose(num);
	//puts(str);
	//printf("%s", str);
	//Checking done
 	for(i = 2; i < 9; i++)
		for(j = 0; j < 4; j++)
			if(i != 9 && j != 4)  printf("%c", arr[i][j]);
	for(j = 0; j < 4; j++)  printf("%c", arr[i][j]);
	
	
	
	
	
}
