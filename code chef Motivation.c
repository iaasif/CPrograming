#include <stdio.h>
int main()
{

    int t,remaning_space,num_movie, movie_space, i, rating;

//x= remaning store
//s= space
//r= rating
//n= number of movie


    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%d %d",&num_movie,&remaning_space);
        long long int ans=0;

        for(int j=1; j<=num_movie; j++)
        {
            scanf("%d %d",&movie_space,&rating);

            if(movie_space<=remaning_space && ans<rating)
            {
                ans=rating;
            }
        }
        printf("%lld\n",ans);
    }
return 0; }
