/*
This is the make work directory program which uses system commands for simplicty 
this code may be cross-platform 
and the reason i made it its because to make making a main dir for programming easier
especially for C
might work for py
it will work with sh

ok but how does this code work?
it only calls system commands and creates a dir and inside that dir it will create the (c,sh,py...etc) file that you want and will add the code into that file  and it in the last you can add your own empty files

thats it

optionally you can add more options of writing strings to the mainfile by going to ~/.res or if you didnt install it yet workplacecreator/.res 

"alright that is cool but how can i use this?"

example:
	mkwp [the strings you wanna write to the main file] [main dir] [mainfile] [subfiles...]
	mkwp c myfolder main.c README.md


THO:
C- If this program detected that you wanna make a c file it will make Makefile and add the build commands into it to make building C source codes easier.



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
			sprintf(string,"mkdir %s && cat  ~/.res/%s > %s/%s",argv[2],argv[1],argv[2],argv[3]);
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
				//if the option he/she chose was C
				//add a Makefile for him/her
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
