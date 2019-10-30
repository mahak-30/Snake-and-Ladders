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