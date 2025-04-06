//Hard dose question 1
//CS24B1016 //Namitha Sai KOlli
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
   int north;//the rover moves only discree number of steps in any direction
   int south;
   int east;
   int west;
}obstacle;
void initialize_arena(int** arena,int n)
{
   // Initialize the arena with 1's (safe positions)
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            arena[i][j] = 1;  // Safe position
        }
    }
}
void markObstacles(int** arena, Obstacle obstacles[], int num) 
{
    for (int i = 0; i < num; i++)
     {
        int north = obstacles[i].north;
        int east = obstacles[i].east;
        int south = obstacles[i].south;
        int west = obstacles[i].west;
        
        // Mark the positions of obstacles
        if (north >= 0) arena[north][east] = 0;  // Mark obstacle
        if (south >= 0) arena[south][west] = 0;  // Mark obstacle
    }
}
void printArena(int** arena, int n) 
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arena[i][j]);
        }
        printf("\n");
    }
}
int main()
{
   FILE *file=fopen("Obstacles.txt","r");//open file in read mode
   if(file==NULL)
   {
      printf("Error opening file\n");
      return 1;
   }
   int n;//Size of Arena
   printf("Enter the size of Arena ");
   scanf("%d",&n);
   // Dynamically allocate memory for the arena
    int** arena = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        arena[i] = (int*)malloc(n * sizeof(int));
    }

    // Initialize the arena
    initialize_arena(arena, n);

    Obstacle obstacles[100];  // Assume a maximum of 100 obstacles
    int num= 0;//Num denotes the number of obstacles
    // Read obstacles from file
    while (fscanf(file, "%d %d %d %d",&obstacles[num].north,&obstacles[num].east,&obstacles[num].south,&obstacles[num].west) != EOF)
    {
        num++;
    }
    fclose(file);//close the file after reading the data 
    // Mark obstacles on the arena
    markObstacles(arena, obstacles, num);
    printf("Arena Map:\n");
    printArena(arena, n);
    // Free the dynamically allocated memory
    for (int i = 0; i < n; i++) {
        free(arena[i]);
    }
    free(arena);
    return 0;

   
}
