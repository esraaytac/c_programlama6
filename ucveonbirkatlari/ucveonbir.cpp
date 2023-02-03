#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int adeton=0,  adetuc=0, bas, bit,i;
	
	
	printf("baslangic degerini giriniz:");
	scanf("%d", &bas);
	
	printf("bitis degerini giriniz");
	scanf("%d", &bit);
	
	if (bit>bas && bas == bit){
	
	printf("bitis degeri baslangic degerinden buyuk ya da esit olamaz");
		printf("baslangic degerini giriniz");
	scanf("%d", bas);
	
	printf("bitis degerini giriniz");
	scanf("%d", bit);
	}
	
	for (i=bas; i<=bit; i++){
		
		
		if (i % 3 ==0)
			adetuc++;
	
	
		
		
			
		if (i % 11 ==0)
		adeton++;
		
		
		
		
		
	}
		printf("3e tam bolunen sayilar: %d \n", adetuc);
		printf("11e tam bolunen sayilar: %d \n", adeton);
	
	
	
	
	
	
	return 0;
}
