# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_CONTROL_DEDUCE_D_512_HPP
# define BOOST_PREPROCESSOR_CONTROL_DEDUCE_D_512_HPP
#
# include <boost/preprocessor/control/while.hpp>
# include <boost/preprocessor/detail/auto_rec.hpp>
#
# /* BOOST_PP_DEDUCE_D */
#
# define BOOST_PP_DEDUCE_D() BOOST_PP_AUTO_REC(BOOST_PP_WHILE_P, 512)
#
# endif