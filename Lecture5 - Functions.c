// Üs alan bir fonksiyon örneği: a^b
float power(float a, float b){
  int result = 1;
  for(; b>0; b--)
    result *= a;
  return result;
}
// Bu fonksiton main içerisinde:
power(4, 5); // şeklinde çağrılır.

// Fonksiyon main'de çağırıldığı için main fonksiyonu "caller", power fonksiyonu ise "callee" olarak adlandırılır.
// Fonksiyon main'den sonra tanımlanacaksa main'den önce bir prototipi bulunmalı. Örneğin:
float power(float a, float b); // prototipte değişken türleri kafidir. a ve b yazılmasa sıkıntı olmaz.

// Stack'e çağırılabilecek sayıdan daha fazla çağrı olursa "stack overflow" meydana gelebilir.
// Local değişkenler bulunduğu scope altında, global değişkenler her yerde geçerlidir.
// Global değişken ile programın lifetime'ı aynıdır.
// Global değişkenler default olarak 0, localler tanımlanmamıştır.

// Global değişkenle aynı isimde bir local değişken olduğunda, main içerisinde local kullanılırken fonksiyonlarda parametre olarak verilmediyse global olan kullanılır.

// Macro Substitution
#define PI 3.14
#define square(x) x*x
// Macronun adı square, parametresi x

#define abs(A) A>0?A:(-1)*A
// ile A'nın mutlak değeri alınır

// * ve & kavramları
int x = 20;
int *ptrX;
ptrX = &x;
printf("%d\n", ptrX); //adres
printf("%d", *ptrX); //20

// * adreste bulunan değer için, & adres için kullanılır. ÖNEMLİ BİR ÖRNEK:
//Bu örnek Call By Reference
void change(int *c){
	*c = 100;
}
int main(int argc, char *argv[]) {
	int x = 20;
	change(&x);
	printf("%d", x);
	return 0;
}

// Swap işlemi
void swap(int *a, int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
int main(int argc, char *argv[]) {
	int x=5, y=10;
	swap(&x, &y);
	printf("%d %d", x, y);

	return 0;
}

// Math Kütüphanesi
#include <math.h>
//Tüm math fonksiyonları double değer döndürür. Math fonksiyonları:
sqrt(x); //karekök
cbrt(x); //küpkök
exp(x); //e^x
log(x); //logaritanın tabanı e
log10(x); //logaritmanın tabanı 10
fabs(x); //x'in mutlak değeri
ceil(x); //x'i kendinden büyük en küçük tam sayıya yuvarlar
floor(x); //x'i kendinden küçük en büyük tam sayıya yuvarlar
pow(x, y); //x^y üs alır
fmod(x, y); // x/y işlemi yapıldığında elde edilen kalan
sin(x); 
cos(x);
tan(x);

// Rastgele sayı
int i = rand(); //0 - RAND_MAX (32767)
// 1 - n arası rastgele sayı üretmek
int i = 1 + (rand() % n);
//Aşağıdakini yazdıktan sonra yukarıdaki rastgele sayı üretme değeri süreklilik kazanır.
srand(time(NULL));
