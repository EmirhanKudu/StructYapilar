#include <stdio.h>
#include <stdlib.h>

struct node {
	int sayi;
	struct node* sonraki;
};
struct node* baslangic = NULL;
struct node* Olustur(int sayi)
{
	struct node* YeniDugum = (struct node*)malloc(sizeof(struct node));
	YeniDugum->sayi = sayi;
	YeniDugum->sonraki = NULL;
	
	return YeniDugum;
}

int main() {
	baslangic = Olustur(1);
	struct node* ikinci = Olustur(2);
	struct node* ucuncu = Olustur(3);
	struct node* dorduncu = Olustur(7);
	
	
	baslangic->sonraki = ikinci;
	ikinci->sonraki = ucuncu;
	ucuncu->sonraki = dorduncu;
	
	struct node* temp = baslangic;
	while (temp != NULL){
		printf("%d ",temp->sayi);
		temp = temp->sonraki;
	}
	return 0;
}
