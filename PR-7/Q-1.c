#include<stdio.h>

int sum(int P,int Q)
{
    return P+Q;
}

int sub(int P,int Q)
{
    return P-Q;
}

int mult(int P,int Q)
{
    return P*Q;
}

int div(int P,int Q)
{
    return P/Q;
}

int mod(int P,int Q)
{
    return P%Q;
}

main()
{
    int P,Q,R,CL;
    start:
    printf("\nPRESS 1 FOR +  \n");
    printf("PRESS 2 FOR -  \n");
    printf("PRESS 3 FOR *  \n");
    printf("PRESS 4 FOR /  \n");
    printf("PRESS 5 FOR %% \n");
    printf("PRESS 6 FOR EXIT\n");
    scanf("%i",&CL);

    switch (CL)
    {
    case 1:
            printf("ENTER P= ");
            scanf("%i",&P);
            printf("ENTER Q= ");
            scanf("%i",&Q);
            R=sum(P,Q);
            printf("%i",R);
            goto start;

    case 2:
            printf("ENTER P= ");
            scanf("%i",&P);
            printf("ENTER Q= ");
            scanf("%i",&Q);
            R=sub(P,Q);
            printf("%i",R);
            goto start;

    case 3:
            printf("ENTER P= ");
            scanf("%i",&P);
            printf("ENTER Q= ");
            scanf("%i",&Q);
            R=mult(P,Q);
            printf("%i",R);
            goto start;

    case 4:
            printf("ENTER P= ");
            scanf("%i",&P);
            printf("ENTER Q= ");
            scanf("%i",&Q);
            R=div(P,Q);
            printf("%i",R);
            goto start;

    case 5:
            printf("ENTER P= ");
            scanf("%i",&P);
            printf("ENTER Q= ");
            scanf("%i",&Q);
            R=mod(P,Q);
            printf("%i",R);
            goto start;                                       
    default:
             printf("UNKNOW INPUT !!");
        break;
    }     
}