#include <functional>

/* class for the compose_f_gx_hx adapter
 */
template <class OP1, class OP2, class OP3>
class compose_f_gx_hx_t
    : public std::unary_function<typename OP2::argument_type, typename OP1::result_type>
{
private:
    OP1 op1;  // process: op1(op2(x), op3(x))
    OP2 op2;
    OP3 op3;

public:
    // constructor
    compose_f_gx_hx_t(const OP1 &o1, const OP2 &o2, const OP3 &o3) : op1(o1), op2(o2), op3(o3) {
    }

    // function call
    typename OP1::result_type
    operator ()(const typename OP2::argument_type &x) const {
        return op1(op2(x), op3(x));
    }
};

/* convenience function for the compose_f_gx_hx adapter
 */
template <class OP1, class OP2, class OP3>
inline compose_f_gx_hx_t<OP1, OP2, OP3>
compose_f_gx_hx(const OP1 &o1, const OP2 &o2, const OP3 &o3) {
    return compose_f_gx_hx_t<OP1, OP2, OP3>(o1, o2, o3);
}
