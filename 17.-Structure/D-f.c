#include<stdio.h>
#include<string.h>
#include<SUPPANDI.h>

    
    struct book{
        int accesion_number;
        char *title_of_book;
        char *author_name;
        float price;
        int status ;
    };

int main()
{
    int num=0;
    int n=0,m=0;
    struct book b[num];
    int acess,garbi,garbj;
    char menu,garb,search[20];
    
    while(menu!=7)
    {
        system("clear");
        fflush(stdin);
        printf("Chose option corrosponding to sr.no in menu option\n");
        printf("MENU:\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specific book\n");
        printf("5. List count of the book in library\n");
        printf("6. List book in the order of acession number\n");
        printf("7. Exit menu\n\n");
        menu = getche();
        printf("\n");

        switch(menu)
        {
            case('1'):
            {   
                system("clear");
                num++;n=num-1;
                (b+n)->accesion_number = num;
                printf("Enter the title of book: ");scanf("%srr",&b->title_of_book);
                printf("Enter the Author name of book: ");gets(&b->author_name);
                printf("Enter the price of book: ");scanf("%f",&b->price);
                // b[n].status = num;

                // printf("Enter any key to submit\n");fflush(stdin);scanf("\n");
                garb = getch();
                printf("Book added\nAcession number assigned : %d",b[n].status);

                printf("\n");
                printf("Enter any key to continue \n");
                garb = getch();
                break;
            }
            case('2'):
            {
                printf("Enter book acession number:");scanf("%d",acess);
                for( register int i=0;i<n;i++){
                    if(b[i].accesion_number==acess){
                        printf("Author :%s\n",b[i].author_name);
                        printf("Title  :%s\n",b[i].title_of_book);
                        printf("price  :%d\n",b[i].price);
                        printf("status :%d\n",b[i].status);
                    }
                }

                printf("\n");
                printf("Enter any key to continue \n");
                garb = getch();
                break;
            }
            case('3'):
            {
                printf("Enter author name: \n");scanf("%s",search);
                for( register int i=0;i<n;i++){
                garbi = strcmp(search,b[i].author_name);
                if(garbi>4){
                    garbj=i;
                }

                }
                if(garbi>4){
                    printf("acession number :%d",b[garbj].accesion_number);
                    printf("Author :%s\n",b[garbj].author_name);
                    printf("Title  :%s\n",b[garbj].title_of_book);
                    printf("price  :%d\n",b[garbj].price);
                    printf("status :%d\n",b[garbj].status);
                }

                printf("\n");
                printf("Enter any key to continue \n");
                garb = getch();
                break;
            }
            case('4'):
            {

            }
        }
    }
    
    return 0;
}