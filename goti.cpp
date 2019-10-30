class goti
{
private:
int color;
public:
int position;
goti(int c)
{
color=c;
position=0;
}
void makegoti()
{
setcolor(DARKGRAY);
circle(v[position].first,v[position].second,23);
circle(v[position].first,v[position].second,21);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(v[position].first,v[position].second+21,DARKGRAY);
setfillstyle(SOLID_FILL,DARKGRAY);
setfillstyle(SOLID_FILL,color);
floodfill(v[position].first,v[position].second,DARKGRAY);
}
void deletegoti()
{
int c=(position%2==0)?1:4;
drawlines();
setfillstyle(SOLID_FILL,c);
floodfill(v[position].first,v[position].second+10,WHITE);
floodfill(v[position].first,v[position].second-10,WHITE);
floodfill(v[position].first-10,v[position].second,WHITE);
floodfill(v[position].first+10,v[position].second,WHITE);
setbkcolor(c);
setcolor(BLACK);
char s[10];
sprintf(s,&quot;%d&quot;,position);
int w=textwidth(s);
int h=textheight(s);
settextstyle(10, HORIZ_DIR, 1);
outtextxy(v[position].first-(w/2),v[position].second-(h/2),s);
for(int i=0;i&lt;6;i++)
makeladder(ladder[i].first,ladder[i].second);
for(int i=0;i&lt;6;i++)
snke(snake[i].first,snake[i].second);
}
void transform(int dno)
{
if(position==0&amp;&amp;dno==6)
{
position=1;
makegoti();
}
else if(position&gt;0)
{
deletegoti();
position+=dno;
makegoti();
if(laddersnake[position].first!=laddersnake[position].second)
{
delay(200);
deletegoti();
position=laddersnake[position].second;
makegoti();
}
}
}
};