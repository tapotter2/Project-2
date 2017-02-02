#include <stdio.h>
#include <string.h>
int main (void){
	int char firstQ[10] = "";
	int char secondRQ[10] = "";
	int char roomMate[5] = "";
	int char datingQ[5] = "";
	
	printf("Who is getting the gift? : ");
	scanf("%s", firstQ);
	
	if(strcmp(firstQ, "friend")== 0){
		printf("What type? : ");
		scanf("%s", secondRQ);
	}
	else if(strcmp(secondRQ, "college")== 0){
		printf("Roomate? : ");
		scanf("%s", roomMate);
		}
			if(strcmp(roomMate, "yes")==0){
				printf("A funny Valentine's Card\n");
			}	
			else{
				printf("Dating them? : ");
				scanf("%s", datingQ);
				}
					if(strcmp(datingQ, "yes")== 0){
						printf("Something nice (chocolate or flowers)");
						}
							else {
								printf("Nothing");
							}
					
			

  
  
  
  
  
  
  return 0;
}  
