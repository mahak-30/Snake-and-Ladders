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