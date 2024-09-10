#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>

int count=0;

void gotoxy(int x, int y);
void question(char[],char);
void one();
void two();
void three();
void four();
void five();

int main()
{
    
    char pw[20];
    char un[20];
    char savedpw [10][20];
    char savedun [10][20];
    char ch;
    int i,m,n,o;
    int k=1;
    a:i=0;
    begin:system("cls");
    system("COLOR 5e");
    gotoxy(15,5);
    printf("--------------------------\n");
    gotoxy(15,6);
    printf("|Login(1)  OR  Signup(2):|\n");
    gotoxy(15,7);
    printf("--------------------------\n\n");
    gotoxy(15,8);
    scanf("%d",&o);
    FILE *pt;
    if(o==1) goto login;
    else if(o==2) goto signup;
    else goto begin;

    signup: 
    pt=fopen("passwordlist.txt","a+");
    system("cls");
    gotoxy(15,0);
    printf("------------------------------------------\n");
    gotoxy(15,1);
    printf("|               Enter UserName           |\n");
    gotoxy(15,2);
    printf("------------------------------------------\n");
    gotoxy(15,3);
    scanf("%s",un);

    system("COLOR 5e");
    gotoxy(15,6);
    printf("------------------------------------------\n");
    gotoxy(15,7);
    printf("|                Enter Password          |\n");
    gotoxy(15,8);
    printf("------------------------------------------\n");
    gotoxy(15,9);
    scanf("%s",pw);
    fprintf(pt,"%s %s\n",un,pw);
    fclose(pt);
    goto begin;


    
    login:
    pt=fopen("passwordlist.txt","r");
    system("cls");
    system("COLOR 14");
    gotoxy(15,0);
    printf("------------------------------------------\n");
    gotoxy(15,1);
    printf("|               Enter UserName           |\n");
    gotoxy(15,2);
    printf("------------------------------------------\n");
    gotoxy(30,3);
    while(1)
    {
        Beep(7000,200);//suru ko 7000 is frequency in hz  and second ko 200 is time in millisecond
        ch=getch();
    if(ch==13)
    {
        un[i]='\0';  
        break;
    }
    else
    {
        un[i++]=ch;
        printf("*");
    }
    }
    printf("\n\n\n");
    i=0;
    system("COLOR 5e");
    gotoxy(15,6);
    printf("------------------------------------------\n");
    gotoxy(15,7);
    printf("|                Enter Password          |\n");
    gotoxy(15,8);
    printf("------------------------------------------\n");
    gotoxy(30,9);
    while(1)
    {
    ch=getch();
    Beep(7000,200);
    if(ch==13)
    {
        pw[i]='\0';  
        break;
    }
    else
    {
        pw[i++]=ch;
        printf("*");
    }
    }

    while( !feof(pt) )
    {
    
    fscanf(pt,"%s %s",savedun[i],savedpw[i]);
    n=strcmp(un,savedun[i]);
    m=strcmp(pw,savedpw[i]);
    if(n==0 && m==0)
    {
        Beep(100,100);
        gotoxy(15,10);
        printf("\n\nsuccessfully login:");
        Sleep(1000);
        system("cls");
        k=0;
        break;
    }
    i++;
    }
    fclose(pt);
    if(k==1)
    {
        Beep(1000,100);
        printf("\n\nIncorrect Password:\n");
        Sleep(2000);
        system("cls");
        goto a;
    }
    gotoxy(15,2);
    printf("\n\n\n\t\t\tYour Test Begins in :\n\n\n\n\n\n\n");
       for(int i=5,k=1; i>0; i--)
    {

        if(k%2==0)
        {
        system("color 14");
        
        }
        if(k%2!=0)
        {
        system("color 41");
        
        }  
            
        if(i==5) five();
        else if(i==4) four();
        else if(i==3) three();
        else if(i==2) two();
        else one();
        Beep(5500,500);
        Sleep(1000);
        k++;
    }
    system("cls");
    system("COLOR 14");
    gotoxy(0,5);

    
question("Q.1 Order for time complexity of bubble sort algorithm in worst case:\n\na.O(n^2)\t b.O(n)\t c.O(1)\t d.O(nlog(n))\n\n", 'a');  // a. O(n^2)
system("cls");

question("Q.2 Which sorting algorithm has a time complexity of O(n log n) in the average case?\n\na. Bubble Sort\t b. Insertion Sort\t c. Quick Sort\t d. Selection Sort\n\n", 'c');  // c. Quick Sort
system("cls");

question("Q.3 What is the space complexity of the Merge Sort algorithm?\n\na. O(n)\t b. O(log n)\t c. O(n log n)\t d. O(1)\n\n", 'a');  // a. O(n)
system("cls");

question("Q.4 Which data structure uses LIFO (Last In First Out) principle?\n\na. Queue\t b. Stack\t c. Linked List\t d. Heap\n\n", 'b');  // b. Stack
system("cls");

question("Q.5 Which of the following is a stable sorting algorithm?\n\na. Quick Sort\t b. Merge Sort\t c. Heap Sort\t d. Selection Sort\n\n", 'b');  // b. Merge Sort
system("cls");

question("Q.6 What is the worst-case time complexity of the linear search algorithm?\n\na. O(n)\t b. O(log n)\t c. O(n^2)\t d. O(1)\n\n", 'a');  // a. O(n)
system("cls");

question("Q.7 Which of the following is not a fundamental data structure?\n\na. Array\t b. Stack\t c. Tree\t d. Loop\n\n", 'd');  // d. Loop
system("cls");

question("Q.8 What is the time complexity of inserting an element in the middle of an array?\n\na. O(n)\t b. O(log n)\t c. O(1)\t d. O(n^2)\n\n", 'a');  // a. O(n)
system("cls");

question("Q.9 Which algorithm is used for finding the shortest path in a weighted graph?\n\na. Depth-First Search (DFS)\t b. Breadth-First Search (BFS)\t c. Dijkstra's Algorithm\t d. A* Algorithm\n\n", 'c');  // c. Dijkstra's Algorithm
system("cls");

question("Q.10 What is the average-case time complexity of the binary search algorithm?\n\na. O(n)\t b. O(log n)\t c. O(n log n)\t d. O(1)\n\n", 'b');  // b. O(log n)
system("cls");

gotoxy(15,10);
printf("YOU  SCORED  %d  OUT OF  10",count);
Sleep(3000);
system("cls");
pt=fopen("result.txt","a");
fprintf(pt,"%s %d\n",un,count);
fclose(pt);

pt=fopen("result.txt","r");
gotoxy(5,15);
printf("Scores:\n");


char name[20];
int marks;
while(fscanf(pt,"%s %d",name,&marks) == 2)
    {
        printf("%s : %d\n",name,marks);
    }
fclose(pt);


    getch();
    return 0;
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void question(char quest[],char correctans)
{
    char ans;
    questionbegin:
    gotoxy(15,1);
    printf("%s\n",quest);
    gotoxy(15,9);
    fflush(stdin);
    scanf("%c",&ans);
    Beep(8000,400);
    if(ans<'a' || ans>'d')
    {   
        gotoxy(15,7);
        printf("Invalid option selectd\n");
        Sleep(1000);
        system("cls");
        goto questionbegin;
    }
    if(ans==correctans)
        count++;

}
void five()
{   gotoxy(15,3);
    printf("  #####   \n");
    gotoxy(15,4);
    printf(" ##       \n");
    gotoxy(15,5);
    printf(" ######   \n");
    gotoxy(15,6);
    printf("      ##  \n");
    gotoxy(15,7);
    printf(" #####    \n");
}
void four() {
    gotoxy(15,3);
    printf("   ####   \n");
    gotoxy(15,4);
    printf("  ##  ##  \n");
    gotoxy(15,5);
    printf(" ##   ##  \n");
    gotoxy(15,6);
    printf("########  \n");
    gotoxy(15,7);
    printf("     ##   \n");
}
void three() {
    gotoxy(15,3);
    printf("  #####   \n");
    gotoxy(15,4);
    printf("      ##  \n");
    gotoxy(15,5);
    printf("  #####   \n");
    gotoxy(15,6);
    printf("      ##  \n");
    gotoxy(15,7);
    printf("  #####   \n");
}
void two() {
    gotoxy(15,3);
    printf("  ######  \n");
    gotoxy(15,4);
    printf(" ##    ## \n");
    gotoxy(15,5);
    printf("      ##  \n");
    gotoxy(15,6);
    printf("     ##   \n");
    gotoxy(15,7);
    printf("   ##     \n");
    gotoxy(15,8);
    printf("  ######  \n");
}
void one() {
    gotoxy(15,3);
    printf("   ##   \n");
    gotoxy(15,4);
    printf("  ###   \n");
    gotoxy(15,5);
    printf("   ##   \n");
    gotoxy(15,6);
    printf("   ##   \n");
    gotoxy(15,7);
    printf("   ##   \n");
    gotoxy(15,8);
    printf(" #####  \n");
}
