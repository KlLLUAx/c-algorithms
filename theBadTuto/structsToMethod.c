#include<stdio.h>
#include<string.h>

struct Album{
    char title[30];
    char artist[30];
    char tracks[5];
    char yearRelease[5];
};

void displayAlbum(struct Album *alb);

void main(){
    struct Album album;
    strcpy(album.title,"More & More");
    strcpy(album.artist,"Twice");
    strcpy(album.tracks,"12");
    strcpy(album.yearRelease,"2021");
    displayAlbum(&album);
}
void displayAlbum(struct Album *alb){
    printf("Title: ");
    puts(alb->title);
    printf("Artist: ");
    puts(alb->artist);
    printf("Tracks: ");
    puts(alb->tracks);
    printf("Year released: ");
    puts(alb->yearRelease);
}