#include <stdio.h>

int main(){
	
	
				// DE���KEN TANIMLAMA
/*				
		int --> Tamsay�lar i�in kullan�l�r.
		float --> Ondal�kl� say�lar i�in kullan�l�r.
		double --> Daha b�y�k ondal�kl� say�lar i�in kullan�l�r.
		char --> Harfler i�in kullan�l�r.
		string --> Kelimeler i�in kullan�l�r.
*/

			// scanf() fonksiyonunda de�er alma.
			
		int a; //a ad�nda bir integer de�er tan�mlad�k.Tamsay� al�r.
		
		printf("Bir sayi girin: "); //Kullan�c�dan bir say� istedik.
		scanf("%d",&a); // %d ile tamsay� al�ca��m�z� derleyiciye s�yledik.&a ile de a'n�n bellekteki de�erine att�k.Buradaki '&' a'n�n bellekteki yerini ifade eder.	
		
		// Daha sonra ald���m�z bu de�eri ekrana yazd�ral�m.
		
		printf("%d",a); //Burada %d derleyiciye tamsay� yazd�raca��m�z� bildirir.'a' ise 'a' n�n i�indeki de�eri %d'ye atar.
		
return 0;
}
