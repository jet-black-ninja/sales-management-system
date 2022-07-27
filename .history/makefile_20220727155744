#varaibles
CC=g++
G=-g
Executable=main
#main program
all:list.h node.h 
	#(CC)  node.h list.h main_file.cpp -o$(Executable)

#libraries
list.h: list.h 
	#(CC)  -c list.h
node.h: node.h 
	#(CC)  -c node.h 
# clear the object and executable files
clean:
	rm -rf *.o $(Executable)