#include <iostream>
#include <string>
#include <assert.h>

using namespace std;

char* reverse( char* s ) {
	if ( strlen( s ) == 1 )
		return s;
	return reverse( ++s );
}

//abcd
//bcd
//cd
//d

int main (int argc, char * const argv[]) {
	
	if ( argc != 2 )
    {
        cout << "Usage: " << argv[0] << " filename" << endl;
        return 1;
    }
	
	char * s = argv[1];
	assert( s );
	
	cout << "reverse of " << s << " is " << reverse( s ) << endl;
	
	return 0;
}
