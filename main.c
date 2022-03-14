/*County Library Management System
By Kennedy Mwangi
22 Feb 2022
C89 compiler
*/

#include <stdio.h>
#include <stdlib.h>
int menu()
{
      int action;
         printf("select an action below\n");
         printf("1. Add new Patron\n");
         printf("2. View all Patrons\n");
         printf("3. View all books\n");
         printf("4. Add new book\n");
         printf("Your action\n");
         scanf("%d",&action);
         return action;
}
int main()
{
         printf("COUNTY LIBRARY SYSTEM\n");
         printf("WELCOME MR KENNEDY\n");
         printf("You selected action%d",menu());
         return 0;
}
