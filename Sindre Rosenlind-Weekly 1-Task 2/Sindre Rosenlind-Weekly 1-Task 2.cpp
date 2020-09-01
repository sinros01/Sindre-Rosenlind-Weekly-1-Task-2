#include <iostream>
#include <string>

std::string name = "";
int age;
std::string answer;
const std::string yes("yes");
const std::string no("no");

int main() {
	std::cout << "What is your name?\n";
	std::getline(std::cin, name);
	std::cout << "How old are you?\n";
	std::cin >> age;
	std::cout <<"Do you like coffee?\n";
	std::getline(std::cin, answer);
	std::cin >> answer;
	std::cin, name;

	std::cout << "Your name is: " << name << std::endl;
	std::cout << "You are " << age << " years old" << std::endl;

	if (answer == yes) {
		std::cout << "It seems you like coffee\n";
	}
	if (answer == no) {
		std::cout << "Oh you dont like coffee\n";
	}
	
	

}