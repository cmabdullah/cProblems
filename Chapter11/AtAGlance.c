#include<stdio.h>
int main(){
    int x, y, z;
    int *A; /// asterisk(*)
    A = &x;/// A holds memory address of x....
    y =*&x;///also valid
    ///A = pointer variable
    ///x = pointed variable
    /********
    ------------:-------------
    basic pointer
    ------------:-------------
    float  b =20,   *q ;
    q = &b;//pass address

    printf("Address of q : %x address of b : %x value : %x",&q , q , *q);

    =>Address of pointer variable = &q
    =>address of pointed variable = q
    =>Value of   pointed variable = *q

    ***/


    /***
    ------------:-------------
    characteristics of pointer
    ------------:-------------
    pointer has pointed variable , that decleared before.....
    pointer has'nt ablity to store data.
    it hold memory address from another variable.
    pointer variable and pointed variable data type must be same...
    // pointed variable memory address  == pointer variable memory address
    ***/


    /*******
    some decleration of pointer
    int x, *y = &x; ///valid
    int *y = &x, x;///invalid, decler pointed variable first.....
    ***/

   /// * operator => indirect operator

   /******
   Type casting
   float b = 100.0022;
   char  = *A;
   A = (char*)&b;///valid
        -----
        only hold first degit...
   ***/

   not possible to add , mult, sub, div between two pointer ....
   x/y , x*y , x-y , x+y ///invalid

   pointer allow to add or sub data with poiter,
   int p[100] ;
   int *A;
   A = p;/// when pass array not necessary to use & [] , array name use as element address...
   A = A+1;

   ---------------------
   int *x;
   int ev[5] = {1,2,3,4,5} ;
   x = ev[0] ;/// memory address 1234
   ev[0] = ev[0]+1; ///memory address 1234 +2
   int = 2
   char = 1
   float = 4
   -------------------------

   /*********
    ------------:-------------
    increment operator..
    ------------:-------------

   i++
   return data first , then increment .
   ------------------------------------

   ++i
   increment first, then return data .
   ------------------------------------
unary operator => left to right
   x = *(ptr++)
   return pointed ptr first, then increment.

   __________________________
   | 1 | 2 | 3 | 4 | 5 | 6 |
   --------------------------
   ----^

   --------------------------------------------

   x = *++ptr

   first                             then
   (++ptr)                            *++ptr
   increment                         pointed ptr will return data.....
                                     though ptr pointed second element , so ptr value must be third elements address
                                     for this x = 3
                                            __________________________
                                            | 1 | 2 | 3 | 4 | 5 | 6 |
                                            --------------------------
                                            ---------^
    --------------------------------------------------------------------------------------------------------------------
    ****/


    ***pointer type
    -----------------
    #null pointer
    #void pointer
    #const pointer
    #chain of pointers or pointer to pointer

                                                                                                                                                  []
    ---------------------------------------------------------------------------------------------------
    NULL pointer
    ---------------------------------------------------------------------------------------------------
    pointer variable not only holds address also holds data, data must be NULL , data name is NULL value
    NULL pointer define as
    char *ptr = NULL ;
    printf("%04x hex   %02x hex", ptr, *ptr);
    => 0000hex   00hex
       -------   -----
       Address    value
       if null always print 0 ;


     ---------------------------------------------------------------------------------------------------
     void pointer (void*)
     ---------------------------------------------------------------------------------------------------
     it holds any data type variable address without casting
     int x = 100 ;
     double y = 200;
     void *ptr;

     use pointer memory address
     --------------------------
     ptr = &x; /// holds address of this variable.... without casting

     /// it is possible to pass any data type pointer address to void pointer...
     int x = 20;
     int *ip ;
     void *vp ;
     ip = &x;
     vp = ip ;///holds int *ip pointers memory address.....


     use pointed data
     -----------------
     ///pass pointer data to another variable by casting ........
                     ----
     int x = 10,
     int y;
     void *ptr;
     ptr = &x; ///assigne address....
     y = *(int*)ptr ; /// assigne value.....

     ---------------------------------------------------------------------------------------------------
     const pointer
     ---------------------------------------------------------------------------------------------------
     const int i =100; /// const decleration in non pointer variable
     /// if you change values of i inside a program anywhare, compiler must show error .

     const pointer decleration
     => const int *ptr///pointed data alwas constant
     int x , y = 20;
     const int *ptr;
     ptr = &y;///valid
     x = *ptr;///valid
     *ptr  = 50; ///invalid, pointed data alwas constant
     ptr = &x;///check kore dekho
     -----------------------------------------------------


     => int *const ptr ///pointed memory address aloyas constant, data may possible to change
     int x , y = 20;
     int *const ptr ;
     ptr = &y;///valid
     x = *ptr;///valid
     *ptr  = 50; ///valid
     ptr = &x;///invalid , memory address aloyas constant




    ---------------------------------------------------------------------------------------------------
    pointer to pointer
    ---------------------------------------------------------------------------------------------------
    under construction
    page 366 ANSI







    ---------------------------------------------------------------------------------------------------
    pointer and array
    ---------------------------------------------------------------------------------------------------
    pointer notation
    int  a[3] = {1,2,3};
    int *p;
    size = printf("%d",sizeof(a));
    p = a;/// when pass array not necessary to use & [] , array name use as element address...
    pointer formula
    a[i] = *(a+i);

    array and pointer not same
    --------------------------

    a[0]a[1]a[2]a[3]a[4]a[5]
    __________________________
    | 1 | 2 | 3 | 4 | 5 | 6 |
    --------------------------
    p[0]p[1]p[2]p[3]p[4]p[5]
    ----------^
    a[2]=  men after two block from initialization/// a[2] = array
    p[2]=  men add 2 with current memory address, then pointed value

    pointer notation

    1d array
    a[0] = *(a+0);
    a[r] = *(a+r);

    2d array
    a[r][c] = *(a[r]+c);
            = *(*(a+r)+c);

    ///you may able to determine memory address by following formula
    ptr[r][c] = &ptr[0][0]+r*total_column+c
    for pointer p+r*total_column+c ///understand carefully..........

    pointer as function parameter(no return value)
    -----------------------------
    ///call by reference method....
    /// this process only applicable for void data type function, no return data type function,
    /// you can use static variable inside user define function if you want to return value....
                    ------

    void func1(int *x, int *y){///pass one copy of data from main func via parameter , this copy holds on stack
        *x = 50;
        printf("%d%d", x,y); => result = x = 50, y = 34;/// show values from stack
    }
    int main(){
    int a, b;
    a = 30 , b= 34;///values are hold in memory , thats men parmanent
    printf("%d%d", x,y); => result = a = 30, b = 34;///show values from memory
    func1(&a,&b);
    ///after func1 call
    printf("%d%d", x,y); => result = a = 50, b = 34;/// show values from stack
    }

    pointer as function return value
    -----------------------------
        /// you can use static variable inside user define function if you want to return value....
                        ------
    int *func1(){
    static int a[3] = {1,3,5};
    return a;
    }
    int main(){
    int i, *ptr;
    *ptr = func1();
    for (i = 0 ; i<3;i++){
        printf("Value[%d] = %d", i, p[i]);
        }
    }

    function pointer
    -----------------
    => int (*pointerfunction)(int, int);/// page 379 ANSI
    allow take data , data return

    => int (*pointerfunction)(void);
    allow data return, no data take

    => void (*pointerfunction)(int);
    allow take data , no data return
    ///detail BasicPointer/18_function_parameter_as_pointer.c












    --------------------------------------------------------------------
    ------------------------------------------------------------------------------------------------------


    pointer expression
    int *p,*q;
    y = *p  *   *q ///allow
    z = 5*  -*p1/   *p1///allow , Note blank space betyeen / and * above


    add sub allow
    -------------page 36 ANSI
    p1+1;///allow
    p1+p2///allow
    p1-p2///allow
    p1>p2///allow
    p1==p2///allow
    p1!=p2///allow /// Note comparesion can be meaningfully in handalling arrays and strings.


    ///we may not use poointer in division or multiplication
    p1 * p2///not allow
    p1 / p2 ///not allow, more detail page 367 ANSI 6e

    address of n[3] = baseaddress + (3 * scalerfactor of int)
                    = 100+(3*2)=>106;



    char *name;
    name = "Abdullah" ; ///allow...

    char arr[3][25]; => arr[value][length];
    ///individual string will be equal length.
    char name[3]= { "abdullah",
                    "abc",
                    "defg"}; ///page 375 ANSI.


    caution    *p[3] , (*p)[3] fact , 375 ansi


    pointer and structure...
    ------------------------

    struct inventory{
                    char name[20];
                    int  amount;
                    float price;
                    } product[2], *ptr;

    main(){
    struct invent product[2], *ptr ;
    }
    ptr ->name
    ptr ->amount
    ptr ->price///valid
    same as (*ptr).price ///also valid pranthesic use must due to control precedence order ....
    ---   ---   ---   ---   ---   ---   ---

    note:///page 384 ANSI
        ++ptr->cout /// increment count not ptr
        ptr++->count ///links count first , then increment pointer.
        (++ptr)->count ///increment pointer first , then links count

        *ptr->p         ///fetch whatever p pointed to
        *ptr->p++       ///increment p after it accessing whatever it pointed to
        *ptr++->p       ///increment p after it accessing whatever it pointed to
        (*ptr->p)++     ///increment whatever p pointed to..
}
