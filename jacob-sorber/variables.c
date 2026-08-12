#include <stdio.h>
#include <string.h>

struct footballer {
    char name[50];
    int age;
    int goals_per_world_cup;
    };

struct footballer players[3];

int main() 
{
    struct footballer Messi;
    strcpy(Messi.name, "Messi");
    Messi.age = 39;
    Messi.goals_per_world_cup = 8;
    players[0] = Messi;
    struct footballer Mbappe;
    strcpy(Mbappe.name, "Mbappe");
    Mbappe.age = 27;
    Mbappe.goals_per_world_cup = 8;
    players[1] = Mbappe;
    struct footballer Haaland;
    strcpy(Haaland.name, "Haaland");
    Haaland.age = 25;
    Haaland.goals_per_world_cup = 7;
    players[2] = Haaland;

    for (int i = 0; i < 3; i++) 
    {
        printf("Name: %s\n", players[i].name);
        printf("Age: %i\n", players[i].age);
        printf("Goals: %i\n", players[i].goals_per_world_cup);
    }
}


int sub3(int x, int y, int z)
{
    int result = x - y - z;
    return result;
}
