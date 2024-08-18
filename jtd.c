
#include <stdio.h>
#include "Source/Global.h"

int main(int argc,char *argv[]){

	char *DirHome = getenv("HOME");
	strcpy(FileName, DirHome);
	strcat(FileName, "/.dlist");

	if(argc < 2){
		Print_Help();
		return 0;
	}

	if(strcmp(argv[1],"save")==0) // Save_Dir
		dpush(argc,argv);
	
	else if(strcmp(argv[1],"undo")==0) // Undo_Dir
		dpop(argc,argv);
	
	else if(strcmp(argv[1],"go")==0) // Go_Dir
		dskip(argc,argv);
		
	else
		Error(ErrorArgument,argv[1]);
}
