//��renci no, vize ve final notu al�p, ge�me notunu ��renci no ile yazd�ran program

#include <stdio.h>

int main(){
	
	int no, vize, final,ort;
	
	printf("Ogrenci No Giriniz:");
	scanf("%d", &no);
	
	printf("Vize Notunu Giriniz:");
	scanf("%d", &vize);
	
	printf("Final Notunu Giriniz:");
	scanf("%d", &final);
	
	ort = vize*40/100 + final*60/100;
	
	printf("Ogrenci No: %d\n", no);
	printf("Gecme Notu: %d", ort);
	
	return 0;
		
}
