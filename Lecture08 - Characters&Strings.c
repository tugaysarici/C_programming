// " " arasına yazılan her şey stringdir.
// String'in sonu her zaman görünmeyen bir null karakteri olan '\0' ile biter.

char st[] = "JAVA&C";
char st[] = {'J','A','V','A','&','C', '\0'};
char *st = "JAVA&C";
// Yukarıdaki 3 ifadelendirme de aşağıdaki şekilde ekrana basılır.
printf("%s", st);
// Ama 3. ifadelendirmede örneğin 3. indise erişmek için *(st+2) kullanılır. Diğerlerinde st[2] kullanılır.

// String değeri alma
scanf("%s", word);
scanf("%19s", word); //ilk 19 karakteri alır

// <ctype.h> kütüphanesindekilerle unsigned char ya da EOF alırız. Aşağıdaki hazır fonksiyonların hepsi int 1 veya 0 döndürür.
isblank(int c); //c boşluk karakteriyse 1, değilse 0
isdigit(int c); //c bir basamaksa 1, değilse 0
isalpha(int c); //c bir harfse 1, değilse 0
isalnum(int c); //c bir basamak ya da harfse 1, değilse 0
isxdigit(int c); //c bir hexadecimal basamaksa 1, değilse 0
islower(int c); //c bir küçük harfse 1, değilse 0
isupper(int c); //c bir büyük harfse 1, değilse 0
tolower(int c); //c bir büyük harfse onu küçük harfe yapar. Değilse aynen kalır
toupper(int c); //c bir küçükharfse onu büyük harf yapar, değilse aynen kalır
isspace(int c); //c bir herhangi bir ayırma karakteriyse (boşluk, \t, \n, \v, \r, \a, \b, \f) 1, değilse 0
iscntrl(int c); //c bir kontrol karakteriyse (t, \n, \v, \r, \a, \b, \f) 1, değilse 0
ispunct(int c); //c bir özel karakterse 1, değilse 0. Lazım olursa nette arat
isprint(int c); //c bir basıldığında ekranda görülebilen bir karakterse 1, değilse 0
isgraph(int c); //c bir space haricindeki ekranda görülebilen bir karakterse 1, değilse 0

// String Fonksiyonları
strlen(char *st); //Uzunluğu. Fonksiyon türü int
strcpy(char *dest, const char *source); //Birini diğerine kopyalar. Fonksiyon türü char *
strcat(char *dest, char *source); //dest'in peşine source'ü ekler, destte saklanır. Fonksiyon türü char *
strcmp(const char *st1, const char *st2); //st1 ile st2 karşılaştırılır. Aynı ise 0, st1 önce gelirse 0'dan ufak değer, st2 önce gelirse 0'dan büyük değer döndürür. 
//Fonksiyon türü int.

strncpy(dest,src,n);
strncat(dest,src,n);
strncmp(dest,src,n); // source'ün ilk n'lik hali için aynı işlemler yapılır.

atof(const char *str); //String pointer'ı float değere döndürür.
atoi(const char *str); //String pointer'ı int değere döndürür.
atol(const char *str); //String pointer'ı long int değere döndürür.
strtod(const char *sStr, const char *eStr); //sStr stringinde double değer varsa fonksiyonu eşitlediğimiz değere atanır. double haricindeki değer eStr'de tutulur.
strtol(const char *sStr, const char *eStr); //sStr stringinde long değer varsa fonksiyonu eşitlediğimiz değere atanır. long haricindeki değer eStr'de tutulur.
strtoul(const char *str, char **endptr, int base); //unsigned long bir değer döndürüyor, str içerisindeki long'u alıyor. Ama base ne işe yarıyor anlamadım.

// ** double pointer: Başka bir pointerın adresini saklayan pointer
int **doublePtr;
int *ptr;
int var = 10;
ptr = &var;
doublePtr = &ptr;
printf("Value of var = %d\n", var ); // prints 10
printf("Value of var using single pointer = %d\n", *ptr); // prints 10
printf("Value of var using double pointer = %d\n", **doublePtr); // prints 10

// Stdio Fonksiyonları
char c = getchar(); //bir karakter girilmesini bekler. Normalde int döndürüyor ama char değişkene atayınca problem olmuyor
putchar(c); //ekrana c'yi yazar
fgets(har *str, int n, FILE *file); //file içerisinde okuma yapar ve str'ye atar. Bu okuma maksimum n karakterdir.
puts(const char *str); //string'i ekrana yazar

sprintf(char *str, const char *format, ...); //Örnek kullanımına bakarak anlarsın
sprintf(str, "Value of Pi = %f", M_PI);
puts(str); //Ekrana "Value of Pi = 3.141593" yazar.

sscanf(char *str, const char *format, ...); //str'deki değerleri formattan sonra gelen değişkenlere yerleştirir. Örneğin:
int day, year;
char weekday[20], month[20], str[100];
strcpy(str, "Saturday March 25 1989" );
sscanf(str, "%s %s %d  %d", weekday, month, &day, &year );
printf("%s %d, %d = %s\n", month, day, year, weekday );

// Stringler için Arama Search Fonksiyonları
// strchr ile ch karakterinin ilk görüldüğü yerden sonrası alınır.
const char str[] = "http://www.tutorialspoint.com";
const char ch = '.';
char *ret;
ret = strchr(str, ch);
printf("String after |%c| is - |%s|\n", ch, ret);

//strcspn ile str2'nin ilk karakteri str1'de hangi indiste bulunduysa o indis alınır
int len;
const char str1[] = "ABCDEF4960910";
const char str2[] = "013";
len = strcspn(str1, str2);
printf("First matched character is at %d\n", len);

//strspn ile str2'nin ilk karakterigörüldükten sonra kaç tanesinin örtüştüğü tespit edilir
int len;
const char str1[] = "ABCDEFG019874";
const char str2[] = "ABCD";
len = strspn(str1, str2);
printf("Length of initial segment matching %d\n", len );

//strpbrk ile str2'deki karakterlerin ilk hangisinin str1'de bulunduğu tespit edilir.
const char str1[] = "abcde2fghi3jk4l";
const char str2[] = "34a7h";
char *ret;
ret = strpbrk(str1, str2);
printf("First matching character: %c\n", *ret);

//strrchr ile ch karakterinin str içerisinde en son görüldüğü yerden sonra alınır
const char str[] = "http://www.tutorialspoint.com";
const char ch = 'o';
char *ret;
ret = strrchr(str, ch);
printf("String after |%c| is - |%s|\n", ch, ret);

// strstr ile needle'ın meydana gelmesinden sona kadar olan stringi alır
const char haystack[20] = "TutorialsPoint";
const char needle[10] = "Poi";
char *ret;
ret = strstr(haystack, needle);
printf("The substring is: %s\n", ret); //Point

//strtok ile s'den önceki string kısmı alınır.
char str[80] = "This is - www.tutorialspoint.com - website";
const char s[2] = "al";
char *token;
token = strtok(str, s);
printf( " %s\n", token ); //This is - www.tutori
