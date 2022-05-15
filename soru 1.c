#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i;
	int *ptr;
	int toplam = 0;
	
	printf("eleman sayisini giriniz:");
	scanf("%d", &n);
	
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr == NULL){
		printf("yeterli hafýza yok.");
	}
	printf("dizi elemani giriniz:");
	for(i=0; i<n; i++){
		scanf("%d", ptr + i);
		toplam += *(ptr + i);
	}
	
	printf("toplam:%d", toplam);
	return 0;
}
