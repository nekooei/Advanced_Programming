#include <stdio.h>


// argc  will count number of arguments
// argv store values of arguments
int main(int argc, char* argv[]){
	
	// argv[0] always store the name of programm
	// at this reson you must check argv > 1 
	if(argc <= 1){
		printf("USAGE ERROR\n");
	}else if(argc > 1){
		printf("name of program: %s\n",argv[0]);
		printf("You said: %s\n",argv[1]);
	}
	// return 0 for everything is good :)
	return 0;
}
