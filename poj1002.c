#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char alphabet[26] = "2223334445556667777888999";

int main(){
	char phoneNum[100000][9], str[80];
	int i, j, itemNum;
	scanf("%d", &itemNum);
	int count ;
	int repeat = 0;
	while(count < itemNum){
		scanf("%s", str);
		i = j = 0;
		while(str[j] != '\0'){
			if(str[j] == '-'){
				++j;
				continue;
			}
			if(str[j] >= 'A' && str[j] <= 'Z')
				phoneNum[count][i++] = alphabet[str[j] - 'A'];
			else if(str[j] >= '0' && str[j] <= '9')
				phoneNum[count][i++] = str[j];
			if(i == 3)
				phoneNum[count][i++] = '-';	
			++j;			
		}
		phoneNum[count][i++] = '\0';
		++count;
	}
	qsort(phoneNum, itemNum, 9, strcmp);
	count = 1;
	for(i = 1; i < itemNum; ++i){
		if(strcmp(phoneNum[i], phoneNum[i-1]) == 0){
			++count;
			repeat = 1;
		}
		else{
			if(count > 1){
				printf("%s %d\n", phoneNum[i-1], count);
			}
			count = 1;				
		}
	}
	if(count > 1){
		printf("%s %d\n", phoneNum[i-1], count);
	}
	if(!repeat)
	    printf("No duplicates.\n");
    return 0;
}