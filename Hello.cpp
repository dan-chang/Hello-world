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
[d_chang@csil-06 lab00]$ del *
bash: del: command not found...
[d_chang@csil-06 lab00]$ del*
bash: del*: command not found...
[d_chang@csil-06 lab00]$ del ?
bash: del: command not found...
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

[d_chang@csil-06 lab00]$ vim hello.cpp
[d_chang@csil-06 lab00]$ cat hello.cpp
#include <iostream>

using namespace std;

int main() {
    // Your printing code should go here
cout>>"Hello world\n";
cout>>"I am ready for CS16!\n"
    return 0;

[d_chang@csil-06 lab00]$ g++ -o hello hello.cpp
hello.cpp: In function ‘int main()’:
hello.cpp:7:5: error: no match for ‘operator>>’ (operand types are ‘std::ostrea’ {aka ‘std::basic_ostream<char>’} and ‘const char [13]’)
 cout>>"Hello world\n";
 ~~~~^~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/string:53,
                 from /usr/include/c++/8/bits/locale_classes.h:40,
                 from /usr/include/c++/8/bits/ios_base.h:41,
                 from /usr/include/c++/8/ios:42,
                 from /usr/include/c++/8/ostream:38,
                 from /usr/include/c++/8/iostream:39,
                 from hello.cpp:1:
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note: candidate: ‘template<class _CharT, class _Traits, class _Alloc> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)’
     operator>>(basic_istream<_CharT, _Traits>& __in,
     ^~~~~~~~
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:931:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT&)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:931:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:756:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char&)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:756:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:761:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char&)’
     operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:761:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:963:5: note: candidate: ‘template<class _CharT2, class _Traits2> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT2*)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:963:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:803:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char*)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:803:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:808:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char*)’
     operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:808:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:980:5: note: candidate: ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&)’
     operator>>(_Istream&& __is, _Tp&& __x)
     ^~~~~~~~
/usr/include/c++/8/istream:980:5: note:   template argument deduction/substitution failed:
/usr/include/c++/8/istream: In substitution of ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&) [with _Istream = std::basic_ostream<char>&; _Tp = const char (&)[13]]’:
hello.cpp:7:7:   required from here
/usr/include/c++/8/istream:980:5: error: no type named ‘type’ in ‘struct std::enable_if<false, void>’
hello.cpp:8:5: error: no match for ‘operator>>’ (operand types are ‘std::ostrea’ {aka ‘std::basic_ostream<char>’} and ‘const char [22]’)
 cout>>"I am ready for CS16!\n"
 ~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/string:53,
                 from /usr/include/c++/8/bits/locale_classes.h:40,
                 from /usr/include/c++/8/bits/ios_base.h:41,
                 from /usr/include/c++/8/ios:42,
                 from /usr/include/c++/8/ostream:38,
                 from /usr/include/c++/8/iostream:39,
                 from hello.cpp:1:
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note: candidate: ‘template<class _CharT, class _Traits, class _Alloc> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)’
     operator>>(basic_istream<_CharT, _Traits>& __in,
     ^~~~~~~~
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"I am ready for CS16!\n"
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:931:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT&)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:931:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"I am ready for CS16!\n"
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:756:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char&)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:756:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n"
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:761:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char&)’
     operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:761:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n"
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:963:5: note: candidate: ‘template<class _CharT2, class _Traits2> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT2*)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:963:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"I am ready for CS16!\n"
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:803:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char*)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:803:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n"
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:808:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char*)’
     operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:808:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n"
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:980:5: note: candidate: ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&)’
     operator>>(_Istream&& __is, _Tp&& __x)
     ^~~~~~~~
/usr/include/c++/8/istream:980:5: note:   template argument deduction/substitution failed:
/usr/include/c++/8/istream: In substitution of ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&) [with _Istream = std::basic_ostream<char>&; _Tp = const char (&)[22]]’:
hello.cpp:8:7:   required from here
/usr/include/c++/8/istream:980:5: error: no type named ‘type’ in ‘struct std::enable_if<false, void>’
hello.cpp:9:13: error: expected ‘}’ at end of input
     return 0;
             ^
hello.cpp:5:12: note: to match this ‘{’
 int main() {
            ^
[d_chang@csil-06 lab00]$ vim hello.cpp
[d_chang@csil-06 lab00]$ cat hello.cpp
#include <iostream>

using namespace std;

int main() {
    // Your printing code should go here
cout>>"Hello world\n";
cout>>"I am ready for CS16!\n";
    return 0;

[d_chang@csil-06 lab00]$ g++ -o hello hello.cpp
hello.cpp: In function ‘int main()’:
hello.cpp:7:5: error: no match for ‘operator>>’ (operand types are ‘std::ostrea’ {aka ‘std::basic_ostream<char>’} and ‘const char [13]’)
 cout>>"Hello world\n";
 ~~~~^~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/string:53,
                 from /usr/include/c++/8/bits/locale_classes.h:40,
                 from /usr/include/c++/8/bits/ios_base.h:41,
                 from /usr/include/c++/8/ios:42,
                 from /usr/include/c++/8/ostream:38,
                 from /usr/include/c++/8/iostream:39,
                 from hello.cpp:1:
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note: candidate: ‘template<class _CharT, class _Traits, class _Alloc> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)’
     operator>>(basic_istream<_CharT, _Traits>& __in,
     ^~~~~~~~
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:931:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT&)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:931:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:756:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char&)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:756:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:761:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char&)’
     operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:761:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:963:5: note: candidate: ‘template<class _CharT2, class _Traits2> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT2*)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:963:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:803:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char*)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:803:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:808:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char*)’
     operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:808:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:980:5: note: candidate: ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&)’
     operator>>(_Istream&& __is, _Tp&& __x)
     ^~~~~~~~
/usr/include/c++/8/istream:980:5: note:   template argument deduction/substitution failed:
/usr/include/c++/8/istream: In substitution of ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&) [with _Istream = std::basic_ostream<char>&; _Tp = const char (&)[13]]’:
hello.cpp:7:7:   required from here
/usr/include/c++/8/istream:980:5: error: no type named ‘type’ in ‘struct std::enable_if<false, void>’
hello.cpp:8:5: error: no match for ‘operator>>’ (operand types are ‘std::ostrea’ {aka ‘std::basic_ostream<char>’} and ‘const char [22]’)
 cout>>"I am ready for CS16!\n";
 ~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/string:53,
                 from /usr/include/c++/8/bits/locale_classes.h:40,
                 from /usr/include/c++/8/bits/ios_base.h:41,
                 from /usr/include/c++/8/ios:42,
                 from /usr/include/c++/8/ostream:38,
                 from /usr/include/c++/8/iostream:39,
                 from hello.cpp:1:
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note: candidate: ‘template<class _CharT, class _Traits, class _Alloc> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)’
     operator>>(basic_istream<_CharT, _Traits>& __in,
     ^~~~~~~~
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:931:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT&)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:931:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:756:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char&)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:756:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:761:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char&)’
     operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:761:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:963:5: note: candidate: ‘template<class _CharT2, class _Traits2> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT2*)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:963:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:803:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char*)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:803:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:808:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char*)’
     operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:808:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:980:5: note: candidate: ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&)’
     operator>>(_Istream&& __is, _Tp&& __x)
     ^~~~~~~~
/usr/include/c++/8/istream:980:5: note:   template argument deduction/substitution failed:
/usr/include/c++/8/istream: In substitution of ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&) [with _Istream = std::basic_ostream<char>&; _Tp = const char (&)[22]]’:
hello.cpp:8:7:   required from here
/usr/include/c++/8/istream:980:5: error: no type named ‘type’ in ‘struct std::enable_if<false, void>’
hello.cpp:9:13: error: expected ‘}’ at end of input
     return 0;
             ^
hello.cpp:5:12: note: to match this ‘{’
 int main() {
            ^
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
[d_chang@csil-06 lab00]$ g++ -o hello hello.cpp
hello.cpp: In function ‘int main()’:
hello.cpp:7:5: error: no match for ‘operator>>’ (operand types are ‘std::ostrea’ {aka ‘std::basic_ostream<char>’} and ‘const char [13]’)
 cout>>"Hello world\n";
 ~~~~^~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/string:53,
                 from /usr/include/c++/8/bits/locale_classes.h:40,
                 from /usr/include/c++/8/bits/ios_base.h:41,
                 from /usr/include/c++/8/ios:42,
                 from /usr/include/c++/8/ostream:38,
                 from /usr/include/c++/8/iostream:39,
                 from hello.cpp:1:
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note: candidate: ‘template<class _CharT, class _Traits, class _Alloc> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)’
     operator>>(basic_istream<_CharT, _Traits>& __in,
     ^~~~~~~~
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:931:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT&)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:931:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:756:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char&)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:756:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:761:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char&)’
     operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:761:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:963:5: note: candidate: ‘template<class _CharT2, class _Traits2> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT2*)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:963:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:803:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char*)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:803:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:808:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char*)’
     operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:808:5: note:   template argument deduction/substitution failed:
hello.cpp:7:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"Hello world\n";
       ^~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:980:5: note: candidate: ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&)’
     operator>>(_Istream&& __is, _Tp&& __x)
     ^~~~~~~~
/usr/include/c++/8/istream:980:5: note:   template argument deduction/substitution failed:
/usr/include/c++/8/istream: In substitution of ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&) [with _Istream = std::basic_ostream<char>&; _Tp = const char (&)[13]]’:
hello.cpp:7:7:   required from here
/usr/include/c++/8/istream:980:5: error: no type named ‘type’ in ‘struct std::enable_if<false, void>’
hello.cpp:8:5: error: no match for ‘operator>>’ (operand types are ‘std::ostrea’ {aka ‘std::basic_ostream<char>’} and ‘const char [22]’)
 cout>>"I am ready for CS16!\n";
 ~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/string:53,
                 from /usr/include/c++/8/bits/locale_classes.h:40,
                 from /usr/include/c++/8/bits/ios_base.h:41,
                 from /usr/include/c++/8/ios:42,
                 from /usr/include/c++/8/ostream:38,
                 from /usr/include/c++/8/iostream:39,
                 from hello.cpp:1:
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note: candidate: ‘template<class _CharT, class _Traits, class _Alloc> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)’
     operator>>(basic_istream<_CharT, _Traits>& __in,
     ^~~~~~~~
/usr/include/c++/8/bits/basic_string.tcc:1465:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:931:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT&)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:931:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:756:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char&)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:756:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:761:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char&)’
     operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
     ^~~~~~~~
/usr/include/c++/8/istream:761:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/istream:991,
                 from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/bits/istream.tcc:963:5: note: candidate: ‘template<class _CharT2, class _Traits2> std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT2*)’
     operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
     ^~~~~~~~
/usr/include/c++/8/bits/istream.tcc:963:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:803:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, unsigned char*)’
     operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:803:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:808:5: note: candidate: ‘template<class _Traits> std::basic_istream<char, _Traits>& std::operator>>(std::basic_istream<char, _Traits>&, signed char*)’
     operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
     ^~~~~~~~
/usr/include/c++/8/istream:808:5: note:   template argument deduction/substitution failed:
hello.cpp:8:7: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<char, _Traits>’
 cout>>"I am ready for CS16!\n";
       ^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/8/iostream:40,
                 from hello.cpp:1:
/usr/include/c++/8/istream:980:5: note: candidate: ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&)’
     operator>>(_Istream&& __is, _Tp&& __x)
     ^~~~~~~~
/usr/include/c++/8/istream:980:5: note:   template argument deduction/substitution failed:
/usr/include/c++/8/istream: In substitution of ‘template<class _Istream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_istream<_Istream>, std::__is_extractable<typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type, _Tp&&, void> >::value, typename std::__is_convertible_to_basic_istream<_Tp>::__istream_type>::type std::operator>>(_Istream&&, _Tp&&) [with _Istream = std::basic_ostream<char>&; _Tp = const char (&)[22]]’:
hello.cpp:8:7:   required from here
/usr/include/c++/8/istream:980:5: error: no type named ‘type’ in ‘struct std::enable_if<false, void>’
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
[d_chang@csil-06 lab00]$ vim
