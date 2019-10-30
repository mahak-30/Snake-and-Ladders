int main()
{
//for(int i=0;)
setladdersnake();
//for(int i=1;i&lt;=100;i++)
//cout&lt;&lt;laddersnake[i].first&lt;&lt;&quot; &quot;&lt;&lt;laddersnake[i].second&lt;&lt;endl;
int gd = DETECT, gm, x, y, color, angle = 0;
initwindow(1200,700,&quot;Snake and Ladder&quot;);
setcolor(WHITE);
rectangle(105,15,getmaxy()+158,getmaxy()-12);
setfillstyle(SOLID_FILL, WHITE);
rectangle(110,20,getmaxy()+153,getmaxy()-17);
floodfill(108, 19, WHITE);
int top=20,bottom=getmaxy()-17,left=110,right=getmaxy()+153;
int horizontal=(right-left)/10;
int vertical=(bottom-top)/10;
int xcentre[10];
int ycentre[10];
drawbox(right,left,top,bottom,left,top,horizontal,vertical,xcentre,ycentre);
reverse(v.begin(),v.end());
v[0].first=0;
v[0].second=0;
cout&lt;&lt;endl&lt;&lt;endl;
for(int i=0;i&lt;6;i++)
makeladder(ladder[i].first,ladder[i].second);
for(int i=0;i&lt;6;i++)
snke(snake[i].first,snake[i].second);
setlinestyle(0,0,1);
goti yellow(14);
goti green(2);
bool check=true;//true-yellow,false-green
int ps=0;
calldice();
chance(check,ps);
getch();
srand(time(0));
int no;
while(1)
{
no=(rand()%6)+1;
dice(no);
if(check)//yellow
{
if(green.position==yellow.position&amp;&amp;green.position!=0&amp;&amp;(yellow.position+no)&lt;101)
{
yellow.position+=no;
yellow.makegoti();
green.makegoti();
}
else
{
if((yellow.position+no)&lt;101)
yellow.transform(no);
}
if(no!=6)
check=false;
}
else//green
{
if(green.position==yellow.position&amp;&amp;green.position!=0&amp;&amp;(green.position+no)&lt;101)
{
green.position+=no;
green.makegoti();
yellow.makegoti();
}
else
{
if((green.position+no)&lt;101)
green.transform(no);
}
if(no!=6)
check=true;
}
ps=(green.position&gt;yellow.position)?green.position:yellow.position;
chance(check,ps);
if(ps==100)
break;
getch();
}
getch();
closegraph();
}