/* -*- c++ -*- */
/*
 * Copyright 2023 gr-doa author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_DOA_SAMPLE_OFFSET_CCI_IMPL_H
#define INCLUDED_DOA_SAMPLE_OFFSET_CCI_IMPL_H

#include <gnuradio/doa/sample_offset_cci.h>

namespace gr {
namespace doa {

class sample_offset_cci_impl : public sample_offset_cci
{
private:
    // Nothing to declare in this block.

public:
    sample_offset_cci_impl();
    ~sample_offset_cci_impl();

    // Where all the action really happens
    void forecast(int noutput_items, gr_vector_int& ninput_items_required);

    int general_work(int noutput_items,
                     gr_vector_int& ninput_items,
                     gr_vector_const_void_star& input_items,
                     gr_vector_void_star& output_items);
};

} // namespace doa
} // namespace gr

#endif /* INCLUDED_DOA_SAMPLE_OFFSET_CCI_IMPL_H */
