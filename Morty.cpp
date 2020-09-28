/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"
using namespace std;

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 

using namespace C137;


void Morty(int start, int stop, int step) {
    for (int i = start; i <= stop; i = i + step) {

        if (i % 15 == 0) { cout << i << ": Aww Geez Man" << endl; }
        else if (i % 5 == 0) { cout << i << ": Geez" << endl; }
        else if (i % 3 == 0) { cout << i << ": Aww" << endl; }
        else cout << i << ": " << endl;
    }
}
// =========================================================================== // 



// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 

using namespace Z286;

void Morty(int start, int stop, int step) {
    for (int i = start; i <= stop; i = i + step) {

        if (i % 15 == 0) { cout << i << ": naM zeeG wwA" << endl; }
        else if (i % 5 == 0) { cout << i << ": zeeG" << endl; }
        else if (i % 3 == 0) { cout << i << ": wwA" << endl; }
        else cout << i << ": " << endl;
    }
}
// =========================================================================== // 