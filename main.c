#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void Ign_Off(int);
void Ign_On(int);
void turn_ON_Motor(void);
void press_panic_button(int);
int main()
{
    int choice;
    printf("Enter The Choice that you Want To Perform \n");
    printf("Press \"0\" For IGN OFF\n");
    printf("Press \"1\" For IGN ON\n");
    printf("Press \"2\" For Send Panic\n");
    // printf("Press \"3\" For Cancel Panic\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 0:
        Ign_Off(choice);
        break;
    case 1:
        Ign_On(choice);
        break;
    case 2:
        press_panic_button(choice);
    }
}

void Ign_Off(int Ign_Off_)
{
    if (Ign_Off_ == 0)
        printf("Please Turned ON the Ignition of Vehicle");
}
void Ign_On(int choice)
{
    turn_ON_Motor();
}
void turn_ON_Motor(void)
{
    int user_pressed;
    printf("Press \"4\" To TURNED ON MOTOR\n");
    scanf("%d", &user_pressed);
    if (user_pressed == 4)
    {
        printf("Motor Get ON Enjoy This Ride\n");
        for (int i = 0; i < 20; i++)
        {
            printf("Riding....\n");
            sleep(2);
        }
    }
}

void press_panic_button(int Panic_pressed)
{
    if (Panic_pressed != 2)
    {
        printf("\"SOS\" Button Not Detected press \"2\"\n");
        return ;
    }
    else
    {
        if (Panic_pressed == 2) // SOS Detected
        {
            printf("SOS Detecting...\n");
            sleep(3);
            for (int i = 10; i > 0; i--)
            {
                printf("%d SOS is Sending....\n", i);
                sleep(1);
            }
            printf("SOS Detected....\n");

        }
    }
}
   