#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct
{
    char name[10];
    int (*isr)(void);
}cmd_t;

int keyboard_interupt(void){
    printf("Key board interrupt triggered\n");
}
int Mouse_interupt(void){
    printf("Mouse interrupt triggered\n");
}
int RTC_interupt(void){
    printf("RTC interrupt triggered\n");
}
int display_interupt(void){
    printf("RTC interrupt triggered\n");
}
int usb_interupt(void){
    printf("RTC interrupt triggered\n");
}

cmd_t ivt[]=
{
    {"isr0",keyboard_interupt},
    {"isr1",Mouse_interupt},
    {"isr2",RTC_interupt},
    {"isr3",display_interupt},
    {"isr4",usb_interupt},
};


int main()
{
    while(1)
    {
        (ivt[rand()%5].isr)();
        sleep(1);
    }
    return 0;
}
