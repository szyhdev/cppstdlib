#include <functional>
#include "nullary.h"

/* class for the compose_f_g adapter
 */
template <class OP1, class OP2>
class compose_f_g_t
    : public boost::nullary_function<typename OP1::result_type>
{
private:
    OP1 op1;    // process: op1(op2())
    OP2 op2;
public:
    // constructor
    compose_f_g_t(const OP1& o1, const OP2& o2)
        : op1(o1), op2(o2) {
    }

    // function call
    typename OP1::result_type
    operator()() const {
        return op1(op2());
    }
};

/* convenience function for the compose_f_g adapter
 */
template <class OP1, class OP2>
inline compose_f_g_t<OP1, OP2>
compose_f_g (const OP1& o1, const OP2& o2) {
    return compose_f_g_t<OP1, OP2>(o1, o2);
}
