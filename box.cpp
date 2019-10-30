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