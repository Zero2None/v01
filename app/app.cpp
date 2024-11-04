#include "app.h"
#include <format>

namespace vsite::oop::v1
{
    /*
    * function implementations
    */
    std::string to_hex(int a) {

        return std::format("{:X}", a);
    };

    std::string to_exp(double num) {

        return std::format("{:.2e}", num);
    };

    void mult_table(int size, std::ostream& out) {
        if (size == 0 || size > 20) {

            return;
        }

        for (int i = 0; i <= size; ++i) {

            for (int k = 0; k <= size; ++k) {

                if (k == 0) {

                    out << i;
                }

                else if (i == 0) {

                    out << std::format("{:4}",k);
                }

                else if (k > 0) {

                    out << std::format("{:4}", i * k);
                }
            }
            out << "\n";
        }
    };
} 

 // namespace

