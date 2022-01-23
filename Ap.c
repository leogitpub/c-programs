#include<stdio.h>
#include<string.h>
struct Album {

char title[35];
char artist[35];
char no_of_tracks[5];
char year[5];
int y;

} album ;

void DisplayAlbum(struct Album *alb);
 main(){
struct Album em;
   int x[] = {1,2,3};
strcpy(album.title, "How ar u");
strcpy(album.artist, "leo");
strcpy(album.no_of_tracks,"5");
strcpy(album.year, "1973");
em.y=20;
printf("em %d",em.y);
DisplayAlbum(&album);
}

void DisplayAlbum(struct Album *alb){

puts(alb->title);
puts(alb->artist);
puts(alb->no_of_tracks);
puts(alb->year);


}
