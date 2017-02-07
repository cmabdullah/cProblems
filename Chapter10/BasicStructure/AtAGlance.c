#include<stdio.h>
custom datatype
=>structure
=>bit field
=>union
=>enumeration
.  = dot operator
-> = arrow operator

pointer variable rules
-----------------------
pointervariable->pointedvariable
(*pointervariable).pointedvariable/// if youse dot operator you must use parantheses



local variable
---------------
structure_variable_name.member_name



structure
----------

        ------>custom datatype(tag)
struct student {

        --->member name
    int var;

};



               --->structure variable name..
struct student var;

///structure variable holds total memory address.
///structure member has not specific memory address.

structure member as string
--------------------------
struct student {
    char var[20];
};
struct student variable;
strcpy(variable.var, "abdullah");


structure member as array///pending
--------------------------
struct student {
    char var[20];
};
struct student variable;
strcpy(variable.var, "abdullah");


structure member as pointer
--------------------------
struct student {
    char *var;
};
struct student variable, *cm;
cm = &variable;
///decleration
strcpy(variable.var, "abdullah");
or
strcpy(cm->var, "abdullah");
or
strcpy((*cm).var, "abdullah");


same job
--------

struct student {
    char var[20];
}variable;
strcpy(variable.var, "abdullah");

----------------------------------


nested structure
----------------
struct student {
    int x;
    float y;
};

struct var{
    int k;
    struct student student1;
};
struct student abu, *ptr;
abu.var.student1 = 100;///see 4NestedStructure.c


