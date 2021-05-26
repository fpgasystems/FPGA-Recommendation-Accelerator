#include "vadd.hpp"

void vadd(  
    const ap_int<AXI_WIDTH_HBM>* table_HBM0, const ap_int<AXI_WIDTH_HBM>* table_HBM1, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM2, const ap_int<AXI_WIDTH_HBM>* table_HBM3, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM4, const ap_int<AXI_WIDTH_HBM>* table_HBM5, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM6, const ap_int<AXI_WIDTH_HBM>* table_HBM7, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM8, const ap_int<AXI_WIDTH_HBM>* table_HBM9, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM10, const ap_int<AXI_WIDTH_HBM>* table_HBM11, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM12, const ap_int<AXI_WIDTH_HBM>* table_HBM13, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM14, const ap_int<AXI_WIDTH_HBM>* table_HBM15, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM16, const ap_int<AXI_WIDTH_HBM>* table_HBM17, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM18, const ap_int<AXI_WIDTH_HBM>* table_HBM19, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM20, const ap_int<AXI_WIDTH_HBM>* table_HBM21, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM22, const ap_int<AXI_WIDTH_HBM>* table_HBM23, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM24, const ap_int<AXI_WIDTH_HBM>* table_HBM25, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM26, const ap_int<AXI_WIDTH_HBM>* table_HBM27, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM28, const ap_int<AXI_WIDTH_HBM>* table_HBM29, 
    const ap_int<AXI_WIDTH_HBM>* table_HBM30, const ap_int<AXI_WIDTH_HBM>* table_HBM31, 
    const ap_int<AXI_WIDTH_DDR>* table_DDR0, const ap_int<AXI_WIDTH_DDR>* table_DDR1,
    int *out
    )
{
#pragma HLS DATAFLOW

#pragma HLS INTERFACE m_axi port=table_HBM0  offset=slave bundle=gmem0
#pragma HLS INTERFACE m_axi port=table_HBM1  offset=slave bundle=gmem1
#pragma HLS INTERFACE m_axi port=table_HBM2  offset=slave bundle=gmem2
#pragma HLS INTERFACE m_axi port=table_HBM3  offset=slave bundle=gmem3
#pragma HLS INTERFACE m_axi port=table_HBM4  offset=slave bundle=gmem4
#pragma HLS INTERFACE m_axi port=table_HBM5  offset=slave bundle=gmem5
#pragma HLS INTERFACE m_axi port=table_HBM6  offset=slave bundle=gmem6
#pragma HLS INTERFACE m_axi port=table_HBM7  offset=slave bundle=gmem7
#pragma HLS INTERFACE m_axi port=table_HBM8  offset=slave bundle=gmem8
#pragma HLS INTERFACE m_axi port=table_HBM9  offset=slave bundle=gmem9
#pragma HLS INTERFACE m_axi port=table_HBM10  offset=slave bundle=gmem10
#pragma HLS INTERFACE m_axi port=table_HBM11  offset=slave bundle=gmem11
#pragma HLS INTERFACE m_axi port=table_HBM12  offset=slave bundle=gmem12
#pragma HLS INTERFACE m_axi port=table_HBM13  offset=slave bundle=gmem13
#pragma HLS INTERFACE m_axi port=table_HBM14  offset=slave bundle=gmem14
#pragma HLS INTERFACE m_axi port=table_HBM15  offset=slave bundle=gmem15
#pragma HLS INTERFACE m_axi port=table_HBM16  offset=slave bundle=gmem16
#pragma HLS INTERFACE m_axi port=table_HBM17  offset=slave bundle=gmem17
#pragma HLS INTERFACE m_axi port=table_HBM18  offset=slave bundle=gmem18
#pragma HLS INTERFACE m_axi port=table_HBM19  offset=slave bundle=gmem19
#pragma HLS INTERFACE m_axi port=table_HBM20  offset=slave bundle=gmem20
#pragma HLS INTERFACE m_axi port=table_HBM21  offset=slave bundle=gmem21
#pragma HLS INTERFACE m_axi port=table_HBM22  offset=slave bundle=gmem22
#pragma HLS INTERFACE m_axi port=table_HBM23  offset=slave bundle=gmem23
#pragma HLS INTERFACE m_axi port=table_HBM24  offset=slave bundle=gmem24
#pragma HLS INTERFACE m_axi port=table_HBM25  offset=slave bundle=gmem25
#pragma HLS INTERFACE m_axi port=table_HBM26  offset=slave bundle=gmem26
#pragma HLS INTERFACE m_axi port=table_HBM27  offset=slave bundle=gmem27
#pragma HLS INTERFACE m_axi port=table_HBM28  offset=slave bundle=gmem28
#pragma HLS INTERFACE m_axi port=table_HBM29  offset=slave bundle=gmem29
#pragma HLS INTERFACE m_axi port=table_HBM30  offset=slave bundle=gmem30
#pragma HLS INTERFACE m_axi port=table_HBM31  offset=slave bundle=gmem31

#pragma HLS INTERFACE m_axi port=table_DDR0  offset=slave bundle=gmem32
#pragma HLS INTERFACE m_axi port=table_DDR1  offset=slave bundle=gmem33

#pragma HLS INTERFACE m_axi port=out offset=slave bundle=gmem34

#pragma HLS INTERFACE s_axilite port=table_HBM0  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM1  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM2  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM3  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM4  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM5  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM6  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM7  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM8  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM9  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM10  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM11  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM12  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM13  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM14  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM15  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM16  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM17  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM18  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM19  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM20  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM21  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM22  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM23  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM24  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM25  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM26  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM27  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM28  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM29  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM30  bundle=control
#pragma HLS INTERFACE s_axilite port=table_HBM31  bundle=control

#pragma HLS INTERFACE s_axilite port=table_DDR0  bundle=control
#pragma HLS INTERFACE s_axilite port=table_DDR1  bundle=control

#pragma HLS INTERFACE s_axilite port=out bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control

    hls::stream<t_hbm> s_embedding_buffer_HBM0;
    hls::stream<t_hbm> s_embedding_buffer_HBM1;
    hls::stream<t_hbm> s_embedding_buffer_HBM2;
    hls::stream<t_hbm> s_embedding_buffer_HBM3;
    hls::stream<t_hbm> s_embedding_buffer_HBM4;
    hls::stream<t_hbm> s_embedding_buffer_HBM5;
    hls::stream<t_hbm> s_embedding_buffer_HBM6;
    hls::stream<t_hbm> s_embedding_buffer_HBM7;
    hls::stream<t_hbm> s_embedding_buffer_HBM8;
    hls::stream<t_hbm> s_embedding_buffer_HBM9;
    hls::stream<t_hbm> s_embedding_buffer_HBM10;
    hls::stream<t_hbm> s_embedding_buffer_HBM11;
    hls::stream<t_hbm> s_embedding_buffer_HBM12;
    hls::stream<t_hbm> s_embedding_buffer_HBM13;
    hls::stream<t_hbm> s_embedding_buffer_HBM14;
    hls::stream<t_hbm> s_embedding_buffer_HBM15;
    hls::stream<t_hbm> s_embedding_buffer_HBM16;
    hls::stream<t_hbm> s_embedding_buffer_HBM17;
    hls::stream<t_hbm> s_embedding_buffer_HBM18;
    hls::stream<t_hbm> s_embedding_buffer_HBM19;
    hls::stream<t_hbm> s_embedding_buffer_HBM20;
    hls::stream<t_hbm> s_embedding_buffer_HBM21;
    hls::stream<t_hbm> s_embedding_buffer_HBM22;
    hls::stream<t_hbm> s_embedding_buffer_HBM23;
    hls::stream<t_hbm> s_embedding_buffer_HBM24;
    hls::stream<t_hbm> s_embedding_buffer_HBM25;
    hls::stream<t_hbm> s_embedding_buffer_HBM26;
    hls::stream<t_hbm> s_embedding_buffer_HBM27;
    hls::stream<t_hbm> s_embedding_buffer_HBM28;
    hls::stream<t_hbm> s_embedding_buffer_HBM29;
    hls::stream<t_hbm> s_embedding_buffer_HBM30;
    hls::stream<t_hbm> s_embedding_buffer_HBM31;
#pragma HLS stream variable=s_embedding_buffer_HBM0 depth=depth_s_embedding_buffer_HBM0
#pragma HLS stream variable=s_embedding_buffer_HBM1 depth=depth_s_embedding_buffer_HBM1
#pragma HLS stream variable=s_embedding_buffer_HBM2 depth=depth_s_embedding_buffer_HBM2
#pragma HLS stream variable=s_embedding_buffer_HBM3 depth=depth_s_embedding_buffer_HBM3
#pragma HLS stream variable=s_embedding_buffer_HBM4 depth=depth_s_embedding_buffer_HBM4
#pragma HLS stream variable=s_embedding_buffer_HBM5 depth=depth_s_embedding_buffer_HBM5
#pragma HLS stream variable=s_embedding_buffer_HBM6 depth=depth_s_embedding_buffer_HBM6
#pragma HLS stream variable=s_embedding_buffer_HBM7 depth=depth_s_embedding_buffer_HBM7
#pragma HLS stream variable=s_embedding_buffer_HBM8 depth=depth_s_embedding_buffer_HBM8
#pragma HLS stream variable=s_embedding_buffer_HBM9 depth=depth_s_embedding_buffer_HBM9
#pragma HLS stream variable=s_embedding_buffer_HBM10 depth=depth_s_embedding_buffer_HBM10
#pragma HLS stream variable=s_embedding_buffer_HBM11 depth=depth_s_embedding_buffer_HBM11
#pragma HLS stream variable=s_embedding_buffer_HBM12 depth=depth_s_embedding_buffer_HBM12
#pragma HLS stream variable=s_embedding_buffer_HBM13 depth=depth_s_embedding_buffer_HBM13
#pragma HLS stream variable=s_embedding_buffer_HBM14 depth=depth_s_embedding_buffer_HBM14
#pragma HLS stream variable=s_embedding_buffer_HBM15 depth=depth_s_embedding_buffer_HBM15
#pragma HLS stream variable=s_embedding_buffer_HBM16 depth=depth_s_embedding_buffer_HBM16
#pragma HLS stream variable=s_embedding_buffer_HBM17 depth=depth_s_embedding_buffer_HBM17
#pragma HLS stream variable=s_embedding_buffer_HBM18 depth=depth_s_embedding_buffer_HBM18
#pragma HLS stream variable=s_embedding_buffer_HBM19 depth=depth_s_embedding_buffer_HBM19
#pragma HLS stream variable=s_embedding_buffer_HBM20 depth=depth_s_embedding_buffer_HBM20
#pragma HLS stream variable=s_embedding_buffer_HBM21 depth=depth_s_embedding_buffer_HBM21
#pragma HLS stream variable=s_embedding_buffer_HBM22 depth=depth_s_embedding_buffer_HBM22
#pragma HLS stream variable=s_embedding_buffer_HBM23 depth=depth_s_embedding_buffer_HBM23
#pragma HLS stream variable=s_embedding_buffer_HBM24 depth=depth_s_embedding_buffer_HBM24
#pragma HLS stream variable=s_embedding_buffer_HBM25 depth=depth_s_embedding_buffer_HBM25
#pragma HLS stream variable=s_embedding_buffer_HBM26 depth=depth_s_embedding_buffer_HBM26
#pragma HLS stream variable=s_embedding_buffer_HBM27 depth=depth_s_embedding_buffer_HBM27
#pragma HLS stream variable=s_embedding_buffer_HBM28 depth=depth_s_embedding_buffer_HBM28
#pragma HLS stream variable=s_embedding_buffer_HBM29 depth=depth_s_embedding_buffer_HBM29
#pragma HLS stream variable=s_embedding_buffer_HBM30 depth=depth_s_embedding_buffer_HBM30
#pragma HLS stream variable=s_embedding_buffer_HBM31 depth=depth_s_embedding_buffer_HBM31
// for int to wide, no need for deep FIFO, use Flip-Flops instead
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM0;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM1;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM2;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM3;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM4;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM5;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM6;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM7;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM8;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM9;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM10;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM11;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM12;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM13;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM14;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM15;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM16;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM17;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM18;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM19;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM20;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM21;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM22;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM23;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM24;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM25;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM26;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM27;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM28;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM29;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM30;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_HBM31;

    hls::stream<t_plram> s_embedding_buffer_PLRAM0;
    hls::stream<t_plram> s_embedding_buffer_PLRAM1;
    hls::stream<t_plram> s_embedding_buffer_PLRAM2;
    hls::stream<t_plram> s_embedding_buffer_PLRAM3;
#pragma HLS stream variable=s_embedding_buffer_PLRAM0 depth=depth_s_embedding_buffer_PLRAM0
#pragma HLS stream variable=s_embedding_buffer_PLRAM1 depth=depth_s_embedding_buffer_PLRAM1
#pragma HLS stream variable=s_embedding_buffer_PLRAM2 depth=depth_s_embedding_buffer_PLRAM2
#pragma HLS stream variable=s_embedding_buffer_PLRAM3 depth=depth_s_embedding_buffer_PLRAM3
// for int to wide, no need for deep FIFO, use Flip-Flops instead
    // hls::stream<W_TYPE> s_embedding_buffer_wide_PLRAM0;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_PLRAM1;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_PLRAM2;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_PLRAM3;

    hls::stream<t_ddr> s_embedding_buffer_DDR0;
    hls::stream<t_ddr> s_embedding_buffer_DDR1;
#pragma HLS stream variable=s_embedding_buffer_DDR0 depth=depth_s_embedding_buffer_DDR0
#pragma HLS stream variable=s_embedding_buffer_DDR1 depth=depth_s_embedding_buffer_DDR1
// for int to wide, no need for deep FIFO, use Flip-Flops instead
    // hls::stream<W_TYPE> s_embedding_buffer_wide_DDR0;
    // hls::stream<W_TYPE> s_embedding_buffer_wide_DDR1;

    hls::stream<int> s_idx_buffer_HBM0;
    hls::stream<int> s_idx_buffer_HBM1;
    hls::stream<int> s_idx_buffer_HBM2;
    hls::stream<int> s_idx_buffer_HBM3;
    hls::stream<int> s_idx_buffer_HBM4;
    hls::stream<int> s_idx_buffer_HBM5;
    hls::stream<int> s_idx_buffer_HBM6;
    hls::stream<int> s_idx_buffer_HBM7;
    hls::stream<int> s_idx_buffer_HBM8;
    hls::stream<int> s_idx_buffer_HBM9;
    hls::stream<int> s_idx_buffer_HBM10;
    hls::stream<int> s_idx_buffer_HBM11;
    hls::stream<int> s_idx_buffer_HBM12;
    hls::stream<int> s_idx_buffer_HBM13;
    hls::stream<int> s_idx_buffer_HBM14;
    hls::stream<int> s_idx_buffer_HBM15;
    hls::stream<int> s_idx_buffer_HBM16;
    hls::stream<int> s_idx_buffer_HBM17;
    hls::stream<int> s_idx_buffer_HBM18;
    hls::stream<int> s_idx_buffer_HBM19;
    hls::stream<int> s_idx_buffer_HBM20;
    hls::stream<int> s_idx_buffer_HBM21;
    hls::stream<int> s_idx_buffer_HBM22;
    hls::stream<int> s_idx_buffer_HBM23;
    hls::stream<int> s_idx_buffer_HBM24;
    hls::stream<int> s_idx_buffer_HBM25;
    hls::stream<int> s_idx_buffer_HBM26;
    hls::stream<int> s_idx_buffer_HBM27;
    hls::stream<int> s_idx_buffer_HBM28;
    hls::stream<int> s_idx_buffer_HBM29;
    hls::stream<int> s_idx_buffer_HBM30;
    hls::stream<int> s_idx_buffer_HBM31;
#pragma HLS stream variable=s_idx_buffer_HBM0 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM1 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM2 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM3 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM4 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM5 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM6 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM7 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM8 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM9 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM10 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM11 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM12 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM13 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM14 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM15 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM16 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM17 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM18 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM19 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM20 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM21 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM22 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM23 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM24 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM25 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM26 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM27 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM28 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM29 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM30 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_HBM31 depth=fifo_batch_size

    hls::stream<int> s_idx_buffer_PLRAM0;
    hls::stream<int> s_idx_buffer_PLRAM1;
    hls::stream<int> s_idx_buffer_PLRAM2;
    hls::stream<int> s_idx_buffer_PLRAM3;
#pragma HLS stream variable=s_idx_buffer_PLRAM0 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_PLRAM1 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_PLRAM2 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_PLRAM3 depth=fifo_batch_size

    hls::stream<int> s_idx_buffer_DDR0;
    hls::stream<int> s_idx_buffer_DDR1;
#pragma HLS stream variable=s_idx_buffer_DDR0 depth=fifo_batch_size
#pragma HLS stream variable=s_idx_buffer_DDR1 depth=fifo_batch_size

    hls::stream<int> s_result_buffer_HBM0;
    hls::stream<int> s_result_buffer_HBM1;
    hls::stream<int> s_result_buffer_HBM2;
    hls::stream<int> s_result_buffer_HBM3;
    hls::stream<int> s_result_buffer_HBM4;
    hls::stream<int> s_result_buffer_HBM5;
    hls::stream<int> s_result_buffer_HBM6;
    hls::stream<int> s_result_buffer_HBM7;
    hls::stream<int> s_result_buffer_HBM8;
    hls::stream<int> s_result_buffer_HBM9;
    hls::stream<int> s_result_buffer_HBM10;
    hls::stream<int> s_result_buffer_HBM11;
    hls::stream<int> s_result_buffer_HBM12;
    hls::stream<int> s_result_buffer_HBM13;
    hls::stream<int> s_result_buffer_HBM14;
    hls::stream<int> s_result_buffer_HBM15;
    hls::stream<int> s_result_buffer_HBM16;
    hls::stream<int> s_result_buffer_HBM17;
    hls::stream<int> s_result_buffer_HBM18;
    hls::stream<int> s_result_buffer_HBM19;
    hls::stream<int> s_result_buffer_HBM20;
    hls::stream<int> s_result_buffer_HBM21;
    hls::stream<int> s_result_buffer_HBM22;
    hls::stream<int> s_result_buffer_HBM23;
    hls::stream<int> s_result_buffer_HBM24;
    hls::stream<int> s_result_buffer_HBM25;
    hls::stream<int> s_result_buffer_HBM26;
    hls::stream<int> s_result_buffer_HBM27;
    hls::stream<int> s_result_buffer_HBM28;
    hls::stream<int> s_result_buffer_HBM29;
    hls::stream<int> s_result_buffer_HBM30;
    hls::stream<int> s_result_buffer_HBM31;
#pragma HLS stream variable=s_result_buffer_HBM0 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM1 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM2 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM3 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM4 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM5 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM6 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM7 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM8 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM9 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM10 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM11 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM12 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM13 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM14 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM15 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM16 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM17 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM18 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM19 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM20 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM21 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM22 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM23 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM24 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM25 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM26 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM27 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM28 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM29 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM30 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_HBM31 depth=fifo_batch_size

    hls::stream<int> s_result_buffer_PLRAM0;
    hls::stream<int> s_result_buffer_PLRAM1;
    hls::stream<int> s_result_buffer_PLRAM2;
    hls::stream<int> s_result_buffer_PLRAM3;
#pragma HLS stream variable=s_result_buffer_PLRAM0 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_PLRAM1 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_PLRAM2 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_PLRAM3 depth=fifo_batch_size

    hls::stream<int> s_result_buffer_DDR0;
    hls::stream<int> s_result_buffer_DDR1;
#pragma HLS stream variable=s_result_buffer_DDR0 depth=fifo_batch_size
#pragma HLS stream variable=s_result_buffer_DDR1 depth=fifo_batch_size

    hls::stream<int> s_vout_buffer; 
#pragma HLS stream variable=s_vout_buffer depth=fifo_batch_size

    
    ap_int<AXI_WIDTH_PLRAM> table_PLRAM0[PLRAM_BANK0_SIZE]; 
    ap_int<AXI_WIDTH_PLRAM> table_PLRAM1[PLRAM_BANK1_SIZE]; 
    ap_int<AXI_WIDTH_PLRAM> table_PLRAM2[PLRAM_BANK2_SIZE]; 
    ap_int<AXI_WIDTH_PLRAM> table_PLRAM3[PLRAM_BANK3_SIZE]; 
#pragma HLS resource variable=table_PLRAM0 core=RAM_2P_URAM
#pragma HLS resource variable=table_PLRAM1 core=RAM_2P_URAM
#pragma HLS resource variable=table_PLRAM2 core=RAM_2P_URAM
#pragma HLS resource variable=table_PLRAM3 core=RAM_2P_URAM

    init_PLRAM_4_tables 
        <ADDR_AXI_PLRAM_0, AXI_PADDED_SIZE_PLRAM_0, DATA_SIZE_PLRAM_0, TABLE_SIZE_PLRAM_0, 0,
        ADDR_AXI_PLRAM_4, AXI_PADDED_SIZE_PLRAM_4, DATA_SIZE_PLRAM_4, TABLE_SIZE_PLRAM_4, 4,
        ADDR_AXI_PLRAM_8, AXI_PADDED_SIZE_PLRAM_8, DATA_SIZE_PLRAM_8, TABLE_SIZE_PLRAM_8, 8,
        ADDR_AXI_PLRAM_12, AXI_PADDED_SIZE_PLRAM_12, DATA_SIZE_PLRAM_12, TABLE_SIZE_PLRAM_12, 12>(table_PLRAM0);

    init_PLRAM_4_tables 
        <ADDR_AXI_PLRAM_1, AXI_PADDED_SIZE_PLRAM_1, DATA_SIZE_PLRAM_1, TABLE_SIZE_PLRAM_1, 1,
        ADDR_AXI_PLRAM_5, AXI_PADDED_SIZE_PLRAM_5, DATA_SIZE_PLRAM_5, TABLE_SIZE_PLRAM_5, 5,
        ADDR_AXI_PLRAM_9, AXI_PADDED_SIZE_PLRAM_9, DATA_SIZE_PLRAM_9, TABLE_SIZE_PLRAM_9, 9,
        ADDR_AXI_PLRAM_13, AXI_PADDED_SIZE_PLRAM_13, DATA_SIZE_PLRAM_13, TABLE_SIZE_PLRAM_13, 13>(table_PLRAM1);

    init_PLRAM_4_tables 
        <ADDR_AXI_PLRAM_2, AXI_PADDED_SIZE_PLRAM_2, DATA_SIZE_PLRAM_2, TABLE_SIZE_PLRAM_2, 2,
        ADDR_AXI_PLRAM_6, AXI_PADDED_SIZE_PLRAM_6, DATA_SIZE_PLRAM_6, TABLE_SIZE_PLRAM_6, 6,
        ADDR_AXI_PLRAM_10, AXI_PADDED_SIZE_PLRAM_10, DATA_SIZE_PLRAM_10, TABLE_SIZE_PLRAM_10, 10,
        ADDR_AXI_PLRAM_14, AXI_PADDED_SIZE_PLRAM_14, DATA_SIZE_PLRAM_14, TABLE_SIZE_PLRAM_14, 14>(table_PLRAM2);

    init_PLRAM_4_tables 
        <ADDR_AXI_PLRAM_3, AXI_PADDED_SIZE_PLRAM_3, DATA_SIZE_PLRAM_3, TABLE_SIZE_PLRAM_3, 3,
        ADDR_AXI_PLRAM_7, AXI_PADDED_SIZE_PLRAM_7, DATA_SIZE_PLRAM_7, TABLE_SIZE_PLRAM_7, 7,
        ADDR_AXI_PLRAM_11, AXI_PADDED_SIZE_PLRAM_11, DATA_SIZE_PLRAM_11, TABLE_SIZE_PLRAM_11, 11,
        ADDR_AXI_PLRAM_15, AXI_PADDED_SIZE_PLRAM_15, DATA_SIZE_PLRAM_15, TABLE_SIZE_PLRAM_15, 15>(table_PLRAM3);

    load_access_idx(
        s_idx_buffer_HBM0, s_idx_buffer_HBM1, s_idx_buffer_HBM2, s_idx_buffer_HBM3, 
        s_idx_buffer_HBM4, s_idx_buffer_HBM5, s_idx_buffer_HBM6, s_idx_buffer_HBM7, 
        s_idx_buffer_HBM8, s_idx_buffer_HBM9, s_idx_buffer_HBM10, s_idx_buffer_HBM11, 
        s_idx_buffer_HBM12, s_idx_buffer_HBM13, s_idx_buffer_HBM14, s_idx_buffer_HBM15, 
        s_idx_buffer_HBM16, s_idx_buffer_HBM17, s_idx_buffer_HBM18, s_idx_buffer_HBM19, 
        s_idx_buffer_HBM20, s_idx_buffer_HBM21, s_idx_buffer_HBM22, s_idx_buffer_HBM23, 
        s_idx_buffer_HBM24, s_idx_buffer_HBM25, s_idx_buffer_HBM26, s_idx_buffer_HBM27, 
        s_idx_buffer_HBM28, s_idx_buffer_HBM29, s_idx_buffer_HBM30, s_idx_buffer_HBM31, 
        s_idx_buffer_DDR0, s_idx_buffer_DDR1, 
        s_idx_buffer_PLRAM0, s_idx_buffer_PLRAM1, s_idx_buffer_PLRAM2, s_idx_buffer_PLRAM3);

//////////////////////////////     Load Vectors & Concatenate     ////////////////////////////// 

    load_single_embedding_2_tables<ADDR_AXI_HBM_0, AXI_PADDED_SIZE_HBM_0, ADDR_AXI_HBM_32, AXI_PADDED_SIZE_HBM_32>(
        s_idx_buffer_HBM0, table_HBM0, s_embedding_buffer_HBM0);
    load_single_embedding_2_tables<ADDR_AXI_HBM_1, AXI_PADDED_SIZE_HBM_1, ADDR_AXI_HBM_33, AXI_PADDED_SIZE_HBM_33>(
        s_idx_buffer_HBM1, table_HBM1, s_embedding_buffer_HBM1);
    load_single_embedding_2_tables<ADDR_AXI_HBM_2, AXI_PADDED_SIZE_HBM_2, ADDR_AXI_HBM_34, AXI_PADDED_SIZE_HBM_34>(
        s_idx_buffer_HBM2, table_HBM2, s_embedding_buffer_HBM2);
    load_single_embedding_2_tables<ADDR_AXI_HBM_3, AXI_PADDED_SIZE_HBM_3, ADDR_AXI_HBM_35, AXI_PADDED_SIZE_HBM_35>(
        s_idx_buffer_HBM3, table_HBM3, s_embedding_buffer_HBM3);
    load_single_embedding_2_tables<ADDR_AXI_HBM_4, AXI_PADDED_SIZE_HBM_4, ADDR_AXI_HBM_36, AXI_PADDED_SIZE_HBM_36>(
        s_idx_buffer_HBM4, table_HBM4, s_embedding_buffer_HBM4);
    load_single_embedding_2_tables<ADDR_AXI_HBM_5, AXI_PADDED_SIZE_HBM_5, ADDR_AXI_HBM_37, AXI_PADDED_SIZE_HBM_37>(
        s_idx_buffer_HBM5, table_HBM5, s_embedding_buffer_HBM5);
    load_single_embedding_2_tables<ADDR_AXI_HBM_6, AXI_PADDED_SIZE_HBM_6, ADDR_AXI_HBM_38, AXI_PADDED_SIZE_HBM_38>(
        s_idx_buffer_HBM6, table_HBM6, s_embedding_buffer_HBM6);
    load_single_embedding_2_tables<ADDR_AXI_HBM_7, AXI_PADDED_SIZE_HBM_7, ADDR_AXI_HBM_39, AXI_PADDED_SIZE_HBM_39>(
        s_idx_buffer_HBM7, table_HBM7, s_embedding_buffer_HBM7);
    load_single_embedding_2_tables<ADDR_AXI_HBM_8, AXI_PADDED_SIZE_HBM_8, ADDR_AXI_HBM_40, AXI_PADDED_SIZE_HBM_40>(
        s_idx_buffer_HBM8, table_HBM8, s_embedding_buffer_HBM8);
    load_single_embedding_2_tables<ADDR_AXI_HBM_9, AXI_PADDED_SIZE_HBM_9, ADDR_AXI_HBM_41, AXI_PADDED_SIZE_HBM_41>(
        s_idx_buffer_HBM9, table_HBM9, s_embedding_buffer_HBM9);
    load_single_embedding_2_tables<ADDR_AXI_HBM_10, AXI_PADDED_SIZE_HBM_10, ADDR_AXI_HBM_42, AXI_PADDED_SIZE_HBM_42>(
        s_idx_buffer_HBM10, table_HBM10, s_embedding_buffer_HBM10);
    load_single_embedding_2_tables<ADDR_AXI_HBM_11, AXI_PADDED_SIZE_HBM_11, ADDR_AXI_HBM_43, AXI_PADDED_SIZE_HBM_43>(
        s_idx_buffer_HBM11, table_HBM11, s_embedding_buffer_HBM11);
    load_single_embedding_2_tables<ADDR_AXI_HBM_12, AXI_PADDED_SIZE_HBM_12, ADDR_AXI_HBM_44, AXI_PADDED_SIZE_HBM_44>(
        s_idx_buffer_HBM12, table_HBM12, s_embedding_buffer_HBM12);
    load_single_embedding_2_tables<ADDR_AXI_HBM_13, AXI_PADDED_SIZE_HBM_13, ADDR_AXI_HBM_45, AXI_PADDED_SIZE_HBM_45>(
        s_idx_buffer_HBM13, table_HBM13, s_embedding_buffer_HBM13);
    load_single_embedding_2_tables<ADDR_AXI_HBM_14, AXI_PADDED_SIZE_HBM_14, ADDR_AXI_HBM_46, AXI_PADDED_SIZE_HBM_46>(
        s_idx_buffer_HBM14, table_HBM14, s_embedding_buffer_HBM14);
    load_single_embedding_2_tables<ADDR_AXI_HBM_15, AXI_PADDED_SIZE_HBM_15, ADDR_AXI_HBM_47, AXI_PADDED_SIZE_HBM_47>(
        s_idx_buffer_HBM15, table_HBM15, s_embedding_buffer_HBM15);
    load_single_embedding_2_tables<ADDR_AXI_HBM_16, AXI_PADDED_SIZE_HBM_16, ADDR_AXI_HBM_48, AXI_PADDED_SIZE_HBM_48>(
        s_idx_buffer_HBM16, table_HBM16, s_embedding_buffer_HBM16);
    load_single_embedding_2_tables<ADDR_AXI_HBM_17, AXI_PADDED_SIZE_HBM_17, ADDR_AXI_HBM_49, AXI_PADDED_SIZE_HBM_49>(
        s_idx_buffer_HBM17, table_HBM17, s_embedding_buffer_HBM17);
    load_single_embedding_2_tables<ADDR_AXI_HBM_18, AXI_PADDED_SIZE_HBM_18, ADDR_AXI_HBM_50, AXI_PADDED_SIZE_HBM_50>(
        s_idx_buffer_HBM18, table_HBM18, s_embedding_buffer_HBM18);
    load_single_embedding_2_tables<ADDR_AXI_HBM_19, AXI_PADDED_SIZE_HBM_19, ADDR_AXI_HBM_51, AXI_PADDED_SIZE_HBM_51>(
        s_idx_buffer_HBM19, table_HBM19, s_embedding_buffer_HBM19);
    load_single_embedding_2_tables<ADDR_AXI_HBM_20, AXI_PADDED_SIZE_HBM_20, ADDR_AXI_HBM_52, AXI_PADDED_SIZE_HBM_52>(
        s_idx_buffer_HBM20, table_HBM20, s_embedding_buffer_HBM20);
    load_single_embedding_2_tables<ADDR_AXI_HBM_21, AXI_PADDED_SIZE_HBM_21, ADDR_AXI_HBM_53, AXI_PADDED_SIZE_HBM_53>(
        s_idx_buffer_HBM21, table_HBM21, s_embedding_buffer_HBM21);
    load_single_embedding_2_tables<ADDR_AXI_HBM_22, AXI_PADDED_SIZE_HBM_22, ADDR_AXI_HBM_54, AXI_PADDED_SIZE_HBM_54>(
        s_idx_buffer_HBM22, table_HBM22, s_embedding_buffer_HBM22);
    load_single_embedding_2_tables<ADDR_AXI_HBM_23, AXI_PADDED_SIZE_HBM_23, ADDR_AXI_HBM_55, AXI_PADDED_SIZE_HBM_55>(
        s_idx_buffer_HBM23, table_HBM23, s_embedding_buffer_HBM23);
    load_single_embedding_2_tables<ADDR_AXI_HBM_24, AXI_PADDED_SIZE_HBM_24, ADDR_AXI_HBM_56, AXI_PADDED_SIZE_HBM_56>(
        s_idx_buffer_HBM24, table_HBM24, s_embedding_buffer_HBM24);
    load_single_embedding_2_tables<ADDR_AXI_HBM_25, AXI_PADDED_SIZE_HBM_25, ADDR_AXI_HBM_57, AXI_PADDED_SIZE_HBM_57>(
        s_idx_buffer_HBM25, table_HBM25, s_embedding_buffer_HBM25);
    load_single_embedding_2_tables<ADDR_AXI_HBM_26, AXI_PADDED_SIZE_HBM_26, ADDR_AXI_HBM_58, AXI_PADDED_SIZE_HBM_58>(
        s_idx_buffer_HBM26, table_HBM26, s_embedding_buffer_HBM26);
    load_single_embedding_2_tables<ADDR_AXI_HBM_27, AXI_PADDED_SIZE_HBM_27, ADDR_AXI_HBM_59, AXI_PADDED_SIZE_HBM_59>(
        s_idx_buffer_HBM27, table_HBM27, s_embedding_buffer_HBM27);
    load_single_embedding_2_tables<ADDR_AXI_HBM_28, AXI_PADDED_SIZE_HBM_28, ADDR_AXI_HBM_60, AXI_PADDED_SIZE_HBM_60>(
        s_idx_buffer_HBM28, table_HBM28, s_embedding_buffer_HBM28);
    load_single_embedding_2_tables<ADDR_AXI_HBM_29, AXI_PADDED_SIZE_HBM_29, ADDR_AXI_HBM_61, AXI_PADDED_SIZE_HBM_61>(
        s_idx_buffer_HBM29, table_HBM29, s_embedding_buffer_HBM29);
    load_single_embedding_2_tables<ADDR_AXI_HBM_30, AXI_PADDED_SIZE_HBM_30, ADDR_AXI_HBM_62, AXI_PADDED_SIZE_HBM_62>(
        s_idx_buffer_HBM30, table_HBM30, s_embedding_buffer_HBM30);
    load_single_embedding_2_tables<ADDR_AXI_HBM_31, AXI_PADDED_SIZE_HBM_31, ADDR_AXI_HBM_63, AXI_PADDED_SIZE_HBM_63>(
        s_idx_buffer_HBM31, table_HBM31, s_embedding_buffer_HBM31);

    load_single_embedding_2_tables<ADDR_AXI_DDR_0, AXI_PADDED_SIZE_DDR_0, ADDR_AXI_DDR_2, AXI_PADDED_SIZE_DDR_2>(
        s_idx_buffer_DDR0, table_DDR0, s_embedding_buffer_DDR0);
    load_single_embedding_2_tables<ADDR_AXI_DDR_1, AXI_PADDED_SIZE_DDR_1, ADDR_AXI_DDR_3, AXI_PADDED_SIZE_DDR_3>(
        s_idx_buffer_DDR1, table_DDR1, s_embedding_buffer_DDR1);

    load_single_embedding_4_tables
        <ADDR_AXI_PLRAM_0, AXI_PADDED_SIZE_PLRAM_0, ADDR_AXI_PLRAM_4, AXI_PADDED_SIZE_PLRAM_4, 
         ADDR_AXI_PLRAM_8, AXI_PADDED_SIZE_PLRAM_8, ADDR_AXI_PLRAM_12, AXI_PADDED_SIZE_PLRAM_12>(
        s_idx_buffer_PLRAM0, table_PLRAM0, s_embedding_buffer_PLRAM0);
    load_single_embedding_4_tables
        <ADDR_AXI_PLRAM_1, AXI_PADDED_SIZE_PLRAM_1, ADDR_AXI_PLRAM_5, AXI_PADDED_SIZE_PLRAM_5, 
         ADDR_AXI_PLRAM_9, AXI_PADDED_SIZE_PLRAM_9, ADDR_AXI_PLRAM_13, AXI_PADDED_SIZE_PLRAM_13>(
        s_idx_buffer_PLRAM1, table_PLRAM1, s_embedding_buffer_PLRAM1);
    load_single_embedding_4_tables
        <ADDR_AXI_PLRAM_2, AXI_PADDED_SIZE_PLRAM_2, ADDR_AXI_PLRAM_6, AXI_PADDED_SIZE_PLRAM_6, 
         ADDR_AXI_PLRAM_10, AXI_PADDED_SIZE_PLRAM_10, ADDR_AXI_PLRAM_14, AXI_PADDED_SIZE_PLRAM_14>(
        s_idx_buffer_PLRAM2, table_PLRAM2, s_embedding_buffer_PLRAM2);
    load_single_embedding_4_tables
        <ADDR_AXI_PLRAM_3, AXI_PADDED_SIZE_PLRAM_3, ADDR_AXI_PLRAM_7, AXI_PADDED_SIZE_PLRAM_7, 
         ADDR_AXI_PLRAM_11, AXI_PADDED_SIZE_PLRAM_11, ADDR_AXI_PLRAM_15, AXI_PADDED_SIZE_PLRAM_15>(
        s_idx_buffer_PLRAM3, table_PLRAM3, s_embedding_buffer_PLRAM3);
    
    reduction_add_single<VECTOR_SIZE_HBM_BANK_0>(s_embedding_buffer_HBM0, s_result_buffer_HBM0);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_1>(s_embedding_buffer_HBM1, s_result_buffer_HBM1);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_2>(s_embedding_buffer_HBM2, s_result_buffer_HBM2);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_3>(s_embedding_buffer_HBM3, s_result_buffer_HBM3);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_4>(s_embedding_buffer_HBM4, s_result_buffer_HBM4);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_5>(s_embedding_buffer_HBM5, s_result_buffer_HBM5);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_6>(s_embedding_buffer_HBM6, s_result_buffer_HBM6);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_7>(s_embedding_buffer_HBM7, s_result_buffer_HBM7);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_8>(s_embedding_buffer_HBM8, s_result_buffer_HBM8);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_9>(s_embedding_buffer_HBM9, s_result_buffer_HBM9);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_10>(s_embedding_buffer_HBM10, s_result_buffer_HBM10);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_11>(s_embedding_buffer_HBM11, s_result_buffer_HBM11);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_12>(s_embedding_buffer_HBM12, s_result_buffer_HBM12);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_13>(s_embedding_buffer_HBM13, s_result_buffer_HBM13);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_14>(s_embedding_buffer_HBM14, s_result_buffer_HBM14);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_15>(s_embedding_buffer_HBM15, s_result_buffer_HBM15);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_16>(s_embedding_buffer_HBM16, s_result_buffer_HBM16);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_17>(s_embedding_buffer_HBM17, s_result_buffer_HBM17);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_18>(s_embedding_buffer_HBM18, s_result_buffer_HBM18);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_19>(s_embedding_buffer_HBM19, s_result_buffer_HBM19);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_20>(s_embedding_buffer_HBM20, s_result_buffer_HBM20);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_21>(s_embedding_buffer_HBM21, s_result_buffer_HBM21);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_22>(s_embedding_buffer_HBM22, s_result_buffer_HBM22);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_23>(s_embedding_buffer_HBM23, s_result_buffer_HBM23);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_24>(s_embedding_buffer_HBM24, s_result_buffer_HBM24);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_25>(s_embedding_buffer_HBM25, s_result_buffer_HBM25);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_26>(s_embedding_buffer_HBM26, s_result_buffer_HBM26);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_27>(s_embedding_buffer_HBM27, s_result_buffer_HBM27);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_28>(s_embedding_buffer_HBM28, s_result_buffer_HBM28);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_29>(s_embedding_buffer_HBM29, s_result_buffer_HBM29);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_30>(s_embedding_buffer_HBM30, s_result_buffer_HBM30);
    reduction_add_single<VECTOR_SIZE_HBM_BANK_31>(s_embedding_buffer_HBM31, s_result_buffer_HBM31);

    reduction_add_single<VECTOR_SIZE_DDR_BANK_0>(s_embedding_buffer_DDR0, s_result_buffer_DDR0);
    reduction_add_single<VECTOR_SIZE_DDR_BANK_1>(s_embedding_buffer_DDR1, s_result_buffer_DDR1);

    reduction_add_single<VECTOR_SIZE_PLRAM_BANK_0>(s_embedding_buffer_PLRAM0, s_result_buffer_PLRAM0);
    reduction_add_single<VECTOR_SIZE_PLRAM_BANK_1>(s_embedding_buffer_PLRAM1, s_result_buffer_PLRAM1);
    reduction_add_single<VECTOR_SIZE_PLRAM_BANK_2>(s_embedding_buffer_PLRAM2, s_result_buffer_PLRAM2);
    reduction_add_single<VECTOR_SIZE_PLRAM_BANK_3>(s_embedding_buffer_PLRAM3, s_result_buffer_PLRAM3);

    reduction_add_all(
        s_result_buffer_HBM0, s_result_buffer_HBM1, s_result_buffer_HBM2, s_result_buffer_HBM3, 
        s_result_buffer_HBM4, s_result_buffer_HBM5, s_result_buffer_HBM6, s_result_buffer_HBM7, 
        s_result_buffer_HBM8, s_result_buffer_HBM9, s_result_buffer_HBM10, s_result_buffer_HBM11, 
        s_result_buffer_HBM12, s_result_buffer_HBM13, s_result_buffer_HBM14, s_result_buffer_HBM15, 
        s_result_buffer_HBM16, s_result_buffer_HBM17, s_result_buffer_HBM18, s_result_buffer_HBM19, 
        s_result_buffer_HBM20, s_result_buffer_HBM21, s_result_buffer_HBM22, s_result_buffer_HBM23, 
        s_result_buffer_HBM24, s_result_buffer_HBM25, s_result_buffer_HBM26, s_result_buffer_HBM27, 
        s_result_buffer_HBM28, s_result_buffer_HBM29, s_result_buffer_HBM30, s_result_buffer_HBM31, 
        s_result_buffer_DDR0, s_result_buffer_DDR1, 
        s_result_buffer_PLRAM0, s_result_buffer_PLRAM1, s_result_buffer_PLRAM2, s_result_buffer_PLRAM3, 
        s_vout_buffer);
        
    write_results(s_vout_buffer, out); 
}

template<
    const long START_ADDR_0, const long PADDED_SIZE_0, const long  DATA_SIZE_0, const long TABLE_SIZE_0, const long BIAS_0,
    const long START_ADDR_1, const long PADDED_SIZE_1, const long  DATA_SIZE_1, const long TABLE_SIZE_1, const long BIAS_1,
    const long START_ADDR_2, const long PADDED_SIZE_2, const long  DATA_SIZE_2, const long TABLE_SIZE_2, const long BIAS_2,
    const long START_ADDR_3, const long PADDED_SIZE_3, const long  DATA_SIZE_3, const long TABLE_SIZE_3, const long BIAS_3>
void init_PLRAM_4_tables(
    ap_int<AXI_WIDTH_PLRAM>* table_PLRAM) {
    
    // NOTE! must use ap_int<32> here
    for (int i = 0 ; i < TABLE_SIZE_0; i++) {
        for (int j = 0; j < DATA_SIZE_0; j++) {
            table_PLRAM[START_ADDR_0 + i * PADDED_SIZE_0 + j] = i + BIAS_0;
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_1; i++) {
        for (int j = 0; j < DATA_SIZE_1; j++) {
            table_PLRAM[START_ADDR_1 + i * PADDED_SIZE_1 + j] = i + BIAS_1;
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_2; i++) {
        for (int j = 0; j < DATA_SIZE_2; j++) {
            table_PLRAM[START_ADDR_2 + i * PADDED_SIZE_2 + j] = i + BIAS_2;
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_3; i++) {
        for (int j = 0; j < DATA_SIZE_3; j++) {
            table_PLRAM[START_ADDR_3 + i * PADDED_SIZE_3 + j] = i + BIAS_3;
        }
    }
}

void load_access_idx(
    // const int access_idx_local[BATCH_SIZE * BATCH_NUM], 
    hls::stream<int>& s_idx_buffer_HBM0, hls::stream<int>& s_idx_buffer_HBM1, 
    hls::stream<int>& s_idx_buffer_HBM2, hls::stream<int>& s_idx_buffer_HBM3, 
    hls::stream<int>& s_idx_buffer_HBM4, hls::stream<int>& s_idx_buffer_HBM5, 
    hls::stream<int>& s_idx_buffer_HBM6, hls::stream<int>& s_idx_buffer_HBM7, 
    hls::stream<int>& s_idx_buffer_HBM8, hls::stream<int>& s_idx_buffer_HBM9, 
    hls::stream<int>& s_idx_buffer_HBM10, hls::stream<int>& s_idx_buffer_HBM11, 
    hls::stream<int>& s_idx_buffer_HBM12, hls::stream<int>& s_idx_buffer_HBM13, 
    hls::stream<int>& s_idx_buffer_HBM14, hls::stream<int>& s_idx_buffer_HBM15, 
    hls::stream<int>& s_idx_buffer_HBM16, hls::stream<int>& s_idx_buffer_HBM17, 
    hls::stream<int>& s_idx_buffer_HBM18, hls::stream<int>& s_idx_buffer_HBM19, 
    hls::stream<int>& s_idx_buffer_HBM20, hls::stream<int>& s_idx_buffer_HBM21, 
    hls::stream<int>& s_idx_buffer_HBM22, hls::stream<int>& s_idx_buffer_HBM23, 
    hls::stream<int>& s_idx_buffer_HBM24, hls::stream<int>& s_idx_buffer_HBM25, 
    hls::stream<int>& s_idx_buffer_HBM26, hls::stream<int>& s_idx_buffer_HBM27, 
    hls::stream<int>& s_idx_buffer_HBM28, hls::stream<int>& s_idx_buffer_HBM29, 
    hls::stream<int>& s_idx_buffer_HBM30, hls::stream<int>& s_idx_buffer_HBM31, 
    hls::stream<int>& s_idx_buffer_DDR0, hls::stream<int>& s_idx_buffer_DDR1,
    hls::stream<int>& s_idx_buffer_PLRAM0, hls::stream<int>& s_idx_buffer_PLRAM1, 
    hls::stream<int>& s_idx_buffer_PLRAM2, hls::stream<int>& s_idx_buffer_PLRAM3) { 

    int idx_HBM0, idx_HBM1, idx_HBM2, idx_HBM3, 
        idx_HBM4, idx_HBM5, idx_HBM6, idx_HBM7, 
        idx_HBM8, idx_HBM9, idx_HBM10, idx_HBM11, 
        idx_HBM12, idx_HBM13, idx_HBM14, idx_HBM15, 
        idx_HBM16, idx_HBM17, idx_HBM18, idx_HBM19, 
        idx_HBM20, idx_HBM21, idx_HBM22, idx_HBM23, 
        idx_HBM24, idx_HBM25, idx_HBM26, idx_HBM27, 
        idx_HBM28, idx_HBM29, idx_HBM30, idx_HBM31;
    int idx_PLRAM0, idx_PLRAM1, idx_PLRAM2, idx_PLRAM3;
    int idx_DDR0, idx_DDR1;

    int idx_random[] = {3, 99, 38, 72, 29, 57, 1, 72, 36, 76, 35, 50, 37, 57, 
        13, 66, 26, 70, 41, 93, 48, 82, 44, 78, 25, 52, 3, 92, 36, 56, 46, 88};

    for (int i = 0; i < BATCH_NUM; i++) {
        // #pragma HLS LOOP_TRIPCOUNT min=trip_count_item_num max=trip_count_item_num
        for (int j = 0; j < BATCH_SIZE; j++) {
            #pragma HLS pipeline II=1

            int idx = idx_random[j];
            
            idx_HBM0 = idx;
            idx_HBM1 = idx;
            idx_HBM2 = idx;
            idx_HBM3 = idx;
            idx_HBM4 = idx;
            idx_HBM5 = idx;
            idx_HBM6 = idx;
            idx_HBM7 = idx;
            idx_HBM8 = idx;
            idx_HBM9 = idx;
            idx_HBM10 = idx;
            idx_HBM11 = idx;
            idx_HBM12 = idx;
            idx_HBM13 = idx;
            idx_HBM14 = idx;
            idx_HBM15 = idx;
            idx_HBM16 = idx;
            idx_HBM17 = idx;
            idx_HBM18 = idx;
            idx_HBM19 = idx;
            idx_HBM20 = idx;
            idx_HBM21 = idx;
            idx_HBM22 = idx;
            idx_HBM23 = idx;
            idx_HBM24 = idx;
            idx_HBM25 = idx;
            idx_HBM26 = idx;
            idx_HBM27 = idx;
            idx_HBM28 = idx;
            idx_HBM29 = idx;
            idx_HBM30 = idx;
            idx_HBM31 = idx;

            idx_DDR0 = idx;
            idx_DDR1 = idx;
            
            idx_PLRAM0 = idx;
            idx_PLRAM1 = idx;
            idx_PLRAM2 = idx;
            idx_PLRAM3 = idx;

            s_idx_buffer_HBM0.write(idx_HBM0);
            s_idx_buffer_HBM1.write(idx_HBM1);
            s_idx_buffer_HBM2.write(idx_HBM2);
            s_idx_buffer_HBM3.write(idx_HBM3);
            s_idx_buffer_HBM4.write(idx_HBM4);
            s_idx_buffer_HBM5.write(idx_HBM5);
            s_idx_buffer_HBM6.write(idx_HBM6);
            s_idx_buffer_HBM7.write(idx_HBM7);
            s_idx_buffer_HBM8.write(idx_HBM8);
            s_idx_buffer_HBM9.write(idx_HBM9);
            s_idx_buffer_HBM10.write(idx_HBM10);
            s_idx_buffer_HBM11.write(idx_HBM11);
            s_idx_buffer_HBM12.write(idx_HBM12);
            s_idx_buffer_HBM13.write(idx_HBM13);
            s_idx_buffer_HBM14.write(idx_HBM14);
            s_idx_buffer_HBM15.write(idx_HBM15);
            s_idx_buffer_HBM16.write(idx_HBM16);
            s_idx_buffer_HBM17.write(idx_HBM17);
            s_idx_buffer_HBM18.write(idx_HBM18);
            s_idx_buffer_HBM19.write(idx_HBM19);
            s_idx_buffer_HBM20.write(idx_HBM20);
            s_idx_buffer_HBM21.write(idx_HBM21);
            s_idx_buffer_HBM22.write(idx_HBM22);
            s_idx_buffer_HBM23.write(idx_HBM23);
            s_idx_buffer_HBM24.write(idx_HBM24);
            s_idx_buffer_HBM25.write(idx_HBM25);
            s_idx_buffer_HBM26.write(idx_HBM26);
            s_idx_buffer_HBM27.write(idx_HBM27);
            s_idx_buffer_HBM28.write(idx_HBM28);
            s_idx_buffer_HBM29.write(idx_HBM29);
            s_idx_buffer_HBM30.write(idx_HBM30);
            s_idx_buffer_HBM31.write(idx_HBM31);

            s_idx_buffer_DDR0.write(idx_DDR0);
            s_idx_buffer_DDR1.write(idx_DDR1);

            s_idx_buffer_PLRAM0.write(idx_PLRAM0);
            s_idx_buffer_PLRAM1.write(idx_PLRAM1);
            s_idx_buffer_PLRAM2.write(idx_PLRAM2);
            s_idx_buffer_PLRAM3.write(idx_PLRAM3);
        }
    }
}

template<
    const long START_ADDR_0, const long AXI_PADDED_SIZE_0, 
    const long START_ADDR_1, const long AXI_PADDED_SIZE_1>
void load_single_embedding_2_tables(
    hls::stream<int>& s_idx_buffer, const t_hbm* table_RAM, 
    hls::stream<t_hbm>& s_embedding_buffer) {
#pragma HLS INLINE off

    // 8 < data size <= 16, load 2 times
    for (int i = 0; i < BATCH_NUM * BATCH_SIZE; i++) {
        #pragma HLS LOOP_TRIPCOUNT min=trip_count_item_num max=trip_count_item_num

        long idx = s_idx_buffer.read();

        long base_addr_0 = START_ADDR_0 + idx * AXI_PADDED_SIZE_0;
        for (int j = 0; j < AXI_PADDED_SIZE_0; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_0 + j]);
        }
        long base_addr_1 = START_ADDR_1 + idx * AXI_PADDED_SIZE_1;
        for (int j = 0; j < AXI_PADDED_SIZE_1; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_1 + j]);
        }
    }
}

template<
    const long START_ADDR_0, const long AXI_PADDED_SIZE_0, 
    const long START_ADDR_1, const long AXI_PADDED_SIZE_1, 
    const long START_ADDR_2, const long AXI_PADDED_SIZE_2, 
    const long START_ADDR_3, const long AXI_PADDED_SIZE_3>
void load_single_embedding_4_tables(
    hls::stream<int>& s_idx_buffer, const t_hbm* table_RAM, 
    hls::stream<t_hbm>& s_embedding_buffer) {
#pragma HLS INLINE off

    // 8 < data size <= 16, load 2 times
    for (int i = 0; i < BATCH_NUM * BATCH_SIZE; i++) {
        #pragma HLS LOOP_TRIPCOUNT min=trip_count_item_num max=trip_count_item_num

        long idx = s_idx_buffer.read();

        long base_addr_0 = START_ADDR_0 + idx * AXI_PADDED_SIZE_0;
        for (int j = 0; j < AXI_PADDED_SIZE_0; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_0 + j]);
        }
        long base_addr_1 = START_ADDR_1 + idx * AXI_PADDED_SIZE_1;
        for (int j = 0; j < AXI_PADDED_SIZE_1; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_1 + j]);
        }
        long base_addr_2 = START_ADDR_2 + idx * AXI_PADDED_SIZE_2;
        for (int j = 0; j < AXI_PADDED_SIZE_2; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_2 + j]);
        }
        long base_addr_3 = START_ADDR_3 + idx * AXI_PADDED_SIZE_3;
        for (int j = 0; j < AXI_PADDED_SIZE_3; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_3 + j]);
        }
    }
}

template<const int TOTAL_VECTOR_LENGTH>
void reduction_add_single(
    hls::stream<t_hbm>& s_embedding_buffer, 
    hls::stream<int>& s_result_buffer)  {
#pragma HLS INLINE off

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE; i++) {
        #pragma HLS LOOP_TRIPCOUNT min=trip_count_item_num max=trip_count_item_num

        // load the first and consume the rest
        int result = s_embedding_buffer.read();
        for (int j = 0; j < TOTAL_VECTOR_LENGTH - 1; j++) {
            s_embedding_buffer.read();
        }
        s_result_buffer.write(result);
    }
}

int reduction_axi_HBM(ap_int<AXI_WIDTH_HBM> input) {
    // NOTE! THIS IS BINDED TO A SPECIFIC WIDTH, 256
    int tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
    tmp0 = input.range((0 + 1 - 0) * 32 - 1, (0 - 0) * 32);
    tmp1 = input.range((1 + 1 - 0) * 32 - 1, (1 - 0) * 32);
    tmp2 = input.range((2 + 1 - 0) * 32 - 1, (2 - 0) * 32);
    tmp3 = input.range((3 + 1 - 0) * 32 - 1, (3 - 0) * 32);
    tmp4 = input.range((4 + 1 - 0) * 32 - 1, (4 - 0) * 32);
    tmp5 = input.range((5 + 1 - 0) * 32 - 1, (5 - 0) * 32);
    tmp6 = input.range((6 + 1 - 0) * 32 - 1, (6 - 0) * 32);
    tmp7 = input.range((7 + 1 - 0) * 32 - 1, (7 - 0) * 32);
    int result = tmp0+ tmp1+ tmp2+ tmp3+ tmp4+ tmp5+ tmp6+ tmp7;

    return result;
}
int reduction_axi_DDR(ap_int<AXI_WIDTH_DDR> input) {
    // NOTE! THIS IS BINDED TO A SPECIFIC WIDTH, 512
    int tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, 
        tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15;
    tmp0 = input.range((0 + 1 - 0) * 32 - 1, (0 - 0) * 32);
    tmp1 = input.range((1 + 1 - 0) * 32 - 1, (1 - 0) * 32);
    tmp2 = input.range((2 + 1 - 0) * 32 - 1, (2 - 0) * 32);
    tmp3 = input.range((3 + 1 - 0) * 32 - 1, (3 - 0) * 32);
    tmp4 = input.range((4 + 1 - 0) * 32 - 1, (4 - 0) * 32);
    tmp5 = input.range((5 + 1 - 0) * 32 - 1, (5 - 0) * 32);
    tmp6 = input.range((6 + 1 - 0) * 32 - 1, (6 - 0) * 32);
    tmp7 = input.range((7 + 1 - 0) * 32 - 1, (7 - 0) * 32);
    tmp8 = input.range((8 + 1 - 0) * 32 - 1, (8 - 0) * 32);
    tmp9 = input.range((9 + 1 - 0) * 32 - 1, (9 - 0) * 32);
    tmp10 = input.range((10 + 1 - 0) * 32 - 1, (10 - 0) * 32);
    tmp11 = input.range((11 + 1 - 0) * 32 - 1, (11 - 0) * 32);
    tmp12 = input.range((12 + 1 - 0) * 32 - 1, (12 - 0) * 32);
    tmp13 = input.range((13 + 1 - 0) * 32 - 1, (13 - 0) * 32);
    tmp14 = input.range((14 + 1 - 0) * 32 - 1, (14 - 0) * 32);
    tmp15 = input.range((15 + 1 - 0) * 32 - 1, (15 - 0) * 32); 
    int result = tmp0+ tmp1+ tmp2+ tmp3+ tmp4+ tmp5+ tmp6+ tmp7+ 
        tmp8+ tmp9+ tmp10+ tmp11+ tmp12+ tmp13+ tmp14+ tmp15;

    return result;
}

int reduction_axi_PLRAM(ap_int<AXI_WIDTH_PLRAM> input) {
    // NOTE! THIS IS BINDED TO A SPECIFIC WIDTH, 256
    int tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
    tmp0 = input.range((0 + 1 - 0) * 32 - 1, (0 - 0) * 32);
    tmp1 = input.range((1 + 1 - 0) * 32 - 1, (1 - 0) * 32);
    tmp2 = input.range((2 + 1 - 0) * 32 - 1, (2 - 0) * 32);
    tmp3 = input.range((3 + 1 - 0) * 32 - 1, (3 - 0) * 32);
    tmp4 = input.range((4 + 1 - 0) * 32 - 1, (4 - 0) * 32);
    tmp5 = input.range((5 + 1 - 0) * 32 - 1, (5 - 0) * 32);
    tmp6 = input.range((6 + 1 - 0) * 32 - 1, (6 - 0) * 32);
    tmp7 = input.range((7 + 1 - 0) * 32 - 1, (7 - 0) * 32);
    int result = tmp0+ tmp1+ tmp2+ tmp3+ tmp4+ tmp5+ tmp6+ tmp7;

    return result;
}

int return_first_HBM(ap_int<AXI_WIDTH_HBM> input) {
    // return the last value
    int result = input.range(31, 0);

    return result;
}

int return_first_DDR(ap_int<AXI_WIDTH_DDR> input) {
    // return the last value
    int result = input.range(31, 0);

    return result;
}

int return_first_PLRAM(ap_int<AXI_WIDTH_PLRAM> input) {
    // return the last value
    int result = input.range(31, 0);

    return result;
}

void reduction_add_all(
    hls::stream<int>& s_result_buffer_HBM0, hls::stream<int>& s_result_buffer_HBM1, 
    hls::stream<int>& s_result_buffer_HBM2, hls::stream<int>& s_result_buffer_HBM3, 
    hls::stream<int>& s_result_buffer_HBM4, hls::stream<int>& s_result_buffer_HBM5, 
    hls::stream<int>& s_result_buffer_HBM6, hls::stream<int>& s_result_buffer_HBM7, 
    hls::stream<int>& s_result_buffer_HBM8, hls::stream<int>& s_result_buffer_HBM9, 
    hls::stream<int>& s_result_buffer_HBM10, hls::stream<int>& s_result_buffer_HBM11, 
    hls::stream<int>& s_result_buffer_HBM12, hls::stream<int>& s_result_buffer_HBM13, 
    hls::stream<int>& s_result_buffer_HBM14, hls::stream<int>& s_result_buffer_HBM15, 
    hls::stream<int>& s_result_buffer_HBM16, hls::stream<int>& s_result_buffer_HBM17, 
    hls::stream<int>& s_result_buffer_HBM18, hls::stream<int>& s_result_buffer_HBM19, 
    hls::stream<int>& s_result_buffer_HBM20, hls::stream<int>& s_result_buffer_HBM21, 
    hls::stream<int>& s_result_buffer_HBM22, hls::stream<int>& s_result_buffer_HBM23, 
    hls::stream<int>& s_result_buffer_HBM24, hls::stream<int>& s_result_buffer_HBM25, 
    hls::stream<int>& s_result_buffer_HBM26, hls::stream<int>& s_result_buffer_HBM27, 
    hls::stream<int>& s_result_buffer_HBM28, hls::stream<int>& s_result_buffer_HBM29, 
    hls::stream<int>& s_result_buffer_HBM30, hls::stream<int>& s_result_buffer_HBM31, 
    hls::stream<int>& s_result_buffer_DDR0, hls::stream<int>& s_result_buffer_DDR1, 
    hls::stream<int>& s_result_buffer_PLRAM0, hls::stream<int>& s_result_buffer_PLRAM1, 
    hls::stream<int>& s_result_buffer_PLRAM2, hls::stream<int>& s_result_buffer_PLRAM3, 
    hls::stream<int>& s_vout_buffer) {
        
    for (int i = 0; i < BATCH_NUM * BATCH_SIZE; i++) {
        #pragma HLS LOOP_TRIPCOUNT min=trip_count_item_num max=trip_count_item_num
        #pragma HLS pipeline II=1
        
        // int tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9;

        // tmp0 = s_result_buffer_HBM0.read()+ s_result_buffer_HBM1.read()+ s_result_buffer_HBM2.read()+ s_result_buffer_HBM3.read(); 
        // tmp1 = s_result_buffer_HBM4.read()+ s_result_buffer_HBM5.read()+ s_result_buffer_HBM6.read()+ s_result_buffer_HBM7.read(); 
        // tmp2 = s_result_buffer_HBM8.read()+ s_result_buffer_HBM9.read()+ s_result_buffer_HBM10.read()+ s_result_buffer_HBM11.read(); 
        // tmp3 = s_result_buffer_HBM12.read()+ s_result_buffer_HBM13.read()+ s_result_buffer_HBM14.read()+ s_result_buffer_HBM15.read(); 
        // tmp4 = s_result_buffer_HBM16.read()+ s_result_buffer_HBM17.read()+ s_result_buffer_HBM18.read()+ s_result_buffer_HBM19.read(); 
        // tmp5 = s_result_buffer_HBM20.read()+ s_result_buffer_HBM21.read()+ s_result_buffer_HBM22.read()+ s_result_buffer_HBM23.read(); 
        // tmp6 = s_result_buffer_HBM24.read()+ s_result_buffer_HBM25.read()+ s_result_buffer_HBM26.read()+ s_result_buffer_HBM27.read(); 
        // tmp7 = s_result_buffer_HBM28.read()+ s_result_buffer_HBM29.read()+ s_result_buffer_HBM30.read()+ s_result_buffer_HBM31.read(); 

        // tmp8 = s_result_buffer_DDR0.read() + s_result_buffer_DDR1.read(); 

        // tmp9 = /*s_result_buffer_PLRAM0.read()+ s_result_buffer_PLRAM1.read()+ */s_result_buffer_PLRAM2.read()+ s_result_buffer_PLRAM3.read(); 

        // int result = tmp0 + tmp1 + tmp2 + tmp3 + tmp4 + tmp5 + tmp6 + tmp7 + tmp8 + tmp9;

        s_result_buffer_HBM0.read();
        s_result_buffer_HBM1.read();
        s_result_buffer_HBM2.read();
        s_result_buffer_HBM3.read();
        s_result_buffer_HBM4.read();
        s_result_buffer_HBM5.read();
        s_result_buffer_HBM6.read();
        s_result_buffer_HBM7.read();
        s_result_buffer_HBM8.read();
        s_result_buffer_HBM9.read();
        s_result_buffer_HBM10.read();
        s_result_buffer_HBM11.read();
        s_result_buffer_HBM12.read();
        s_result_buffer_HBM13.read();
        s_result_buffer_HBM14.read();
        s_result_buffer_HBM15.read();
        s_result_buffer_HBM16.read();
        s_result_buffer_HBM17.read();
        s_result_buffer_HBM18.read();
        s_result_buffer_HBM19.read();
        s_result_buffer_HBM20.read();
        s_result_buffer_HBM21.read();
        s_result_buffer_HBM22.read();
        s_result_buffer_HBM23.read();
        s_result_buffer_HBM24.read();
        s_result_buffer_HBM25.read();
        s_result_buffer_HBM26.read();
        s_result_buffer_HBM27.read();
        s_result_buffer_HBM28.read();
        s_result_buffer_HBM29.read();
        s_result_buffer_HBM30.read();

        s_result_buffer_PLRAM0.read();
        s_result_buffer_PLRAM1.read();
        s_result_buffer_PLRAM2.read();
        s_result_buffer_DDR0.read();

        int result = s_result_buffer_HBM31.read() + s_result_buffer_PLRAM3.read() + s_result_buffer_DDR1.read();

        s_vout_buffer.write(result);
    }
 }

void write_results(
    hls::stream<int>& s_vout_buffer, int out_RAM[BATCH_SIZE]) {

    int out_local[BATCH_SIZE];

    for (int i = 0 ; i < BATCH_NUM; i++){
        for (int j = 0; j < BATCH_SIZE; j++) {
            out_local[j] = s_vout_buffer.read();
        }
    }
    for (int j = 0; j < BATCH_SIZE; j++) {
        out_RAM[j] = out_local[j];
    }
} 
