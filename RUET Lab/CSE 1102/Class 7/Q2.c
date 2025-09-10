#include<stdio.h>
void main()
{
    int n;  scanf("%d", &n);  int arr[n]; int ans=1;  int i=0,j=1;  int h=n-1;  int cnt=0;
    for(int a=0; a<n; a++) { scanf("%d", &arr[a]); }
    while(h--)
    {
        if(arr[i]<arr[j]) { cnt++;  if(cnt>ans)ans=cnt; }
        else if (arr[i]>arr[j]) { cnt=0; }
        i++; j++;
    }
    printf("%d", ans+1 );

}
