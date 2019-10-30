#include&lt;graphics.h&gt;
#include &lt;vector&gt;
#include &lt;stdlib.h&gt;
#include &lt;cstdlib&gt;
#include &lt;bits/stdc++.h&gt;
#include&lt;conio.h&gt;
#include &lt;iostream&gt;
#include &lt;ctime&gt;
#include&lt;dos.h&gt;
#include&lt;string&gt;
#include&lt;sstream&gt;
using namespace std;
vector&lt; pair&lt;int, int&gt; &gt; v;
vector&lt; pair&lt;int, int&gt; &gt; laddersnake;
vector&lt; pair&lt;int, int&gt; &gt; ladder;
vector&lt; pair&lt;int, int&gt; &gt; snake;
void makeladder(int,int);
void snke(int,int);
void makesteps(int,double,int);
void drawlines();
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
void drawlines()
{
setcolor(WHITE);
int top=20,bottom=getmaxy()-17,left=110,right=getmaxy()+153;
int horizontal=(right-left)/10;
int vertical=(bottom-top)/10;
int xcentre[10];
int ycentre[10];
int itop=top;
int ileft=left;
for(int i=0;i&lt;9;i++)
{
ycentre[i]=itop+(vertical/2);
itop+=vertical;
line(left,itop,right,itop);
}
ycentre[9]=itop+(vertical/2);
for(int i=0;i&lt;9;i++)
{
xcentre[i]=ileft+(horizontal/2);
ileft+=horizontal;
line(ileft,top,ileft,bottom);
}
xcentre[9]=ileft+(horizontal/2);
}
void drawbox(int right,int left,int top,int bottom,int ileft,int itop,int horizontal,int vertical,int
xcentre[],int ycentre[])
{
for(int i=0;i&lt;9;i++)
{
ycentre[i]=itop+(vertical/2);
itop+=vertical;
line(left,itop,right,itop);
}
ycentre[9]=itop+(vertical/2);
for(int i=0;i&lt;9;i++)
{
xcentre[i]=ileft+(horizontal/2);
ileft+=horizontal;
line(ileft,top,ileft,bottom);
}
xcentre[9]=ileft+(horizontal/2);
int n=100;
bool alt=true;
for(int i=0;i&lt;10;i++)
{
if(alt)
for(int j=0;j&lt;10;j++)
{
if(n%2==0)
{
setfillstyle(SOLID_FILL,BLUE);
floodfill(xcentre[j],ycentre[i],WHITE);
setbkcolor(BLUE);
}
else
{
setfillstyle(SOLID_FILL,RED);
floodfill(xcentre[j],ycentre[i],WHITE);
setbkcolor(RED);
}
v.push_back(make_pair(xcentre[j],ycentre[i]));
setcolor(BLACK);
char s[10];
sprintf(s,&quot;%d&quot;,n);//instead of output data it saves data
int w=textwidth(s);
int h=textheight(s);
settextstyle(10, HORIZ_DIR, 1);
outtextxy(xcentre[j]-(w/2),ycentre[i]-(h/2),s);//output text at centre
n--;
alt=false;
}
else
for(int j=9;j&gt;=0;j--)
{

if(n%2==0)
{
setfillstyle(SOLID_FILL,BLUE);
floodfill(xcentre[j],ycentre[i],WHITE);
setbkcolor(BLUE);
}
else
{
setfillstyle(SOLID_FILL,RED);
floodfill(xcentre[j],ycentre[i],WHITE);
setbkcolor(RED);
}
v.push_back(make_pair(xcentre[j],ycentre[i]));
setcolor(BLACK);
char s[10];
sprintf(s,&quot;%d&quot;,n);
int w=textwidth(s);
int h=textheight(s);
settextstyle(10, HORIZ_DIR, 1);
outtextxy(xcentre[j]-(w/2),ycentre[i]-(h/2),s);
n--;
alt=true;
}
}
v.push_back(make_pair(101,101));
}
void calldice()
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
void setladdersnake()
{
int arr1[]={5,42,9,51,20,55};
int arr2[]={17,85,31,89,38,93};
for(int i=0;i&lt;=100;i++)
laddersnake.push_back(make_pair(i,i));
for(int i=0;i&lt;6;i++)
{
laddersnake[arr1[i]].second=arr2[i];
ladder.push_back(make_pair(arr1[i],arr2[i]));
}
int s1[]={99,95,82,68,56,36};
int s2[]={78,37,21,29,14,2};
for(int i=0;i&lt;6;i++)
{
laddersnake[s1[i]].second=s2[i];
snake.push_back(make_pair(s1[i],s2[i]));
}
}
void makesteps(int p2,double slope,int no)
{
double x=(double)v[p2].first,y=(double)v[p2].second;
double slope1=(double)(-1)/slope;
double slope2=slope;
double angle1=(double)atan(slope1);
double angle2=(double)atan(slope2);
for(int i=0;i&lt;no;i++)
{
if(slope1&lt;0)
{
x=(double)(x-((double)abs((double)cos(angle1))*18));
y=(double)(y+((double)abs((double)sin(angle1))*18));
}
else
{
x=(double)(x+((double)abs((double)cos(angle1))*18));
y=(double)(y+((double)abs((double)sin(angle1))*18));
}
double c11x,c11y,c12x,c12y,c21x,c21y,c22x,c22y;
if(slope2&lt;0)
{
c11x=(double)(x-((double)abs((double)cos(angle2))*12));
c11y=(double)(y+((double)abs((double)sin(angle2))*12));
c12x=(double)(x+((double)abs((double)cos(angle2))*12));
c12y=(double)(y-((double)abs((double)sin(angle2))*12));
}
else
{
c11x=(double)(x+((double)abs((double)cos(angle2))*12));
c11y=(double)(y+((double)abs((double)sin(angle2))*12));
c12x=(double)(x-((double)abs((double)cos(angle2))*12));
c12y=(double)(y-((double)abs((double)sin(angle2))*12));
}
line(c11x,c11y,c12x,c12y);
}
}
void makeladder(int p1,int p2)
{
double slope=(double)(v[p2].second-v[p1].second)/(v[p2].first-v[p1].first);
slope=(double)(-1)/slope;
double angle=(double)atan(slope);
double c11x,c11y,c12x,c12y,c21x,c21y,c22x,c22y;
if(slope&lt;0)
{
c11x=(double)(v[p1].first-((double)abs((double)cos(angle))*12));
c11y=(double)(v[p1].second+((double)abs((double)sin(angle))*12));
c12x=(double)(v[p1].first+((double)abs((double)cos(angle))*12));
c12y=(double)(v[p1].second-((double)abs((double)sin(angle))*12));
c21x=(double)(v[p2].first-((double)abs((double)cos(angle))*12));
c21y=(double)(v[p2].second+((double)abs((double)sin(angle))*12));
c22x=(double)(v[p2].first+((double)abs((double)cos(angle))*12));
c22y=(double)(v[p2].second-((double)abs((double)sin(angle))*12));
}
else
{
c11x=(double)(v[p1].first+((double)abs((double)cos(angle))*12));
c11y=(double)(v[p1].second+((double)abs((double)sin(angle))*12));
c12x=(double)(v[p1].first-((double)abs((double)cos(angle))*12));
c12y=(double)(v[p1].second-((double)abs((double)sin(angle))*12));
c21x=(double)(v[p2].first+((double)abs((double)cos(angle))*12));
c21y=(double)(v[p2].second+((double)abs((double)sin(angle))*12));
c22x=(double)(v[p2].first-((double)abs((double)cos(angle))*12));
c22y=(double)(v[p2].second-((double)abs((double)sin(angle))*12));
}
double distance=(double)sqrt(((double)((v[p1].first-v[p2].first)*(v[p1].first-
v[p2].first))+(double)((v[p1].second-v[p2].second)*(v[p1].second-v[p2].second))));
int no=distance/18;
//no--;
setcolor(LIGHTBLUE);
setlinestyle(0,0,3);
line(c11x,c11y,c21x,c21y);
line(c12x,c12y,c22x,c22y);
makesteps(p2,slope,no);
//cout&lt;&lt;slope&lt;&lt;&quot; &quot;&lt;&lt;angle&lt;&lt;&quot; &quot;&lt;&lt;c1x&lt;&lt;&quot; &quot;&lt;&lt;c1y&lt;&lt;&quot; &quot;&lt;&lt;c2x&lt;&lt;&quot; &quot;&lt;&lt;c2y&lt;&lt;endl;
setlinestyle(0,0,1);
}
void snke(int p1,int p2)
{
setcolor(CYAN);
setlinestyle(1,10,3);
line(v[p1].first,v[p1].second+10,v[p2].first,v[p2].second-10);
setlinestyle(0,10,5);
circle(v[p1].first,v[p1].second+10,4);
setlinestyle(0,0,1);
}
void chance(bool check,int ps)
{
setcolor(WHITE);
circle(1000,418,1);
setbkcolor(RED);
string ss;
string p;
char party[p.length];
if(ps==100)
{
if(check)
{
ss={&quot; GREEN JEET GYA &quot;};
p={&quot; GREEN PARTY DEGA &quot;};
}
else
{
ss={&quot; YELLOW JEET GYA &quot;};
p={&quot; YELLOW PARTY DEGA &quot;};
}
strcpy(party,p.c_str());
}
else
{
if(check)
ss={&quot; YELLOW KA TURN &quot;};
else
ss={&quot; GREEN KA TURN &quot;};
}
char s[ss.length()];
strcpy(s,ss.c_str());
int w=textwidth(s);
int h=textheight(s);
settextstyle(10, HORIZ_DIR, 3);
outtextxy(1000-(w/2),418-(h/2),s);
setbkcolor(RED);
if(ps==100)
{
int w=textwidth(party);
int h=textheight(party);
settextstyle(10, HORIZ_DIR, 3);
outtextxy(1000-(w/2),500-(h/2),party);
setbkcolor(RED);
}
}
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