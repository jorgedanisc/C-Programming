#include <stdio.h>
int f1 (float x1, float x2)
{
    int MI;
    float media;

    media = (x1 +x2)/2;
    MI = int(media)

    if (media - MI >= 0.5)
        return MI + 1
    else
        return MI
}