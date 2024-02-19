#include <iostream>
#include <cstdlib>

namespace MyLib {
    double readAndProcessSum(std::istream &);
}

int main()
{
    using namespace std;
    double sum;

    try {
        sum = MyLib::readAndProcessSum(cin);
    }
    catch (const ios::failure &error) {
        cerr << "I/O exception: " << error.what() << endl;
        return EXIT_FAILURE;
    }
    catch (const exception &error) {
        cerr << "standard exception: " << error.what() << endl;
        return EXIT_FAILURE;
    }
    catch (...) {
        cerr << "unknown exception" << endl;
        return EXIT_FAILURE;
    }

    // print sum
    cout << "sum: " << sum << endl;

    return 0;
}

#include <istream>

namespace MyLib {
    double readAndProcessSum(std::istream &strm)
    {
        double value, sum;

        /* while stream is OK
         * - read value and add it to sum
         */
        sum = 0;
        while (strm >> value) {
            sum += value;
        }

        if (!strm.eof()) {
            throw std::ios::failure("input error in readAndProcessSum()");
        }

        // return sum
        return sum;
    }
}
