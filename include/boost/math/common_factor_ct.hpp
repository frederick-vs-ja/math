//  Boost common_factor_ct.hpp header file  ----------------------------------//

//  (C) Copyright John Maddock 2017.
//  Distributed under the Boost Software License, Version 1.0. (See
//  accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for updates, documentation, and revision history.

#ifndef BOOST_MATH_COMMON_FACTOR_CT_HPP
#define BOOST_MATH_COMMON_FACTOR_CT_HPP

#include <boost/integer/common_factor_ct.hpp>


#if _MSC_VER
    #pragma message ("The static_gcd and static_lcm have been moved to boost/integer/common_factor_rt.hpp; boost/math/common_factor_ct.hpp will be removed in a future release.\n")
#elif __GNUC__
    #warning ("The static_gcd and static_lcm have been moved to boost/integer/common_factor_rt.hpp; boost/math/common_factor_ct.hpp will be removed in a future release.\n")
#endif

namespace boost
{
namespace math
{

   using boost::integer::static_gcd;
   using boost::integer::static_lcm;
   using boost::integer::static_gcd_type;

}  // namespace math
}  // namespace boost


#endif  // BOOST_MATH_COMMON_FACTOR_CT_HPP
