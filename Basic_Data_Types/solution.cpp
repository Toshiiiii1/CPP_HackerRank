#include <iostream>

using namespace std;

int main()
{
    int i;
    long ld;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &i, &ld, &c, &f, &d);
    printf("%d\n%ld\n%c\n%f\n%lf\n", i, ld, c, f, d);
    return 0;
}