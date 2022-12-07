#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

char nokta[10] = {'0','1','2','3','4','5','6','7','8','9'}; // 3 taş oyununun alanında bulunan 9 noktayı belirleyen değişken
void tahta();		// Oyunun oynandığı alanı oluşturan fonksiyon
int kazandiMi();	//Oyunculardan birinin oyunu kazanıp kazanmadığını kontrol eden fonksiyon

int sec(int secenek,int oyuncu){

		char tas; // Siyah ve Beyaz taşları ifade eden değişken
		
		tas = (oyuncu == 1) ? 'S':'B'; // 'S' siyah taşları, 'B' beyaz taşları ifade eder
		
		// Oyuncu taşı koyacağı yeri seçtikten sonra taşın nereye konulabileceğini kontrol eden koşul
		
		if(secenek == 1 && nokta[1] == '1') nokta[1] = tas;
		else if(secenek == 2 && nokta[2] == '2') nokta[2] = tas;
		else if(secenek == 3 && nokta[3] == '3') nokta[3] = tas;
		else if(secenek == 4 && nokta[4] == '4') nokta[4] = tas;
		else if(secenek == 5 && nokta[5] == '5') nokta[5] = tas;
		else if(secenek == 6 && nokta[6] == '6') nokta[6] = tas;
		else if(secenek == 7 && nokta[7] == '7') nokta[7] = tas;
		else if(secenek == 8 && nokta[8] == '8') nokta[8] = tas;
		else if(secenek == 9 && nokta[9] == '9') nokta[9] = tas;
		else {
			printf("Gecersiz secim !\n");
			printf("Oyuncu %d tasi koyacak yeri seciniz: ",oyuncu);
			scanf("%d",&secenek);
			sec(secenek,oyuncu);
		}
}

int degis(int al,int yerlestir,int oyuncu){
	
		char tas; // Siyah ve Beyaz taşları ifade eden değişken
		
		tas = (oyuncu == 1) ? 'S':'B'; // 'S' siyah taşları, 'B' beyaz taşları ifade eder
		
		// Oyuncu yerini değiştirmek istediği taşı seçtikten sonra taşın nereye konulabileceğini kontrol eden koşul
		
		if(al == 1 && nokta[1] == tas) {
			nokta[1] = '1';
			if(yerlestir == 2 && nokta[2] == '2') nokta[2] = tas;
			else if(yerlestir == 4 && nokta[4] == '4') nokta[4] = tas;
			else {
				printf("Yalnizca cizgiler uzerinde 1 hamlelik hareket edebilirsiniz !");
				printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
				scanf("%d",&al);
				printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
				scanf("%d",&yerlestir);
				degis(al,yerlestir,oyuncu);
			}
		}
		else if(al == 2 && nokta[2] == tas) {
			nokta[2] = '2';
			if(yerlestir == 1 && nokta[1] == '1') nokta[1] = tas;
			else if(yerlestir == 3 && nokta[3] == '3') nokta[3] = tas;
			else if(yerlestir == 5 && nokta[5] == '5') nokta[5] = tas;
			else {
				printf("Yalnizca cizgiler uzerinde 1 hamlelik hareket edebilirsiniz !");
				printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
				scanf("%d",&al);
				printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
				scanf("%d",&yerlestir);
				degis(al,yerlestir,oyuncu);
			}
		}
		else if(al == 3 && nokta[3] == tas) {
			nokta[3] = '3';
			if(yerlestir == 2 && nokta[2] == '2') nokta[2] = tas;
			else if(yerlestir == 6 && nokta[6] == '6') nokta[6] = tas;
			else {
				printf("Yalnizca cizgiler uzerinde 1 hamlelik hareket edebilirsiniz !");
				printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
				scanf("%d",&al);
				printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
				scanf("%d",&yerlestir);
				degis(al,yerlestir,oyuncu);
			}
		}
		else if(al == 4 && nokta[4] == tas) {
			nokta[4] = '4';
			if(yerlestir == 1 && nokta[1] == '1') nokta[1] = tas;
			else if(yerlestir == 7 && nokta[7] == '7') nokta[7] = tas;
			else if(yerlestir == 5 && nokta[5] == '5') nokta[5] = tas;
			else {
				printf("Yalnizca cizgiler uzerinde 1 hamlelik hareket edebilirsiniz !");
				printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
				scanf("%d",&al);
				printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
				scanf("%d",&yerlestir);
				degis(al,yerlestir,oyuncu);
			}
		}	
		else if(al == 5 && nokta[5] == tas) {
			nokta[5] = '5';
			if(yerlestir == 2 && nokta[2] == '2') nokta[2] = tas;
			else if(yerlestir == 4 && nokta[4] == '4') nokta[4] = tas;
			else if(yerlestir == 6 && nokta[6] == '6') nokta[6] = tas;
			else if(yerlestir == 8 && nokta[8] == '8') nokta[8] = tas;
			else {
				printf("Yalnizca cizgiler uzerinde 1 hamlelik hareket edebilirsiniz !");
				printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
				scanf("%d",&al);
				printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
				scanf("%d",&yerlestir);
				degis(al,yerlestir,oyuncu);
			}
		}
		else if(al == 6 && nokta[6] == tas) {
			nokta[6] = '6';
			if(yerlestir == 3 && nokta[3] == '3') nokta[3] = tas;
			else if(yerlestir == 9 && nokta[9] == '9') nokta[9] = tas;
			else if(yerlestir == 5 && nokta[5] == '5') nokta[5] = tas;
			else {
				printf("Yalnizca cizgiler uzerinde 1 hamlelik hareket edebilirsiniz !");
				printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
				scanf("%d",&al);
				printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
				scanf("%d",&yerlestir);
				degis(al,yerlestir,oyuncu);
			}
		}
		else if(al == 7 && nokta[7] == tas) {
			nokta[7] = '7';
			if(yerlestir == 4 && nokta[4] == '4') nokta[4] = tas;
			else if(yerlestir == 8 && nokta[8] == '8') nokta[8] = tas;
			else {
				printf("Yalnizca cizgiler uzerinde 1 hamlelik hareket edebilirsiniz !");
				printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
				scanf("%d",&al);
				printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
				scanf("%d",&yerlestir);
				degis(al,yerlestir,oyuncu);
			}
		}
		else if(al == 8 && nokta[8] == tas) {
			nokta[8] = '8';
			if(yerlestir == 7 && nokta[7] == '7') nokta[7] = tas;
			else if(yerlestir == 9 && nokta[9] == '9') nokta[9] = tas;
			else if(yerlestir == 5 && nokta[5] == '5') nokta[5] = tas;
			else {
				printf("Yalnizca cizgiler uzerinde 1 hamlelik hareket edebilirsiniz !");
				printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
				scanf("%d",&al);
				printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
				scanf("%d",&yerlestir);
				degis(al,yerlestir,oyuncu);
			}
		}
		else if(al == 9 && nokta[9] == tas) {
			nokta[9] = '9';
			if(yerlestir == 6 && nokta[6] == '6') nokta[6] = tas;
			else if(yerlestir == 8 && nokta[8] == '8') nokta[8] = tas;
			else {
				printf("Yalnizca cizgiler uzerinde 1 hamlelik hareket edebilirsiniz !");
				printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
				scanf("%d",&al);
				printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
				scanf("%d",&yerlestir);
				degis(al,yerlestir,oyuncu);
			}
		}
		else {
			printf("Gecersiz secim !\n");
			printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
			scanf("%d",&al);
			printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
			scanf("%d",&yerlestir);
			degis(al,yerlestir,oyuncu);	
		}
}

int main(){
	
	int sayac=0,al,yerlestir;
	int oyuncu = 1, i, secenek;
	char tas; // Siyah ve Beyaz taşları ifade eden değişken
	
	system("color 4b"); //Konsolun rengini belirleyen komut
	
	// Oyun 3 taş ile oynandığından her iki oyuncu da 3 taşını tahtaya koyana kadar tekrar eden döngü

	while(sayac < 6){
		
		tahta();
		
		oyuncu = (oyuncu % 2) ? 1:2;
		printf("Oyuncu %d, tasi koyacak yeri seciniz: ",oyuncu);
		scanf("%d",&secenek);
		sec(secenek,oyuncu);
		i = kazandiMi();
		oyuncu++;
		sayac++;
		
		// Herhangi bir oyuncunun oyunu kazanıp kazanmadığını kontrol eden koşul
		
		if(i==1) {
			printf("Oyuncu %d kazandi !",--oyuncu);
			getch();
			return 0;
		}
		
	}
	
	tahta();
	
	// Her iki oyuncu da 3 taşını tahtaya koyduktan sonra herhangi bir oyuncu oyunu kazanana kadar taşların yerlerinin değiştirilmesini sağlayan döngü
	
	while(i!=1){
		tahta();
		oyuncu = (oyuncu % 2) ? 1:2;
		printf("Oyuncu %d, hangi tasin yerini degistireceksiniz: ",oyuncu);
		scanf("%d",&al);
		printf("Oyuncu %d, tasi nereye koyacaksiniz: ",oyuncu);
		scanf("%d",&yerlestir);
		degis(al,yerlestir,oyuncu);
	
		i = kazandiMi();
		oyuncu++;
	}
	
	// Herhangi bir oyuncunun oyunu kazanıp kazanmadığını kontrol eden koşul
	
	if(i==1) {
			printf("Oyuncu %d kazandi !\n",--oyuncu);
			getch();
			return 0;
		}
}

int kazandiMi(){
	
	// Oyunun kazanılabilmesi için oyunda yan yana veya üst üste bulunan noktalar üzerindeki taşların aynı olup olmadığını kontrol eden koşul
	
	if(nokta[1] == nokta[2] && nokta[2] == nokta[3])
		return 1;
	else if(nokta[4] == nokta[5] && nokta[5] == nokta[6])
		return 1;
	else if(nokta[7] == nokta[8] && nokta[8] == nokta[9])
		return 1;
	else if(nokta[1] == nokta[4] && nokta[4] == nokta[7])
		return 1;
	else if(nokta[2] == nokta[5] && nokta[5] == nokta[8])
		return 1;
	else if(nokta[3] == nokta[6] && nokta[6] == nokta[9])
		return 1;	
	else
		return -1;
}

void tahta(){
	
	printf("\n\t Uc Tas Oyununa Hosgeldiniz\n\n\n");
	printf("\t\t %c_____%c_____%c\n",nokta[1],nokta[2],nokta[3]);
	printf("\t\t |     |     |\n");
	printf("\t\t |     |     |\n");
	printf("\t\t %c_____%c_____%c\n",nokta[4],nokta[5],nokta[6]);
	printf("\t\t |     |     |\n");
	printf("\t\t |     |     |\n");
	printf("\t\t %c_____%c_____%c\n\n\n",nokta[7],nokta[8],nokta[9]);
	
}
