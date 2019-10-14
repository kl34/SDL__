#include<stdio.h>
#include<SDL.h>
int SDL_CreateScreen()
{
    int value;
    scanf("%d",&value);
    return value;
}
int main(int argc,char *argv[])
{
    int x,y;
    SDL_Window *w=NULL;
    SDL_Surface *s=NULL;
    if(SDL_Init(SDL_INIT_VIDEO)<0)
    {
        printf("%s\n",SDL_GetError());
    }
    else
    {
        printf("Enter height : ");
        x=SDL_CreateScreen();
        printf("Enter width : ");
        y=SDL_CreateScreen();
        w=SDL_CreateWindow("FIRST WINDOW",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,x,y,SDL_WINDOW_SHOWN);
        if(w==NULL)
        {
            printf("%s\n",SDL_GetError());
        }
        else
        {
            s=SDL_GetWindowSurface(w);
            SDL_FillRect(s,NULL,SDL_MapRGB(s->format,0xF2,0XFA,0XAB));
            SDL_UpdateWindowSurface(w);
            SDL_Delay(2000);
        }
    }
    SDL_DestroyWindow(w);
    SDL_Quit();
    return 0;

}
