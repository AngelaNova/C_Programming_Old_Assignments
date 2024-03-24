#include <stdio.h>


int testAnagram (char [], char []);


int main(){
char a[50];
char b[50];


//printf("Please provide the first word\n");
scanf( "%s", a );

//printf("Please provide the second word\n");
scanf( "%s", b );


if (testAnagram(a,b) == 0) {
	
//	printf("The words are anagrams\n");
}
else 
{
//	printf("The words are not anagrams\n");
	return 1;
}
	
return 0;

}




int testAnagram(char word1[], char word2[]){
	int count1=0;
	int count2=0;
	int i=0;
	int swap=0;

	while (word1[i] != '\0'){
		count1++;
		i++;
	}
	i=0;

	while (word2[i] != '\0'){
		count2++;
		i++;
	}

	if (count1!=count2){
	return 1;
	}

	//sort the words such that a comes before b, b before c, ect...
	for(i = 0; i< count1-1; ){
	
		for (int j=0; j< count1-i-1; j++){
		
			if (word1[j]>word1[j+1])
			{		
				swap = word1[j];
				word1[j] = word1[j+1];
				word1[j+1] = swap;
		
			}	
	
			if (word2[j]>word2[j+1])
			{
				swap = word2[j];
				word2[j] = word2[j+1];
				word2[j+1] = swap;

			}

		}
	i++;	
	}

	for (i=0; i<count1;i++){

		if (word1[i]!=word2[i]){
			return 1;
		}

	}

	return 0;
}
