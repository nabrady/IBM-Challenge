#include <iostream>
#include <fstream>

using namespace std;

int countRecipes();
int countIngredients();


int main()
{

    int recipeSize=countRecipes();
    int ingredientsSize=countIngredients();
    string* recipes = new string[recipeSize];       //Dynamically allocated array to store recipes.
    string* ingredients=new string[ingredientsSize]; //Dynamically allocated array to store ingredients.

    ifstream myFile("Recipes.txt");                 // Reads recipes from a text file into an array of strings.
    if(myFile.is_open()){
        for(int i=0; i<recipeSize; i++)
        {
            getline(myFile,recipes[i]);
        }
    }
   ifstream myFile2("ingredients.txt");            // Reads ingredients into an array of strings.
   if(myFile2.is_open())
   {
       for(int i=0; i<ingredientsSize; i++)
       {
           getline(myFile2, ingredients[i]);
       }
   }

  for(int j=0; j<recipeSize; j++){          //Do for each recipe
    int ingredientsUsed=0;
   for(int i=0; i<ingredientsSize; i++)     //Check for each ingredient
   {
   size_t found =recipes[j].find(ingredients[i]);
   if (found != string::npos)
   {
       ingredientsUsed++;                   //How many ingredients used in the recipe.
   }

   }
    if(ingredientsUsed==ingredientsSize)    //If all the ingredients are used output the recipe.
    {
        cout<<recipes[j]<<endl;
    }


  }
}
int countRecipes()
{
    int numberOfLines=0;
    string line;
    ifstream in("Recipes.txt");
    while(getline(in, line))
    {
        numberOfLines++;     //Counts the number of recipes.
    }
    return numberOfLines;
}
int countIngredients()
{
    int numberOfLines=0;
    string line;
    ifstream in ("ingredients.txt");
    while(getline(in, line))
    {
             numberOfLines++;  //Counts the number of ingredients.
    }
    return numberOfLines;
}


