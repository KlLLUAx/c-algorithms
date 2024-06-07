#include<stdio.h>
#include<string.h>
struct Album{
    char title[30];
    char artist[30];
    char tracks[30];
    char yearRelease[30];

};
void main(){
    struct Album album[2];
    int i,j;
    for(i=0;i<2;i++){

        printf("Enter the title of the album:");
        gets(album[i].title);
        printf("Enter the artist or group of the album:");
        gets(album[i].artist);
        printf("Enter the number of tracks:");
        gets(album[i].tracks);
        printf("Enter the year the album was released: ");
        gets(album[i].yearRelease);

    }
    for(j=0; j<2; j++){

        printf("Title: ");
        puts(album[j].title);
        printf("Artist: ");
        puts(album[j].artist);
        printf("Tracks: ");
        puts(album[j].tracks);
        printf("Year the album was released: ");
        puts(album[j].yearRelease);

    }

    }
    
