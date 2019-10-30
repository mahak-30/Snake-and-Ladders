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