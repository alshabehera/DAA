#include <stdio.h>

int stopping_station(int, int);
int stopping_station(int p, int n)
{


    int num = 1, dem = 1, s = p;

    while (p != 1) {


        dem *= p;

        p--;

    }


    int t = n - s + 1;

    while (t != (n - 2 * s + 1)) {


        num *= t;

        t--;

    }


    if ((n - s + 1) >= s)

        printf("%d", num / dem);


    else



        printf("not possible");
        return 0;
}

int main()
{

    int n, s;

    stopping_station(7, 12);

}
