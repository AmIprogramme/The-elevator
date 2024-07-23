#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#define up 72
#define down 80
#define enter 13
#define cls system("cls")
#define pause system("pause")

/*Title: The elevator.
  Made by Andres Quesada Rodriguez*/

/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Advice!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                        This code is only for computers, not for smarthphone or tablet.

*/

using namespace std;

int counter_for;
int counter_row = 0;
int counter_collum = 0;

COORD coord = {0,0};
void gotoxy (int y, int x){

    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int menu_of_option_by_user(const char *[ ],int);
void animation_of_moving_into_the_elevator(const char *[ ], int);

int main()
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
  const char *number_floor [ ] ={"Parking", "Lobby", "Floor 1.", "Floor 2.", "Floor 3.", "Floor 4.", "Floor 5.", "Turn off elevator."};
  int input_by_user = 0;

  bool end_of_while = true;


    gotoxy(3, 28);
   cout << "Welcome to the elevator.";
   gotoxy(4, 28);
   cout << "Press one bottom moving the narrow down and up into the screen.";
   gotoxy(29, 0);
   system("pause");
   system("cls");
  do{
     input_by_user = menu_of_option_by_user(number_floor,input_by_user);
        switch(input_by_user)
        {
            case 0: // Parking.
                animation_of_moving_into_the_elevator(number_floor,input_by_user);
                gotoxy(30, 0);


                break;

            case 1: // Lobby
                animation_of_moving_into_the_elevator(number_floor,input_by_user);
                gotoxy(30, 0);

                break;


             case 2: // Floor 1
                animation_of_moving_into_the_elevator(number_floor,input_by_user);
                gotoxy(30, 0);

                break;

             case 3: //Floor 2
               animation_of_moving_into_the_elevator(number_floor,input_by_user);
               gotoxy(30, 0);

                break;

             case 4: // Floor 3
               animation_of_moving_into_the_elevator(number_floor,input_by_user);
               gotoxy(30, 0);

                break;

             case 5: // Floor 4
              animation_of_moving_into_the_elevator(number_floor,input_by_user);
              gotoxy(30, 0);

                break;

             case 6: // Floor 5
               animation_of_moving_into_the_elevator(number_floor,input_by_user);
               gotoxy(30, 0);

                break;
             case 7: // Out of the system
                 cls;
                 gotoxy(10,50);
                cout << "Have a nice day.";
                gotoxy(11,50);
                cout << "________________";
                Sleep(50);
                end_of_while = false;
                break;
        }

    }while(end_of_while);

    gotoxy(30,0);
    return 0;
}

int menu_of_option_by_user(const char *list_of_floors[],int number_of_input)
{
    bool end_of_options = true;
    int pressed_bottom;



    do
    {
    cls;
    gotoxy(5, 43);
    cout <<char(201);
    gotoxy(5, 75);
    cout <<char(187);
    gotoxy(14,43);
    cout <<char(200);
    gotoxy(14,75);
    cout <<char(188);

    for (counter_collum = 0; counter_collum <= 30; counter_collum++)
        {
            gotoxy(5,44 + counter_collum);
            cout << char(205);
            gotoxy(14 , 44 + counter_collum);
            cout << char(205);

        }

    for (counter_row = 0; counter_row <= 7; counter_row++)
        {
            gotoxy(6 + counter_row, 43);
            cout << char(186);
            gotoxy(6 + counter_row, 75);
            cout << char(186);

        }
// ---------------------------------------------------------------------------------------------
       for(counter_for = 0; counter_for <= 7; counter_for++)
        {
            gotoxy(6 + counter_for, 50);
            cout << list_of_floors[counter_for];

        }
        gotoxy(6 + number_of_input, 46);
        cout << "==>";

        do{
            pressed_bottom = getch();

          }while(pressed_bottom != up && pressed_bottom != down && pressed_bottom != enter);

        switch(pressed_bottom)
          {
            case up:
                if (number_of_input < 1)
                    {
                          number_of_input = 7;
                    }else
                        {
                          number_of_input--;
                        }
                break;
            case down:
                if (number_of_input > 6)
                    {
                        number_of_input = 0;
                    }else
                        {
                         number_of_input++;
                        }
                break;
            case enter:
                end_of_options = false;
                break;
          }




    }while(end_of_options);

return number_of_input;

}

void animation_of_moving_into_the_elevator(const char *floor[ ], int floor_chosen )
{

    static int present_position;
    cls;

    try{
            if (present_position == floor_chosen)
                {
                    throw "You are in this position, choose another bottom.";
                }
            gotoxy(4, 45);
            cout << "Currently position: " << floor[present_position];
            gotoxy(5, 45);
            cout << "The elevator goes to: " << floor[floor_chosen];

            gotoxy(7, 40);
            cout << char(201); // Corner upper left character.

            gotoxy(7, 80);
            cout << char(187); // Corner upper right character.

            gotoxy(19, 40);
            cout << char(200); // Corner lower left character.

             gotoxy(19, 80);
            cout << char(188); // Corner lower right character.




            for( counter_row = 0; counter_row <= 10; counter_row++  )
                {
                    gotoxy(8 + counter_row, 40);
                    cout << char(186);

                    gotoxy(8 + counter_row, 80);
                    cout << char(186);
                }

            for( counter_collum =0; counter_collum <= 38; counter_collum++)
                {
                    gotoxy(7, 41 + counter_collum);
                    cout << char(205);

                    gotoxy(19, 41 + counter_collum);
                    cout << char(205);
                }

                system("color 0");
                for(counter_collum = 0; counter_collum <= 38; counter_collum++)
                {

                    Sleep(50);
                  for(counter_row = 0; counter_row <= 10 ; counter_row++ )
                    {

                        gotoxy(8 + counter_row, 41 + counter_collum);
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
                        cout << char(177);

                    }
                }

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
        //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | BACKGROUND_INTENSITY);

            present_position = floor_chosen;
            gotoxy(24,45);
            cout << "You got to your position.";

    }catch(const char* excepto)
        {
            cls;
            gotoxy(5, 30);
            cout <<excepto;

        }
    gotoxy(30, 0);
    pause;

}
