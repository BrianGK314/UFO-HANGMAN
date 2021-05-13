#include<iostream>
#include<vector>
#include "ufo_functions.hpp"


int main(){

  greeting();

  std::string codeword = "codecademy";
  std::string answer="__________";
  int misses = 0;
  char letter;
  std::vector<char> incorrect;
  bool guess = false;

  while(codeword != answer and misses < 7){
    display_misses(misses);
    display_status(incorrect,answer);
    std::cout<<"\n";
    std::cout<<"Enter your guess:"<<"\n";
    std::cin>>letter;
    for(int i = 0; i<codeword.length();i++){
      if(codeword[i] == letter){
        guess = true;
        answer[i] = letter;
      }
    }
    if(guess == true){
      std::cout<<"Correct !"<<"\n";
    }
    else {
      std::cout<<"Sorry wrong answer. \nThe tractor beam pulls the person \nin further!!!"<<"\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false; 
    }
  
  



  end_game(codeword,answer);
  
}


