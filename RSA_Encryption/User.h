#ifndef USER
#define USER

#include <string>

class User
{
public:
	User(std::string userName);		//sets a user's name and calls generateKeys()
	unsigned long long int getPublicKey();
	void sendMessage(unsigned long long recipient, std::string message);	//recipient is the public key of the recipient	
private:
	//vars
	std::string userName;
	unsigned long long publicKey;
	//methods
	void generateKeys();	//generates keys and stores the public key, prints out private key for the user to record
};

#endif //USER