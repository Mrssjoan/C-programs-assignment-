#include <stdio.h>
#include <string.h>

struct book{
	char author[23];
	char title[20];
	int publicationyear;
	char ISBN[13];
	float price ;
};
int main()
{
	struct book book1;
    strcpy (book1.title, "Introduction To C Programming");
	strcpy (book1.author, "John Smith");
    strcpy (book1.ISBN, "9780131103627");
    book1.publicationyear =2022;
    book1.price = 49.99;
    
    printf ("title%s", book1.title);
    printf ("author%s",book1.author);
    printf ("publicationyear %d", book1.publicationyear);
    printf ("ISBN%s",book1.ISBN);
    printf ("price%f",book1.price);
    
    return 0;
}