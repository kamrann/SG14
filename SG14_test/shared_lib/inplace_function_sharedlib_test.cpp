#include "inplace_function.h"

namespace sg14_test
{
    SG14_TEST_API bool shlib_ref_isempty(stdext::inplace_function<int()> const& fn)
    {
	    return !fn;
    }
	
    SG14_TEST_API bool shlib_copy_isempty(stdext::inplace_function<int()> fn)
    {
        return !fn;
    }
	
    SG14_TEST_API int shlib_ref_invoke(stdext::inplace_function<int()> const& fn)
    {
	    return fn();
    }
	
    SG14_TEST_API int shlib_copy_invoke(stdext::inplace_function<int()> fn)
    {
	    return fn();
    }
	
    SG14_TEST_API stdext::inplace_function<int()> const& shlib_ref_get_empty_function()
    {
	    static stdext::inplace_function<int()> fn;

    	return fn;
    }
	
    SG14_TEST_API stdext::inplace_function<int()> shlib_copy_get_empty_function()
    {
    	return {};
    }
	
    SG14_TEST_API stdext::inplace_function<int()> const& shlib_ref_get_callable_function(int val)
    {
        static stdext::inplace_function<int()> fn;

        fn = [val] { return val; };
    	return fn;
    }
	
    SG14_TEST_API stdext::inplace_function<int()> shlib_copy_get_callable_function(int val)
    {
        return [val] { return val; };
    }
}
