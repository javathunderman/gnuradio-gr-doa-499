/* -*- c++ -*- */
/*
 * Copyright 2023 gr-doa author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_DOA_SAMPLE_OFFSET_CCI_IMPL_H
#define INCLUDED_DOA_SAMPLE_OFFSET_CCI_IMPL_H

#include <gnuradio/doa/sample_offset_cci.h>
#include <gnuradio/fft/fft.h>

namespace gr {
  namespace doa {

    class sample_offset_cci_impl : public sample_offset_cci
    {
     private:
      gr::fft::fft_complex_fwd* d_fft;
      gr::fft::fft_complex_rev* d_ifft;
      int d_vector_len, d_num_xcorr;
      int d_fft_width;
      int d_which;
      int d_shift;
      int* d_results;

      gr_complex* d_buffer1;
      gr_complex* d_buffer2;

      void recalc_msg(pmt::pmt_t msg);
      int get_shift(const gr_complex* &in0, const gr_complex* &in1);

     public:
      sample_offset_cci_impl(int vector_len, int num_xcorr);
      ~sample_offset_cci_impl();

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
    };

  } // namespace doa
} // namespace gr

#endif /* INCLUDED_DOA_SAMPLE_OFFSET_CCI_IMPL_H */
