// " " arasına yazılan her şey stringdir.
// String'in sonu her zaman görünmeyen bir null karakteri olan '\0' ile biter.

char st[] = "JAVA&C";
char st[] = {'J','A','V','A','&','C', '\0'};
char *st = "JAVA&C";
// Yukarıdaki 3 ifadelendirme de aşağıdaki şekilde ekrana basılır.
printf("%s", st);
// Ama 3. ifadelendirmede örneğin 3. indise erişmek için *(st+2) kullanılır. Diğerlerinde st[2] kullanılır.

