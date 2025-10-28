 #include<stdio.h>

char box[10] = {'0','1','2','3','4','5','6','7','8','9'};
int player,choice;

int chekforwin();
void displayBoard();
void markBoard(char mark);

void displayBoard()
{
    system("cls");
    printf("\n***********************************************\n");
    printf("\             Tic Tac Toe Game ");
    printf("\n***********************************************\n");
    printf("\n       Player 1(X) and Player 2(O)\n\n\n");
    printf("   %c | %c | %c   \n",box[1],box[2],box[3]);
    printf("     |   | \n");
    printf("   %c | %c | %c   \n",box[4],box[5],box[6]);
    printf("     |   | \n");
    printf("   %c | %c | %c   \n",box[7],box[8],box[9]);

}

int checkforwin()
{
    int returnvalue = 0;
    if(box[1] == box[2] && box[2] == box[3])
    {
        returnvalue = 1;
    }
    else if(box[4] == box[5] && box[5] == box[6])
    {
        returnvalue = 1;
    }
    else if(box[7] == box[8] && box[8] == box[9])
    {
        returnvalue = 1;
    }
    else if(box[1] == box[4] && box[4] == box[7])
    {
        returnvalue = 1;
    }
    else if(box[2] == box[5] && box[5] == box[8])
    {
        returnvalue = 1;
    }
    else if(box[3] == box[6] && box[6] == box[9])
    {
        returnvalue = 1;
    }
    else if(box[1] == box[5] && box[5] == box[9])
    {
        returnvalue = 1;
    }
    else if(box[3] == box[5] && box[5] == box[7])
    {
        returnvalue = 1;
    }
    else if(box[1]!='1' && box[2]!='2' && box[3]!='3' && box[4]!='4' && box[5]!='5' && box[6]!='6' && box[7]!='7' && box[8]!='8' && box[9]!='9')
    {
        returnvalue = 0;
    }
    else
    {
        returnvalue = -1;
    }
    return returnvalue;
}

void markBoard(char mark)
{
    if(choice==1 && box[1]=='1')
        box[1]=mark;
    else if(choice==2 && box[2]=='2')
        box[2]=mark;
    else if(choice==3 && box[3]=='3')
        box[3]=mark;
    else if(choice==4 && box[4]=='4')
        box[4]=mark;
    else if(choice==5 && box[5]=='5')
        box[5]=mark;
    else if(choice==6 && box[6]=='6')
        box[6]=mark;
    else if(choice==7 && box[7]=='7')
        box[7]=mark;
    else if(choice==8 && box[8]=='8')
        box[8]=mark;
    else if(choice==9 && box[9]=='9')
        box[9]=mark;
    else
    {
        printf("Invalid move");
        player--;
    }
}

int main()
{
    int gameplay;
    char mark;
    player = 1;
    do{
        displayBoard();
        player = (player % 2)?1:2;
        printf("\n\nPlayer %d enter a number : ",player);
        scanf("%d",&choice);
        mark = (player==1)?'X':'O';
        markBoard(mark);
        gameplay = checkforwin();
        player ++;
    }while(gameplay == -1);
    if(gameplay == 1)
    {
        printf("\n\n  **************** Player %d win the match  ***************\n\n",--player);
        printf("                  Thank you for the game   \n");
    }
    else
    {
        printf("\n\n  *****  Game draw  *****\n\n");
        printf("          Thank you for the game   \n");
    }

    return 0;
}

