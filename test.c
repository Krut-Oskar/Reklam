#include <stdio.h>
typedef struct
{
    char name[50];
    char mesages[5][50];
    char messages2[200];
    int money;

}CUSTOMER;
typedef struct
{
    CUSTOMER* allCustomers;
    //int numOfCustomers;
    int totalMoney;
}STATE;

void start(STATE* state) {
    CUSTOMER harry;
    strcpy(harry.name, "Hederlige Harrys Bilar");
    harry.money = 5000;
    strcpy(harry.mesages[0], "Köp bil hos Harry");
    strcpy(harry.mesages[1], "En god bilaffär(för Harry!)");
    strcpy(harry.mesages[2], "Hederlige Harrys Bilar");
    for (int i = 0; i < 3; i++)
    {
        printf(harry.mesages[i]);
    }


}
void main()
{
    STATE state;
    start(&state);
}