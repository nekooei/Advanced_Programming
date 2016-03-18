// sec21.c : Defines the entry point for the console application.
//

#include <stdio.h>
#include <string.h>

#define MAX 50
#define NAME_LEN 20

// declaration Global variables
int numbers[MAX];
char name[MAX][NAME_LEN];
int endIndex = 0;

/* Prototype of search function
 * @param char* givenName, name of person that you want to search
 *
 * @return int , index of location that name found, if not found return -1.
 */
int haveBefore(char givenName[NAME_LEN]);

int main()
{
	
	int tmpNumber;
	char tmpName[NAME_LEN];
	int index = -1;
	while (1)
	{
		printf("please give a name: ");
		scanf("%s", &tmpName);
		
		index = haveBefore(tmpName);

		if (index >= 0) {
			printf("name : %s \n age : %d \n", name[index], numbers[index]);
		} else if (index == -1) {
			printf	("we don't have number!\nplease give number: ");
			scanf("%d",&tmpNumber);

			strcpy(name[endIndex],tmpName);
			numbers[endIndex++] = tmpNumber;
		}
	}
	

	return 0;
}

int haveBefore(char givenName[NAME_LEN])
{
	int i;
	for (i = 0; i <= endIndex; i++) {
		if (strcmp(givenName,name[i]) == 0) {
			return i;
		}
	}
	return -1;
}

