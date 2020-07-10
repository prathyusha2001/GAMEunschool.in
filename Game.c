#include<stdio.h>
int main()
{
    int user,computer;
    while(user!=4)
    {
    printf("\n please choose 1.rock,2.paper,3.scissor,4.quit:");
    scanf("%d",&user);
    computer=rand()%4;
    switch(user)
    {
    case 1://rock with rock,paper,scissor
    if((user==1)&&(computer==2))
    {
        printf("\n you choose:rock \n computer choose:paper \n result:computer won!");
        break;
    }
   else if((user==1)&&(computer==3))
    {
        printf("\n you choose:rock \n computer choose:scissor \n result:you won!");
        break;
    }
   else
    {   printf("\n you choose:rock \n computer choose:rock \n result:tie!");
        break;
    }
    case 2://paper with rock,scissor,paper
    if((user==2)&&(computer==1))
    {   printf("\n you choose:paper \n computer choose:rock \n result:you won!");
        break;
    }
   else if((user==2)&&(computer==3))
    {
        printf("\n you choose:paper \n computer choose:scissor \n result:computer won!");
        break;
    }
   else
    {
        printf("\n you choose:paper \n computer choose:paper \n result:tie!");
        break;
    }
    case 3://scissor with rock,paper,scissor
    if((user==3)&&(computer==1))
    {
        printf("\n you choose:scissor \n computer choose:rock \n result:computer won!");
        break;
    }
   else if((user==3)&&(computer==2))
    {
        printf("\n you choose:scissor \n computer choose:paper \n result:you won!");
        break;
    }
   else
    {
        printf("\n you choose:scissor \n computer choose:scissor \n result:tie!");
        break;
    }
    case 4:
        printf("Thankyou");
        break;
    default:printf("\n invalid!choose from 1 to 4");
    }
    }
}

