#include<stdio.h>
#include<string.h>

struct Album
{
    char title[30];
    char artist[30];
    int tracksNum;
    int yearRelease;
};
void main(){
    struct Album album1;
    strcpy(album1.title,"So far so good so what?");
    strcpy(album1.artist,"Megadeth");
    album1.tracksNum = 10;
    album1.yearRelease = 1986;


    printf("The name of the album is: %s\n",album1.title);
    printf("The albuns band is: %s \n",album1.artist);
    printf("The album has %d musics\n",album1.tracksNum);
    printf("The album is from: %d\n",album1.yearRelease);


}