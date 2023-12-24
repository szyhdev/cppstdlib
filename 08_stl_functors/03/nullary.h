namespace boost {

/**********************************************************
 * type nullary_function
 * - as supplement to unary_function and binary_function
 **********************************************************/
template <class Result>
struct nullary_function {
    typedef Result result_type;
};

/**********************************************************
 * ptr_fun for functions with no argument
 **********************************************************/
template <class Result>
class pointer_to_nullary_function : public nullary_function<Result>
{
protected:
    Result (*ptr)();
public:
    pointer_to_nullary_function() {
    }
    explicit pointer_to_nullary_function(Result (*x)()) : ptr(x) {
    }
    Result operator()() const { 
        return ptr();
    }
};

template <class Result>
inline pointer_to_nullary_function<Result> ptr_fun(Result (*x)())
{
    return pointer_to_nullary_function<Result>(x);
}

}
