# IBM-Challenge

This program takes in a set of ingredients and a collection of recipes and outputs the recipes which use every ingredient.

Functionality
===============
Both the recipes and the ingredients are stored in text files. They are read in using the ifstream class and stored
in two dynamically allocated arrays. To find which recipes use each ingredients the number of ingredients is 
first found in the countIngredients() function by reading in the ingredients and incrementing the variable numberOfLines
by one each time. With the ingredients and recipes stored in arrays, each recipe is checked for each ingredient using for loops.
If an ingreident is found in a recipe the variable ingredientsUsed is incremeneted by one. If the amount of ingredients used reaches
the amount of ingredients then that particular recipe uses all the ingredients and is outputted to the console.
  
