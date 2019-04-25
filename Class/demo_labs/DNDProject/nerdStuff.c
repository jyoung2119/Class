#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

typedef struct character
{
    char *name;
    char *race;
    char *class;
    int level;
    char *alignment;
    int strength;
    int dexterity;
    int constitution;
    int intel;
    int wisdom;
    int charisma;
    int health;
    int armorClass;
    int initiative;
    int speed;
}Node, *NodePtr;

NodePtr characterCreator();
int diceRoll(char *die);
void printCharacter(NodePtr np);
int clear_input();

int main()
{
    int loop = 1;
    
    NodePtr current = NULL;

    system("clear");
    while(loop == 1)
    {
        int userChoice = 0;
        //system("clear");
        printf("[1]Create Character\n");
        printf("[2]Dice Roll\n");
        printf("[3]Print Character\n");
        printf("[4]Exit\n");
    
        if((!scanf("%d", &userChoice)) || userChoice < 1 || userChoice > 4)
        {
            printf("Why do you suck?\n");
        }

        if(userChoice == 1)
        {
            current = characterCreator();
        }
        else if(userChoice == 2)
        {
            int dieChoice;
            char *myDice[] = {"D4", "D6", "D8", "D10", "D10per", "D12", "D20"};
            int diceResult;
            int moreRolls;

            DICE:
            printf("Which Die?\n");
            printf("[1]D4\n");
            printf("[2]D6\n");
            printf("[3]D8\n");
            printf("[4]D10\n");
            printf("[5]D10 Percentile\n");
            printf("[6]D12\n");
            printf("[7]D20\n");
            clear_input();
            if((!scanf("%d", &dieChoice)) || dieChoice < 1 || dieChoice > 7)
            {
                printf("Why Do You Suck?\n");
                goto DICE;
            }

            switch(dieChoice)
            {
                case 1:
                    diceResult = diceRoll(myDice[0]);
                    break;
                case 2:
                    diceResult = diceRoll(myDice[1]);
                    break;
                case 3:
                    diceResult = diceRoll(myDice[2]);
                    break;
                case 4:
                    diceResult = diceRoll(myDice[3]);
                    break;
                case 5:
                    diceResult = diceRoll(myDice[4]);
                    break;
                case 6:
                    diceResult = diceRoll(myDice[5]);
                    break;
                case 7:
                    diceResult = diceRoll(myDice[6]);
                    break;
                default:
                    break;
            }
            printf("Roll = %d\n\n", diceResult);

            while(moreRolls != 1 || moreRolls != 2)
            {
                printf("Would You Like To Roll Again?\n");
                printf("[1]YES\n");
                printf("[2]NO\n");
                clear_input();
                if((!scanf("%d", &moreRolls)) || moreRolls < 1 || moreRolls  > 2)
                {
                    printf("Why Do You Suck?\n");
                }
                else if(moreRolls == 2)
                {
                    break;
                }
                else
                {
                    goto DICE;
                }
            }
        }
        else if(userChoice == 3)
        {
            if(!current)
            {
                printf("You Have Not Created A Character\n");
            }
            else
            {
                //Print name here b/c it does not work in printCharacter function...
                printf("\nName: %s\n", current -> name);
                printCharacter(current);
            }
        }
        else if(userChoice == 4)
        {
            loop = 0;
        }      
    }
}

NodePtr characterCreator()
{
    system("clear");
    clear_input();
    NodePtr current;
    int loop = 0;
    int choice = 0;
    char userName[256] = {0};
    char *userRace[] = {"Dwarf", "Elf", "Gnome", "Half-Elf", "Half-Orc", "Halfing", "Human", "Dragonborn", "Tiefling"};
    char *userClass[] = {"Barbarian", "Bard", "Cleric", "Druid", "Fighter", "Monk", "Paladin", "Ranger", "Rogue", "Sorcerer", "Warlock", "Wizard"};
    char *userAlign[] = {"LG", "NG", "CG", "LN", "N", "CN", "LE", "NE", "CE"};
    int maxAbilityPoints = 69;
    int tempPoints = 0;
    int healthPoints = 0;
    current = (NodePtr)malloc(sizeof(Node));

    printf("Enter Name: "); 
    fgets(userName, sizeof(userName), stdin);
    char *pos = strchr(userName, '\n');           
    if(pos) *pos = 0;
    
    current -> name = userName;

    //Race
    while(loop != 1)
    {
        printf("Pick A Race\n");
        printf("[1]Dwarf\n");
        printf("[2]Elf\n");
        printf("[3]Gnome\n");
        printf("[4]Half-Elf\n");
        printf("[5]Half-Orc\n");
        printf("[6]Halfing\n");
        printf("[7]Human\n");
        printf("[8]Dragonborn\n");
        printf("[9]Tiefling\n");
        if((!scanf("%d", &choice)) || choice < 1 || choice > 9)
        {
            system("clear");
            printf("Why Do You Suck?\n");
            clear_input();
        }
        switch(choice)
        {
            case 1:
                current -> race = userRace[0];
                loop = 1;
                break;
            case 2:
                current -> race = userRace[1];
                loop = 1;
                break;
            case 3:
                current -> race = userRace[2];
                loop = 1;
                break;
            case 4:
                current -> race = userRace[3];
                loop = 1;
                break;
            case 5:
                current -> race = userRace[4];
                loop = 1;
                break;
            case 6:
                current -> race = userRace[5];
                loop = 1;
                break;
            case 7:
                current -> race = userRace[6];
                loop = 1;
                break;
            case 8:
                current -> race = userRace[7];
                loop = 1;
                break;
            case 9:
                current -> race = userRace[8];
                loop = 1;
                break;
            default:
                break;
        }
    }
    system("clear");

    //Class
    choice = 0;
    loop = 0;
    while(loop != 1)
    {
        printf("Pick A Class\n");
        printf("[1]Barbarian\n");
        printf("[2]Bard\n");
        printf("[3]Cleric\n");
        printf("[4]Druid\n");
        printf("[5]Fighter\n");
        printf("[6]Monk\n");
        printf("[7]Paladin\n");
        printf("[8]Ranger\n");
        printf("[9]Rogue\n");
        printf("[10]Sorcerer\n");
        printf("[11]Warlock\n");
        printf("[12]Wizard\n");
        if((!scanf("%d", &choice)) || choice < 1 || choice > 12)
        {
            system("clear");
            printf("Why Do You Suck?\n");
            clear_input();
        }
        switch(choice)
        {
            case 1:
                current -> class = userClass[0];
                loop = 1;
                break;
            case 2:
                current -> class = userClass[1];
                loop = 1;
                break;
            case 3:
                current -> class = userClass[2];
                loop = 1;
                break;
            case 4:
                current -> class = userClass[3];
                loop = 1;
                break;
            case 5:
                current -> class = userClass[4];
                loop = 1;
                break;
            case 6:
                current -> class = userClass[5];
                loop = 1;
                break;
            case 7:
                current -> class = userClass[6];
                loop = 1;
                break;
            case 8:
                current -> class = userClass[7];
                loop = 1;
                break;
            case 9:
                current -> class = userClass[8];
                loop = 1;
                break;
            case 10:
                current -> class = userClass[9];
                loop = 1;
                break;
            case 11:
                current -> class = userClass[10];
                loop = 1;
                break;
            case 12:
                current -> class = userClass[11];
                loop = 1;
                break;
            default:
                break;
        }
    }
    system("clear");

    //Level starts at 1
    current -> level = 1;

    //Alignment
    choice = 0;
    loop = 0;
    while(loop != 1)
    {
        printf("Pick An Alignment\n");
        printf("[1]Lawful Good\n");
        printf("[2]Neutral Good\n");
        printf("[3]Chaotic Good\n");
        printf("[4]Lawful Neutral\n");
        printf("[5]Neutral\n");
        printf("[6]Chaotic Neutral\n");
        printf("[7]Lawful Evil\n");
        printf("[8]Neutral Evil\n");
        printf("[9]Chaotic Evil\n");
        if((!scanf("%d", &choice)) || choice < 1 || choice > 9)
        {
            system("clear");
            printf("Why Do You Suck?\n");
            clear_input();
        }
        switch(choice)
        {
            case 1:
                current -> alignment = userAlign[0];
                loop = 1;
                break;
            case 2:
                current -> alignment = userAlign[1];
                loop = 1;
                break;
            case 3:
                current -> alignment = userAlign[2];
                loop = 1;
                break;
            case 4:
                current -> alignment = userAlign[3];
                loop = 1;
                break;
            case 5:
                current -> alignment = userAlign[4];
                loop = 1;
                break;
            case 6:
                current -> alignment = userAlign[5];
                loop = 1;
                break;
            case 7:
                current -> alignment = userAlign[6];
                loop = 1;
                break;
            case 8:
                current -> alignment = userAlign[7];
                loop = 1;
                break;
            case 9:
                current -> alignment = userAlign[8];
                loop = 1;
                break;
            default:
                break;
        }
    }

    //Skills
    system("clear");
    printf("You Have 69 Ability Points:\n");
    STRENGTH:
    printf("Enter Strength Points: ");
    clear_input();
    if(!scanf("%d", &tempPoints) || tempPoints < 8 || tempPoints > 15 || tempPoints > maxAbilityPoints)
    {
        printf("Why Do You Suck?\n");
        goto STRENGTH;
    }
    else
    {
        maxAbilityPoints -= tempPoints;
        current -> strength = tempPoints;
        printf("You Have %d Ability Points Left:\n", maxAbilityPoints);
    }
    DEX:
    printf("Enter Dexterity Points: ");
    clear_input();
    if(!scanf("%d", &tempPoints) || tempPoints < 8 || tempPoints > 15)
    {
        printf("Why Do You Suck?\n");
        goto DEX;
    }
    else
    {
        maxAbilityPoints -= tempPoints;
        current -> dexterity = tempPoints;
        printf("You Have %d Ability Points Left:\n", maxAbilityPoints);
    }
    CONSTI:
    printf("Enter Constitution Points: ");
    clear_input();
    if(!scanf("%d", &tempPoints) || tempPoints < 8 || tempPoints > 15)
    {
        printf("Why Do You Suck?\n");
        goto CONSTI;
    }
    else
    {
        maxAbilityPoints -= tempPoints;
        current -> constitution = tempPoints;
        printf("You Have %d Ability Points Left:\n", maxAbilityPoints);
    }
    INTEL:
    printf("Enter Intelligence Points: ");
    clear_input();
    if(!scanf("%d", &tempPoints) || tempPoints < 8 || tempPoints > 15 || (maxAbilityPoints - tempPoints < 16))
    {
        printf("Why Do You Suck?\n");
        goto INTEL;
    }
    else
    {
        maxAbilityPoints -= tempPoints;
        current -> intel = tempPoints;
        printf("You Have %d Ability Points Left:\n", maxAbilityPoints);
    }
    WIS:
    printf("Enter Wisdom Points: ");
    clear_input();
    if(!scanf("%d", &tempPoints) || tempPoints < 8 || tempPoints > 15 || (maxAbilityPoints - tempPoints < 8))
    {
        printf("Why Do You Suck?\n");
        goto WIS;
    }
    else
    {
        maxAbilityPoints -= tempPoints;
        current -> wisdom = tempPoints;
        printf("You Have %d Ability Points Left:\n", maxAbilityPoints);
    }
    CHARISMA:
    printf("Enter Charisma Points: ");
    clear_input();
    if(!scanf("%d", &tempPoints) || tempPoints < 8 || tempPoints > 15 || tempPoints > maxAbilityPoints)
    {
        printf("Why Do You Suck?\n");
        goto CHARISMA;
    }
    else
    {
        maxAbilityPoints -= tempPoints;
        current -> charisma = tempPoints;
        printf("You Have %d Ability Points Left:\n", maxAbilityPoints);
    }

    //Health
    system("clear");
    loop = 0;
    while(loop != 1)
    {
        printf("Enter Health: ");
        //clear_input();
        if(!scanf("%d", &healthPoints) || healthPoints < 15 || healthPoints > 40)
        {
            printf("Why Do You Suck\n");
            clear_input();
        }
        else
        {
            current -> health = healthPoints;
            loop = 1;
        }
    }

    //Armor Class
    system("clear");
    printf("Your Armor Class Equals 10 + Your Dexterity:\n");
    current -> armorClass = ((current -> dexterity/2) - 5) + 10;
    printf("Armor Class = %d\n\n", current -> armorClass);

    //Initiative
    printf("Initiative Modifier Equals (Dexterity / 2) - 5\n");
    int intiativeMod = (current -> dexterity / 2) - 5;
    printf("Your Initiative Modifier = %d\n", intiativeMod);
    
    printf("Initiative Equals Initiative Mod\n");
    printf("Initiative = %d\n\n", intiativeMod);
    current -> initiative = intiativeMod;

    //Speed
    printf("Speed is Determined by Your Race Choice (%s)\n", current -> race);
    if(current -> race == "Dwarf" || current -> race == "Gnome" || current -> race == "Halfling")
    {
        current -> speed = 20;
    }
    else if(current -> race == "Human" || current -> race == "Elf" || current -> race == "Half-Elf" || 
            current -> race == "Half-Orc" || current -> race == "Dragonborn" || current -> race == "Tiefling")
    {
        current -> speed = 30;
    }
    printf("Speed = %d\n\n", current -> speed);
    
    return current;
}

int diceRoll(char *die)
{
    int roll = 0;
    srand(time(0));

    if(die == "D4")
    {
        roll = (rand() % (4 - 1 + 1)) + 1;
    }
    else if(die == "D6")
    {
        roll = (rand() % (6 - 1 + 1)) + 1;
    }
    else if(die == "D8")
    {
        roll = (rand() % (8 - 1 + 1)) + 1;
    }
    else if(die == "D10")
    {
        roll = (rand() % (10 - 1 + 1)) + 1;
    }
    else if(die == "D10per")
    {
        roll = ((rand() % (10 - 1 + 1)) + 1) * 10;
    }
    else if(die == "D12")
    {
        roll = (rand() % (12 - 1 + 1)) + 1;
    }
    else if(die == "D20")
    {
        roll = (rand() % (20 - 1 + 1)) + 1;
    }

    return roll;
}

void printCharacter(NodePtr np)
{
    NodePtr current = np;

    //Not working...
    //printf("Name: %s\n", current -> name);

    printf("Race: %s\n", current -> race);
    printf("Class: %s\n", current -> class);
    printf("Level: %i\n", current -> level);
    printf("Alignment: %s\n", current -> alignment);
    printf("Strength: %i\n", current -> strength);
    printf("Dexterity: %i\n", current -> dexterity);
    printf("Constitution: %i\n", current -> constitution);
    printf("Intelligence: %i\n", current -> intel);
    printf("Wisdom: %i\n", current -> wisdom);
    printf("Charisma: %i\n", current -> charisma);
    printf("Health: %i\n", current -> health);
    printf("Armor Class: %i\n", current -> armorClass);
    printf("Initiative: %i\n", current -> initiative);
    printf("Speed: %i\n\n", current -> speed);
}

//Clears stdin
int clear_input()
{
   while(getchar() != '\n');
}