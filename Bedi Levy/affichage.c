#include <stdlib.h>

#include <stdio.h>

#include <SDL/SDL.h>

#include <SDL/SDL_image.h> /* Inclusion du header de SDL_image (adapter le dossier au besoin) */

 
void pause();

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL, *jeton = NULL;
    SDL_Rect positionFond, positioncoin;

    positionFond.x = 0;
    positionFond.y = 0;
    positionjeton.x = 270;
    positionjeton.y = 111;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_WM_SetIcon(SDL_LoadBMP("background.bmp"), NULL);

    ecran = SDL_SetVideoMode(1600, 400, 32, SDL_HWSURFACE);
    SDL_WM_SetCaption("Chargement d'images en SDL", NULL);

    imageDeFond = SDL_LoadBMP("background.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    /* Chargement et blittage de bar sur la scène */
    jeton = SDL_LoadBMP("jeton.jpg");
    SDL_BlitSurface(jeton, NULL, ecran, &positionjeton);

    SDL_Flip(ecran);
    

/* On charge l'image : */
jeton = IMG_Load("jeton.jpg");
SDL_SetColorKey(jeton, SDL_SRCCOLORKEY, SDL_MapRGB(jeton->format, 0, 0, 0));
/* On blitte l'image maintenant transparente sur le fond : */
SDL_BlitSurface(jeton, NULL, ecran, &positionjeton);
SDL_Flip(ecran);

void init_coin(coin* c)
{
    c->img[0] = IMG_Load("1.png");
    c->img[1] = IMG_Load("2.png");
    c->img[2] = IMG_Load("3.png");
    c->img[3] = IMG_Load("4.png");
    c->valeur=10;
}
    SDL_FreeSurface(imageDeFond);
    SDL_FreeSurface(jeton);
    SDL_Quit();

    return EXIT_SUCCESS;
}
 
void pause()
{
    int continuer = 1;
    SDL_Event event;
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}


