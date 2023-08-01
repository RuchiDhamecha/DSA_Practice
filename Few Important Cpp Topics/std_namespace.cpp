/*              why we use "using namespace std;" in C++            */

/*
            In C++, a namespace is a collection of related names or identifiers (functions, class, variables) which helps to separate these identifiers from similar identifiers in other namespaces or the global namespace.

            The identifiers of the C++ standard library are defined in a namespace called std.

            C++ std Identifiers
            All the standard library identifiers provided by the standard header files like <iostream>, <string>, <vector>, etc. are declared in the std namespace.

            For example, identifiers cin and cout are defined inside the standard header file <iostream> of the namespace std.

            In order to use any identifier belonging to the standard library, we need to specify that it belongs to the std namespace.

            Utilizing std Identifiers
            We can utilize identifiers of the std namespace in our program with:

            the :: operator
            the using declaration
            the using directive
*/
/*
        1 ] std Namespace Using :: Operator

            The first way we access identifiers in the std namespace is by directly qualifying the identifier with the prefix std::. Here,

            std is the C++ standard library namespace
            :: is the scope resolution operator
            For example,            */

/*

/*
            In the above example, we are using identifiers from the std namespace directly using the scope resolution operator ::.

            Notice that we have prefixed std:: before string, cin, cout, and endl by writing:

            std::string
            std::cin
            std::cout
            std::endl
            If we remove the std:: prefix from the codes above, we will get an error.
*/

/*
#include <iostream>

int main() {

  std::string first_name;

  std::cout << "Enter your first name: ";
  std::cin >> first_name;
  std::cout << "Hello " << first_name << "!" << std::endl;
  std::cout << "Welcome!";

  return 0;
}

*/

/*
        2 ] std Namespace With using Declaration
            We can bring selected identifiers to the current scope with the help of the using declaration. To do this, we utilize the using keyword.

            By doing this, we won't need to prefix the specified identifiers with std::. For example,
*/

/*
#include <iostream>

// using declartion for cout, endl and string
using std::cout;
using std::endl;
using std::string;

int main() {

  string first_name ;

  cout << "Enter your first name: ";
  std::cin >> first_name;
  cout << "Hello " << first_name << "!" << endl;
  cout << "Welcome!";

  return 0;
}

*/

/*
            In the above example, we have used the using declaration for the identifiers we want to use from the std namespace:

            using std::cout;
            using std::endl;
            using std::string;
            Here, we are telling the compiler that we want to bring only the identifiers cout, endl, and string from the standard namespace to the current scope.

            This allows us to prevent explicitly adding prefix std:: whenever we need to access any of those identifiers.

            Notice that we have used std::cin instead of cin in our program:

            std::cin >> first_name;
            This is because we have not included std::cin in our using declaration.
*/

/*
        3 ] std Namespace With using Directive
            We can use the using directive to bring all the identifiers of the namespace std as if they were declared globally. To do this, we utilize the using keyword.

            By doing this, we can:

            avoid using the std:: prefix
            avoid utilizing the using declaration repeatedly
            For example,
*/
/*
#include <iostream>

// using directive
using namespace std;

int main() {

  string first_name ;

  cout << "Enter your first name: ";
  cin >> first_name;
  cout << "Hello " << first_name << "!" << endl;
  cout << "Welcome!";

  return 0;
}
*/

/*
            In the above example, we have used the using directive to bring all the identifiers of the std namespace to our program, including the string, cout, cin, and endl identifiers.

          Notes:
          ----  The using declaration only brings the specified identifiers of the namespace into the current scope.
          ----  The using directive brings all the identifiers of a namespace into the current scope.
*/
