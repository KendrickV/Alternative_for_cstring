# Alternative_for_cstring

This is a CHAR class which replaces the most common (in my experience) functions from "cstring" library;
Using the Operator overloading it works fine, however some works still needs to be done.

Functions which it replaces are: 
strlen() - ooperator which is overloaded is () or functions using OBJ "len",
strcpy() - ooperator which is overloaded is = or functions using OBJ "copy",
strcat() - ooperator which is overloaded is + or functions using OBJ "concat",
strcmp() - ooperator which is overloaded is > or functions using OBJ "cmp",
strchr() - ooperator which is overloaded is & or functions using OBJ "find",
strstr() - ooperator which is overloaded is = or functions using OBJ "find",
