#include <stdio.h>
int next_round(){
    int n, k, i, sum=0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    k-=1;
    for(i=0; i<n; i++){
        if(arr[i]>=arr[k]&&arr[i]>0){
            sum+=1;
        }
    }
    printf("%d", sum);

}
