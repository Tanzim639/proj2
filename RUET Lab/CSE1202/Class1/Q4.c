#include<stdio.h>

struct Players{
    int id;
    char player[100];
    int runs;
};

int main(){
   int n; scanf("%d", &n);
   struct Players p[n];
   int totalRuns=0, maxRun=0;
   for(int i=0; i<n; i++){
    scanf("%d", &p[i].id);
    getchar();
    fgets(p[i].player, sizeof(p[i].player), stdin);
    scanf("%d", &p[i].runs);
    getchar();
    totalRuns+=p[i].runs;
    if(p[i].runs>maxRun)maxRun=p[i].runs;
   }
   printf("Avg is %f\n", totalRuns*1.0/n);
   printf("Most run is %d", maxRun);
}