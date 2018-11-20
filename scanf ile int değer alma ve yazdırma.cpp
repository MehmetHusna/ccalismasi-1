#include <stdio.h>

int main(){
	
	
				// DEÐÝÞKEN TANIMLAMA
/*				
		int --> Tamsayýlar için kullanýlýr.
		float --> Ondalýklý sayýlar için kullanýlýr.
		double --> Daha büyük ondalýklý sayýlar için kullanýlýr.
		char --> Harfler için kullanýlýr.
		string --> Kelimeler için kullanýlýr.
*/

			// scanf() fonksiyonunda deðer alma.
			
		int a; //a adýnda bir integer deðer tanýmladýk.Tamsayý alýr.
		
		printf("Bir sayi girin: "); //Kullanýcýdan bir sayý istedik.
		scanf("%d",&a); // %d ile tamsayý alýcaðýmýzý derleyiciye söyledik.&a ile de a'nýn bellekteki deðerine attýk.Buradaki '&' a'nýn bellekteki yerini ifade eder.	
		
		// Daha sonra aldýðýmýz bu deðeri ekrana yazdýralým.
		
		printf("%d",a); //Burada %d derleyiciye tamsayý yazdýracaðýmýzý bildirir.'a' ise 'a' nýn içindeki deðeri %d'ye atar.
		
return 0;
}
