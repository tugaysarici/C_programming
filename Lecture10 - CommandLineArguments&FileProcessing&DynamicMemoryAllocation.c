argc; //argüman sayısı
argv[0]; //ilk argüman
argv[1]; //ikinci ...

FILE *fileName;
fileName = fopen("deneme.txt", "w"); //dosya açılırken ne amaçla açıldığı da belirtiliyor

// feof(fileName) ifadesi belirtilen dosyanın sonuysa ya da okunacak değer kalmadıysa true döndürür.

fclosed(fileName);

// dosya açarken r, w, a, r+, w+, a+ modları kullanılır. Binary file için rb, wb, ab, rb+, wb+, ab+

fgetc(fileName); //dosyadan bir karakter okur
fputc(c, fileName); //int türündeki c'nin asciideki karşılığına göre karakter halini dosyaya yazar
fgets(str, n, fileName); //dosyadan max n boyutluk string alır ve str'ye atar
fputs(str, fileName); //stringi dosyaya yazar

fprintf(fileName, "%d %s", x, str); //Normal printf gibi, sadece başa dosya ismi geliyor
fscanf(fileName, "%d %s", &x, str); //Normal scanf gibi, sadece başa dosya ismi geliyor

// malloc, calloc, free 
