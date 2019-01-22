Daniels-MacBook-Pro-2:~ danielchang$ ssh d_chang@csil-06.cs.ucsb.edu
d_chang@csil-06.cs.ucsb.edu's password: 
Last login: Mon Jan 21 23:21:29 2019 from 184.186.225.196
[d_chang@csil-06 ~]$ ls
'^C'    Desktop     Downloads   Pictures   Templates
 cs16   Documents   Music       Public     Videos
[d_chang@csil-06 ~]$ cd cs16
[d_chang@csil-06 cs16]$ ls
lab00
[d_chang@csil-06 cs16]$ cd lab00 
[d_chang@csil-06 lab00]$ ls
hello  hello.cpp  hello.cpp~  Hello.cpp
[d_chang@csil-06 lab00]$ rm *
[d_chang@csil-06 lab00]$ ls
[d_chang@csil-06 lab00]$ touch hello.cpp
[d_chang@csil-06 lab00]$ ls
hello.cpp
[d_chang@csil-06 lab00]$ vim hello.cpp
[d_chang@csil-06 lab00]$ cat hello.cpp
#include <iostream>

using namespace std;

int main() {
    // Your printing code should go here

    return 0;
}

[d_chang@csil-06 lab00]$ cat hello.cpp
#include <iostream>

using namespace std;

int main() {
    // Your printing code should go here
cout>>"Hello world\n";
cout>>"I am ready for CS16!\n";
    return 0;

[d_chang@csil-06 lab00]$ vim hello.cpp
[d_chang@csil-06 lab00]$ cat hello.cpp
#include <iostream>

using namespace std;

int main() {
    // Your printing code should go here
cout>>"Hello world\n";
cout>>"I am ready for CS16!\n";
    return 0;
}
[d_chang@csil-06 lab00]$ vim hello.cpp
[d_chang@csil-06 lab00]$ cat hello.cpp
#include <iostream>

using namespace std;

int main() {
    // Your printing code should go here
cout<<"Hello world\n";
cout<<"I am ready for CS16!\n";
    return 0;
}
[d_chang@csil-06 lab00]$ g++ -o hello hello.cpp
[d_chang@csil-06 lab00]$ ./hello
Hello world
I am ready for CS16!
[d_chang@csil-06 lab00]$ vim hello.cpp
[d_chang@csil-06 lab00]$ cat hello.cpp
#include <iostream>

using namespace std;

int main() {
    // Your printing code should go here
cout<<"Hello, world!\n";
cout<<"I am ready for CS16!\n";
    return 0;
}
[d_chang@csil-06 lab00]$ g++ -o hello hello.cpp
[d_chang@csil-06 lab00]$ ./hello
Hello, world!
I am ready for CS16!

