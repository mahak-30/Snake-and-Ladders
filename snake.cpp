void snke(int p1,int p2)
{
setcolor(CYAN);
setlinestyle(1,10,3);
line(v[p1].first,v[p1].second+10,v[p2].first,v[p2].second-10);
setlinestyle(0,10,5);
circle(v[p1].first,v[p1].second+10,4);
setlinestyle(0,0,1);
}