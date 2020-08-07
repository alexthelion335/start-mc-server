#include <iostream>
using namespace std;
//Put this program in a folder with a minecraft server, for linux
//The name of the server jar file should be server.jar
//You should have java installed
//
// Written by Alex Kinch
// March 8, 2019
int main()
{
	string memory;
	cout<<"This program will start a Minecraft Server, with an amount of memory you specify."<<endl;
	cout<<"A recommended amount would be about 3000MB"<<endl;
	cout<<"Enter amount of memory you would like to start the Minecraft Server with. "<<endl;
	cout<<"Memory(in megabytes): ";
	cin>>memory;
	system(("java -Xmx"+memory+"M -Xms"+memory+"M -jar server.jar nogui").c_str());
	
}
