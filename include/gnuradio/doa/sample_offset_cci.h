/* -*- c++ -*- */
/*
 * Copyright 2023 gr-doa author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_DOA_SAMPLE_OFFSET_CCI_H
#define INCLUDED_DOA_SAMPLE_OFFSET_CCI_H

#include <gnuradio/sync_block.h>
#include <gnuradio/doa/api.h>

namespace gr {
namespace doa {

    /*!
     * \brief <+description of block+>
     * \ingroup doa
     *
     */
    class DOA_API sample_offset_cci : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<sample_offset_cci> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of doa::sample_offset_cci.
       *
       * To avoid accidental use of raw pointers, doa::sample_offset_cci's
       * constructor is in a private implementation
       * class. doa::sample_offset_cci::make is the public interface for
       * creating new instances.
       */
      static sptr make(int vector_len, int num_xcorr);
    };

  } // namespace doa
} // namespace gr

#endif /* INCLUDED_DOA_SAMPLE_OFFSET_CCI_H */
