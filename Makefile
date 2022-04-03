
build: main.c
	gcc main.c -o mkwp
install:
	cp mkwp /usr/bin/
	cp -r .res ~/ 
	# 'watch out the makefile only copied the object and the .res directory' 
uninstall:
	rm /usr/bin/mkwp
	rm -r ~/.res
	# 'now it got removed but the source folder is still there(aka this dir) so if you want it to be fully gone just delete this dir tho of course that means you cant build it again'

