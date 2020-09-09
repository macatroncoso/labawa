#include "funciones.h"
#include "list.h"

int main()
{

     List * games = createList();

    printf("Welcome to the Unicorn's Game App ~(n _ n)~ What would you like to do?  \n\n");
    printf("Option 1 <3 : Import games from a file \n");
    printf("Option 2 <3 : Export games from a file \n");
    printf("Option 3 <3 : Add game \n");
    printf("Option 4 <3 : Search game by Name \n");
    printf("Option 5 <3 : Search game by type/s \n");
    printf("Option 6 <3 : Search game by amount of players \n");
    printf("Option 7 <3 : Search game by brand  \n");
    printf("Option 8 <3 : Search game by more than one category \n");
    printf("Option 9 <3 : Show all games \n");
    printf("Option 10 <3 : Show extensions only \n");
    printf("Option 11 <3 : Exit \n");

    int option;

    do{
    scanf("%d",&option);
    if ((option >10) || (option < 1))
       printf("Invalid option (> n <) please enter a valid menu option <3 \n");

    }while ((option >10) || (option < 1));

    switch(option){
      case 1:  importGames( games);
       break;
       case 2 : exportGames( games);
       break;

    }




    return 0;
}
