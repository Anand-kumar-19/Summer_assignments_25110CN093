#include<iostream>

int main(){

    int score = 0;
    char answer;

    std::cout << "===== WELCOME TO THE ONE PIECE QUIZ =====\n";
    //Taken a few questions from the anime onepiece

    // Question 1
    std::cout << "\n1. What is the name of Luffy's pirate crew?\n";
    std::cout << "a) Red Hair Pirates\n";
    std::cout << "b) Whitebeard Pirates\n";
    std::cout << "c) Straw Hat Pirates\n";
    std::cout << "d) Roger Pirates\n";
    std::cout << "Enter your answer : ";
    std::cin >> answer;

    if(answer == 'c' || answer == 'C'){
        std::cout << "Correct Answer!\n";
        score++;
    }
    else{
        std::cout << "Wrong Answer! Correct answer is Straw Hat Pirates.\n";
    }

    // Question 2
    std::cout << "\n2. Who gave Luffy his Straw Hat?\n";
    std::cout << "a) Gol D. Roger\n";
    std::cout << "b) Shanks\n";
    std::cout << "c) Rayleigh\n";
    std::cout << "d) Garp\n";
    std::cout << "Enter your answer : ";
    std::cin >> answer;

    if(answer == 'b' || answer == 'B'){
        std::cout << "Correct Answer!\n";
        score++;
    }
    else{
        std::cout << "Wrong Answer! Correct answer is Shanks.\n";
    }

    // Question 3
    std::cout << "\n3. What is Zoro's dream?\n";
    std::cout << "a) Become Pirate King\n";
    std::cout << "b) Find All Blue\n";
    std::cout << "c) Become the World's Greatest Swordsman\n";
    std::cout << "d) Draw a world map\n";
    std::cout << "Enter your answer : ";
    std::cin >> answer;

    if(answer == 'c' || answer == 'C'){
        std::cout << "Correct Answer!\n";
        score++;
    }
    else{
        std::cout << "Wrong Answer! Correct answer is Become the World's Greatest Swordsman.\n";
    }

    // Question 4
    std::cout << "\n4. Which Devil Fruit did Luffy eat?\n";
    std::cout << "a) Mera Mera no Mi\n";
    std::cout << "b) Gomu Gomu no Mi\n";
    std::cout << "c) Ope Ope no Mi\n";
    std::cout << "d) Yami Yami no Mi\n";
    std::cout << "Enter your answer : ";
    std::cin >> answer;

    if(answer == 'b' || answer == 'B'){
        std::cout << "Correct Answer!\n";
        score++;
    }
    else{
        std::cout << "Wrong Answer! Correct answer is Gomu Gomu no Mi.\n";
    }

    // Question 5
    std::cout << "\n5. Who is known as 'Black Leg'?\n";
    std::cout << "a) Zoro\n";
    std::cout << "b) Franky\n";
    std::cout << "c) Sanji\n";
    std::cout << "d) Brook\n";
    std::cout << "Enter your answer : ";
    std::cin >> answer;

    if(answer == 'c' || answer == 'C'){
        std::cout << "Correct Answer!\n";
        score++;
    }
    else{
        std::cout << "Wrong Answer! Correct answer is Sanji.\n";
    }

    // Final Score
    std::cout << "\n===== QUIZ COMPLETED =====\n";
    std::cout << "Your final score is : " << score << "/5\n";

    if(score == 5){
        std::cout << "Yonko Level Knowledge!";
    }
    else if(score >= 3){
        std::cout << "Great Pirate Level Knowledge!";
    }
    else{
        std::cout << "Time to rewatch One Piece!";
    }

    return 0;
}