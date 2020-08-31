#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 500

int main()
{
    int H, W, rain_sum = 0, line_rain_sum = 0, TF = 0;
    int rainList[num];

    scanf("%d %d", &H, &W);

    for(int i=0;i<W;i++)
    {
        scanf("%d", &rainList[i]);
    }

    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            if(rainList[j] != 0)
            {
                TF = 1;
                rain_sum += line_rain_sum;
                line_rain_sum = 0;
                rainList[j] -= 1;
                continue;
            }
            if(TF == 1 && rainList[j] == 0)
            {
                line_rain_sum += 1;
            }
        }
        TF = 0;
        line_rain_sum = 0;
    }

    printf("%d", rain_sum);
}