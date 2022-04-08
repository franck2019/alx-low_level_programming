# 0x09-static_libraries project

### libmy.a, main.h
Task: Create the static library libmy.a containing all the functions listed below:
  > * int _putchar(char c);
  > * int _islower(int c);
  > * int _isalpha(int c);
  > * int _abs(int n);
  > * int _isupper(int c);
  > * int _isdigit(int c);
  > * int _strlen(char *s);
  > * void _puts(char *s);
  > * char *_strcpy(char *dest, char *src);
  > * int _atoi(char *s);
  > * char *_strcat(char *dest, char *src);
  > * char *_strncat(char *dest, char *src, int n);
  > * char *_strncpy(char *dest, char *src, int n);
  > * int _strcmp(char *s1, char *s2);
  > * char *_memset(char *s, char b, unsigned int n);
  > * char *_memcpy(char *dest, char *src, unsigned int n);
  > * char *_strchr(char *s, char c);
  > * unsigned int _strspn(char *s, char *accept);
  > * char *_strpbrk(char *s, char *accept);
  > * char *_strstr(char *haystack, char *needle);

#### How to create the static library ?

1- create a header file for your librairy containing all the prototypes of your functions and call that file main.h

2- write the .c file of every function which has a prototype in the main.h header

3- compile all your .c file into object file (with .o extension) by using the following command:
```
 gcc -c cfile.c -o cfile.o
```

if there are many .c files to compile, write a script shell like this:
```
 for cfile in *.c; do
	
	oname=$(echo $cfile | cut -d. -f1)
	
	ofile=$(echo $oname.o)
	
	gcc -c $cfile -o $ofile
	
	if [[ $? -eq 0 ]]
    	then
        	echo "$cfile has been successfully compiled into $ofile"
    	else
        	echo "failed to compile"
    	fi
done
```

4- now create the archive for your library by using the following command:
```
ar rc library_name.a  *.o        (*.o means all your object files belonging to the library)
```

5- you can check if your library has been well created by checking all objects it cantains:
```
 ar -t library_name.a
```


### create_static_lib.sh
Task : Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

Here just create a file called create_static_lib.sh and use what you did above.

tips: don't forget to grant execution permission to the user ( chmod u+x create_static_lib.sh)
