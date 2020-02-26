#include <stdio.h>
#include <stdlib.h>

void bintangpasir(int lebar){
	int g,h,i,j,k = lebar;
	for(i = 0; i < (lebar / 2); i++){
		for(j = 0; j < k; j++){
			printf("*");
		}
		k -= 2;
		printf("\n");
		for(h = 1; h <= i+1; h++){
			printf(" ");
		}
	}
	printf("*\n");
	for(i=0; i < lebar / 2 ; i++){
		for(g = h-2; g > 0; g--){
			printf(" ");	
		}
		h--;
		k += 2;
		for(j = 0; j < k; j++){
			printf("*");
		}
		printf("\n");
	}
}

void bintangsiku(int tinggi){
	int i,j;
	for(i = 0; i < tinggi; i++){
		for(j=0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	printf("1. bintang bentuk segitiga siku-siku\n");
	printf("2. bintang bentuk jam pasir ganjil\n");
	printf("3. keluar\n");
	printf("pilih : ");
	int pilihan, args;
	scanf("%d", &pilihan);
	if(pilihan == 2){
		printf("lebar : ");
		scanf("%d", &args);
		if(args % 2 == 1){
			bintangpasir(args);	
		} else {
			printf("lebar harus ganjil\n");
		}
	} else if(pilihan == 1){
		printf("tinggi : ");
		scanf("%d", &args);
		bintangsiku(args);
	}
}
