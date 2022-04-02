/*
This is the make work directory program which uses system commands for simplicty 
this code may be cross-platform 
and the reason i made it its because to make making a main dir for programming easier
especially for C
might work for py
it will work with sh

-----------------------THIS CODE THINKS THAT YOU HAVE THE { cfill , pyfill , shfill  } COMMANDS IN YOUR BIN DIRECTORY





----------------------inshaAllah i will make a one with thinking you have these sh scripts in the same dir----------


may continue this project


*/
#include<stdio.h>

#include<stdlib.h>
#include<string.h>


int main(int argc,char *argv[]){
	if(argc==1)
	{
puts("type something for example mkwp c workplacename mainfilename otherfiles");
exit(0);

	}
if(!strcmp(argv[1]," "))
{
puts("type something for example mkwp c workplacename mainfilename otherfiles");
exit(0);
}
if(argv[2]!=NULL&&strcmp(argv[1],"-h"))
		{


			char string[100];
			sprintf(string,"mkdir %s && %sfill -n > %s/%s.%s",argv[2],argv[1],argv[2],argv[3],argv[1]);
			system(string);
				if(argc>=5)
				{

					for(int i=argc;i>4;i--)
					{

						char string2[100];

						sprintf(string2,"> %s/%s",argv[2],argv[i-1]);
						system(string2);

					}



				}
				if(!strcmp(argv[1],"c"))
				{
				char makefile[100];
				sprintf(makefile,"echo  '%s:%s.%s\n	gcc %s.%s -o %s' > %s/Makefile",argv[3],argv[3],argv[1],argv[3],argv[1],argv[3],argv[2]);
				system(makefile);
				}
			puts("done");

		}else//help section
			{
				puts("----------use mkwp [file format] [dir] [mainfile] [otherfiles]-[how much you wanna make of them]");
				puts("-------[file format]: for example you wanna make a c file inside the dir you wanna make and you wanna it to be ready, it will make the [mainfilename].[file format] (for our example: name.c)");
				puts("-------[file format]s available are: c py sh ");
				puts("-------specialities of file format [c]: it will add a makefile with the build command");
			}





return 0;
}
