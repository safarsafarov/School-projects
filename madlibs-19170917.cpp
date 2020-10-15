#include <iostream.h>
#include <string.h>
#include <stdlib.h>

struct StringData 
    {
    	char string[100];
};
void main()
    {
    	cout << "\n********** Mad Libs Example **********\n";
    	cout << "\nEnter 10 Variables\n";
    	StringData data[10];
    	for(int i = 0; i <= 9; i++)
        	{
        		cout << "\n enter variable #" << i << ":";
        		cin >> data[i].string;
        	}
        	cout << "\n********** Your Result ******************\n";
        	cout << "\n some guy was walking down the street when: " << data[0].string << " came along\n";
        	cout << "\n then this little: " << data[1].string << " started screaming " << endl;
        	cout << "\n what happend to this, point were did it go? : " << data[2].string << endl;
        	cout << "\n how many times must I tell you this: " << data[3].string << endl;
        	cout << "\n my mind speaks of this: " << data[4].string << endl;
        	cout << "\n this is a story of a boy named .." << data[5].string << endl;
        	cout << "\n low and below, there it was..." << data[6].string << endl;
        	cout << "\n and so we kept on saying this: " << data[7].string << endl;
        	cout << "\n this is a spew of nonsense: " << data[8].string << endl;
        
        	cout << "\n bye!";
        	system("pause");
    }
