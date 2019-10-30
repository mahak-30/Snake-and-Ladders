void calldice()//calling the dice
{
setcolor(WHITE);
circle(1000,300,30);
setfillstyle(SOLID_FILL,GREEN);
floodfill(1000,300,WHITE);
setbkcolor(GREEN);
}
void dice(int no)//dice design
{
setcolor(WHITE);
circle(1000,300,30);
setfillstyle(SOLID_FILL,GREEN);
floodfill(1000,300,WHITE);
setbkcolor(GREEN);
delay(100);
char s[10];
sprintf(s,&quot;%d&quot;,no);
int w=textwidth(s);
int h=textheight(s);
setcolor(BLACK);
settextstyle(10, HORIZ_DIR, 1);
outtextxy(1000-(w/2),300-(h/2),s);
}