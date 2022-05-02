// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program display numbers from 1000 to 2000

#include <iostream>

int main() {
       // Declaring variables
       int counter;

       // For loop from 1000 to 2000
       for (counter = 1000; counter <=2000; counter ++) {
              if (counter % 5 == 0 && counter != 1000) {
                     // Go to next line after 5 numbers
                     std::cout << "\n";
              }

              std::cout << counter << " ";
       }
}
