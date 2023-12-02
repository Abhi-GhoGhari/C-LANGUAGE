#include <stdio.h>

struct marksheet
{
    int Rnum;
    char name[20];
    int che;
    int math;
    int phy;
};

int main()
{
    struct marksheet data[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nENTER DITAILS OF STUDENT= %i :\n", i + 1);
        printf("ROLL  NO. => ");
        scanf("%i", &data[i].phy);

        fflush(stdin);

        printf("NAMEe => ");
        scanf("%[^\n]", &data[i].name);
        printf("CHEMISTRY => ");
        scanf("%i", &data[i].che);
        printf("MATHEMATICS => ");
        scanf("%i", &data[i].math);
        printf("PHYSICS => ");
        scanf("%i", &data[i].phy);
    }

    printf("\n\n----:RESULT:----\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c (%i)\n", data[i].name, data[i].Rnum);
        printf("Chemistry => %i\n", data[i].che);
        printf("Mathematics => %i\n", data[i].math);
        printf("Physics => %i", data[i].phy);
        printf("Total => %i/300\n", data[i].che + data[i].math + data[i].phy);
        printf("Percent => %i\n", (data[i].che + data[i].math + data[i].phy) / 3);
    }
}