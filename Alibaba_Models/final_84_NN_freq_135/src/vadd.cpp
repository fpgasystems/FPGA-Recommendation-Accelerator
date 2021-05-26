#include "vadd.hpp"

void vadd(  
    const t_axi* table_HBM0, const t_axi* table_HBM1, 
    const t_axi* table_HBM2, const t_axi* table_HBM3, 
    const t_axi* table_HBM4, const t_axi* table_HBM5, 
    const t_axi* table_HBM6, const t_axi* table_HBM7, 
    const t_axi* table_HBM8, const t_axi* table_HBM9, 
    const t_axi* table_HBM10, const t_axi* table_HBM11, 
    const t_axi* table_HBM12, const t_axi* table_HBM13, 
    const t_axi* table_HBM14, const t_axi* table_HBM15, 
    const t_axi* table_HBM16, const t_axi* table_HBM17, 
    const t_axi* table_HBM18, const t_axi* table_HBM19, 
    const t_axi* table_HBM20, const t_axi* table_HBM21, 
    const t_axi* table_HBM22, const t_axi* table_HBM23, 
    const t_axi* table_HBM24, const t_axi* table_HBM25, 
    const t_axi* table_HBM26, const t_axi* table_HBM27, 
    const t_axi* table_HBM28, const t_axi* table_HBM29, 
    const t_axi* table_HBM30, const t_axi* table_HBM31, 
    const t_axi* table_DDR0, const t_axi* table_DDR1,
    D_TYPE* out_PLRAM
    )
{
    
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

// PLRAM
#pragma HLS INTERFACE m_axi port=out_PLRAM offset=slave bundle=gmem34

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

#pragma HLS INTERFACE s_axilite port=out_PLRAM bundle=control

#pragma HLS INTERFACE s_axilite port=return bundle=control
    
#pragma HLS dataflow

    hls::stream<t_axi> s_embedding_buffer_HBM0;
    hls::stream<t_axi> s_embedding_buffer_HBM1;
    hls::stream<t_axi> s_embedding_buffer_HBM2;
    hls::stream<t_axi> s_embedding_buffer_HBM3;
    hls::stream<t_axi> s_embedding_buffer_HBM4;
    hls::stream<t_axi> s_embedding_buffer_HBM5;
    hls::stream<t_axi> s_embedding_buffer_HBM6;
    hls::stream<t_axi> s_embedding_buffer_HBM7;
    hls::stream<t_axi> s_embedding_buffer_HBM8;
    hls::stream<t_axi> s_embedding_buffer_HBM9;
    hls::stream<t_axi> s_embedding_buffer_HBM10;
    hls::stream<t_axi> s_embedding_buffer_HBM11;
    hls::stream<t_axi> s_embedding_buffer_HBM12;
    hls::stream<t_axi> s_embedding_buffer_HBM13;
    hls::stream<t_axi> s_embedding_buffer_HBM14;
    hls::stream<t_axi> s_embedding_buffer_HBM15;
    hls::stream<t_axi> s_embedding_buffer_HBM16;
    hls::stream<t_axi> s_embedding_buffer_HBM17;
    hls::stream<t_axi> s_embedding_buffer_HBM18;
    hls::stream<t_axi> s_embedding_buffer_HBM19;
    hls::stream<t_axi> s_embedding_buffer_HBM20;
    hls::stream<t_axi> s_embedding_buffer_HBM21;
    hls::stream<t_axi> s_embedding_buffer_HBM22;
    hls::stream<t_axi> s_embedding_buffer_HBM23;
    hls::stream<t_axi> s_embedding_buffer_HBM24;
    hls::stream<t_axi> s_embedding_buffer_HBM25;
    hls::stream<t_axi> s_embedding_buffer_HBM26;
    hls::stream<t_axi> s_embedding_buffer_HBM27;
    hls::stream<t_axi> s_embedding_buffer_HBM28;
    hls::stream<t_axi> s_embedding_buffer_HBM29;
    hls::stream<t_axi> s_embedding_buffer_HBM30;
    hls::stream<t_axi> s_embedding_buffer_HBM31;
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
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM0;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM1;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM2;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM3;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM4;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM5;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM6;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM7;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM8;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM9;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM10;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM11;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM12;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM13;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM14;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM15;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM16;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM17;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM18;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM19;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM20;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM21;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM22;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM23;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM24;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM25;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM26;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM27;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM28;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM29;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM30;
    hls::stream<W_TYPE> s_embedding_buffer_wide_HBM31;

    hls::stream<t_axi> s_embedding_buffer_PLRAM0;
    hls::stream<t_axi> s_embedding_buffer_PLRAM1;
    hls::stream<t_axi> s_embedding_buffer_PLRAM2;
    hls::stream<t_axi> s_embedding_buffer_PLRAM3;
#pragma HLS stream variable=s_embedding_buffer_PLRAM0 depth=depth_s_embedding_buffer_PLRAM0
#pragma HLS stream variable=s_embedding_buffer_PLRAM1 depth=depth_s_embedding_buffer_PLRAM1
#pragma HLS stream variable=s_embedding_buffer_PLRAM2 depth=depth_s_embedding_buffer_PLRAM2
#pragma HLS stream variable=s_embedding_buffer_PLRAM3 depth=depth_s_embedding_buffer_PLRAM3
// for int to wide, no need for deep FIFO, use Flip-Flops instead
    hls::stream<W_TYPE> s_embedding_buffer_wide_PLRAM0;
    hls::stream<W_TYPE> s_embedding_buffer_wide_PLRAM1;
    hls::stream<W_TYPE> s_embedding_buffer_wide_PLRAM2;
    hls::stream<W_TYPE> s_embedding_buffer_wide_PLRAM3;

    hls::stream<t_axi> s_embedding_buffer_DDR0;
    hls::stream<t_axi> s_embedding_buffer_DDR1;
#pragma HLS stream variable=s_embedding_buffer_DDR0 depth=depth_s_embedding_buffer_DDR0
#pragma HLS stream variable=s_embedding_buffer_DDR1 depth=depth_s_embedding_buffer_DDR1
// for int to wide, no need for deep FIFO, use Flip-Flops instead
    hls::stream<W_TYPE> s_embedding_buffer_wide_DDR0;
    hls::stream<W_TYPE> s_embedding_buffer_wide_DDR1;

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

    hls::stream<W_TYPE> s_feature_in;
#pragma HLS stream variable=s_feature_in depth=256

    hls::stream<W_TYPE> s_feature1_PE0;
    hls::stream<D_TYPE> s_result1_PE0;
#pragma HLS stream variable=s_feature1_PE0 depth=2
#pragma HLS stream variable=s_result1_PE0 depth=2
    hls::stream<W_TYPE> s_feature1_PE1;
    hls::stream<D_TYPE> s_result1_PE1;
#pragma HLS stream variable=s_feature1_PE1 depth=2
#pragma HLS stream variable=s_result1_PE1 depth=2
    hls::stream<W_TYPE> s_feature1_PE2;
    hls::stream<D_TYPE> s_result1_PE2;
#pragma HLS stream variable=s_feature1_PE2 depth=2
#pragma HLS stream variable=s_result1_PE2 depth=2
    hls::stream<W_TYPE> s_feature1_PE3;
    hls::stream<D_TYPE> s_result1_PE3;
#pragma HLS stream variable=s_feature1_PE3 depth=2
#pragma HLS stream variable=s_result1_PE3 depth=2
    hls::stream<W_TYPE> s_feature1_PE4;
    hls::stream<D_TYPE> s_result1_PE4;
#pragma HLS stream variable=s_feature1_PE4 depth=2
#pragma HLS stream variable=s_result1_PE4 depth=2
    hls::stream<W_TYPE> s_feature1_PE5;
    hls::stream<D_TYPE> s_result1_PE5;
#pragma HLS stream variable=s_feature1_PE5 depth=2
#pragma HLS stream variable=s_result1_PE5 depth=2
    hls::stream<W_TYPE> s_feature1_PE6;
    hls::stream<D_TYPE> s_result1_PE6;
#pragma HLS stream variable=s_feature1_PE6 depth=2
#pragma HLS stream variable=s_result1_PE6 depth=2
    hls::stream<W_TYPE> s_feature1_PE7;
    hls::stream<D_TYPE> s_result1_PE7;
#pragma HLS stream variable=s_feature1_PE7 depth=2
#pragma HLS stream variable=s_result1_PE7 depth=2
    hls::stream<W_TYPE> s_feature1_PE8;
    hls::stream<D_TYPE> s_result1_PE8;
#pragma HLS stream variable=s_feature1_PE8 depth=2
#pragma HLS stream variable=s_result1_PE8 depth=2
    hls::stream<W_TYPE> s_feature1_PE9;
    hls::stream<D_TYPE> s_result1_PE9;
#pragma HLS stream variable=s_feature1_PE9 depth=2
#pragma HLS stream variable=s_result1_PE9 depth=2
    hls::stream<W_TYPE> s_feature1_PE10;
    hls::stream<D_TYPE> s_result1_PE10;
#pragma HLS stream variable=s_feature1_PE10 depth=2
#pragma HLS stream variable=s_result1_PE10 depth=2
    hls::stream<W_TYPE> s_feature1_PE11;
    hls::stream<D_TYPE> s_result1_PE11;
#pragma HLS stream variable=s_feature1_PE11 depth=2
#pragma HLS stream variable=s_result1_PE11 depth=2
    hls::stream<W_TYPE> s_feature1_PE12;
    hls::stream<D_TYPE> s_result1_PE12;
#pragma HLS stream variable=s_feature1_PE12 depth=2
#pragma HLS stream variable=s_result1_PE12 depth=2
    hls::stream<W_TYPE> s_feature1_PE13;
    hls::stream<D_TYPE> s_result1_PE13;
#pragma HLS stream variable=s_feature1_PE13 depth=2
#pragma HLS stream variable=s_result1_PE13 depth=2
    hls::stream<W_TYPE> s_feature1_PE14;
    hls::stream<D_TYPE> s_result1_PE14;
#pragma HLS stream variable=s_feature1_PE14 depth=2
#pragma HLS stream variable=s_result1_PE14 depth=2
    hls::stream<W_TYPE> s_feature1_PE15;
    hls::stream<D_TYPE> s_result1_PE15;
#pragma HLS stream variable=s_feature1_PE15 depth=2
#pragma HLS stream variable=s_result1_PE15 depth=2
    hls::stream<W_TYPE> s_feature1_PE16;
    hls::stream<D_TYPE> s_result1_PE16;
#pragma HLS stream variable=s_feature1_PE16 depth=2
#pragma HLS stream variable=s_result1_PE16 depth=2
    hls::stream<W_TYPE> s_feature1_PE17;
    hls::stream<D_TYPE> s_result1_PE17;
#pragma HLS stream variable=s_feature1_PE17 depth=2
#pragma HLS stream variable=s_result1_PE17 depth=2
    hls::stream<W_TYPE> s_feature1_PE18;
    hls::stream<D_TYPE> s_result1_PE18;
#pragma HLS stream variable=s_feature1_PE18 depth=2
#pragma HLS stream variable=s_result1_PE18 depth=2
    hls::stream<W_TYPE> s_feature1_PE19;
    hls::stream<D_TYPE> s_result1_PE19;
#pragma HLS stream variable=s_feature1_PE19 depth=2
#pragma HLS stream variable=s_result1_PE19 depth=2
    hls::stream<W_TYPE> s_feature1_PE20;
    hls::stream<D_TYPE> s_result1_PE20;
#pragma HLS stream variable=s_feature1_PE20 depth=2
#pragma HLS stream variable=s_result1_PE20 depth=2
    hls::stream<W_TYPE> s_feature1_PE21;
    hls::stream<D_TYPE> s_result1_PE21;
#pragma HLS stream variable=s_feature1_PE21 depth=2
#pragma HLS stream variable=s_result1_PE21 depth=2
    hls::stream<W_TYPE> s_feature1_PE22;
    hls::stream<D_TYPE> s_result1_PE22;
#pragma HLS stream variable=s_feature1_PE22 depth=2
#pragma HLS stream variable=s_result1_PE22 depth=2
    hls::stream<W_TYPE> s_feature1_PE23;
    hls::stream<D_TYPE> s_result1_PE23;
#pragma HLS stream variable=s_feature1_PE23 depth=2
#pragma HLS stream variable=s_result1_PE23 depth=2
    hls::stream<W_TYPE> s_feature1_PE24;
    hls::stream<D_TYPE> s_result1_PE24;
#pragma HLS stream variable=s_feature1_PE24 depth=2
#pragma HLS stream variable=s_result1_PE24 depth=2
    hls::stream<W_TYPE> s_feature1_PE25;
    hls::stream<D_TYPE> s_result1_PE25;
#pragma HLS stream variable=s_feature1_PE25 depth=2
#pragma HLS stream variable=s_result1_PE25 depth=2
    hls::stream<W_TYPE> s_feature1_PE26;
    hls::stream<D_TYPE> s_result1_PE26;
#pragma HLS stream variable=s_feature1_PE26 depth=2
#pragma HLS stream variable=s_result1_PE26 depth=2
    hls::stream<W_TYPE> s_feature1_PE27;
    hls::stream<D_TYPE> s_result1_PE27;
#pragma HLS stream variable=s_feature1_PE27 depth=2
#pragma HLS stream variable=s_result1_PE27 depth=2
    hls::stream<W_TYPE> s_feature1_PE28;
    hls::stream<D_TYPE> s_result1_PE28;
#pragma HLS stream variable=s_feature1_PE28 depth=2
#pragma HLS stream variable=s_result1_PE28 depth=2
    hls::stream<W_TYPE> s_feature1_PE29;
    hls::stream<D_TYPE> s_result1_PE29;
#pragma HLS stream variable=s_feature1_PE29 depth=2
#pragma HLS stream variable=s_result1_PE29 depth=2
    hls::stream<W_TYPE> s_feature1_PE30;
    hls::stream<D_TYPE> s_result1_PE30;
#pragma HLS stream variable=s_feature1_PE30 depth=2
#pragma HLS stream variable=s_result1_PE30 depth=2
    hls::stream<W_TYPE> s_feature1_PE31;
    hls::stream<D_TYPE> s_result1_PE31;
#pragma HLS stream variable=s_feature1_PE31 depth=2
#pragma HLS stream variable=s_result1_PE31 depth=2
    hls::stream<W_TYPE> s_feature1_PE32;
    hls::stream<D_TYPE> s_result1_PE32;
#pragma HLS stream variable=s_feature1_PE32 depth=2
#pragma HLS stream variable=s_result1_PE32 depth=2
    hls::stream<W_TYPE> s_feature1_PE33;
    hls::stream<D_TYPE> s_result1_PE33;
#pragma HLS stream variable=s_feature1_PE33 depth=2
#pragma HLS stream variable=s_result1_PE33 depth=2
    hls::stream<W_TYPE> s_feature1_PE34;
    hls::stream<D_TYPE> s_result1_PE34;
#pragma HLS stream variable=s_feature1_PE34 depth=2
#pragma HLS stream variable=s_result1_PE34 depth=2
    hls::stream<W_TYPE> s_feature1_PE35;
    hls::stream<D_TYPE> s_result1_PE35;
#pragma HLS stream variable=s_feature1_PE35 depth=2
#pragma HLS stream variable=s_result1_PE35 depth=2
    hls::stream<W_TYPE> s_feature1_PE36;
    hls::stream<D_TYPE> s_result1_PE36;
#pragma HLS stream variable=s_feature1_PE36 depth=2
#pragma HLS stream variable=s_result1_PE36 depth=2
    hls::stream<W_TYPE> s_feature1_PE37;
    hls::stream<D_TYPE> s_result1_PE37;
#pragma HLS stream variable=s_feature1_PE37 depth=2
#pragma HLS stream variable=s_result1_PE37 depth=2
    hls::stream<W_TYPE> s_feature1_PE38;
    hls::stream<D_TYPE> s_result1_PE38;
#pragma HLS stream variable=s_feature1_PE38 depth=2
#pragma HLS stream variable=s_result1_PE38 depth=2
    hls::stream<W_TYPE> s_feature1_PE39;
    hls::stream<D_TYPE> s_result1_PE39;
#pragma HLS stream variable=s_feature1_PE39 depth=2
#pragma HLS stream variable=s_result1_PE39 depth=2
    hls::stream<W_TYPE> s_feature1_PE40;
    hls::stream<D_TYPE> s_result1_PE40;
#pragma HLS stream variable=s_feature1_PE40 depth=2
#pragma HLS stream variable=s_result1_PE40 depth=2
    hls::stream<W_TYPE> s_feature1_PE41;
    hls::stream<D_TYPE> s_result1_PE41;
#pragma HLS stream variable=s_feature1_PE41 depth=2
#pragma HLS stream variable=s_result1_PE41 depth=2
    hls::stream<W_TYPE> s_feature1_PE42;
    hls::stream<D_TYPE> s_result1_PE42;
#pragma HLS stream variable=s_feature1_PE42 depth=2
#pragma HLS stream variable=s_result1_PE42 depth=2
    hls::stream<W_TYPE> s_feature1_PE43;
    hls::stream<D_TYPE> s_result1_PE43;
#pragma HLS stream variable=s_feature1_PE43 depth=2
#pragma HLS stream variable=s_result1_PE43 depth=2
    hls::stream<W_TYPE> s_feature1_PE44;
    hls::stream<D_TYPE> s_result1_PE44;
#pragma HLS stream variable=s_feature1_PE44 depth=2
#pragma HLS stream variable=s_result1_PE44 depth=2
    hls::stream<W_TYPE> s_feature1_PE45;
    hls::stream<D_TYPE> s_result1_PE45;
#pragma HLS stream variable=s_feature1_PE45 depth=2
#pragma HLS stream variable=s_result1_PE45 depth=2
    hls::stream<W_TYPE> s_feature1_PE46;
    hls::stream<D_TYPE> s_result1_PE46;
#pragma HLS stream variable=s_feature1_PE46 depth=2
#pragma HLS stream variable=s_result1_PE46 depth=2
    hls::stream<W_TYPE> s_feature1_PE47;
    hls::stream<D_TYPE> s_result1_PE47;
#pragma HLS stream variable=s_feature1_PE47 depth=2
#pragma HLS stream variable=s_result1_PE47 depth=2
    hls::stream<W_TYPE> s_feature1_PE48;
    hls::stream<D_TYPE> s_result1_PE48;
#pragma HLS stream variable=s_feature1_PE48 depth=2
#pragma HLS stream variable=s_result1_PE48 depth=2
    hls::stream<W_TYPE> s_feature1_PE49;
    hls::stream<D_TYPE> s_result1_PE49;
#pragma HLS stream variable=s_feature1_PE49 depth=2
#pragma HLS stream variable=s_result1_PE49 depth=2
    hls::stream<W_TYPE> s_feature1_PE50;
    hls::stream<D_TYPE> s_result1_PE50;
#pragma HLS stream variable=s_feature1_PE50 depth=2
#pragma HLS stream variable=s_result1_PE50 depth=2
    hls::stream<W_TYPE> s_feature1_PE51;
    hls::stream<D_TYPE> s_result1_PE51;
#pragma HLS stream variable=s_feature1_PE51 depth=2
#pragma HLS stream variable=s_result1_PE51 depth=2
    hls::stream<W_TYPE> s_feature1_PE52;
    hls::stream<D_TYPE> s_result1_PE52;
#pragma HLS stream variable=s_feature1_PE52 depth=2
#pragma HLS stream variable=s_result1_PE52 depth=2
    hls::stream<W_TYPE> s_feature1_PE53;
    hls::stream<D_TYPE> s_result1_PE53;
#pragma HLS stream variable=s_feature1_PE53 depth=2
#pragma HLS stream variable=s_result1_PE53 depth=2
    hls::stream<W_TYPE> s_feature1_PE54;
    hls::stream<D_TYPE> s_result1_PE54;
#pragma HLS stream variable=s_feature1_PE54 depth=2
#pragma HLS stream variable=s_result1_PE54 depth=2
    hls::stream<W_TYPE> s_feature1_PE55;
    hls::stream<D_TYPE> s_result1_PE55;
#pragma HLS stream variable=s_feature1_PE55 depth=2
#pragma HLS stream variable=s_result1_PE55 depth=2
    hls::stream<W_TYPE> s_feature1_PE56;
    hls::stream<D_TYPE> s_result1_PE56;
#pragma HLS stream variable=s_feature1_PE56 depth=2
#pragma HLS stream variable=s_result1_PE56 depth=2
    hls::stream<W_TYPE> s_feature1_PE57;
    hls::stream<D_TYPE> s_result1_PE57;
#pragma HLS stream variable=s_feature1_PE57 depth=2
#pragma HLS stream variable=s_result1_PE57 depth=2
    hls::stream<W_TYPE> s_feature1_PE58;
    hls::stream<D_TYPE> s_result1_PE58;
#pragma HLS stream variable=s_feature1_PE58 depth=2
#pragma HLS stream variable=s_result1_PE58 depth=2
    hls::stream<W_TYPE> s_feature1_PE59;
    hls::stream<D_TYPE> s_result1_PE59;
#pragma HLS stream variable=s_feature1_PE59 depth=2
#pragma HLS stream variable=s_result1_PE59 depth=2
    hls::stream<W_TYPE> s_feature1_PE60;
    hls::stream<D_TYPE> s_result1_PE60;
#pragma HLS stream variable=s_feature1_PE60 depth=2
#pragma HLS stream variable=s_result1_PE60 depth=2
    hls::stream<W_TYPE> s_feature1_PE61;
    hls::stream<D_TYPE> s_result1_PE61;
#pragma HLS stream variable=s_feature1_PE61 depth=2
#pragma HLS stream variable=s_result1_PE61 depth=2
    hls::stream<W_TYPE> s_feature1_PE62;
    hls::stream<D_TYPE> s_result1_PE62;
#pragma HLS stream variable=s_feature1_PE62 depth=2
#pragma HLS stream variable=s_result1_PE62 depth=2
    hls::stream<W_TYPE> s_feature1_PE63;
    hls::stream<D_TYPE> s_result1_PE63;
#pragma HLS stream variable=s_feature1_PE63 depth=2
#pragma HLS stream variable=s_result1_PE63 depth=2
    hls::stream<W_TYPE> s_feature1_PE64;
    hls::stream<D_TYPE> s_result1_PE64;
#pragma HLS stream variable=s_feature1_PE64 depth=2
#pragma HLS stream variable=s_result1_PE64 depth=2
    hls::stream<W_TYPE> s_feature1_PE65;
    hls::stream<D_TYPE> s_result1_PE65;
#pragma HLS stream variable=s_feature1_PE65 depth=2
#pragma HLS stream variable=s_result1_PE65 depth=2
    hls::stream<W_TYPE> s_feature1_PE66;
    hls::stream<D_TYPE> s_result1_PE66;
#pragma HLS stream variable=s_feature1_PE66 depth=2
#pragma HLS stream variable=s_result1_PE66 depth=2
    hls::stream<W_TYPE> s_feature1_PE67;
    hls::stream<D_TYPE> s_result1_PE67;
#pragma HLS stream variable=s_feature1_PE67 depth=2
#pragma HLS stream variable=s_result1_PE67 depth=2
    hls::stream<W_TYPE> s_feature1_PE68;
    hls::stream<D_TYPE> s_result1_PE68;
#pragma HLS stream variable=s_feature1_PE68 depth=2
#pragma HLS stream variable=s_result1_PE68 depth=2
    hls::stream<W_TYPE> s_feature1_PE69;
    hls::stream<D_TYPE> s_result1_PE69;
#pragma HLS stream variable=s_feature1_PE69 depth=2
#pragma HLS stream variable=s_result1_PE69 depth=2
    hls::stream<W_TYPE> s_feature1_PE70;
    hls::stream<D_TYPE> s_result1_PE70;
#pragma HLS stream variable=s_feature1_PE70 depth=2
#pragma HLS stream variable=s_result1_PE70 depth=2
    hls::stream<W_TYPE> s_feature1_PE71;
    hls::stream<D_TYPE> s_result1_PE71;
#pragma HLS stream variable=s_feature1_PE71 depth=2
#pragma HLS stream variable=s_result1_PE71 depth=2
    hls::stream<W_TYPE> s_feature1_PE72;
    hls::stream<D_TYPE> s_result1_PE72;
#pragma HLS stream variable=s_feature1_PE72 depth=2
#pragma HLS stream variable=s_result1_PE72 depth=2
    hls::stream<W_TYPE> s_feature1_PE73;
    hls::stream<D_TYPE> s_result1_PE73;
#pragma HLS stream variable=s_feature1_PE73 depth=2
#pragma HLS stream variable=s_result1_PE73 depth=2
    hls::stream<W_TYPE> s_feature1_PE74;
    hls::stream<D_TYPE> s_result1_PE74;
#pragma HLS stream variable=s_feature1_PE74 depth=2
#pragma HLS stream variable=s_result1_PE74 depth=2
    hls::stream<W_TYPE> s_feature1_PE75;
    hls::stream<D_TYPE> s_result1_PE75;
#pragma HLS stream variable=s_feature1_PE75 depth=2
#pragma HLS stream variable=s_result1_PE75 depth=2
    hls::stream<W_TYPE> s_feature1_PE76;
    hls::stream<D_TYPE> s_result1_PE76;
#pragma HLS stream variable=s_feature1_PE76 depth=2
#pragma HLS stream variable=s_result1_PE76 depth=2
    hls::stream<W_TYPE> s_feature1_PE77;
    hls::stream<D_TYPE> s_result1_PE77;
#pragma HLS stream variable=s_feature1_PE77 depth=2
#pragma HLS stream variable=s_result1_PE77 depth=2
    hls::stream<W_TYPE> s_feature1_PE78;
    hls::stream<D_TYPE> s_result1_PE78;
#pragma HLS stream variable=s_feature1_PE78 depth=2
#pragma HLS stream variable=s_result1_PE78 depth=2
    hls::stream<W_TYPE> s_feature1_PE79;
    hls::stream<D_TYPE> s_result1_PE79;
#pragma HLS stream variable=s_feature1_PE79 depth=2
#pragma HLS stream variable=s_result1_PE79 depth=2
    hls::stream<W_TYPE> s_feature1_PE80;
    hls::stream<D_TYPE> s_result1_PE80;
#pragma HLS stream variable=s_feature1_PE80 depth=2
#pragma HLS stream variable=s_result1_PE80 depth=2
    hls::stream<W_TYPE> s_feature1_PE81;
    hls::stream<D_TYPE> s_result1_PE81;
#pragma HLS stream variable=s_feature1_PE81 depth=2
#pragma HLS stream variable=s_result1_PE81 depth=2
    hls::stream<W_TYPE> s_feature1_PE82;
    hls::stream<D_TYPE> s_result1_PE82;
#pragma HLS stream variable=s_feature1_PE82 depth=2
#pragma HLS stream variable=s_result1_PE82 depth=2
    hls::stream<W_TYPE> s_feature1_PE83;
    hls::stream<D_TYPE> s_result1_PE83;
#pragma HLS stream variable=s_feature1_PE83 depth=2
#pragma HLS stream variable=s_result1_PE83 depth=2
    hls::stream<W_TYPE> s_feature1_PE84;
    hls::stream<D_TYPE> s_result1_PE84;
#pragma HLS stream variable=s_feature1_PE84 depth=2
#pragma HLS stream variable=s_result1_PE84 depth=2
    hls::stream<W_TYPE> s_feature1_PE85;
    hls::stream<D_TYPE> s_result1_PE85;
#pragma HLS stream variable=s_feature1_PE85 depth=2
#pragma HLS stream variable=s_result1_PE85 depth=2
    hls::stream<W_TYPE> s_feature1_PE86;
    hls::stream<D_TYPE> s_result1_PE86;
#pragma HLS stream variable=s_feature1_PE86 depth=2
#pragma HLS stream variable=s_result1_PE86 depth=2
    hls::stream<W_TYPE> s_feature1_PE87;
    hls::stream<D_TYPE> s_result1_PE87;
#pragma HLS stream variable=s_feature1_PE87 depth=2
#pragma HLS stream variable=s_result1_PE87 depth=2
    hls::stream<W_TYPE> s_feature1_PE88;
    hls::stream<D_TYPE> s_result1_PE88;
#pragma HLS stream variable=s_feature1_PE88 depth=2
#pragma HLS stream variable=s_result1_PE88 depth=2
    hls::stream<W_TYPE> s_feature1_PE89;
    hls::stream<D_TYPE> s_result1_PE89;
#pragma HLS stream variable=s_feature1_PE89 depth=2
#pragma HLS stream variable=s_result1_PE89 depth=2
    hls::stream<W_TYPE> s_feature1_PE90;
    hls::stream<D_TYPE> s_result1_PE90;
#pragma HLS stream variable=s_feature1_PE90 depth=2
#pragma HLS stream variable=s_result1_PE90 depth=2
    hls::stream<W_TYPE> s_feature1_PE91;
    hls::stream<D_TYPE> s_result1_PE91;
#pragma HLS stream variable=s_feature1_PE91 depth=2
#pragma HLS stream variable=s_result1_PE91 depth=2
    hls::stream<W_TYPE> s_feature1_PE92;
    hls::stream<D_TYPE> s_result1_PE92;
#pragma HLS stream variable=s_feature1_PE92 depth=2
#pragma HLS stream variable=s_result1_PE92 depth=2
    hls::stream<W_TYPE> s_feature1_PE93;
    hls::stream<D_TYPE> s_result1_PE93;
#pragma HLS stream variable=s_feature1_PE93 depth=2
#pragma HLS stream variable=s_result1_PE93 depth=2
    hls::stream<W_TYPE> s_feature1_PE94;
    hls::stream<D_TYPE> s_result1_PE94;
#pragma HLS stream variable=s_feature1_PE94 depth=2
#pragma HLS stream variable=s_result1_PE94 depth=2
    hls::stream<W_TYPE> s_feature1_PE95;
    hls::stream<D_TYPE> s_result1_PE95;
#pragma HLS stream variable=s_feature1_PE95 depth=2
#pragma HLS stream variable=s_result1_PE95 depth=2
    hls::stream<W_TYPE> s_feature1_PE96;
    hls::stream<D_TYPE> s_result1_PE96;
#pragma HLS stream variable=s_feature1_PE96 depth=2
#pragma HLS stream variable=s_result1_PE96 depth=2
    hls::stream<W_TYPE> s_feature1_PE97;
    hls::stream<D_TYPE> s_result1_PE97;
#pragma HLS stream variable=s_feature1_PE97 depth=2
#pragma HLS stream variable=s_result1_PE97 depth=2
    hls::stream<W_TYPE> s_feature1_PE98;
    hls::stream<D_TYPE> s_result1_PE98;
#pragma HLS stream variable=s_feature1_PE98 depth=2
#pragma HLS stream variable=s_result1_PE98 depth=2
    hls::stream<W_TYPE> s_feature1_PE99;
    hls::stream<D_TYPE> s_result1_PE99;
#pragma HLS stream variable=s_feature1_PE99 depth=2
#pragma HLS stream variable=s_result1_PE99 depth=2
    hls::stream<W_TYPE> s_feature1_PE100;
    hls::stream<D_TYPE> s_result1_PE100;
#pragma HLS stream variable=s_feature1_PE100 depth=2
#pragma HLS stream variable=s_result1_PE100 depth=2
    hls::stream<W_TYPE> s_feature1_PE101;
    hls::stream<D_TYPE> s_result1_PE101;
#pragma HLS stream variable=s_feature1_PE101 depth=2
#pragma HLS stream variable=s_result1_PE101 depth=2
    hls::stream<W_TYPE> s_feature1_PE102;
    hls::stream<D_TYPE> s_result1_PE102;
#pragma HLS stream variable=s_feature1_PE102 depth=2
#pragma HLS stream variable=s_result1_PE102 depth=2
    hls::stream<W_TYPE> s_feature1_PE103;
    hls::stream<D_TYPE> s_result1_PE103;
#pragma HLS stream variable=s_feature1_PE103 depth=2
#pragma HLS stream variable=s_result1_PE103 depth=2
    hls::stream<W_TYPE> s_feature1_PE104;
    hls::stream<D_TYPE> s_result1_PE104;
#pragma HLS stream variable=s_feature1_PE104 depth=2
#pragma HLS stream variable=s_result1_PE104 depth=2
    hls::stream<W_TYPE> s_feature1_PE105;
    hls::stream<D_TYPE> s_result1_PE105;
#pragma HLS stream variable=s_feature1_PE105 depth=2
#pragma HLS stream variable=s_result1_PE105 depth=2
    hls::stream<W_TYPE> s_feature1_PE106;
    hls::stream<D_TYPE> s_result1_PE106;
#pragma HLS stream variable=s_feature1_PE106 depth=2
#pragma HLS stream variable=s_result1_PE106 depth=2
    hls::stream<W_TYPE> s_feature1_PE107;
    hls::stream<D_TYPE> s_result1_PE107;
#pragma HLS stream variable=s_feature1_PE107 depth=2
#pragma HLS stream variable=s_result1_PE107 depth=2
    hls::stream<W_TYPE> s_feature1_PE108;
    hls::stream<D_TYPE> s_result1_PE108;
#pragma HLS stream variable=s_feature1_PE108 depth=2
#pragma HLS stream variable=s_result1_PE108 depth=2
    hls::stream<W_TYPE> s_feature1_PE109;
    hls::stream<D_TYPE> s_result1_PE109;
#pragma HLS stream variable=s_feature1_PE109 depth=2
#pragma HLS stream variable=s_result1_PE109 depth=2
    hls::stream<W_TYPE> s_feature1_PE110;
    hls::stream<D_TYPE> s_result1_PE110;
#pragma HLS stream variable=s_feature1_PE110 depth=2
#pragma HLS stream variable=s_result1_PE110 depth=2
    hls::stream<W_TYPE> s_feature1_PE111;
    hls::stream<D_TYPE> s_result1_PE111;
#pragma HLS stream variable=s_feature1_PE111 depth=2
#pragma HLS stream variable=s_result1_PE111 depth=2
    hls::stream<W_TYPE> s_feature1_PE112;
    hls::stream<D_TYPE> s_result1_PE112;
#pragma HLS stream variable=s_feature1_PE112 depth=2
#pragma HLS stream variable=s_result1_PE112 depth=2
    hls::stream<W_TYPE> s_feature1_PE113;
    hls::stream<D_TYPE> s_result1_PE113;
#pragma HLS stream variable=s_feature1_PE113 depth=2
#pragma HLS stream variable=s_result1_PE113 depth=2
    hls::stream<W_TYPE> s_feature1_PE114;
    hls::stream<D_TYPE> s_result1_PE114;
#pragma HLS stream variable=s_feature1_PE114 depth=2
#pragma HLS stream variable=s_result1_PE114 depth=2
    hls::stream<W_TYPE> s_feature1_PE115;
    hls::stream<D_TYPE> s_result1_PE115;
#pragma HLS stream variable=s_feature1_PE115 depth=2
#pragma HLS stream variable=s_result1_PE115 depth=2
    hls::stream<W_TYPE> s_feature1_PE116;
    hls::stream<D_TYPE> s_result1_PE116;
#pragma HLS stream variable=s_feature1_PE116 depth=2
#pragma HLS stream variable=s_result1_PE116 depth=2
    hls::stream<W_TYPE> s_feature1_PE117;
    hls::stream<D_TYPE> s_result1_PE117;
#pragma HLS stream variable=s_feature1_PE117 depth=2
#pragma HLS stream variable=s_result1_PE117 depth=2
    hls::stream<W_TYPE> s_feature1_PE118;
    hls::stream<D_TYPE> s_result1_PE118;
#pragma HLS stream variable=s_feature1_PE118 depth=2
#pragma HLS stream variable=s_result1_PE118 depth=2
    hls::stream<W_TYPE> s_feature1_PE119;
    hls::stream<D_TYPE> s_result1_PE119;
#pragma HLS stream variable=s_feature1_PE119 depth=2
#pragma HLS stream variable=s_result1_PE119 depth=2
    hls::stream<W_TYPE> s_feature1_PE120;
    hls::stream<D_TYPE> s_result1_PE120;
#pragma HLS stream variable=s_feature1_PE120 depth=2
#pragma HLS stream variable=s_result1_PE120 depth=2
    hls::stream<W_TYPE> s_feature1_PE121;
    hls::stream<D_TYPE> s_result1_PE121;
#pragma HLS stream variable=s_feature1_PE121 depth=2
#pragma HLS stream variable=s_result1_PE121 depth=2
    hls::stream<W_TYPE> s_feature1_PE122;
    hls::stream<D_TYPE> s_result1_PE122;
#pragma HLS stream variable=s_feature1_PE122 depth=2
#pragma HLS stream variable=s_result1_PE122 depth=2
    hls::stream<W_TYPE> s_feature1_PE123;
    hls::stream<D_TYPE> s_result1_PE123;
#pragma HLS stream variable=s_feature1_PE123 depth=2
#pragma HLS stream variable=s_result1_PE123 depth=2
    hls::stream<W_TYPE> s_feature1_PE124;
    hls::stream<D_TYPE> s_result1_PE124;
#pragma HLS stream variable=s_feature1_PE124 depth=2
#pragma HLS stream variable=s_result1_PE124 depth=2
    hls::stream<W_TYPE> s_feature1_PE125;
    hls::stream<D_TYPE> s_result1_PE125;
#pragma HLS stream variable=s_feature1_PE125 depth=2
#pragma HLS stream variable=s_result1_PE125 depth=2
    hls::stream<W_TYPE> s_feature1_PE126;
    hls::stream<D_TYPE> s_result1_PE126;
#pragma HLS stream variable=s_feature1_PE126 depth=2
#pragma HLS stream variable=s_result1_PE126 depth=2
    hls::stream<W_TYPE> s_feature1_PE127;
    hls::stream<D_TYPE> s_result1_PE127;
#pragma HLS stream variable=s_feature1_PE127 depth=2
#pragma HLS stream variable=s_result1_PE127 depth=2
    hls::stream<W_TYPE> s_result1_all;
#pragma HLS stream variable=s_result1_all depth=256

    hls::stream<W_TYPE> s_feature2_PE0;
    hls::stream<D_TYPE> s_result2_PE0;
#pragma HLS stream variable=s_feature2_PE0 depth=2
#pragma HLS stream variable=s_result2_PE0 depth=2
    hls::stream<W_TYPE> s_feature2_PE1;
    hls::stream<D_TYPE> s_result2_PE1;
#pragma HLS stream variable=s_feature2_PE1 depth=2
#pragma HLS stream variable=s_result2_PE1 depth=2
    hls::stream<W_TYPE> s_feature2_PE2;
    hls::stream<D_TYPE> s_result2_PE2;
#pragma HLS stream variable=s_feature2_PE2 depth=2
#pragma HLS stream variable=s_result2_PE2 depth=2
    hls::stream<W_TYPE> s_feature2_PE3;
    hls::stream<D_TYPE> s_result2_PE3;
#pragma HLS stream variable=s_feature2_PE3 depth=2
#pragma HLS stream variable=s_result2_PE3 depth=2
    hls::stream<W_TYPE> s_feature2_PE4;
    hls::stream<D_TYPE> s_result2_PE4;
#pragma HLS stream variable=s_feature2_PE4 depth=2
#pragma HLS stream variable=s_result2_PE4 depth=2
    hls::stream<W_TYPE> s_feature2_PE5;
    hls::stream<D_TYPE> s_result2_PE5;
#pragma HLS stream variable=s_feature2_PE5 depth=2
#pragma HLS stream variable=s_result2_PE5 depth=2
    hls::stream<W_TYPE> s_feature2_PE6;
    hls::stream<D_TYPE> s_result2_PE6;
#pragma HLS stream variable=s_feature2_PE6 depth=2
#pragma HLS stream variable=s_result2_PE6 depth=2
    hls::stream<W_TYPE> s_feature2_PE7;
    hls::stream<D_TYPE> s_result2_PE7;
#pragma HLS stream variable=s_feature2_PE7 depth=2
#pragma HLS stream variable=s_result2_PE7 depth=2
    hls::stream<W_TYPE> s_feature2_PE8;
    hls::stream<D_TYPE> s_result2_PE8;
#pragma HLS stream variable=s_feature2_PE8 depth=2
#pragma HLS stream variable=s_result2_PE8 depth=2
    hls::stream<W_TYPE> s_feature2_PE9;
    hls::stream<D_TYPE> s_result2_PE9;
#pragma HLS stream variable=s_feature2_PE9 depth=2
#pragma HLS stream variable=s_result2_PE9 depth=2
    hls::stream<W_TYPE> s_feature2_PE10;
    hls::stream<D_TYPE> s_result2_PE10;
#pragma HLS stream variable=s_feature2_PE10 depth=2
#pragma HLS stream variable=s_result2_PE10 depth=2
    hls::stream<W_TYPE> s_feature2_PE11;
    hls::stream<D_TYPE> s_result2_PE11;
#pragma HLS stream variable=s_feature2_PE11 depth=2
#pragma HLS stream variable=s_result2_PE11 depth=2
    hls::stream<W_TYPE> s_feature2_PE12;
    hls::stream<D_TYPE> s_result2_PE12;
#pragma HLS stream variable=s_feature2_PE12 depth=2
#pragma HLS stream variable=s_result2_PE12 depth=2
    hls::stream<W_TYPE> s_feature2_PE13;
    hls::stream<D_TYPE> s_result2_PE13;
#pragma HLS stream variable=s_feature2_PE13 depth=2
#pragma HLS stream variable=s_result2_PE13 depth=2
    hls::stream<W_TYPE> s_feature2_PE14;
    hls::stream<D_TYPE> s_result2_PE14;
#pragma HLS stream variable=s_feature2_PE14 depth=2
#pragma HLS stream variable=s_result2_PE14 depth=2
    hls::stream<W_TYPE> s_feature2_PE15;
    hls::stream<D_TYPE> s_result2_PE15;
#pragma HLS stream variable=s_feature2_PE15 depth=2
#pragma HLS stream variable=s_result2_PE15 depth=2
    hls::stream<W_TYPE> s_feature2_PE16;
    hls::stream<D_TYPE> s_result2_PE16;
#pragma HLS stream variable=s_feature2_PE16 depth=2
#pragma HLS stream variable=s_result2_PE16 depth=2
    hls::stream<W_TYPE> s_feature2_PE17;
    hls::stream<D_TYPE> s_result2_PE17;
#pragma HLS stream variable=s_feature2_PE17 depth=2
#pragma HLS stream variable=s_result2_PE17 depth=2
    hls::stream<W_TYPE> s_feature2_PE18;
    hls::stream<D_TYPE> s_result2_PE18;
#pragma HLS stream variable=s_feature2_PE18 depth=2
#pragma HLS stream variable=s_result2_PE18 depth=2
    hls::stream<W_TYPE> s_feature2_PE19;
    hls::stream<D_TYPE> s_result2_PE19;
#pragma HLS stream variable=s_feature2_PE19 depth=2
#pragma HLS stream variable=s_result2_PE19 depth=2
    hls::stream<W_TYPE> s_feature2_PE20;
    hls::stream<D_TYPE> s_result2_PE20;
#pragma HLS stream variable=s_feature2_PE20 depth=2
#pragma HLS stream variable=s_result2_PE20 depth=2
    hls::stream<W_TYPE> s_feature2_PE21;
    hls::stream<D_TYPE> s_result2_PE21;
#pragma HLS stream variable=s_feature2_PE21 depth=2
#pragma HLS stream variable=s_result2_PE21 depth=2
    hls::stream<W_TYPE> s_feature2_PE22;
    hls::stream<D_TYPE> s_result2_PE22;
#pragma HLS stream variable=s_feature2_PE22 depth=2
#pragma HLS stream variable=s_result2_PE22 depth=2
    hls::stream<W_TYPE> s_feature2_PE23;
    hls::stream<D_TYPE> s_result2_PE23;
#pragma HLS stream variable=s_feature2_PE23 depth=2
#pragma HLS stream variable=s_result2_PE23 depth=2
    hls::stream<W_TYPE> s_feature2_PE24;
    hls::stream<D_TYPE> s_result2_PE24;
#pragma HLS stream variable=s_feature2_PE24 depth=2
#pragma HLS stream variable=s_result2_PE24 depth=2
    hls::stream<W_TYPE> s_feature2_PE25;
    hls::stream<D_TYPE> s_result2_PE25;
#pragma HLS stream variable=s_feature2_PE25 depth=2
#pragma HLS stream variable=s_result2_PE25 depth=2
    hls::stream<W_TYPE> s_feature2_PE26;
    hls::stream<D_TYPE> s_result2_PE26;
#pragma HLS stream variable=s_feature2_PE26 depth=2
#pragma HLS stream variable=s_result2_PE26 depth=2
    hls::stream<W_TYPE> s_feature2_PE27;
    hls::stream<D_TYPE> s_result2_PE27;
#pragma HLS stream variable=s_feature2_PE27 depth=2
#pragma HLS stream variable=s_result2_PE27 depth=2
    hls::stream<W_TYPE> s_feature2_PE28;
    hls::stream<D_TYPE> s_result2_PE28;
#pragma HLS stream variable=s_feature2_PE28 depth=2
#pragma HLS stream variable=s_result2_PE28 depth=2
    hls::stream<W_TYPE> s_feature2_PE29;
    hls::stream<D_TYPE> s_result2_PE29;
#pragma HLS stream variable=s_feature2_PE29 depth=2
#pragma HLS stream variable=s_result2_PE29 depth=2
    hls::stream<W_TYPE> s_feature2_PE30;
    hls::stream<D_TYPE> s_result2_PE30;
#pragma HLS stream variable=s_feature2_PE30 depth=2
#pragma HLS stream variable=s_result2_PE30 depth=2
    hls::stream<W_TYPE> s_feature2_PE31;
    hls::stream<D_TYPE> s_result2_PE31;
#pragma HLS stream variable=s_feature2_PE31 depth=2
#pragma HLS stream variable=s_result2_PE31 depth=2
    hls::stream<W_TYPE> s_feature2_PE32;
    hls::stream<D_TYPE> s_result2_PE32;
#pragma HLS stream variable=s_feature2_PE32 depth=2
#pragma HLS stream variable=s_result2_PE32 depth=2
    hls::stream<W_TYPE> s_feature2_PE33;
    hls::stream<D_TYPE> s_result2_PE33;
#pragma HLS stream variable=s_feature2_PE33 depth=2
#pragma HLS stream variable=s_result2_PE33 depth=2
    hls::stream<W_TYPE> s_feature2_PE34;
    hls::stream<D_TYPE> s_result2_PE34;
#pragma HLS stream variable=s_feature2_PE34 depth=2
#pragma HLS stream variable=s_result2_PE34 depth=2
    hls::stream<W_TYPE> s_feature2_PE35;
    hls::stream<D_TYPE> s_result2_PE35;
#pragma HLS stream variable=s_feature2_PE35 depth=2
#pragma HLS stream variable=s_result2_PE35 depth=2
    hls::stream<W_TYPE> s_feature2_PE36;
    hls::stream<D_TYPE> s_result2_PE36;
#pragma HLS stream variable=s_feature2_PE36 depth=2
#pragma HLS stream variable=s_result2_PE36 depth=2
    hls::stream<W_TYPE> s_feature2_PE37;
    hls::stream<D_TYPE> s_result2_PE37;
#pragma HLS stream variable=s_feature2_PE37 depth=2
#pragma HLS stream variable=s_result2_PE37 depth=2
    hls::stream<W_TYPE> s_feature2_PE38;
    hls::stream<D_TYPE> s_result2_PE38;
#pragma HLS stream variable=s_feature2_PE38 depth=2
#pragma HLS stream variable=s_result2_PE38 depth=2
    hls::stream<W_TYPE> s_feature2_PE39;
    hls::stream<D_TYPE> s_result2_PE39;
#pragma HLS stream variable=s_feature2_PE39 depth=2
#pragma HLS stream variable=s_result2_PE39 depth=2
    hls::stream<W_TYPE> s_feature2_PE40;
    hls::stream<D_TYPE> s_result2_PE40;
#pragma HLS stream variable=s_feature2_PE40 depth=2
#pragma HLS stream variable=s_result2_PE40 depth=2
    hls::stream<W_TYPE> s_feature2_PE41;
    hls::stream<D_TYPE> s_result2_PE41;
#pragma HLS stream variable=s_feature2_PE41 depth=2
#pragma HLS stream variable=s_result2_PE41 depth=2
    hls::stream<W_TYPE> s_feature2_PE42;
    hls::stream<D_TYPE> s_result2_PE42;
#pragma HLS stream variable=s_feature2_PE42 depth=2
#pragma HLS stream variable=s_result2_PE42 depth=2
    hls::stream<W_TYPE> s_feature2_PE43;
    hls::stream<D_TYPE> s_result2_PE43;
#pragma HLS stream variable=s_feature2_PE43 depth=2
#pragma HLS stream variable=s_result2_PE43 depth=2
    hls::stream<W_TYPE> s_feature2_PE44;
    hls::stream<D_TYPE> s_result2_PE44;
#pragma HLS stream variable=s_feature2_PE44 depth=2
#pragma HLS stream variable=s_result2_PE44 depth=2
    hls::stream<W_TYPE> s_feature2_PE45;
    hls::stream<D_TYPE> s_result2_PE45;
#pragma HLS stream variable=s_feature2_PE45 depth=2
#pragma HLS stream variable=s_result2_PE45 depth=2
    hls::stream<W_TYPE> s_feature2_PE46;
    hls::stream<D_TYPE> s_result2_PE46;
#pragma HLS stream variable=s_feature2_PE46 depth=2
#pragma HLS stream variable=s_result2_PE46 depth=2
    hls::stream<W_TYPE> s_feature2_PE47;
    hls::stream<D_TYPE> s_result2_PE47;
#pragma HLS stream variable=s_feature2_PE47 depth=2
#pragma HLS stream variable=s_result2_PE47 depth=2
    hls::stream<W_TYPE> s_feature2_PE48;
    hls::stream<D_TYPE> s_result2_PE48;
#pragma HLS stream variable=s_feature2_PE48 depth=2
#pragma HLS stream variable=s_result2_PE48 depth=2
    hls::stream<W_TYPE> s_feature2_PE49;
    hls::stream<D_TYPE> s_result2_PE49;
#pragma HLS stream variable=s_feature2_PE49 depth=2
#pragma HLS stream variable=s_result2_PE49 depth=2
    hls::stream<W_TYPE> s_feature2_PE50;
    hls::stream<D_TYPE> s_result2_PE50;
#pragma HLS stream variable=s_feature2_PE50 depth=2
#pragma HLS stream variable=s_result2_PE50 depth=2
    hls::stream<W_TYPE> s_feature2_PE51;
    hls::stream<D_TYPE> s_result2_PE51;
#pragma HLS stream variable=s_feature2_PE51 depth=2
#pragma HLS stream variable=s_result2_PE51 depth=2
    hls::stream<W_TYPE> s_feature2_PE52;
    hls::stream<D_TYPE> s_result2_PE52;
#pragma HLS stream variable=s_feature2_PE52 depth=2
#pragma HLS stream variable=s_result2_PE52 depth=2
    hls::stream<W_TYPE> s_feature2_PE53;
    hls::stream<D_TYPE> s_result2_PE53;
#pragma HLS stream variable=s_feature2_PE53 depth=2
#pragma HLS stream variable=s_result2_PE53 depth=2
    hls::stream<W_TYPE> s_feature2_PE54;
    hls::stream<D_TYPE> s_result2_PE54;
#pragma HLS stream variable=s_feature2_PE54 depth=2
#pragma HLS stream variable=s_result2_PE54 depth=2
    hls::stream<W_TYPE> s_feature2_PE55;
    hls::stream<D_TYPE> s_result2_PE55;
#pragma HLS stream variable=s_feature2_PE55 depth=2
#pragma HLS stream variable=s_result2_PE55 depth=2
    hls::stream<W_TYPE> s_feature2_PE56;
    hls::stream<D_TYPE> s_result2_PE56;
#pragma HLS stream variable=s_feature2_PE56 depth=2
#pragma HLS stream variable=s_result2_PE56 depth=2
    hls::stream<W_TYPE> s_feature2_PE57;
    hls::stream<D_TYPE> s_result2_PE57;
#pragma HLS stream variable=s_feature2_PE57 depth=2
#pragma HLS stream variable=s_result2_PE57 depth=2
    hls::stream<W_TYPE> s_feature2_PE58;
    hls::stream<D_TYPE> s_result2_PE58;
#pragma HLS stream variable=s_feature2_PE58 depth=2
#pragma HLS stream variable=s_result2_PE58 depth=2
    hls::stream<W_TYPE> s_feature2_PE59;
    hls::stream<D_TYPE> s_result2_PE59;
#pragma HLS stream variable=s_feature2_PE59 depth=2
#pragma HLS stream variable=s_result2_PE59 depth=2
    hls::stream<W_TYPE> s_feature2_PE60;
    hls::stream<D_TYPE> s_result2_PE60;
#pragma HLS stream variable=s_feature2_PE60 depth=2
#pragma HLS stream variable=s_result2_PE60 depth=2
    hls::stream<W_TYPE> s_feature2_PE61;
    hls::stream<D_TYPE> s_result2_PE61;
#pragma HLS stream variable=s_feature2_PE61 depth=2
#pragma HLS stream variable=s_result2_PE61 depth=2
    hls::stream<W_TYPE> s_feature2_PE62;
    hls::stream<D_TYPE> s_result2_PE62;
#pragma HLS stream variable=s_feature2_PE62 depth=2
#pragma HLS stream variable=s_result2_PE62 depth=2
    hls::stream<W_TYPE> s_feature2_PE63;
    hls::stream<D_TYPE> s_result2_PE63;
#pragma HLS stream variable=s_feature2_PE63 depth=2
#pragma HLS stream variable=s_result2_PE63 depth=2
    hls::stream<W_TYPE> s_feature2_PE64;
    hls::stream<D_TYPE> s_result2_PE64;
#pragma HLS stream variable=s_feature2_PE64 depth=2
#pragma HLS stream variable=s_result2_PE64 depth=2
    hls::stream<W_TYPE> s_feature2_PE65;
    hls::stream<D_TYPE> s_result2_PE65;
#pragma HLS stream variable=s_feature2_PE65 depth=2
#pragma HLS stream variable=s_result2_PE65 depth=2
    hls::stream<W_TYPE> s_feature2_PE66;
    hls::stream<D_TYPE> s_result2_PE66;
#pragma HLS stream variable=s_feature2_PE66 depth=2
#pragma HLS stream variable=s_result2_PE66 depth=2
    hls::stream<W_TYPE> s_feature2_PE67;
    hls::stream<D_TYPE> s_result2_PE67;
#pragma HLS stream variable=s_feature2_PE67 depth=2
#pragma HLS stream variable=s_result2_PE67 depth=2
    hls::stream<W_TYPE> s_feature2_PE68;
    hls::stream<D_TYPE> s_result2_PE68;
#pragma HLS stream variable=s_feature2_PE68 depth=2
#pragma HLS stream variable=s_result2_PE68 depth=2
    hls::stream<W_TYPE> s_feature2_PE69;
    hls::stream<D_TYPE> s_result2_PE69;
#pragma HLS stream variable=s_feature2_PE69 depth=2
#pragma HLS stream variable=s_result2_PE69 depth=2
    hls::stream<W_TYPE> s_feature2_PE70;
    hls::stream<D_TYPE> s_result2_PE70;
#pragma HLS stream variable=s_feature2_PE70 depth=2
#pragma HLS stream variable=s_result2_PE70 depth=2
    hls::stream<W_TYPE> s_feature2_PE71;
    hls::stream<D_TYPE> s_result2_PE71;
#pragma HLS stream variable=s_feature2_PE71 depth=2
#pragma HLS stream variable=s_result2_PE71 depth=2
    hls::stream<W_TYPE> s_feature2_PE72;
    hls::stream<D_TYPE> s_result2_PE72;
#pragma HLS stream variable=s_feature2_PE72 depth=2
#pragma HLS stream variable=s_result2_PE72 depth=2
    hls::stream<W_TYPE> s_feature2_PE73;
    hls::stream<D_TYPE> s_result2_PE73;
#pragma HLS stream variable=s_feature2_PE73 depth=2
#pragma HLS stream variable=s_result2_PE73 depth=2
    hls::stream<W_TYPE> s_feature2_PE74;
    hls::stream<D_TYPE> s_result2_PE74;
#pragma HLS stream variable=s_feature2_PE74 depth=2
#pragma HLS stream variable=s_result2_PE74 depth=2
    hls::stream<W_TYPE> s_feature2_PE75;
    hls::stream<D_TYPE> s_result2_PE75;
#pragma HLS stream variable=s_feature2_PE75 depth=2
#pragma HLS stream variable=s_result2_PE75 depth=2
    hls::stream<W_TYPE> s_feature2_PE76;
    hls::stream<D_TYPE> s_result2_PE76;
#pragma HLS stream variable=s_feature2_PE76 depth=2
#pragma HLS stream variable=s_result2_PE76 depth=2
    hls::stream<W_TYPE> s_feature2_PE77;
    hls::stream<D_TYPE> s_result2_PE77;
#pragma HLS stream variable=s_feature2_PE77 depth=2
#pragma HLS stream variable=s_result2_PE77 depth=2
    hls::stream<W_TYPE> s_feature2_PE78;
    hls::stream<D_TYPE> s_result2_PE78;
#pragma HLS stream variable=s_feature2_PE78 depth=2
#pragma HLS stream variable=s_result2_PE78 depth=2
    hls::stream<W_TYPE> s_feature2_PE79;
    hls::stream<D_TYPE> s_result2_PE79;
#pragma HLS stream variable=s_feature2_PE79 depth=2
#pragma HLS stream variable=s_result2_PE79 depth=2
    hls::stream<W_TYPE> s_feature2_PE80;
    hls::stream<D_TYPE> s_result2_PE80;
#pragma HLS stream variable=s_feature2_PE80 depth=2
#pragma HLS stream variable=s_result2_PE80 depth=2
    hls::stream<W_TYPE> s_feature2_PE81;
    hls::stream<D_TYPE> s_result2_PE81;
#pragma HLS stream variable=s_feature2_PE81 depth=2
#pragma HLS stream variable=s_result2_PE81 depth=2
    hls::stream<W_TYPE> s_feature2_PE82;
    hls::stream<D_TYPE> s_result2_PE82;
#pragma HLS stream variable=s_feature2_PE82 depth=2
#pragma HLS stream variable=s_result2_PE82 depth=2
    hls::stream<W_TYPE> s_feature2_PE83;
    hls::stream<D_TYPE> s_result2_PE83;
#pragma HLS stream variable=s_feature2_PE83 depth=2
#pragma HLS stream variable=s_result2_PE83 depth=2
    hls::stream<W_TYPE> s_feature2_PE84;
    hls::stream<D_TYPE> s_result2_PE84;
#pragma HLS stream variable=s_feature2_PE84 depth=2
#pragma HLS stream variable=s_result2_PE84 depth=2
    hls::stream<W_TYPE> s_feature2_PE85;
    hls::stream<D_TYPE> s_result2_PE85;
#pragma HLS stream variable=s_feature2_PE85 depth=2
#pragma HLS stream variable=s_result2_PE85 depth=2
    hls::stream<W_TYPE> s_feature2_PE86;
    hls::stream<D_TYPE> s_result2_PE86;
#pragma HLS stream variable=s_feature2_PE86 depth=2
#pragma HLS stream variable=s_result2_PE86 depth=2
    hls::stream<W_TYPE> s_feature2_PE87;
    hls::stream<D_TYPE> s_result2_PE87;
#pragma HLS stream variable=s_feature2_PE87 depth=2
#pragma HLS stream variable=s_result2_PE87 depth=2
    hls::stream<W_TYPE> s_feature2_PE88;
    hls::stream<D_TYPE> s_result2_PE88;
#pragma HLS stream variable=s_feature2_PE88 depth=2
#pragma HLS stream variable=s_result2_PE88 depth=2
    hls::stream<W_TYPE> s_feature2_PE89;
    hls::stream<D_TYPE> s_result2_PE89;
#pragma HLS stream variable=s_feature2_PE89 depth=2
#pragma HLS stream variable=s_result2_PE89 depth=2
    hls::stream<W_TYPE> s_feature2_PE90;
    hls::stream<D_TYPE> s_result2_PE90;
#pragma HLS stream variable=s_feature2_PE90 depth=2
#pragma HLS stream variable=s_result2_PE90 depth=2
    hls::stream<W_TYPE> s_feature2_PE91;
    hls::stream<D_TYPE> s_result2_PE91;
#pragma HLS stream variable=s_feature2_PE91 depth=2
#pragma HLS stream variable=s_result2_PE91 depth=2
    hls::stream<W_TYPE> s_feature2_PE92;
    hls::stream<D_TYPE> s_result2_PE92;
#pragma HLS stream variable=s_feature2_PE92 depth=2
#pragma HLS stream variable=s_result2_PE92 depth=2
    hls::stream<W_TYPE> s_feature2_PE93;
    hls::stream<D_TYPE> s_result2_PE93;
#pragma HLS stream variable=s_feature2_PE93 depth=2
#pragma HLS stream variable=s_result2_PE93 depth=2
    hls::stream<W_TYPE> s_feature2_PE94;
    hls::stream<D_TYPE> s_result2_PE94;
#pragma HLS stream variable=s_feature2_PE94 depth=2
#pragma HLS stream variable=s_result2_PE94 depth=2
    hls::stream<W_TYPE> s_feature2_PE95;
    hls::stream<D_TYPE> s_result2_PE95;
#pragma HLS stream variable=s_feature2_PE95 depth=2
#pragma HLS stream variable=s_result2_PE95 depth=2
    hls::stream<W_TYPE> s_feature2_PE96;
    hls::stream<D_TYPE> s_result2_PE96;
#pragma HLS stream variable=s_feature2_PE96 depth=2
#pragma HLS stream variable=s_result2_PE96 depth=2
    hls::stream<W_TYPE> s_feature2_PE97;
    hls::stream<D_TYPE> s_result2_PE97;
#pragma HLS stream variable=s_feature2_PE97 depth=2
#pragma HLS stream variable=s_result2_PE97 depth=2
    hls::stream<W_TYPE> s_feature2_PE98;
    hls::stream<D_TYPE> s_result2_PE98;
#pragma HLS stream variable=s_feature2_PE98 depth=2
#pragma HLS stream variable=s_result2_PE98 depth=2
    hls::stream<W_TYPE> s_feature2_PE99;
    hls::stream<D_TYPE> s_result2_PE99;
#pragma HLS stream variable=s_feature2_PE99 depth=2
#pragma HLS stream variable=s_result2_PE99 depth=2
    hls::stream<W_TYPE> s_feature2_PE100;
    hls::stream<D_TYPE> s_result2_PE100;
#pragma HLS stream variable=s_feature2_PE100 depth=2
#pragma HLS stream variable=s_result2_PE100 depth=2
    hls::stream<W_TYPE> s_feature2_PE101;
    hls::stream<D_TYPE> s_result2_PE101;
#pragma HLS stream variable=s_feature2_PE101 depth=2
#pragma HLS stream variable=s_result2_PE101 depth=2
    hls::stream<W_TYPE> s_feature2_PE102;
    hls::stream<D_TYPE> s_result2_PE102;
#pragma HLS stream variable=s_feature2_PE102 depth=2
#pragma HLS stream variable=s_result2_PE102 depth=2
    hls::stream<W_TYPE> s_feature2_PE103;
    hls::stream<D_TYPE> s_result2_PE103;
#pragma HLS stream variable=s_feature2_PE103 depth=2
#pragma HLS stream variable=s_result2_PE103 depth=2
    hls::stream<W_TYPE> s_feature2_PE104;
    hls::stream<D_TYPE> s_result2_PE104;
#pragma HLS stream variable=s_feature2_PE104 depth=2
#pragma HLS stream variable=s_result2_PE104 depth=2
    hls::stream<W_TYPE> s_feature2_PE105;
    hls::stream<D_TYPE> s_result2_PE105;
#pragma HLS stream variable=s_feature2_PE105 depth=2
#pragma HLS stream variable=s_result2_PE105 depth=2
    hls::stream<W_TYPE> s_feature2_PE106;
    hls::stream<D_TYPE> s_result2_PE106;
#pragma HLS stream variable=s_feature2_PE106 depth=2
#pragma HLS stream variable=s_result2_PE106 depth=2
    hls::stream<W_TYPE> s_feature2_PE107;
    hls::stream<D_TYPE> s_result2_PE107;
#pragma HLS stream variable=s_feature2_PE107 depth=2
#pragma HLS stream variable=s_result2_PE107 depth=2
    hls::stream<W_TYPE> s_feature2_PE108;
    hls::stream<D_TYPE> s_result2_PE108;
#pragma HLS stream variable=s_feature2_PE108 depth=2
#pragma HLS stream variable=s_result2_PE108 depth=2
    hls::stream<W_TYPE> s_feature2_PE109;
    hls::stream<D_TYPE> s_result2_PE109;
#pragma HLS stream variable=s_feature2_PE109 depth=2
#pragma HLS stream variable=s_result2_PE109 depth=2
    hls::stream<W_TYPE> s_feature2_PE110;
    hls::stream<D_TYPE> s_result2_PE110;
#pragma HLS stream variable=s_feature2_PE110 depth=2
#pragma HLS stream variable=s_result2_PE110 depth=2
    hls::stream<W_TYPE> s_feature2_PE111;
    hls::stream<D_TYPE> s_result2_PE111;
#pragma HLS stream variable=s_feature2_PE111 depth=2
#pragma HLS stream variable=s_result2_PE111 depth=2
    hls::stream<W_TYPE> s_feature2_PE112;
    hls::stream<D_TYPE> s_result2_PE112;
#pragma HLS stream variable=s_feature2_PE112 depth=2
#pragma HLS stream variable=s_result2_PE112 depth=2
    hls::stream<W_TYPE> s_feature2_PE113;
    hls::stream<D_TYPE> s_result2_PE113;
#pragma HLS stream variable=s_feature2_PE113 depth=2
#pragma HLS stream variable=s_result2_PE113 depth=2
    hls::stream<W_TYPE> s_feature2_PE114;
    hls::stream<D_TYPE> s_result2_PE114;
#pragma HLS stream variable=s_feature2_PE114 depth=2
#pragma HLS stream variable=s_result2_PE114 depth=2
    hls::stream<W_TYPE> s_feature2_PE115;
    hls::stream<D_TYPE> s_result2_PE115;
#pragma HLS stream variable=s_feature2_PE115 depth=2
#pragma HLS stream variable=s_result2_PE115 depth=2
    hls::stream<W_TYPE> s_feature2_PE116;
    hls::stream<D_TYPE> s_result2_PE116;
#pragma HLS stream variable=s_feature2_PE116 depth=2
#pragma HLS stream variable=s_result2_PE116 depth=2
    hls::stream<W_TYPE> s_feature2_PE117;
    hls::stream<D_TYPE> s_result2_PE117;
#pragma HLS stream variable=s_feature2_PE117 depth=2
#pragma HLS stream variable=s_result2_PE117 depth=2
    hls::stream<W_TYPE> s_feature2_PE118;
    hls::stream<D_TYPE> s_result2_PE118;
#pragma HLS stream variable=s_feature2_PE118 depth=2
#pragma HLS stream variable=s_result2_PE118 depth=2
    hls::stream<W_TYPE> s_feature2_PE119;
    hls::stream<D_TYPE> s_result2_PE119;
#pragma HLS stream variable=s_feature2_PE119 depth=2
#pragma HLS stream variable=s_result2_PE119 depth=2
    hls::stream<W_TYPE> s_feature2_PE120;
    hls::stream<D_TYPE> s_result2_PE120;
#pragma HLS stream variable=s_feature2_PE120 depth=2
#pragma HLS stream variable=s_result2_PE120 depth=2
    hls::stream<W_TYPE> s_feature2_PE121;
    hls::stream<D_TYPE> s_result2_PE121;
#pragma HLS stream variable=s_feature2_PE121 depth=2
#pragma HLS stream variable=s_result2_PE121 depth=2
    hls::stream<W_TYPE> s_feature2_PE122;
    hls::stream<D_TYPE> s_result2_PE122;
#pragma HLS stream variable=s_feature2_PE122 depth=2
#pragma HLS stream variable=s_result2_PE122 depth=2
    hls::stream<W_TYPE> s_feature2_PE123;
    hls::stream<D_TYPE> s_result2_PE123;
#pragma HLS stream variable=s_feature2_PE123 depth=2
#pragma HLS stream variable=s_result2_PE123 depth=2
    hls::stream<W_TYPE> s_feature2_PE124;
    hls::stream<D_TYPE> s_result2_PE124;
#pragma HLS stream variable=s_feature2_PE124 depth=2
#pragma HLS stream variable=s_result2_PE124 depth=2
    hls::stream<W_TYPE> s_feature2_PE125;
    hls::stream<D_TYPE> s_result2_PE125;
#pragma HLS stream variable=s_feature2_PE125 depth=2
#pragma HLS stream variable=s_result2_PE125 depth=2
    hls::stream<W_TYPE> s_feature2_PE126;
    hls::stream<D_TYPE> s_result2_PE126;
#pragma HLS stream variable=s_feature2_PE126 depth=2
#pragma HLS stream variable=s_result2_PE126 depth=2
    hls::stream<W_TYPE> s_feature2_PE127;
    hls::stream<D_TYPE> s_result2_PE127;
#pragma HLS stream variable=s_feature2_PE127 depth=2
#pragma HLS stream variable=s_result2_PE127 depth=2
    hls::stream<W_TYPE> s_result2_all;
#pragma HLS stream variable=s_result2_all depth=256

    hls::stream<W_TYPE> s_feature3_PE0;
    hls::stream<D_TYPE> s_result3_PE0;
#pragma HLS stream variable=s_feature3_PE0 depth=2
#pragma HLS stream variable=s_result3_PE0 depth=2
    hls::stream<W_TYPE> s_feature3_PE1;
    hls::stream<D_TYPE> s_result3_PE1;
#pragma HLS stream variable=s_feature3_PE1 depth=2
#pragma HLS stream variable=s_result3_PE1 depth=2
    hls::stream<W_TYPE> s_feature3_PE2;
    hls::stream<D_TYPE> s_result3_PE2;
#pragma HLS stream variable=s_feature3_PE2 depth=2
#pragma HLS stream variable=s_result3_PE2 depth=2
    hls::stream<W_TYPE> s_feature3_PE3;
    hls::stream<D_TYPE> s_result3_PE3;
#pragma HLS stream variable=s_feature3_PE3 depth=2
#pragma HLS stream variable=s_result3_PE3 depth=2
    hls::stream<W_TYPE> s_feature3_PE4;
    hls::stream<D_TYPE> s_result3_PE4;
#pragma HLS stream variable=s_feature3_PE4 depth=2
#pragma HLS stream variable=s_result3_PE4 depth=2
    hls::stream<W_TYPE> s_feature3_PE5;
    hls::stream<D_TYPE> s_result3_PE5;
#pragma HLS stream variable=s_feature3_PE5 depth=2
#pragma HLS stream variable=s_result3_PE5 depth=2
    hls::stream<W_TYPE> s_feature3_PE6;
    hls::stream<D_TYPE> s_result3_PE6;
#pragma HLS stream variable=s_feature3_PE6 depth=2
#pragma HLS stream variable=s_result3_PE6 depth=2
    hls::stream<W_TYPE> s_feature3_PE7;
    hls::stream<D_TYPE> s_result3_PE7;
#pragma HLS stream variable=s_feature3_PE7 depth=2
#pragma HLS stream variable=s_result3_PE7 depth=2
    hls::stream<W_TYPE> s_feature3_PE8;
    hls::stream<D_TYPE> s_result3_PE8;
#pragma HLS stream variable=s_feature3_PE8 depth=2
#pragma HLS stream variable=s_result3_PE8 depth=2
    hls::stream<W_TYPE> s_feature3_PE9;
    hls::stream<D_TYPE> s_result3_PE9;
#pragma HLS stream variable=s_feature3_PE9 depth=2
#pragma HLS stream variable=s_result3_PE9 depth=2
    hls::stream<W_TYPE> s_feature3_PE10;
    hls::stream<D_TYPE> s_result3_PE10;
#pragma HLS stream variable=s_feature3_PE10 depth=2
#pragma HLS stream variable=s_result3_PE10 depth=2
    hls::stream<W_TYPE> s_feature3_PE11;
    hls::stream<D_TYPE> s_result3_PE11;
#pragma HLS stream variable=s_feature3_PE11 depth=2
#pragma HLS stream variable=s_result3_PE11 depth=2
    hls::stream<W_TYPE> s_feature3_PE12;
    hls::stream<D_TYPE> s_result3_PE12;
#pragma HLS stream variable=s_feature3_PE12 depth=2
#pragma HLS stream variable=s_result3_PE12 depth=2
    hls::stream<W_TYPE> s_feature3_PE13;
    hls::stream<D_TYPE> s_result3_PE13;
#pragma HLS stream variable=s_feature3_PE13 depth=2
#pragma HLS stream variable=s_result3_PE13 depth=2
    hls::stream<W_TYPE> s_feature3_PE14;
    hls::stream<D_TYPE> s_result3_PE14;
#pragma HLS stream variable=s_feature3_PE14 depth=2
#pragma HLS stream variable=s_result3_PE14 depth=2
    hls::stream<W_TYPE> s_feature3_PE15;
    hls::stream<D_TYPE> s_result3_PE15;
#pragma HLS stream variable=s_feature3_PE15 depth=2
#pragma HLS stream variable=s_result3_PE15 depth=2
    hls::stream<W_TYPE> s_feature3_PE16;
    hls::stream<D_TYPE> s_result3_PE16;
#pragma HLS stream variable=s_feature3_PE16 depth=2
#pragma HLS stream variable=s_result3_PE16 depth=2
    hls::stream<W_TYPE> s_feature3_PE17;
    hls::stream<D_TYPE> s_result3_PE17;
#pragma HLS stream variable=s_feature3_PE17 depth=2
#pragma HLS stream variable=s_result3_PE17 depth=2
    hls::stream<W_TYPE> s_feature3_PE18;
    hls::stream<D_TYPE> s_result3_PE18;
#pragma HLS stream variable=s_feature3_PE18 depth=2
#pragma HLS stream variable=s_result3_PE18 depth=2
    hls::stream<W_TYPE> s_feature3_PE19;
    hls::stream<D_TYPE> s_result3_PE19;
#pragma HLS stream variable=s_feature3_PE19 depth=2
#pragma HLS stream variable=s_result3_PE19 depth=2
    hls::stream<W_TYPE> s_feature3_PE20;
    hls::stream<D_TYPE> s_result3_PE20;
#pragma HLS stream variable=s_feature3_PE20 depth=2
#pragma HLS stream variable=s_result3_PE20 depth=2
    hls::stream<W_TYPE> s_feature3_PE21;
    hls::stream<D_TYPE> s_result3_PE21;
#pragma HLS stream variable=s_feature3_PE21 depth=2
#pragma HLS stream variable=s_result3_PE21 depth=2
    hls::stream<W_TYPE> s_feature3_PE22;
    hls::stream<D_TYPE> s_result3_PE22;
#pragma HLS stream variable=s_feature3_PE22 depth=2
#pragma HLS stream variable=s_result3_PE22 depth=2
    hls::stream<W_TYPE> s_feature3_PE23;
    hls::stream<D_TYPE> s_result3_PE23;
#pragma HLS stream variable=s_feature3_PE23 depth=2
#pragma HLS stream variable=s_result3_PE23 depth=2
    hls::stream<W_TYPE> s_feature3_PE24;
    hls::stream<D_TYPE> s_result3_PE24;
#pragma HLS stream variable=s_feature3_PE24 depth=2
#pragma HLS stream variable=s_result3_PE24 depth=2
    hls::stream<W_TYPE> s_feature3_PE25;
    hls::stream<D_TYPE> s_result3_PE25;
#pragma HLS stream variable=s_feature3_PE25 depth=2
#pragma HLS stream variable=s_result3_PE25 depth=2
    hls::stream<W_TYPE> s_feature3_PE26;
    hls::stream<D_TYPE> s_result3_PE26;
#pragma HLS stream variable=s_feature3_PE26 depth=2
#pragma HLS stream variable=s_result3_PE26 depth=2
    hls::stream<W_TYPE> s_feature3_PE27;
    hls::stream<D_TYPE> s_result3_PE27;
#pragma HLS stream variable=s_feature3_PE27 depth=2
#pragma HLS stream variable=s_result3_PE27 depth=2
    hls::stream<W_TYPE> s_feature3_PE28;
    hls::stream<D_TYPE> s_result3_PE28;
#pragma HLS stream variable=s_feature3_PE28 depth=2
#pragma HLS stream variable=s_result3_PE28 depth=2
    hls::stream<W_TYPE> s_feature3_PE29;
    hls::stream<D_TYPE> s_result3_PE29;
#pragma HLS stream variable=s_feature3_PE29 depth=2
#pragma HLS stream variable=s_result3_PE29 depth=2
    hls::stream<W_TYPE> s_feature3_PE30;
    hls::stream<D_TYPE> s_result3_PE30;
#pragma HLS stream variable=s_feature3_PE30 depth=2
#pragma HLS stream variable=s_result3_PE30 depth=2
    hls::stream<W_TYPE> s_feature3_PE31;
    hls::stream<D_TYPE> s_result3_PE31;
#pragma HLS stream variable=s_feature3_PE31 depth=2
#pragma HLS stream variable=s_result3_PE31 depth=2
    hls::stream<W_TYPE> s_result3_all;
#pragma HLS stream variable=s_result3_all depth=256

    hls::stream<D_TYPE> s_result_out;
#pragma HLS stream variable=s_result_out depth=128


//////////////////////////////     Init tables / indexes     ////////////////////////////// 
    t_axi table_PLRAM0[PLRAM_BANK0_SIZE]; 
    t_axi table_PLRAM1[PLRAM_BANK1_SIZE]; 
    t_axi table_PLRAM2[PLRAM_BANK2_SIZE]; 
    t_axi table_PLRAM3[PLRAM_BANK3_SIZE]; 
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
    
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_0>(s_embedding_buffer_HBM0, s_embedding_buffer_wide_HBM0);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_1>(s_embedding_buffer_HBM1, s_embedding_buffer_wide_HBM1);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_2>(s_embedding_buffer_HBM2, s_embedding_buffer_wide_HBM2);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_3>(s_embedding_buffer_HBM3, s_embedding_buffer_wide_HBM3);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_4>(s_embedding_buffer_HBM4, s_embedding_buffer_wide_HBM4);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_5>(s_embedding_buffer_HBM5, s_embedding_buffer_wide_HBM5);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_6>(s_embedding_buffer_HBM6, s_embedding_buffer_wide_HBM6);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_7>(s_embedding_buffer_HBM7, s_embedding_buffer_wide_HBM7);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_8>(s_embedding_buffer_HBM8, s_embedding_buffer_wide_HBM8);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_9>(s_embedding_buffer_HBM9, s_embedding_buffer_wide_HBM9);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_10>(s_embedding_buffer_HBM10, s_embedding_buffer_wide_HBM10);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_11>(s_embedding_buffer_HBM11, s_embedding_buffer_wide_HBM11);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_12>(s_embedding_buffer_HBM12, s_embedding_buffer_wide_HBM12);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_13>(s_embedding_buffer_HBM13, s_embedding_buffer_wide_HBM13);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_14>(s_embedding_buffer_HBM14, s_embedding_buffer_wide_HBM14);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_15>(s_embedding_buffer_HBM15, s_embedding_buffer_wide_HBM15);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_16>(s_embedding_buffer_HBM16, s_embedding_buffer_wide_HBM16);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_17>(s_embedding_buffer_HBM17, s_embedding_buffer_wide_HBM17);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_18>(s_embedding_buffer_HBM18, s_embedding_buffer_wide_HBM18);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_19>(s_embedding_buffer_HBM19, s_embedding_buffer_wide_HBM19);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_20>(s_embedding_buffer_HBM20, s_embedding_buffer_wide_HBM20);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_21>(s_embedding_buffer_HBM21, s_embedding_buffer_wide_HBM21);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_22>(s_embedding_buffer_HBM22, s_embedding_buffer_wide_HBM22);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_23>(s_embedding_buffer_HBM23, s_embedding_buffer_wide_HBM23);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_24>(s_embedding_buffer_HBM24, s_embedding_buffer_wide_HBM24);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_25>(s_embedding_buffer_HBM25, s_embedding_buffer_wide_HBM25);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_26>(s_embedding_buffer_HBM26, s_embedding_buffer_wide_HBM26);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_27>(s_embedding_buffer_HBM27, s_embedding_buffer_wide_HBM27);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_28>(s_embedding_buffer_HBM28, s_embedding_buffer_wide_HBM28);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_29>(s_embedding_buffer_HBM29, s_embedding_buffer_wide_HBM29);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_30>(s_embedding_buffer_HBM30, s_embedding_buffer_wide_HBM30);
    int_to_wide<t_axi, VECTOR_SIZE_HBM_BANK_31>(s_embedding_buffer_HBM31, s_embedding_buffer_wide_HBM31);

    int_to_wide<t_axi, VECTOR_SIZE_DDR_BANK_0>(s_embedding_buffer_DDR0, s_embedding_buffer_wide_DDR0);
    int_to_wide<t_axi, VECTOR_SIZE_DDR_BANK_1>(s_embedding_buffer_DDR1, s_embedding_buffer_wide_DDR1);

    int_to_wide<t_axi, VECTOR_SIZE_PLRAM_BANK_0>(s_embedding_buffer_PLRAM0, s_embedding_buffer_wide_PLRAM0);
    int_to_wide<t_axi, VECTOR_SIZE_PLRAM_BANK_1>(s_embedding_buffer_PLRAM1, s_embedding_buffer_wide_PLRAM1);
    int_to_wide<t_axi, VECTOR_SIZE_PLRAM_BANK_2>(s_embedding_buffer_PLRAM2, s_embedding_buffer_wide_PLRAM2);
    int_to_wide<t_axi, VECTOR_SIZE_PLRAM_BANK_3>(s_embedding_buffer_PLRAM3, s_embedding_buffer_wide_PLRAM3);

    gather_embeddings(
        s_embedding_buffer_wide_HBM0, s_embedding_buffer_wide_HBM1, 
        s_embedding_buffer_wide_HBM2, s_embedding_buffer_wide_HBM3, 
        s_embedding_buffer_wide_HBM4, s_embedding_buffer_wide_HBM5, 
        s_embedding_buffer_wide_HBM6, s_embedding_buffer_wide_HBM7, 
        s_embedding_buffer_wide_HBM8, s_embedding_buffer_wide_HBM9, 
        s_embedding_buffer_wide_HBM10, s_embedding_buffer_wide_HBM11, 
        s_embedding_buffer_wide_HBM12, s_embedding_buffer_wide_HBM13, 
        s_embedding_buffer_wide_HBM14, s_embedding_buffer_wide_HBM15, 
        s_embedding_buffer_wide_HBM16, s_embedding_buffer_wide_HBM17, 
        s_embedding_buffer_wide_HBM18, s_embedding_buffer_wide_HBM19, 
        s_embedding_buffer_wide_HBM20, s_embedding_buffer_wide_HBM21, 
        s_embedding_buffer_wide_HBM22, s_embedding_buffer_wide_HBM23, 
        s_embedding_buffer_wide_HBM24, s_embedding_buffer_wide_HBM25, 
        s_embedding_buffer_wide_HBM26, s_embedding_buffer_wide_HBM27, 
        s_embedding_buffer_wide_HBM28, s_embedding_buffer_wide_HBM29, 
        s_embedding_buffer_wide_HBM30, s_embedding_buffer_wide_HBM31,
        s_embedding_buffer_wide_DDR0, s_embedding_buffer_wide_DDR1,
        s_embedding_buffer_wide_PLRAM0, s_embedding_buffer_wide_PLRAM1, 
        s_embedding_buffer_wide_PLRAM2, s_embedding_buffer_wide_PLRAM3,
        s_feature_in);

//////////////////////////////     NN Computation     ////////////////////////////// 

/////////////////////////   Layer 1   /////////////////////////     

    // replicate_feature_1PEs<INPUT_SIZE>(
    //     s_feature_in, 
    //     s_feature1_PE0);
    // replicate_feature_8PEs<INPUT_SIZE>(
    //     s_feature_in, 
    //     s_feature1_PE0, s_feature1_PE1, s_feature1_PE2, s_feature1_PE3, 
    //     s_feature1_PE4, s_feature1_PE5, s_feature1_PE6, s_feature1_PE7);
    // replicate_feature_16PEs<INPUT_SIZE>(
    //     s_feature_in, 
    //     s_feature1_PE0, s_feature1_PE1, s_feature1_PE2, s_feature1_PE3, 
    //     s_feature1_PE4, s_feature1_PE5, s_feature1_PE6, s_feature1_PE7, 
    //     s_feature1_PE8, s_feature1_PE9, s_feature1_PE10, s_feature1_PE11, 
    //     s_feature1_PE12, s_feature1_PE13, s_feature1_PE14, s_feature1_PE15);
    // replicate_feature_32PEs<INPUT_SIZE>(
    //     s_feature_in, 
    //     s_feature1_PE0, s_feature1_PE1, s_feature1_PE2, s_feature1_PE3, 
    //     s_feature1_PE4, s_feature1_PE5, s_feature1_PE6, s_feature1_PE7, 
    //     s_feature1_PE8, s_feature1_PE9, s_feature1_PE10, s_feature1_PE11, 
    //     s_feature1_PE12, s_feature1_PE13, s_feature1_PE14, s_feature1_PE15, 
    //     s_feature1_PE16, s_feature1_PE17, s_feature1_PE18, s_feature1_PE19, 
    //     s_feature1_PE20, s_feature1_PE21, s_feature1_PE22, s_feature1_PE23, 
    //     s_feature1_PE24, s_feature1_PE25, s_feature1_PE26, s_feature1_PE27, 
    //     s_feature1_PE28, s_feature1_PE29, s_feature1_PE30, s_feature1_PE31);
    // replicate_feature_64PEs<INPUT_SIZE>(
    //     s_feature_in, 
    //     s_feature1_PE0, s_feature1_PE1, s_feature1_PE2, s_feature1_PE3, 
    //     s_feature1_PE4, s_feature1_PE5, s_feature1_PE6, s_feature1_PE7, 
    //     s_feature1_PE8, s_feature1_PE9, s_feature1_PE10, s_feature1_PE11, 
    //     s_feature1_PE12, s_feature1_PE13, s_feature1_PE14, s_feature1_PE15, 
    //     s_feature1_PE16, s_feature1_PE17, s_feature1_PE18, s_feature1_PE19, 
    //     s_feature1_PE20, s_feature1_PE21, s_feature1_PE22, s_feature1_PE23, 
    //     s_feature1_PE24, s_feature1_PE25, s_feature1_PE26, s_feature1_PE27, 
    //     s_feature1_PE28, s_feature1_PE29, s_feature1_PE30, s_feature1_PE31, 
    //     s_feature1_PE32, s_feature1_PE33, s_feature1_PE34, s_feature1_PE35, 
    //     s_feature1_PE36, s_feature1_PE37, s_feature1_PE38, s_feature1_PE39, 
    //     s_feature1_PE40, s_feature1_PE41, s_feature1_PE42, s_feature1_PE43, 
    //     s_feature1_PE44, s_feature1_PE45, s_feature1_PE46, s_feature1_PE47, 
    //     s_feature1_PE48, s_feature1_PE49, s_feature1_PE50, s_feature1_PE51, 
    //     s_feature1_PE52, s_feature1_PE53, s_feature1_PE54, s_feature1_PE55, 
    //     s_feature1_PE56, s_feature1_PE57, s_feature1_PE58, s_feature1_PE59, 
    //     s_feature1_PE60, s_feature1_PE61, s_feature1_PE62, s_feature1_PE63);
    replicate_feature_128PEs<INPUT_SIZE>(
        s_feature_in, 
        s_feature1_PE0, s_feature1_PE1, s_feature1_PE2, s_feature1_PE3, 
        s_feature1_PE4, s_feature1_PE5, s_feature1_PE6, s_feature1_PE7, 
        s_feature1_PE8, s_feature1_PE9, s_feature1_PE10, s_feature1_PE11, 
        s_feature1_PE12, s_feature1_PE13, s_feature1_PE14, s_feature1_PE15, 
        s_feature1_PE16, s_feature1_PE17, s_feature1_PE18, s_feature1_PE19, 
        s_feature1_PE20, s_feature1_PE21, s_feature1_PE22, s_feature1_PE23, 
        s_feature1_PE24, s_feature1_PE25, s_feature1_PE26, s_feature1_PE27, 
        s_feature1_PE28, s_feature1_PE29, s_feature1_PE30, s_feature1_PE31, 
        s_feature1_PE32, s_feature1_PE33, s_feature1_PE34, s_feature1_PE35, 
        s_feature1_PE36, s_feature1_PE37, s_feature1_PE38, s_feature1_PE39, 
        s_feature1_PE40, s_feature1_PE41, s_feature1_PE42, s_feature1_PE43, 
        s_feature1_PE44, s_feature1_PE45, s_feature1_PE46, s_feature1_PE47, 
        s_feature1_PE48, s_feature1_PE49, s_feature1_PE50, s_feature1_PE51, 
        s_feature1_PE52, s_feature1_PE53, s_feature1_PE54, s_feature1_PE55, 
        s_feature1_PE56, s_feature1_PE57, s_feature1_PE58, s_feature1_PE59, 
        s_feature1_PE60, s_feature1_PE61, s_feature1_PE62, s_feature1_PE63, 
        s_feature1_PE64, s_feature1_PE65, s_feature1_PE66, s_feature1_PE67, 
        s_feature1_PE68, s_feature1_PE69, s_feature1_PE70, s_feature1_PE71, 
        s_feature1_PE72, s_feature1_PE73, s_feature1_PE74, s_feature1_PE75, 
        s_feature1_PE76, s_feature1_PE77, s_feature1_PE78, s_feature1_PE79, 
        s_feature1_PE80, s_feature1_PE81, s_feature1_PE82, s_feature1_PE83, 
        s_feature1_PE84, s_feature1_PE85, s_feature1_PE86, s_feature1_PE87, 
        s_feature1_PE88, s_feature1_PE89, s_feature1_PE90, s_feature1_PE91, 
        s_feature1_PE92, s_feature1_PE93, s_feature1_PE94, s_feature1_PE95, 
        s_feature1_PE96, s_feature1_PE97, s_feature1_PE98, s_feature1_PE99, 
        s_feature1_PE100, s_feature1_PE101, s_feature1_PE102, s_feature1_PE103, 
        s_feature1_PE104, s_feature1_PE105, s_feature1_PE106, s_feature1_PE107, 
        s_feature1_PE108, s_feature1_PE109, s_feature1_PE110, s_feature1_PE111, 
        s_feature1_PE112, s_feature1_PE113, s_feature1_PE114, s_feature1_PE115, 
        s_feature1_PE116, s_feature1_PE117, s_feature1_PE118, s_feature1_PE119, 
        s_feature1_PE120, s_feature1_PE121, s_feature1_PE122, s_feature1_PE123, 
        s_feature1_PE124, s_feature1_PE125, s_feature1_PE126, s_feature1_PE127);

    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE0, s_result1_PE0);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE1, s_result1_PE1);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE2, s_result1_PE2);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE3, s_result1_PE3);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE4, s_result1_PE4);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE5, s_result1_PE5);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE6, s_result1_PE6);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE7, s_result1_PE7);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE8, s_result1_PE8);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE9, s_result1_PE9);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE10, s_result1_PE10);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE11, s_result1_PE11);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE12, s_result1_PE12);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE13, s_result1_PE13);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE14, s_result1_PE14);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE15, s_result1_PE15);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE16, s_result1_PE16);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE17, s_result1_PE17);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE18, s_result1_PE18);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE19, s_result1_PE19);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE20, s_result1_PE20);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE21, s_result1_PE21);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE22, s_result1_PE22);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE23, s_result1_PE23);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE24, s_result1_PE24);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE25, s_result1_PE25);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE26, s_result1_PE26);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE27, s_result1_PE27);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE28, s_result1_PE28);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE29, s_result1_PE29);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE30, s_result1_PE30);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE31, s_result1_PE31);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE32, s_result1_PE32);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE33, s_result1_PE33);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE34, s_result1_PE34);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE35, s_result1_PE35);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE36, s_result1_PE36);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE37, s_result1_PE37);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE38, s_result1_PE38);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE39, s_result1_PE39);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE40, s_result1_PE40);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE41, s_result1_PE41);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE42, s_result1_PE42);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE43, s_result1_PE43);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE44, s_result1_PE44);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE45, s_result1_PE45);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE46, s_result1_PE46);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE47, s_result1_PE47);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE48, s_result1_PE48);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE49, s_result1_PE49);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE50, s_result1_PE50);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE51, s_result1_PE51);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE52, s_result1_PE52);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE53, s_result1_PE53);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE54, s_result1_PE54);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE55, s_result1_PE55);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE56, s_result1_PE56);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE57, s_result1_PE57);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE58, s_result1_PE58);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE59, s_result1_PE59);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE60, s_result1_PE60);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE61, s_result1_PE61);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE62, s_result1_PE62);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE63, s_result1_PE63);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE64, s_result1_PE64);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE65, s_result1_PE65);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE66, s_result1_PE66);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE67, s_result1_PE67);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE68, s_result1_PE68);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE69, s_result1_PE69);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE70, s_result1_PE70);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE71, s_result1_PE71);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE72, s_result1_PE72);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE73, s_result1_PE73);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE74, s_result1_PE74);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE75, s_result1_PE75);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE76, s_result1_PE76);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE77, s_result1_PE77);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE78, s_result1_PE78);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE79, s_result1_PE79);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE80, s_result1_PE80);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE81, s_result1_PE81);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE82, s_result1_PE82);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE83, s_result1_PE83);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE84, s_result1_PE84);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE85, s_result1_PE85);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE86, s_result1_PE86);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE87, s_result1_PE87);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE88, s_result1_PE88);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE89, s_result1_PE89);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE90, s_result1_PE90);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE91, s_result1_PE91);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE92, s_result1_PE92);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE93, s_result1_PE93);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE94, s_result1_PE94);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE95, s_result1_PE95);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE96, s_result1_PE96);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE97, s_result1_PE97);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE98, s_result1_PE98);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE99, s_result1_PE99);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE100, s_result1_PE100);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE101, s_result1_PE101);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE102, s_result1_PE102);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE103, s_result1_PE103);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE104, s_result1_PE104);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE105, s_result1_PE105);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE106, s_result1_PE106);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE107, s_result1_PE107);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE108, s_result1_PE108);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE109, s_result1_PE109);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE110, s_result1_PE110);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE111, s_result1_PE111);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE112, s_result1_PE112);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE113, s_result1_PE113);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE114, s_result1_PE114);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE115, s_result1_PE115);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE116, s_result1_PE116);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE117, s_result1_PE117);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE118, s_result1_PE118);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE119, s_result1_PE119);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE120, s_result1_PE120);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE121, s_result1_PE121);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE122, s_result1_PE122);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE123, s_result1_PE123);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE124, s_result1_PE124);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE125, s_result1_PE125);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE126, s_result1_PE126);
    matmul_PE_UNROLL8<INPUT_SIZE, ROW_PER_PE1>(s_feature1_PE127, s_result1_PE127);

    // gather_results_1PEs<ROW_PER_PE1>(
    //     s_result1_PE0,
    //     s_result1_all);
    // gather_results_8PEs<ROW_PER_PE1>(
    //     s_result1_PE0, s_result1_PE1, s_result1_PE2, s_result1_PE3, 
    //     s_result1_PE4, s_result1_PE5, s_result1_PE6, s_result1_PE7,
    //     s_result1_all);
    // gather_results_16PEs<ROW_PER_PE1>(
    //     s_result1_PE0, s_result1_PE1, s_result1_PE2, s_result1_PE3, 
    //     s_result1_PE4, s_result1_PE5, s_result1_PE6, s_result1_PE7, 
    //     s_result1_PE8, s_result1_PE9, s_result1_PE10, s_result1_PE11, 
    //     s_result1_PE12, s_result1_PE13, s_result1_PE14, s_result1_PE15,
    //     s_result1_all);
    // gather_results_32PEs<ROW_PER_PE1>(
    //     s_result1_PE0, s_result1_PE1, s_result1_PE2, s_result1_PE3, 
    //     s_result1_PE4, s_result1_PE5, s_result1_PE6, s_result1_PE7, 
    //     s_result1_PE8, s_result1_PE9, s_result1_PE10, s_result1_PE11, 
    //     s_result1_PE12, s_result1_PE13, s_result1_PE14, s_result1_PE15, 
    //     s_result1_PE16, s_result1_PE17, s_result1_PE18, s_result1_PE19, 
    //     s_result1_PE20, s_result1_PE21, s_result1_PE22, s_result1_PE23, 
    //     s_result1_PE24, s_result1_PE25, s_result1_PE26, s_result1_PE27, 
    //     s_result1_PE28, s_result1_PE29, s_result1_PE30, s_result1_PE31, 
    //     s_result1_all);
    // gather_results_64PEs<ROW_PER_PE1>(
    //     s_result1_PE0, s_result1_PE1, s_result1_PE2, s_result1_PE3, 
    //     s_result1_PE4, s_result1_PE5, s_result1_PE6, s_result1_PE7, 
    //     s_result1_PE8, s_result1_PE9, s_result1_PE10, s_result1_PE11, 
    //     s_result1_PE12, s_result1_PE13, s_result1_PE14, s_result1_PE15, 
    //     s_result1_PE16, s_result1_PE17, s_result1_PE18, s_result1_PE19, 
    //     s_result1_PE20, s_result1_PE21, s_result1_PE22, s_result1_PE23, 
    //     s_result1_PE24, s_result1_PE25, s_result1_PE26, s_result1_PE27, 
    //     s_result1_PE28, s_result1_PE29, s_result1_PE30, s_result1_PE31, 
    //     s_result1_PE32, s_result1_PE33, s_result1_PE34, s_result1_PE35, 
    //     s_result1_PE36, s_result1_PE37, s_result1_PE38, s_result1_PE39, 
    //     s_result1_PE40, s_result1_PE41, s_result1_PE42, s_result1_PE43, 
    //     s_result1_PE44, s_result1_PE45, s_result1_PE46, s_result1_PE47, 
    //     s_result1_PE48, s_result1_PE49, s_result1_PE50, s_result1_PE51, 
    //     s_result1_PE52, s_result1_PE53, s_result1_PE54, s_result1_PE55, 
    //     s_result1_PE56, s_result1_PE57, s_result1_PE58, s_result1_PE59, 
    //     s_result1_PE60, s_result1_PE61, s_result1_PE62, s_result1_PE63, 
    //     s_result1_all);
    gather_results_128PEs<ROW_PER_PE1>(
        s_result1_PE0, s_result1_PE1, s_result1_PE2, s_result1_PE3, 
        s_result1_PE4, s_result1_PE5, s_result1_PE6, s_result1_PE7, 
        s_result1_PE8, s_result1_PE9, s_result1_PE10, s_result1_PE11, 
        s_result1_PE12, s_result1_PE13, s_result1_PE14, s_result1_PE15, 
        s_result1_PE16, s_result1_PE17, s_result1_PE18, s_result1_PE19, 
        s_result1_PE20, s_result1_PE21, s_result1_PE22, s_result1_PE23, 
        s_result1_PE24, s_result1_PE25, s_result1_PE26, s_result1_PE27, 
        s_result1_PE28, s_result1_PE29, s_result1_PE30, s_result1_PE31, 
        s_result1_PE32, s_result1_PE33, s_result1_PE34, s_result1_PE35, 
        s_result1_PE36, s_result1_PE37, s_result1_PE38, s_result1_PE39, 
        s_result1_PE40, s_result1_PE41, s_result1_PE42, s_result1_PE43, 
        s_result1_PE44, s_result1_PE45, s_result1_PE46, s_result1_PE47, 
        s_result1_PE48, s_result1_PE49, s_result1_PE50, s_result1_PE51, 
        s_result1_PE52, s_result1_PE53, s_result1_PE54, s_result1_PE55, 
        s_result1_PE56, s_result1_PE57, s_result1_PE58, s_result1_PE59, 
        s_result1_PE60, s_result1_PE61, s_result1_PE62, s_result1_PE63, 
        s_result1_PE64, s_result1_PE65, s_result1_PE66, s_result1_PE67, 
        s_result1_PE68, s_result1_PE69, s_result1_PE70, s_result1_PE71, 
        s_result1_PE72, s_result1_PE73, s_result1_PE74, s_result1_PE75, 
        s_result1_PE76, s_result1_PE77, s_result1_PE78, s_result1_PE79, 
        s_result1_PE80, s_result1_PE81, s_result1_PE82, s_result1_PE83, 
        s_result1_PE84, s_result1_PE85, s_result1_PE86, s_result1_PE87, 
        s_result1_PE88, s_result1_PE89, s_result1_PE90, s_result1_PE91, 
        s_result1_PE92, s_result1_PE93, s_result1_PE94, s_result1_PE95, 
        s_result1_PE96, s_result1_PE97, s_result1_PE98, s_result1_PE99, 
        s_result1_PE100, s_result1_PE101, s_result1_PE102, s_result1_PE103, 
        s_result1_PE104, s_result1_PE105, s_result1_PE106, s_result1_PE107, 
        s_result1_PE108, s_result1_PE109, s_result1_PE110, s_result1_PE111, 
        s_result1_PE112, s_result1_PE113, s_result1_PE114, s_result1_PE115, 
        s_result1_PE116, s_result1_PE117, s_result1_PE118, s_result1_PE119, 
        s_result1_PE120, s_result1_PE121, s_result1_PE122, s_result1_PE123, 
        s_result1_PE124, s_result1_PE125, s_result1_PE126, s_result1_PE127,
        s_result1_all);
    
/////////////////////////   Layer 2   ///////////////////////// 
    // replicate_feature_1PEs<HIDDEN_SIZE1>(
    //     s_result1_all, 
    //     s_feature2_PE0);
    // replicate_feature_8PEs<HIDDEN_SIZE1>(
    //     s_result1_all, 
    //     s_feature2_PE0, s_feature2_PE1, s_feature2_PE2, s_feature2_PE3, 
    //     s_feature2_PE4, s_feature2_PE5, s_feature2_PE6, s_feature2_PE7);
    // replicate_feature_16PEs<HIDDEN_SIZE1>(
    //     s_result1_all, 
    //     s_feature2_PE0, s_feature2_PE1, s_feature2_PE2, s_feature2_PE3, 
    //     s_feature2_PE4, s_feature2_PE5, s_feature2_PE6, s_feature2_PE7, 
    //     s_feature2_PE8, s_feature2_PE9, s_feature2_PE10, s_feature2_PE11, 
    //     s_feature2_PE12, s_feature2_PE13, s_feature2_PE14, s_feature2_PE15);
    // replicate_feature_32PEs<HIDDEN_SIZE1>(
    //     s_result1_all, 
    //     s_feature2_PE0, s_feature2_PE1, s_feature2_PE2, s_feature2_PE3, 
    //     s_feature2_PE4, s_feature2_PE5, s_feature2_PE6, s_feature2_PE7, 
    //     s_feature2_PE8, s_feature2_PE9, s_feature2_PE10, s_feature2_PE11, 
    //     s_feature2_PE12, s_feature2_PE13, s_feature2_PE14, s_feature2_PE15, 
    //     s_feature2_PE16, s_feature2_PE17, s_feature2_PE18, s_feature2_PE19, 
    //     s_feature2_PE20, s_feature2_PE21, s_feature2_PE22, s_feature2_PE23, 
    //     s_feature2_PE24, s_feature2_PE25, s_feature2_PE26, s_feature2_PE27, 
    //     s_feature2_PE28, s_feature2_PE29, s_feature2_PE30, s_feature2_PE31);
    // replicate_feature_64PEs<HIDDEN_SIZE1>(
    //     s_result1_all, 
    //     s_feature2_PE0, s_feature2_PE1, s_feature2_PE2, s_feature2_PE3, 
    //     s_feature2_PE4, s_feature2_PE5, s_feature2_PE6, s_feature2_PE7, 
    //     s_feature2_PE8, s_feature2_PE9, s_feature2_PE10, s_feature2_PE11, 
    //     s_feature2_PE12, s_feature2_PE13, s_feature2_PE14, s_feature2_PE15, 
    //     s_feature2_PE16, s_feature2_PE17, s_feature2_PE18, s_feature2_PE19, 
    //     s_feature2_PE20, s_feature2_PE21, s_feature2_PE22, s_feature2_PE23, 
    //     s_feature2_PE24, s_feature2_PE25, s_feature2_PE26, s_feature2_PE27, 
    //     s_feature2_PE28, s_feature2_PE29, s_feature2_PE30, s_feature2_PE31, 
    //     s_feature2_PE32, s_feature2_PE33, s_feature2_PE34, s_feature2_PE35, 
    //     s_feature2_PE36, s_feature2_PE37, s_feature2_PE38, s_feature2_PE39, 
    //     s_feature2_PE40, s_feature2_PE41, s_feature2_PE42, s_feature2_PE43, 
    //     s_feature2_PE44, s_feature2_PE45, s_feature2_PE46, s_feature2_PE47, 
    //     s_feature2_PE48, s_feature2_PE49, s_feature2_PE50, s_feature2_PE51, 
    //     s_feature2_PE52, s_feature2_PE53, s_feature2_PE54, s_feature2_PE55, 
    //     s_feature2_PE56, s_feature2_PE57, s_feature2_PE58, s_feature2_PE59, 
    //     s_feature2_PE60, s_feature2_PE61, s_feature2_PE62, s_feature2_PE63);
    replicate_feature_128PEs<HIDDEN_SIZE1>(
        s_result1_all, 
        s_feature2_PE0, s_feature2_PE1, s_feature2_PE2, s_feature2_PE3, 
        s_feature2_PE4, s_feature2_PE5, s_feature2_PE6, s_feature2_PE7, 
        s_feature2_PE8, s_feature2_PE9, s_feature2_PE10, s_feature2_PE11, 
        s_feature2_PE12, s_feature2_PE13, s_feature2_PE14, s_feature2_PE15, 
        s_feature2_PE16, s_feature2_PE17, s_feature2_PE18, s_feature2_PE19, 
        s_feature2_PE20, s_feature2_PE21, s_feature2_PE22, s_feature2_PE23, 
        s_feature2_PE24, s_feature2_PE25, s_feature2_PE26, s_feature2_PE27, 
        s_feature2_PE28, s_feature2_PE29, s_feature2_PE30, s_feature2_PE31, 
        s_feature2_PE32, s_feature2_PE33, s_feature2_PE34, s_feature2_PE35, 
        s_feature2_PE36, s_feature2_PE37, s_feature2_PE38, s_feature2_PE39, 
        s_feature2_PE40, s_feature2_PE41, s_feature2_PE42, s_feature2_PE43, 
        s_feature2_PE44, s_feature2_PE45, s_feature2_PE46, s_feature2_PE47, 
        s_feature2_PE48, s_feature2_PE49, s_feature2_PE50, s_feature2_PE51, 
        s_feature2_PE52, s_feature2_PE53, s_feature2_PE54, s_feature2_PE55, 
        s_feature2_PE56, s_feature2_PE57, s_feature2_PE58, s_feature2_PE59, 
        s_feature2_PE60, s_feature2_PE61, s_feature2_PE62, s_feature2_PE63, 
        s_feature2_PE64, s_feature2_PE65, s_feature2_PE66, s_feature2_PE67, 
        s_feature2_PE68, s_feature2_PE69, s_feature2_PE70, s_feature2_PE71, 
        s_feature2_PE72, s_feature2_PE73, s_feature2_PE74, s_feature2_PE75, 
        s_feature2_PE76, s_feature2_PE77, s_feature2_PE78, s_feature2_PE79, 
        s_feature2_PE80, s_feature2_PE81, s_feature2_PE82, s_feature2_PE83, 
        s_feature2_PE84, s_feature2_PE85, s_feature2_PE86, s_feature2_PE87, 
        s_feature2_PE88, s_feature2_PE89, s_feature2_PE90, s_feature2_PE91, 
        s_feature2_PE92, s_feature2_PE93, s_feature2_PE94, s_feature2_PE95, 
        s_feature2_PE96, s_feature2_PE97, s_feature2_PE98, s_feature2_PE99, 
        s_feature2_PE100, s_feature2_PE101, s_feature2_PE102, s_feature2_PE103, 
        s_feature2_PE104, s_feature2_PE105, s_feature2_PE106, s_feature2_PE107, 
        s_feature2_PE108, s_feature2_PE109, s_feature2_PE110, s_feature2_PE111, 
        s_feature2_PE112, s_feature2_PE113, s_feature2_PE114, s_feature2_PE115, 
        s_feature2_PE116, s_feature2_PE117, s_feature2_PE118, s_feature2_PE119, 
        s_feature2_PE120, s_feature2_PE121, s_feature2_PE122, s_feature2_PE123, 
        s_feature2_PE124, s_feature2_PE125, s_feature2_PE126, s_feature2_PE127);

    // for (int i = 0; i < PE_NUM2; i++) {
    //     #pragma HLS unroll
    //     matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE[i], s_result2_PE[i]);
    // }
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE0, s_result2_PE0);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE1, s_result2_PE1);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE2, s_result2_PE2);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE3, s_result2_PE3);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE4, s_result2_PE4);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE5, s_result2_PE5);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE6, s_result2_PE6);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE7, s_result2_PE7);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE8, s_result2_PE8);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE9, s_result2_PE9);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE10, s_result2_PE10);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE11, s_result2_PE11);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE12, s_result2_PE12);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE13, s_result2_PE13);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE14, s_result2_PE14);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE15, s_result2_PE15);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE16, s_result2_PE16);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE17, s_result2_PE17);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE18, s_result2_PE18);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE19, s_result2_PE19);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE20, s_result2_PE20);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE21, s_result2_PE21);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE22, s_result2_PE22);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE23, s_result2_PE23);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE24, s_result2_PE24);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE25, s_result2_PE25);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE26, s_result2_PE26);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE27, s_result2_PE27);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE28, s_result2_PE28);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE29, s_result2_PE29);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE30, s_result2_PE30);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE31, s_result2_PE31);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE32, s_result2_PE32);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE33, s_result2_PE33);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE34, s_result2_PE34);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE35, s_result2_PE35);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE36, s_result2_PE36);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE37, s_result2_PE37);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE38, s_result2_PE38);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE39, s_result2_PE39);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE40, s_result2_PE40);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE41, s_result2_PE41);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE42, s_result2_PE42);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE43, s_result2_PE43);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE44, s_result2_PE44);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE45, s_result2_PE45);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE46, s_result2_PE46);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE47, s_result2_PE47);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE48, s_result2_PE48);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE49, s_result2_PE49);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE50, s_result2_PE50);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE51, s_result2_PE51);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE52, s_result2_PE52);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE53, s_result2_PE53);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE54, s_result2_PE54);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE55, s_result2_PE55);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE56, s_result2_PE56);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE57, s_result2_PE57);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE58, s_result2_PE58);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE59, s_result2_PE59);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE60, s_result2_PE60);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE61, s_result2_PE61);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE62, s_result2_PE62);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE63, s_result2_PE63);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE64, s_result2_PE64);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE65, s_result2_PE65);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE66, s_result2_PE66);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE67, s_result2_PE67);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE68, s_result2_PE68);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE69, s_result2_PE69);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE70, s_result2_PE70);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE71, s_result2_PE71);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE72, s_result2_PE72);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE73, s_result2_PE73);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE74, s_result2_PE74);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE75, s_result2_PE75);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE76, s_result2_PE76);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE77, s_result2_PE77);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE78, s_result2_PE78);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE79, s_result2_PE79);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE80, s_result2_PE80);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE81, s_result2_PE81);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE82, s_result2_PE82);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE83, s_result2_PE83);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE84, s_result2_PE84);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE85, s_result2_PE85);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE86, s_result2_PE86);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE87, s_result2_PE87);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE88, s_result2_PE88);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE89, s_result2_PE89);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE90, s_result2_PE90);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE91, s_result2_PE91);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE92, s_result2_PE92);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE93, s_result2_PE93);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE94, s_result2_PE94);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE95, s_result2_PE95);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE96, s_result2_PE96);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE97, s_result2_PE97);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE98, s_result2_PE98);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE99, s_result2_PE99);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE100, s_result2_PE100);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE101, s_result2_PE101);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE102, s_result2_PE102);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE103, s_result2_PE103);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE104, s_result2_PE104);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE105, s_result2_PE105);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE106, s_result2_PE106);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE107, s_result2_PE107);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE108, s_result2_PE108);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE109, s_result2_PE109);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE110, s_result2_PE110);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE111, s_result2_PE111);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE112, s_result2_PE112);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE113, s_result2_PE113);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE114, s_result2_PE114);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE115, s_result2_PE115);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE116, s_result2_PE116);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE117, s_result2_PE117);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE118, s_result2_PE118);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE119, s_result2_PE119);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE120, s_result2_PE120);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE121, s_result2_PE121);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE122, s_result2_PE122);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE123, s_result2_PE123);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE124, s_result2_PE124);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE125, s_result2_PE125);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE126, s_result2_PE126);
    matmul_PE_UNROLL8<HIDDEN_SIZE1, ROW_PER_PE2>(s_feature2_PE127, s_result2_PE127);

    // gather_results_1PEs<ROW_PER_PE2>(
    //     s_result2_PE0,
    //     s_result2_all);
    // gather_results_8PEs<ROW_PER_PE2>(
    //     s_result2_PE0, s_result2_PE1, s_result2_PE2, s_result2_PE3, 
    //     s_result2_PE4, s_result2_PE5, s_result2_PE6, s_result2_PE7,
    //     s_result2_all);
    // gather_results_16PEs<ROW_PER_PE2>(
    //     s_result2_PE0, s_result2_PE1, s_result2_PE2, s_result2_PE3, 
    //     s_result2_PE4, s_result2_PE5, s_result2_PE6, s_result2_PE7, 
    //     s_result2_PE8, s_result2_PE9, s_result2_PE10, s_result2_PE11, 
    //     s_result2_PE12, s_result2_PE13, s_result2_PE14, s_result2_PE15, 
    //     s_result2_all);
    // gather_results_32PEs<ROW_PER_PE2>(
    //     s_result2_PE0, s_result2_PE1, s_result2_PE2, s_result2_PE3, 
    //     s_result2_PE4, s_result2_PE5, s_result2_PE6, s_result2_PE7, 
    //     s_result2_PE8, s_result2_PE9, s_result2_PE10, s_result2_PE11, 
    //     s_result2_PE12, s_result2_PE13, s_result2_PE14, s_result2_PE15, 
    //     s_result2_PE16, s_result2_PE17, s_result2_PE18, s_result2_PE19, 
    //     s_result2_PE20, s_result2_PE21, s_result2_PE22, s_result2_PE23, 
    //     s_result2_PE24, s_result2_PE25, s_result2_PE26, s_result2_PE27, 
    //     s_result2_PE28, s_result2_PE29, s_result2_PE30, s_result2_PE31, 
    //     s_result2_all);
    // gather_results_64PEs<ROW_PER_PE2>(
    //     s_result2_PE0, s_result2_PE1, s_result2_PE2, s_result2_PE3, 
    //     s_result2_PE4, s_result2_PE5, s_result2_PE6, s_result2_PE7, 
    //     s_result2_PE8, s_result2_PE9, s_result2_PE10, s_result2_PE11, 
    //     s_result2_PE12, s_result2_PE13, s_result2_PE14, s_result2_PE15, 
    //     s_result2_PE16, s_result2_PE17, s_result2_PE18, s_result2_PE19, 
    //     s_result2_PE20, s_result2_PE21, s_result2_PE22, s_result2_PE23, 
    //     s_result2_PE24, s_result2_PE25, s_result2_PE26, s_result2_PE27, 
    //     s_result2_PE28, s_result2_PE29, s_result2_PE30, s_result2_PE31, 
    //     s_result2_PE32, s_result2_PE33, s_result2_PE34, s_result2_PE35, 
    //     s_result2_PE36, s_result2_PE37, s_result2_PE38, s_result2_PE39, 
    //     s_result2_PE40, s_result2_PE41, s_result2_PE42, s_result2_PE43, 
    //     s_result2_PE44, s_result2_PE45, s_result2_PE46, s_result2_PE47, 
    //     s_result2_PE48, s_result2_PE49, s_result2_PE50, s_result2_PE51, 
    //     s_result2_PE52, s_result2_PE53, s_result2_PE54, s_result2_PE55, 
    //     s_result2_PE56, s_result2_PE57, s_result2_PE58, s_result2_PE59, 
    //     s_result2_PE60, s_result2_PE61, s_result2_PE62, s_result2_PE63, 
    //     s_result2_all);
    gather_results_128PEs<ROW_PER_PE2>(
        s_result2_PE0, s_result2_PE1, s_result2_PE2, s_result2_PE3, 
        s_result2_PE4, s_result2_PE5, s_result2_PE6, s_result2_PE7, 
        s_result2_PE8, s_result2_PE9, s_result2_PE10, s_result2_PE11, 
        s_result2_PE12, s_result2_PE13, s_result2_PE14, s_result2_PE15, 
        s_result2_PE16, s_result2_PE17, s_result2_PE18, s_result2_PE19, 
        s_result2_PE20, s_result2_PE21, s_result2_PE22, s_result2_PE23, 
        s_result2_PE24, s_result2_PE25, s_result2_PE26, s_result2_PE27, 
        s_result2_PE28, s_result2_PE29, s_result2_PE30, s_result2_PE31, 
        s_result2_PE32, s_result2_PE33, s_result2_PE34, s_result2_PE35, 
        s_result2_PE36, s_result2_PE37, s_result2_PE38, s_result2_PE39, 
        s_result2_PE40, s_result2_PE41, s_result2_PE42, s_result2_PE43, 
        s_result2_PE44, s_result2_PE45, s_result2_PE46, s_result2_PE47, 
        s_result2_PE48, s_result2_PE49, s_result2_PE50, s_result2_PE51, 
        s_result2_PE52, s_result2_PE53, s_result2_PE54, s_result2_PE55, 
        s_result2_PE56, s_result2_PE57, s_result2_PE58, s_result2_PE59, 
        s_result2_PE60, s_result2_PE61, s_result2_PE62, s_result2_PE63, 
        s_result2_PE64, s_result2_PE65, s_result2_PE66, s_result2_PE67, 
        s_result2_PE68, s_result2_PE69, s_result2_PE70, s_result2_PE71, 
        s_result2_PE72, s_result2_PE73, s_result2_PE74, s_result2_PE75, 
        s_result2_PE76, s_result2_PE77, s_result2_PE78, s_result2_PE79, 
        s_result2_PE80, s_result2_PE81, s_result2_PE82, s_result2_PE83, 
        s_result2_PE84, s_result2_PE85, s_result2_PE86, s_result2_PE87, 
        s_result2_PE88, s_result2_PE89, s_result2_PE90, s_result2_PE91, 
        s_result2_PE92, s_result2_PE93, s_result2_PE94, s_result2_PE95, 
        s_result2_PE96, s_result2_PE97, s_result2_PE98, s_result2_PE99, 
        s_result2_PE100, s_result2_PE101, s_result2_PE102, s_result2_PE103, 
        s_result2_PE104, s_result2_PE105, s_result2_PE106, s_result2_PE107, 
        s_result2_PE108, s_result2_PE109, s_result2_PE110, s_result2_PE111, 
        s_result2_PE112, s_result2_PE113, s_result2_PE114, s_result2_PE115, 
        s_result2_PE116, s_result2_PE117, s_result2_PE118, s_result2_PE119, 
        s_result2_PE120, s_result2_PE121, s_result2_PE122, s_result2_PE123, 
        s_result2_PE124, s_result2_PE125, s_result2_PE126, s_result2_PE127,
        s_result2_all);


/////////////////////////   Layer 3   ///////////////////////// 
    // replicate_feature_1PEs<HIDDEN_SIZE2>(
    //     s_result2_all, 
    //     s_feature3_PE0);
    // replicate_feature_8PEs<HIDDEN_SIZE2>(
    //     s_result2_all, 
    //     s_feature3_PE0, s_feature3_PE1, s_feature3_PE2, s_feature3_PE3, 
    //     s_feature3_PE4, s_feature3_PE5, s_feature3_PE6, s_feature3_PE7);
    // replicate_feature_16PEs<HIDDEN_SIZE2>(
    //     s_result2_all, 
    //     s_feature3_PE0, s_feature3_PE1, s_feature3_PE2, s_feature3_PE3, 
    //     s_feature3_PE4, s_feature3_PE5, s_feature3_PE6, s_feature3_PE7, 
    //     s_feature3_PE8, s_feature3_PE9, s_feature3_PE10, s_feature3_PE11, 
    //     s_feature3_PE12, s_feature3_PE13, s_feature3_PE14, s_feature3_PE15);    
    replicate_feature_32PEs<HIDDEN_SIZE2>(
        s_result2_all, 
        s_feature3_PE0, s_feature3_PE1, s_feature3_PE2, s_feature3_PE3, 
        s_feature3_PE4, s_feature3_PE5, s_feature3_PE6, s_feature3_PE7, 
        s_feature3_PE8, s_feature3_PE9, s_feature3_PE10, s_feature3_PE11, 
        s_feature3_PE12, s_feature3_PE13, s_feature3_PE14, s_feature3_PE15, 
        s_feature3_PE16, s_feature3_PE17, s_feature3_PE18, s_feature3_PE19, 
        s_feature3_PE20, s_feature3_PE21, s_feature3_PE22, s_feature3_PE23, 
        s_feature3_PE24, s_feature3_PE25, s_feature3_PE26, s_feature3_PE27, 
        s_feature3_PE28, s_feature3_PE29, s_feature3_PE30, s_feature3_PE31);

    // for (int i = 0; i < PE_NUM3; i++) {
    //     #pragma HLS unroll
    //     matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE[i], s_result3_PE[i]);
    // }
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE0, s_result3_PE0);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE1, s_result3_PE1);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE2, s_result3_PE2);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE3, s_result3_PE3);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE4, s_result3_PE4);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE5, s_result3_PE5);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE6, s_result3_PE6);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE7, s_result3_PE7);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE8, s_result3_PE8);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE9, s_result3_PE9);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE10, s_result3_PE10);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE11, s_result3_PE11);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE12, s_result3_PE12);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE13, s_result3_PE13);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE14, s_result3_PE14);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE15, s_result3_PE15);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE16, s_result3_PE16);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE17, s_result3_PE17);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE18, s_result3_PE18);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE19, s_result3_PE19);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE20, s_result3_PE20);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE21, s_result3_PE21);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE22, s_result3_PE22);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE23, s_result3_PE23);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE24, s_result3_PE24);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE25, s_result3_PE25);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE26, s_result3_PE26);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE27, s_result3_PE27);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE28, s_result3_PE28);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE29, s_result3_PE29);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE30, s_result3_PE30);
    matmul_PE_UNROLL8<HIDDEN_SIZE2, ROW_PER_PE3>(s_feature3_PE31, s_result3_PE31);

    // gather_results_1PEs<ROW_PER_PE3>(
    //     s_result3_PE0,
    //     s_result3_all);
    // gather_results_8PEs<ROW_PER_PE3>(
    //     s_result3_PE0, s_result3_PE1, s_result3_PE2, s_result3_PE3, 
    //     s_result3_PE4, s_result3_PE5, s_result3_PE6, s_result3_PE7,
    //     s_result3_all);
    // gather_results_16PEs<ROW_PER_PE3>(
    //     s_result3_PE0, s_result3_PE1, s_result3_PE2, s_result3_PE3, 
    //     s_result3_PE4, s_result3_PE5, s_result3_PE6, s_result3_PE7, 
    //     s_result3_PE8, s_result3_PE9, s_result3_PE10, s_result3_PE11, 
    //     s_result3_PE12, s_result3_PE13, s_result3_PE14, s_result3_PE15,
    //     s_result3_all);
    gather_results_32PEs<ROW_PER_PE3>(
        s_result3_PE0, s_result3_PE1, s_result3_PE2, s_result3_PE3, 
        s_result3_PE4, s_result3_PE5, s_result3_PE6, s_result3_PE7, 
        s_result3_PE8, s_result3_PE9, s_result3_PE10, s_result3_PE11, 
        s_result3_PE12, s_result3_PE13, s_result3_PE14, s_result3_PE15, 
        s_result3_PE16, s_result3_PE17, s_result3_PE18, s_result3_PE19, 
        s_result3_PE20, s_result3_PE21, s_result3_PE22, s_result3_PE23, 
        s_result3_PE24, s_result3_PE25, s_result3_PE26, s_result3_PE27, 
        s_result3_PE28, s_result3_PE29, s_result3_PE30, s_result3_PE31,
        s_result3_all);


/////////////////////////   Output Layer   ///////////////////////// 
    output_layer(s_result3_all, s_result_out);

//////////////////////////////     Write results     ////////////////////////////// 
    write_result(s_result_out, out_PLRAM);
}

template<
    const int START_ADDR_0, const int PADDED_SIZE_0, const int  DATA_SIZE_0, const int TABLE_SIZE_0, const int BIAS_0,
    const int START_ADDR_1, const int PADDED_SIZE_1, const int  DATA_SIZE_1, const int TABLE_SIZE_1, const int BIAS_1,
    const int START_ADDR_2, const int PADDED_SIZE_2, const int  DATA_SIZE_2, const int TABLE_SIZE_2, const int BIAS_2,
    const int START_ADDR_3, const int PADDED_SIZE_3, const int  DATA_SIZE_3, const int TABLE_SIZE_3, const int BIAS_3>
void init_PLRAM_4_tables(
    t_axi* table_PLRAM) {
    
    const D_TYPE PLRAM_template_even[8] = {0, -1, 0, -1, 0, 0, -1, 0};
    const D_TYPE PLRAM_template_odd[8] = {-1, 1, 0, 0, 0, 1, -1, 0};
    // NOTE! must use ap_int<32> here
    for (int i = 0 ; i < TABLE_SIZE_0 / 2; i++) {
        for (int j = 0; j < DATA_SIZE_0; j++) {
            table_PLRAM[START_ADDR_0 + 2 * i * PADDED_SIZE_0 + j] = PLRAM_template_even[j];
            table_PLRAM[START_ADDR_0 + (2 * i + 1) * PADDED_SIZE_0 + j] = PLRAM_template_odd[j];
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_1 / 2; i++) {
        for (int j = 0; j < DATA_SIZE_1; j++) {
            table_PLRAM[START_ADDR_1 + 2 * i * PADDED_SIZE_1 + j] = PLRAM_template_even[j];
            table_PLRAM[START_ADDR_1 + (2 * i + 1) * PADDED_SIZE_1 + j] = PLRAM_template_odd[j];
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_2 / 2; i++) {
        for (int j = 0; j < DATA_SIZE_2; j++) {
            table_PLRAM[START_ADDR_2 + 2 * i * PADDED_SIZE_2 + j] = PLRAM_template_even[j];
            table_PLRAM[START_ADDR_2 + (2 * i + 1) * PADDED_SIZE_2 + j] = PLRAM_template_odd[j];
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_3 / 2; i++) {
        for (int j = 0; j < DATA_SIZE_3; j++) {
            table_PLRAM[START_ADDR_3 + 2 * i * PADDED_SIZE_3 + j] = PLRAM_template_even[j];
            table_PLRAM[START_ADDR_3 + (2 * i + 1) * PADDED_SIZE_3 + j] = PLRAM_template_odd[j];
        }
    }
}

void load_access_idx(
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

    // batch = 32
    int idx_random[] = {3, 99, 38, 72, 29, 57, 1, 72, 36, 76, 35, 50, 37, 57, 
        13, 66, 26, 70, 41, 93, 48, 82, 44, 78, 25, 52, 3, 92, 36, 56, 46, 88};

    for (int i = 0; i < BATCH_NUM; i++) {
        
        for (int j = 0; j < BATCH_SIZE; j++) {
            #pragma HLS pipeline II=1

            int idx = idx_random[j];

            s_idx_buffer_HBM0.write(idx);
            s_idx_buffer_HBM1.write(idx);
            s_idx_buffer_HBM2.write(idx);
            s_idx_buffer_HBM3.write(idx);
            s_idx_buffer_HBM4.write(idx);
            s_idx_buffer_HBM5.write(idx);
            s_idx_buffer_HBM6.write(idx);
            s_idx_buffer_HBM7.write(idx);
            s_idx_buffer_HBM8.write(idx);
            s_idx_buffer_HBM9.write(idx);
            s_idx_buffer_HBM10.write(idx);
            s_idx_buffer_HBM11.write(idx);
            s_idx_buffer_HBM12.write(idx);
            s_idx_buffer_HBM13.write(idx);
            s_idx_buffer_HBM14.write(idx);
            s_idx_buffer_HBM15.write(idx);
            s_idx_buffer_HBM16.write(idx);
            s_idx_buffer_HBM17.write(idx);
            s_idx_buffer_HBM18.write(idx);
            s_idx_buffer_HBM19.write(idx);
            s_idx_buffer_HBM20.write(idx);
            s_idx_buffer_HBM21.write(idx);
            s_idx_buffer_HBM22.write(idx);
            s_idx_buffer_HBM23.write(idx);
            s_idx_buffer_HBM24.write(idx);
            s_idx_buffer_HBM25.write(idx);
            s_idx_buffer_HBM26.write(idx);
            s_idx_buffer_HBM27.write(idx);
            s_idx_buffer_HBM28.write(idx);
            s_idx_buffer_HBM29.write(idx);
            s_idx_buffer_HBM30.write(idx);
            s_idx_buffer_HBM31.write(idx);

            s_idx_buffer_DDR0.write(idx);
            s_idx_buffer_DDR1.write(idx);

            s_idx_buffer_PLRAM0.write(idx);
            s_idx_buffer_PLRAM1.write(idx);
            s_idx_buffer_PLRAM2.write(idx);
            s_idx_buffer_PLRAM3.write(idx);
        }
    }
}

template<
    const int START_ADDR_0, const int AXI_PADDED_SIZE_0, 
    const int START_ADDR_1, const int AXI_PADDED_SIZE_1>
void load_single_embedding_2_tables(
    hls::stream<int>& s_idx_buffer, const t_axi* table_RAM, 
    hls::stream<t_axi>& s_embedding_buffer) {
#pragma HLS INLINE off

    // 8 < data size <= 16, load 2 times
    for (int i = 0; i < BATCH_NUM * BATCH_SIZE; i++) {
        #pragma HLS LOOP_TRIPCOUNT min=trip_count_item_num max=trip_count_item_num

        int idx =  s_idx_buffer.read();

        int base_addr_0 = START_ADDR_0 + idx * AXI_PADDED_SIZE_0;
        for (int j = 0; j < AXI_PADDED_SIZE_0; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_0 + j]);
        }
        int base_addr_1 = START_ADDR_1 + idx * AXI_PADDED_SIZE_1;
        for (int j = 0; j < AXI_PADDED_SIZE_1; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_1 + j]);
        }
    }
}

template<
    const int START_ADDR_0, const int AXI_PADDED_SIZE_0, 
    const int START_ADDR_1, const int AXI_PADDED_SIZE_1, 
    const int START_ADDR_2, const int AXI_PADDED_SIZE_2, 
    const int START_ADDR_3, const int AXI_PADDED_SIZE_3>
void load_single_embedding_4_tables(
    hls::stream<int>& s_idx_buffer, const t_axi* table_RAM, 
    hls::stream<t_axi>& s_embedding_buffer) {
#pragma HLS INLINE off

    // 8 < data size <= 16, load 2 times
    for (int i = 0; i < BATCH_NUM * BATCH_SIZE; i++) {
        #pragma HLS LOOP_TRIPCOUNT min=trip_count_item_num max=trip_count_item_num

        int idx =  s_idx_buffer.read();

        int base_addr_0 = START_ADDR_0 + idx * AXI_PADDED_SIZE_0;
        for (int j = 0; j < AXI_PADDED_SIZE_0; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_0 + j]);
        }
        int base_addr_1 = START_ADDR_1 + idx * AXI_PADDED_SIZE_1;
        for (int j = 0; j < AXI_PADDED_SIZE_1; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_1 + j]);
        }
        int base_addr_2 = START_ADDR_2 + idx * AXI_PADDED_SIZE_2;
        for (int j = 0; j < AXI_PADDED_SIZE_2; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_2 + j]);
        }
        int base_addr_3 = START_ADDR_3 + idx * AXI_PADDED_SIZE_3;
        for (int j = 0; j < AXI_PADDED_SIZE_3; j++) {
            #pragma HLS pipeline II=1
            s_embedding_buffer.write(table_RAM[base_addr_3 + j]);
        }
    }
}

template<typename T, const int VECTOR_LENGTH>
void int_to_wide(
    hls::stream<T>& s_embedding_buffer, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide) {
#pragma HLS inline off

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE; i++) {
        #pragma HLS LOOP_TRIPCOUNT min=trip_count_item_num max=trip_count_item_num

        for (int j = 0; j < VECTOR_LENGTH / INTS_PER_W; j++) {
            #pragma HLS pipeline II=4
            W_TYPE reg;
            reg.range(31, 0) = s_embedding_buffer.read();
            reg.range(63, 32) = s_embedding_buffer.read();
            reg.range(95, 64) = s_embedding_buffer.read();
            reg.range(127, 96) = s_embedding_buffer.read();
            s_embedding_buffer_wide.write(reg);
        }
    }
}

void gather_embeddings(
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM0, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM1, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM2, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM3, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM4, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM5, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM6, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM7, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM8, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM9, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM10, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM11, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM12, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM13, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM14, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM15, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM16, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM17, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM18, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM19, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM20, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM21, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM22, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM23, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM24, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM25, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM26, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM27, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM28, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM29, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM30, hls::stream<W_TYPE>& s_embedding_buffer_wide_HBM31,
    hls::stream<W_TYPE>& s_embedding_buffer_wide_DDR0, hls::stream<W_TYPE>& s_embedding_buffer_wide_DDR1,
    hls::stream<W_TYPE>& s_embedding_buffer_wide_PLRAM0, hls::stream<W_TYPE>& s_embedding_buffer_wide_PLRAM1, 
    hls::stream<W_TYPE>& s_embedding_buffer_wide_PLRAM2, hls::stream<W_TYPE>& s_embedding_buffer_wide_PLRAM3,
    hls::stream<W_TYPE>& s_feature_in
) {
#pragma HLS inline off

    for (int item = 0; item < BATCH_NUM * BATCH_SIZE; item++) {
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_0 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM0.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_1 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM1.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_2 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM2.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_3 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM3.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_4 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM4.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_5 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM5.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_6 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM6.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_7 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM7.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_8 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM8.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_9 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM9.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_10 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM10.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_11 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM11.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_12 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM12.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_13 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM13.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_14 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM14.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_15 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM15.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_16 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM16.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_17 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM17.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_18 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM18.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_19 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM19.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_20 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM20.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_21 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM21.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_22 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM22.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_23 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM23.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_24 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM24.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_25 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM25.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_26 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM26.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_27 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM27.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_28 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM28.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_29 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM29.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_30 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM30.read());
        }
        for (int i = 0; i < VECTOR_SIZE_HBM_BANK_31 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_HBM31.read());
        }

        for (int i = 0; i < VECTOR_SIZE_DDR_BANK_0 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_DDR0.read());
        }
        for (int i = 0; i < VECTOR_SIZE_DDR_BANK_1 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_DDR1.read());
        }

        for (int i = 0; i < VECTOR_SIZE_PLRAM_BANK_0 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_PLRAM0.read());
        }
        for (int i = 0; i < VECTOR_SIZE_PLRAM_BANK_1 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_PLRAM1.read());
        }
        for (int i = 0; i < VECTOR_SIZE_PLRAM_BANK_2 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_PLRAM2.read());
        }
        for (int i = 0; i < VECTOR_SIZE_PLRAM_BANK_3 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            s_feature_in.write(s_embedding_buffer_wide_PLRAM3.read());
        }
    }
}

template<const int FEATURE_SIZE, const int ROW_PER_PE>
void matmul_PE_UNROLL8(
    hls::stream<W_TYPE>& s_feature_PE,
    hls::stream<D_TYPE>& s_result_PE) {
#pragma HLS inline off
    // store weights to local at the beginning
    // transpose the weights as well -> e.g., 
    //     orginal weights (row_size, COL_PER_PE)
    //     now: (COL_PER_PE, row_size)
    // so that the dot product is more natural -> 
    //     feature x row0, feature x row1, ...
    W_TYPE weights_transpose_local[ROW_PER_PE * FEATURE_SIZE / INTS_PER_W];
    W_TYPE feature_local[FEATURE_SIZE / INTS_PER_W];
#pragma HLS resource variable=weights_transpose_local core=RAM_2P_URAM

    init_weights<FEATURE_SIZE, ROW_PER_PE>(weights_transpose_local);

    item_loop:
    for (int item = 0; item < BATCH_NUM * BATCH_SIZE; item++) {
        // read 
        read_loop:
        for (int i = 0; i < FEATURE_SIZE / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            feature_local[i] = s_feature_PE.read();
        }
        // compute and write
        row_loop:
        for (int result_idx = 0; result_idx < ROW_PER_PE; result_idx++) {
            
            D_TYPE result = 0;
            dot_product:
            // NOTE: manually unroll 2 here
            for (int d = 0; d < FEATURE_SIZE / INTS_PER_W / 2; d++) {
                // #pragma HLS unroll factor=4
                #pragma HLS pipeline II=1
                // feature[d] * weights_transpose_local[result_idx][d]
                W_TYPE reg_f_0 = feature_local[2 * d];
                W_TYPE reg_f_1 = feature_local[2 * d + 1];
                W_TYPE reg_w_0 = weights_transpose_local[
                    result_idx * FEATURE_SIZE / INTS_PER_W + 2 * d];
                W_TYPE reg_w_1 = weights_transpose_local[
                    result_idx * FEATURE_SIZE / INTS_PER_W + 2 * d + 1];

                D_TYPE first_f_0 = reg_f_0.range(31, 0);
                D_TYPE second_f_0 = reg_f_0.range(63, 32);
                D_TYPE third_f_0 = reg_f_0.range(95, 64);
                D_TYPE fourth_f_0 = reg_f_0.range(127, 96);

                D_TYPE first_w_0= reg_w_0.range(31, 0);
                D_TYPE second_w_0 = reg_w_0.range(63, 32);
                D_TYPE third_w_0 = reg_w_0.range(95, 64);
                D_TYPE fourth_w_0 = reg_w_0.range(127, 96);

                D_TYPE first_f_1 = reg_f_1.range(31, 0);
                D_TYPE second_f_1 = reg_f_1.range(63, 32);
                D_TYPE third_f_1 = reg_f_1.range(95, 64);
                D_TYPE fourth_f_1 = reg_f_1.range(127, 96);

                D_TYPE first_w_1= reg_w_1.range(31, 0);
                D_TYPE second_w_1 = reg_w_1.range(63, 32);
                D_TYPE third_w_1 = reg_w_1.range(95, 64);
                D_TYPE fourth_w_1 = reg_w_1.range(127, 96);

                result += 
                    first_f_0 * first_w_0 + second_f_0 * second_w_0 + 
                    third_f_0 * third_w_0 + fourth_f_0 * fourth_w_0 + 
                    first_f_1 * first_w_1 + second_f_1 * second_w_1 + 
                    third_f_1 * third_w_1 + fourth_f_1 * fourth_w_1;
            }
            s_result_PE.write(result);
        }
    }
} 

template<>
void init_weights<INPUT_SIZE, ROW_PER_PE1>(W_TYPE* weights_transpose_local) {
        // same as host side
    // same as the host side, len = 352
    D_TYPE row_template_even[INPUT_SIZE] = 
      { 1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
        1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0, -1, -1,  0, -1,
        0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  1,  0, -1,  0,  0,  1,  0, -1,  0,  0,
       -1,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0, -1,
        0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0, -1,  0,  0,
        0,  0,  0, -1,  0, -1,  1,  1,  0,  0,  0, -1,  0,  0, -1,  0, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0, -1,
        0,  0,  0,  0,  0, -1, -1,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,
        1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1, -1,  0,  0,  1, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,
        0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0, -1,  1, -1,  1,  0,  0,  1,  0,  0, -1, -1,  0,  0,
        0,  0,  1,  1,  0,  0,  1,  0,  0,  1,  0, -1,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  1,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0, -1,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0, -1,  0,  1,  0,
        0, -1,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0, -1,  1,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0, -1,
        0,  0,  0,  0, -1,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  1,  0,
        0,  0, -1, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,
        0,  0,  0, -1,  1,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0, -1,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0, -1, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,  0,
       -1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,
        0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  1,  0,
        0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0, -1,  0,  0,  0,  0,
        1,  0,  0,  0,  0,  1, -1,  0,  0, -1,  0,  0, -1, -1,  0,  0, -1,
        1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0,  0, -1,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  1,
        0,  0,  0,  1,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0, -1,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  1,  1,  0,  0, -1,
        0,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0, -1, -1, -1,  0,  0,  0,  1,  0,  0,  0,  0,
       -1,  0,  0,  0,  0,  1,  1,  0, -1, -1,  0,  0,  0,  0,  0,  0,  1,
        1,  0,  0,  1,  0, -1,  0,  0,  0};

    D_TYPE row_template_odd[INPUT_SIZE] = 
      { 0,  0,  0,  0,  0,  0,  0, -1,  0,  1,  0,  0, -1,  0,  0,  0,  0,
        1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0,  0,  0,  0,  0, -1,  0, -1,  0,  0, -1,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0, -1, -1,  0,  0,  0,  0, -1,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0, -1, -1,  0, -1,  0,
       -1,  1,  0,  0,  0,  0, -1,  0,  0, -1,  0,  1,  0,  0, -1,  1, -1,
        0,  0,  1,  0,  0,  0,  0,  0, -1,  0, -1,  0,  0,  1, -1,  0,  0,
        0,  0,  0,  0,  1,  0,  1, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0, -1,  0,  1,  0,  0,  1, -1,  0,  0,  1,  1,  1,
        0,  0,  0,  0,  0,  1,  0,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,
        1,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  1,  0, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1, -1,  1,  0,  0, -1,  0,
       -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,
        0,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,
       -1, -1,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  1, -1,  0,  0,  0,
        0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0,  0,
        0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  1, -1,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  1,  0, -1,  0,  0,  1,  1,  0,  0,  0,  0,
        0,  1,  0,  0,  0,  0,  0,  0,  1,  0,  1,  0, -1,  1,  0,  1, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0,
        1,  0,  0,  0,  0,  1,  0,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  0,  0,  0,
        1,  0,  0,  0,  0,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,
        0,  0,  0,  0,  1, -1,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0, -1,  0,  0, -1,
        0,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,
        1,  0,  0,  0, -1,  0,  0,  0,  0, -1, -1,  0,  1,  1,  0,  0, -1,
        0,  0,  0,  1,  0,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  1,  0,  0,  1,  0,  0,  0, -1,  1, -1,  0,  0,
        0,  0,  0,  0,  0,  1,  1,  0, -1, -1,  0,  0,  0,  0, -1,  1,  0,
        0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0, -1,  1,  0, -1,  0,  0,
        0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  1,  0, -1, -1,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  1,  0,
        0,  0,  0,  0,  0,  0, -1,  0,  0,  0, -1,  0,  0,  0, -1,  0,  0,
        1,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0, -1,  0,  0,  0, -1, -1,  0,  0, -1,  0,  0,  0,  1,  0,  1,  0,
        0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
        0,  0,  1,  0,  0,  0,  1,  0,  0,  1, -1, -1,  0,  0, -1,  0,  1,
        0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0, -1, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  1, -1,  0,  0,  0,  1, -1,  0,  1,  0,  1,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0, -1,  0,  0, -1,  0,  0, -1,  0,  0,  0,  0,
        1,  0,  1,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,
        1,  0,  0,  1,  1, -1,  0,  1,  0,  0,  0,  0,  0,  0, -1,  0,  0,
        0,  1,  0,  0, -1,  0,  1,  0, -1};

    // load weights, convert to wide type
    for (int row = 0; row < ROW_PER_PE1 / 2; row++) {
        for (int i = 0; i < INPUT_SIZE / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            W_TYPE reg_even, reg_odd;
            reg_even.range(31, 0) = row_template_even[INTS_PER_W * i];
            reg_even.range(63, 32) = row_template_even[INTS_PER_W * i + 1];
            reg_even.range(95, 64) = row_template_even[INTS_PER_W * i + 2];
            reg_even.range(127, 96) = row_template_even[INTS_PER_W * i + 3];

            reg_odd.range(31, 0) = row_template_odd[INTS_PER_W * i];
            reg_odd.range(63, 32) = row_template_odd[INTS_PER_W * i + 1];
            reg_odd.range(95, 64) = row_template_odd[INTS_PER_W * i + 2];
            reg_odd.range(127, 96) = row_template_odd[INTS_PER_W * i + 3];

            weights_transpose_local[2 * row * INPUT_SIZE / INTS_PER_W + i] = reg_even;
            weights_transpose_local[(2 * row + 1) * INPUT_SIZE / INTS_PER_W + i] = reg_odd;
        }
    }
}

template<>
void init_weights<HIDDEN_SIZE1, ROW_PER_PE2>(W_TYPE* weights_transpose_local) {
    // TODO: change this when upgrade to 128-table version
    // same as host side
    // same as the host side, len = 1024
    D_TYPE row_template_even[HIDDEN_SIZE1] = 
      { 1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
        1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0, -1, -1,  0, -1,
        0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  1,  0, -1,  0,  0,  1,  0, -1,  0,  0,
       -1,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0, -1,
        0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0, -1,  0,  0,
        0,  0,  0, -1,  0, -1,  1,  1,  0,  0,  0, -1,  0,  0, -1,  0, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0, -1,
        0,  0,  0,  0,  0, -1, -1,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,
        1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1, -1,  0,  0,  1, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,
        0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0, -1,  1, -1,  1,  0,  0,  1,  0,  0, -1, -1,  0,  0,
        0,  0,  1,  1,  0,  0,  1,  0,  0,  1,  0, -1,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  1,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0, -1,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0, -1,  0,  1,  0,
        0, -1,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0, -1,  1,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0, -1,
        0,  0,  0,  0, -1,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  1,  0,
        0,  0, -1, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,
        0,  0,  0, -1,  1,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0, -1,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0, -1, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,  0,
       -1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,
        0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  1,  0,
        0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0, -1,  0,  0,  0,  0,
        1,  0,  0,  0,  0,  1, -1,  0,  0, -1,  0,  0, -1, -1,  0,  0, -1,
        1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0,  0, -1,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  1,
        0,  0,  0,  1,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0, -1,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  1,  1,  0,  0, -1,
        0,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0, -1, -1, -1,  0,  0,  0,  1,  0,  0,  0,  0,
       -1,  0,  0,  0,  0,  1,  1,  0, -1, -1,  0,  0,  0,  0,  0,  0,  1,
        1,  0,  0,  1,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,
        1,  0,  0,  0, -1,  0,  0,  0,  0,  1,  0,  1,  0, -1,  0,  0, -1,
        0,  0,  1,  0,  0,  0,  0,  0, -1, -1,  0,  1,  0,  0, -1,  1,  0,
        0,  0, -1,  0, -1,  0,  0,  0,  1,  1,  0,  0,  0,  1,  0, -1,  1,
        0,  0,  0,  1,  0,  0, -1,  1,  0,  0,  0,  0, -1,  0,  1,  0,  1,
        0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0, -1,
        0,  0,  0,  0,  1, -1,  0,  0,  1,  1,  0,  0,  1,  0, -1, -1,  0,
       -1,  0,  0,  0,  1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  1,  0,  0,  0,  1,  0,  0,  0,  0,  1,  0, -1,  0,  0,  0, -1,
        0,  1,  0,  0};

    D_TYPE row_template_odd[HIDDEN_SIZE1] = 
      { 0,  0,  0,  0,  0,  0,  0, -1,  0,  1,  0,  0, -1,  0,  0,  0,  0,
        1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0,  0,  0,  0,  0, -1,  0, -1,  0,  0, -1,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0, -1, -1,  0,  0,  0,  0, -1,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0, -1, -1,  0, -1,  0,
       -1,  1,  0,  0,  0,  0, -1,  0,  0, -1,  0,  1,  0,  0, -1,  1, -1,
        0,  0,  1,  0,  0,  0,  0,  0, -1,  0, -1,  0,  0,  1, -1,  0,  0,
        0,  0,  0,  0,  1,  0,  1, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0, -1,  0,  1,  0,  0,  1, -1,  0,  0,  1,  1,  1,
        0,  0,  0,  0,  0,  1,  0,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,
        1,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  1,  0, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1, -1,  1,  0,  0, -1,  0,
       -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,
        0,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,
       -1, -1,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  1, -1,  0,  0,  0,
        0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0,  0,
        0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  1, -1,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  1,  0, -1,  0,  0,  1,  1,  0,  0,  0,  0,
        0,  1,  0,  0,  0,  0,  0,  0,  1,  0,  1,  0, -1,  1,  0,  1, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0,
        1,  0,  0,  0,  0,  1,  0,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  0,  0,  0,
        1,  0,  0,  0,  0,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,
        0,  0,  0,  0,  1, -1,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0, -1,  0,  0, -1,
        0,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,
        1,  0,  0,  0, -1,  0,  0,  0,  0, -1, -1,  0,  1,  1,  0,  0, -1,
        0,  0,  0,  1,  0,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  1,  0,  0,  1,  0,  0,  0, -1,  1, -1,  0,  0,
        0,  0,  0,  0,  0,  1,  1,  0, -1, -1,  0,  0,  0,  0, -1,  1,  0,
        0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0, -1,  1,  0, -1,  0,  0,
        0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  1,  0, -1, -1,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  1,  0,
        0,  0,  0,  0,  0,  0, -1,  0,  0,  0, -1,  0,  0,  0, -1,  0,  0,
        1,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0, -1,  0,  0,  0, -1, -1,  0,  0, -1,  0,  0,  0,  1,  0,  1,  0,
        0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
        0,  0,  1,  0,  0,  0,  1,  0,  0,  1, -1, -1,  0,  0, -1,  0,  1,
        0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0, -1, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  1, -1,  0,  0,  0,  1, -1,  0,  1,  0,  1,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0, -1,  0,  0, -1,  0,  0, -1,  0,  0,  0,  0,
        1,  0,  1,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,
        1,  0,  0,  1,  1, -1,  0,  1,  0,  0,  0,  0,  0,  0, -1,  0,  0,
        0,  1,  0,  0, -1,  0,  1,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,
        0, -1,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0, -1,  1,  0,  1,  0,
        0,  0,  0,  1,  0,  1,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        1,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  0,  1,  0,  0,  0,  1,
        0,  0,  1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,
        0,  1, -1, -1,  0,  1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  1,  0,  0,  0,
        0,  0,  0,  0};

    // load weights, convert to wide type
    for (int row = 0; row < ROW_PER_PE2 / 2; row++) {
        for (int i = 0; i < HIDDEN_SIZE1 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            W_TYPE reg_even, reg_odd;
            reg_even.range(31, 0) = row_template_even[INTS_PER_W * i];
            reg_even.range(63, 32) = row_template_even[INTS_PER_W * i + 1];
            reg_even.range(95, 64) = row_template_even[INTS_PER_W * i + 2];
            reg_even.range(127, 96) = row_template_even[INTS_PER_W * i + 3];

            reg_odd.range(31, 0) = row_template_odd[INTS_PER_W * i];
            reg_odd.range(63, 32) = row_template_odd[INTS_PER_W * i + 1];
            reg_odd.range(95, 64) = row_template_odd[INTS_PER_W * i + 2];
            reg_odd.range(127, 96) = row_template_odd[INTS_PER_W * i + 3];

            weights_transpose_local[2 * row * HIDDEN_SIZE1 / INTS_PER_W + i] = reg_even;
            weights_transpose_local[(2 * row + 1) * HIDDEN_SIZE1 / INTS_PER_W + i] = reg_odd;
        }
    }
}

template<>
void init_weights<HIDDEN_SIZE2, ROW_PER_PE3>(W_TYPE* weights_transpose_local) {
    // TODO: change this when upgrade to 128-table version
    // same as host side
    D_TYPE row_template_even[HIDDEN_SIZE2] = 
      { 1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
        1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0, -1, -1,  0, -1,
        0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  1,  0, -1,  0,  0,  1,  0, -1,  0,  0,
       -1,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0, -1,
        0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0, -1,  0,  0,
        0,  0,  0, -1,  0, -1,  1,  1,  0,  0,  0, -1,  0,  0, -1,  0, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0, -1,
        0,  0,  0,  0,  0, -1, -1,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,
        1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1, -1,  0,  0,  1, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,
        0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0, -1,  1, -1,  1,  0,  0,  1,  0,  0, -1, -1,  0,  0,
        0,  0,  1,  1,  0,  0,  1,  0,  0,  1,  0, -1,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  1,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0, -1,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0, -1,  0,  1,  0,
        0, -1,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0, -1,  1,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0, -1,
        0,  0,  0,  0, -1,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  1,  0,
        0,  0, -1, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,
        0,  0,  0, -1,  1,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0, -1,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0};

    D_TYPE row_template_odd[HIDDEN_SIZE2] = 
      { 0,  0,  0,  0,  0,  0,  0, -1,  0,  1,  0,  0, -1,  0,  0,  0,  0,
        1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0,  0,  0,  0,  0, -1,  0, -1,  0,  0, -1,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0, -1, -1,  0,  0,  0,  0, -1,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  1,
        0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0, -1, -1,  0, -1,  0,
       -1,  1,  0,  0,  0,  0, -1,  0,  0, -1,  0,  1,  0,  0, -1,  1, -1,
        0,  0,  1,  0,  0,  0,  0,  0, -1,  0, -1,  0,  0,  1, -1,  0,  0,
        0,  0,  0,  0,  1,  0,  1, -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0, -1,  0,  1,  0,  0,  1, -1,  0,  0,  1,  1,  1,
        0,  0,  0,  0,  0,  1,  0,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,
        1,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,  1,  0, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1, -1,  1,  0,  0, -1,  0,
       -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,
        0,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,
       -1, -1,  0,  0, -1,  0,  0,  0,  0,  0,  0,  0,  1, -1,  0,  0,  0,
        0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0,  0,
        0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  1, -1,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  1,  0, -1,  0,  0,  1,  1,  0,  0,  0,  0,
        0,  1,  0,  0,  0,  0,  0,  0,  1,  0,  1,  0, -1,  1,  0,  1, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0,
        1,  0,  0,  0,  0,  1,  0,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  0,  0,  0,
        1,  0,  0,  0,  0,  0,  0,  0, -1,  0, -1,  0,  0,  0,  0,  0,  0,
       -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,
        0,  0,  0,  0,  1, -1,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0,  0,
        0,  0,  0, -1,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0, -1,  0,  0, -1,
        0,  0};
    // load weights, convert to wide type
    for (int row = 0; row < ROW_PER_PE3 / 2; row++) {
        for (int i = 0; i < HIDDEN_SIZE2 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            W_TYPE reg_even, reg_odd;
            reg_even.range(31, 0) = row_template_even[INTS_PER_W * i];
            reg_even.range(63, 32) = row_template_even[INTS_PER_W * i + 1];
            reg_even.range(95, 64) = row_template_even[INTS_PER_W * i + 2];
            reg_even.range(127, 96) = row_template_even[INTS_PER_W * i + 3];

            reg_odd.range(31, 0) = row_template_odd[INTS_PER_W * i];
            reg_odd.range(63, 32) = row_template_odd[INTS_PER_W * i + 1];
            reg_odd.range(95, 64) = row_template_odd[INTS_PER_W * i + 2];
            reg_odd.range(127, 96) = row_template_odd[INTS_PER_W * i + 3];

            weights_transpose_local[2 * row * HIDDEN_SIZE2 / INTS_PER_W + i] = reg_even;
            weights_transpose_local[(2 * row + 1) * HIDDEN_SIZE2 / INTS_PER_W + i] = reg_odd;
        }
    }
}

void output_layer(
    hls::stream<W_TYPE>& s_feature,
    hls::stream<D_TYPE>& s_result_out) {
        
    W_TYPE weights_transpose_local[HIDDEN_SIZE3 / INTS_PER_W];    
    W_TYPE feature_local[HIDDEN_SIZE3 / INTS_PER_W];
#pragma HLS resource variable=weights_transpose_local core=RAM_2P_URAM

    // load weights at the very beginning
    D_TYPE row_template_layer_out[HIDDEN_SIZE3] = 
      { 1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
        1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0, -1, -1,  0, -1,
        0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  0,  0,  0,  0,  1,  0, -1,  0,  0,  1,  0, -1,  0,  0,
       -1,  0,  0,  0,  1,  0,  0,  0,  0,  0, -1,  0,  0,  0,  0,  0, -1,
        0,  0,  0,  0, -1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0, -1,  0,  0,
        0,  0,  0, -1,  0, -1,  1,  1,  0,  0,  0, -1,  0,  0, -1,  0, -1,
        0,  0,  0,  0,  0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0, -1,
        0,  0,  0,  0,  0, -1, -1,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,
        1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,
        0};
    load_weights:
    for (int i = 0; i < HIDDEN_SIZE3 / INTS_PER_W; i++) {
        #pragma HLS pipeline II=1
        W_TYPE reg;
        reg.range(31, 0) = row_template_layer_out[INTS_PER_W * i];
        reg.range(63, 32) = row_template_layer_out[INTS_PER_W * i + 1];
        reg.range(95, 64) = row_template_layer_out[INTS_PER_W * i + 2];
        reg.range(127, 96) = row_template_layer_out[INTS_PER_W * i + 3];
        weights_transpose_local[i] = reg;
    }

    item_loop:
    for (int item = 0; item < BATCH_NUM * BATCH_SIZE; item++) {

        read_loop:
        for (int i = 0; i < HIDDEN_SIZE3 / INTS_PER_W; i++) {
            #pragma HLS pipeline II=1
            feature_local[i] = s_feature.read();
        }

        // load and compute
        D_TYPE result = 0;
        dot_product:
        for (int d = 0; d < HIDDEN_SIZE3 / INTS_PER_W; d++) {
            #pragma HLS pipeline II=1
            // feature[d] * weights_transpose_local[result_idx][d]
            W_TYPE reg_f = feature_local[d];
            W_TYPE reg_w = weights_transpose_local[d];
            D_TYPE f_first = reg_f.range(31, 0);
            D_TYPE f_second = reg_f.range(63, 32);
            D_TYPE f_third = reg_f.range(95, 64);
            D_TYPE f_fourth = reg_f.range(127, 96);
            D_TYPE w_first = reg_w.range(31, 0);
            D_TYPE w_second = reg_w.range(63, 32);
            D_TYPE w_third = reg_w.range(95, 64);
            D_TYPE w_fourth= reg_w.range(127, 96);
            result += 
                f_first * w_first + f_second * w_second + 
                f_third * w_third + f_fourth * w_fourth;
        }
        result += 1; // bias = 1, same as host
        s_result_out.write(result);
    }
}

void write_result(
    hls::stream<D_TYPE>& s_result_out,
    D_TYPE results_out[BATCH_SIZE * OUTPUT_SIZE]) {
    
    D_TYPE result_last_batch[BATCH_SIZE * OUTPUT_SIZE];

    for (int i = 0; i < BATCH_NUM; i++) {
        for (int j = 0; j < BATCH_SIZE * OUTPUT_SIZE; j++) {
            #pragma HLS pipeline II=1
            result_last_batch[j] = s_result_out.read();
        }
    }

    // only write back last batch to DRAM
    for (int j = 0; j < BATCH_SIZE * OUTPUT_SIZE; j++) {
        #pragma HLS pipeline II=1
        results_out[j] = result_last_batch[j];
    }
}

template<const int FEATURE_SIZE>
void replicate_feature_1PEs(
    hls::stream<W_TYPE>& s_feature_in, 
    hls::stream<W_TYPE>& s_feature_PE0
) {

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE * FEATURE_SIZE / INTS_PER_W; i++) {
        #pragma HLS pipeline II=1

        W_TYPE reg = s_feature_in.read();

        s_feature_PE0.write(reg);
    }
}

template<const int FEATURE_SIZE>
void replicate_feature_8PEs(
    hls::stream<W_TYPE>& s_feature_in, 
    hls::stream<W_TYPE>& s_feature_PE0, hls::stream<W_TYPE>& s_feature_PE1, 
    hls::stream<W_TYPE>& s_feature_PE2, hls::stream<W_TYPE>& s_feature_PE3, 
    hls::stream<W_TYPE>& s_feature_PE4, hls::stream<W_TYPE>& s_feature_PE5, 
    hls::stream<W_TYPE>& s_feature_PE6, hls::stream<W_TYPE>& s_feature_PE7
) {

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE * FEATURE_SIZE / INTS_PER_W; i++) {
        #pragma HLS pipeline II=1

        W_TYPE reg = s_feature_in.read();

        s_feature_PE0.write(reg);
        s_feature_PE1.write(reg);
        s_feature_PE2.write(reg);
        s_feature_PE3.write(reg);
        s_feature_PE4.write(reg);
        s_feature_PE5.write(reg);
        s_feature_PE6.write(reg);
        s_feature_PE7.write(reg);
    }
}

template<const int FEATURE_SIZE>
void replicate_feature_16PEs(
    hls::stream<W_TYPE>& s_feature_in, 
    hls::stream<W_TYPE>& s_feature_PE0, hls::stream<W_TYPE>& s_feature_PE1, 
    hls::stream<W_TYPE>& s_feature_PE2, hls::stream<W_TYPE>& s_feature_PE3, 
    hls::stream<W_TYPE>& s_feature_PE4, hls::stream<W_TYPE>& s_feature_PE5, 
    hls::stream<W_TYPE>& s_feature_PE6, hls::stream<W_TYPE>& s_feature_PE7, 
    hls::stream<W_TYPE>& s_feature_PE8, hls::stream<W_TYPE>& s_feature_PE9, 
    hls::stream<W_TYPE>& s_feature_PE10, hls::stream<W_TYPE>& s_feature_PE11, 
    hls::stream<W_TYPE>& s_feature_PE12, hls::stream<W_TYPE>& s_feature_PE13, 
    hls::stream<W_TYPE>& s_feature_PE14, hls::stream<W_TYPE>& s_feature_PE15
) {

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE * FEATURE_SIZE / INTS_PER_W; i++) {
        #pragma HLS pipeline II=1

        W_TYPE reg = s_feature_in.read();

        s_feature_PE0.write(reg);
        s_feature_PE1.write(reg);
        s_feature_PE2.write(reg);
        s_feature_PE3.write(reg);
        s_feature_PE4.write(reg);
        s_feature_PE5.write(reg);
        s_feature_PE6.write(reg);
        s_feature_PE7.write(reg);
        s_feature_PE8.write(reg);
        s_feature_PE9.write(reg);
        s_feature_PE10.write(reg);
        s_feature_PE11.write(reg);
        s_feature_PE12.write(reg);
        s_feature_PE13.write(reg);
        s_feature_PE14.write(reg);
        s_feature_PE15.write(reg);
    }
}

template<const int FEATURE_SIZE>
void replicate_feature_32PEs(
    hls::stream<W_TYPE>& s_feature_in, 
    hls::stream<W_TYPE>& s_feature_PE0, hls::stream<W_TYPE>& s_feature_PE1, 
    hls::stream<W_TYPE>& s_feature_PE2, hls::stream<W_TYPE>& s_feature_PE3, 
    hls::stream<W_TYPE>& s_feature_PE4, hls::stream<W_TYPE>& s_feature_PE5, 
    hls::stream<W_TYPE>& s_feature_PE6, hls::stream<W_TYPE>& s_feature_PE7, 
    hls::stream<W_TYPE>& s_feature_PE8, hls::stream<W_TYPE>& s_feature_PE9, 
    hls::stream<W_TYPE>& s_feature_PE10, hls::stream<W_TYPE>& s_feature_PE11, 
    hls::stream<W_TYPE>& s_feature_PE12, hls::stream<W_TYPE>& s_feature_PE13, 
    hls::stream<W_TYPE>& s_feature_PE14, hls::stream<W_TYPE>& s_feature_PE15, 
    hls::stream<W_TYPE>& s_feature_PE16, hls::stream<W_TYPE>& s_feature_PE17, 
    hls::stream<W_TYPE>& s_feature_PE18, hls::stream<W_TYPE>& s_feature_PE19, 
    hls::stream<W_TYPE>& s_feature_PE20, hls::stream<W_TYPE>& s_feature_PE21, 
    hls::stream<W_TYPE>& s_feature_PE22, hls::stream<W_TYPE>& s_feature_PE23, 
    hls::stream<W_TYPE>& s_feature_PE24, hls::stream<W_TYPE>& s_feature_PE25, 
    hls::stream<W_TYPE>& s_feature_PE26, hls::stream<W_TYPE>& s_feature_PE27, 
    hls::stream<W_TYPE>& s_feature_PE28, hls::stream<W_TYPE>& s_feature_PE29, 
    hls::stream<W_TYPE>& s_feature_PE30, hls::stream<W_TYPE>& s_feature_PE31
) {

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE * FEATURE_SIZE / INTS_PER_W; i++) {
        #pragma HLS pipeline II=1

        W_TYPE reg = s_feature_in.read();

        s_feature_PE0.write(reg);
        s_feature_PE1.write(reg);
        s_feature_PE2.write(reg);
        s_feature_PE3.write(reg);
        s_feature_PE4.write(reg);
        s_feature_PE5.write(reg);
        s_feature_PE6.write(reg);
        s_feature_PE7.write(reg);
        s_feature_PE8.write(reg);
        s_feature_PE9.write(reg);
        s_feature_PE10.write(reg);
        s_feature_PE11.write(reg);
        s_feature_PE12.write(reg);
        s_feature_PE13.write(reg);
        s_feature_PE14.write(reg);
        s_feature_PE15.write(reg);
        s_feature_PE16.write(reg);
        s_feature_PE17.write(reg);
        s_feature_PE18.write(reg);
        s_feature_PE19.write(reg);
        s_feature_PE20.write(reg);
        s_feature_PE21.write(reg);
        s_feature_PE22.write(reg);
        s_feature_PE23.write(reg);
        s_feature_PE24.write(reg);
        s_feature_PE25.write(reg);
        s_feature_PE26.write(reg);
        s_feature_PE27.write(reg);
        s_feature_PE28.write(reg);
        s_feature_PE29.write(reg);
        s_feature_PE30.write(reg);
        s_feature_PE31.write(reg);
    }
}

template<const int FEATURE_SIZE>
void replicate_feature_64PEs(
    hls::stream<W_TYPE>& s_feature_in, 
    hls::stream<W_TYPE>& s_feature_PE0, hls::stream<W_TYPE>& s_feature_PE1, 
    hls::stream<W_TYPE>& s_feature_PE2, hls::stream<W_TYPE>& s_feature_PE3, 
    hls::stream<W_TYPE>& s_feature_PE4, hls::stream<W_TYPE>& s_feature_PE5, 
    hls::stream<W_TYPE>& s_feature_PE6, hls::stream<W_TYPE>& s_feature_PE7, 
    hls::stream<W_TYPE>& s_feature_PE8, hls::stream<W_TYPE>& s_feature_PE9, 
    hls::stream<W_TYPE>& s_feature_PE10, hls::stream<W_TYPE>& s_feature_PE11, 
    hls::stream<W_TYPE>& s_feature_PE12, hls::stream<W_TYPE>& s_feature_PE13, 
    hls::stream<W_TYPE>& s_feature_PE14, hls::stream<W_TYPE>& s_feature_PE15, 
    hls::stream<W_TYPE>& s_feature_PE16, hls::stream<W_TYPE>& s_feature_PE17, 
    hls::stream<W_TYPE>& s_feature_PE18, hls::stream<W_TYPE>& s_feature_PE19, 
    hls::stream<W_TYPE>& s_feature_PE20, hls::stream<W_TYPE>& s_feature_PE21, 
    hls::stream<W_TYPE>& s_feature_PE22, hls::stream<W_TYPE>& s_feature_PE23, 
    hls::stream<W_TYPE>& s_feature_PE24, hls::stream<W_TYPE>& s_feature_PE25, 
    hls::stream<W_TYPE>& s_feature_PE26, hls::stream<W_TYPE>& s_feature_PE27, 
    hls::stream<W_TYPE>& s_feature_PE28, hls::stream<W_TYPE>& s_feature_PE29, 
    hls::stream<W_TYPE>& s_feature_PE30, hls::stream<W_TYPE>& s_feature_PE31, 
    hls::stream<W_TYPE>& s_feature_PE32, hls::stream<W_TYPE>& s_feature_PE33, 
    hls::stream<W_TYPE>& s_feature_PE34, hls::stream<W_TYPE>& s_feature_PE35, 
    hls::stream<W_TYPE>& s_feature_PE36, hls::stream<W_TYPE>& s_feature_PE37, 
    hls::stream<W_TYPE>& s_feature_PE38, hls::stream<W_TYPE>& s_feature_PE39, 
    hls::stream<W_TYPE>& s_feature_PE40, hls::stream<W_TYPE>& s_feature_PE41, 
    hls::stream<W_TYPE>& s_feature_PE42, hls::stream<W_TYPE>& s_feature_PE43, 
    hls::stream<W_TYPE>& s_feature_PE44, hls::stream<W_TYPE>& s_feature_PE45, 
    hls::stream<W_TYPE>& s_feature_PE46, hls::stream<W_TYPE>& s_feature_PE47, 
    hls::stream<W_TYPE>& s_feature_PE48, hls::stream<W_TYPE>& s_feature_PE49, 
    hls::stream<W_TYPE>& s_feature_PE50, hls::stream<W_TYPE>& s_feature_PE51, 
    hls::stream<W_TYPE>& s_feature_PE52, hls::stream<W_TYPE>& s_feature_PE53, 
    hls::stream<W_TYPE>& s_feature_PE54, hls::stream<W_TYPE>& s_feature_PE55, 
    hls::stream<W_TYPE>& s_feature_PE56, hls::stream<W_TYPE>& s_feature_PE57, 
    hls::stream<W_TYPE>& s_feature_PE58, hls::stream<W_TYPE>& s_feature_PE59, 
    hls::stream<W_TYPE>& s_feature_PE60, hls::stream<W_TYPE>& s_feature_PE61, 
    hls::stream<W_TYPE>& s_feature_PE62, hls::stream<W_TYPE>& s_feature_PE63
) {

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE * FEATURE_SIZE / INTS_PER_W; i++) {
        #pragma HLS pipeline II=1

        W_TYPE reg = s_feature_in.read();

        s_feature_PE0.write(reg);
        s_feature_PE1.write(reg);
        s_feature_PE2.write(reg);
        s_feature_PE3.write(reg);
        s_feature_PE4.write(reg);
        s_feature_PE5.write(reg);
        s_feature_PE6.write(reg);
        s_feature_PE7.write(reg);
        s_feature_PE8.write(reg);
        s_feature_PE9.write(reg);
        s_feature_PE10.write(reg);
        s_feature_PE11.write(reg);
        s_feature_PE12.write(reg);
        s_feature_PE13.write(reg);
        s_feature_PE14.write(reg);
        s_feature_PE15.write(reg);
        s_feature_PE16.write(reg);
        s_feature_PE17.write(reg);
        s_feature_PE18.write(reg);
        s_feature_PE19.write(reg);
        s_feature_PE20.write(reg);
        s_feature_PE21.write(reg);
        s_feature_PE22.write(reg);
        s_feature_PE23.write(reg);
        s_feature_PE24.write(reg);
        s_feature_PE25.write(reg);
        s_feature_PE26.write(reg);
        s_feature_PE27.write(reg);
        s_feature_PE28.write(reg);
        s_feature_PE29.write(reg);
        s_feature_PE30.write(reg);
        s_feature_PE31.write(reg);
        s_feature_PE32.write(reg);
        s_feature_PE33.write(reg);
        s_feature_PE34.write(reg);
        s_feature_PE35.write(reg);
        s_feature_PE36.write(reg);
        s_feature_PE37.write(reg);
        s_feature_PE38.write(reg);
        s_feature_PE39.write(reg);
        s_feature_PE40.write(reg);
        s_feature_PE41.write(reg);
        s_feature_PE42.write(reg);
        s_feature_PE43.write(reg);
        s_feature_PE44.write(reg);
        s_feature_PE45.write(reg);
        s_feature_PE46.write(reg);
        s_feature_PE47.write(reg);
        s_feature_PE48.write(reg);
        s_feature_PE49.write(reg);
        s_feature_PE50.write(reg);
        s_feature_PE51.write(reg);
        s_feature_PE52.write(reg);
        s_feature_PE53.write(reg);
        s_feature_PE54.write(reg);
        s_feature_PE55.write(reg);
        s_feature_PE56.write(reg);
        s_feature_PE57.write(reg);
        s_feature_PE58.write(reg);
        s_feature_PE59.write(reg);
        s_feature_PE60.write(reg);
        s_feature_PE61.write(reg);
        s_feature_PE62.write(reg);
        s_feature_PE63.write(reg);
    }
}

template<const int FEATURE_SIZE>
void replicate_feature_128PEs(
    hls::stream<W_TYPE>& s_feature_in, 
    hls::stream<W_TYPE>& s_feature_PE0, hls::stream<W_TYPE>& s_feature_PE1, 
    hls::stream<W_TYPE>& s_feature_PE2, hls::stream<W_TYPE>& s_feature_PE3, 
    hls::stream<W_TYPE>& s_feature_PE4, hls::stream<W_TYPE>& s_feature_PE5, 
    hls::stream<W_TYPE>& s_feature_PE6, hls::stream<W_TYPE>& s_feature_PE7, 
    hls::stream<W_TYPE>& s_feature_PE8, hls::stream<W_TYPE>& s_feature_PE9, 
    hls::stream<W_TYPE>& s_feature_PE10, hls::stream<W_TYPE>& s_feature_PE11, 
    hls::stream<W_TYPE>& s_feature_PE12, hls::stream<W_TYPE>& s_feature_PE13, 
    hls::stream<W_TYPE>& s_feature_PE14, hls::stream<W_TYPE>& s_feature_PE15, 
    hls::stream<W_TYPE>& s_feature_PE16, hls::stream<W_TYPE>& s_feature_PE17, 
    hls::stream<W_TYPE>& s_feature_PE18, hls::stream<W_TYPE>& s_feature_PE19, 
    hls::stream<W_TYPE>& s_feature_PE20, hls::stream<W_TYPE>& s_feature_PE21, 
    hls::stream<W_TYPE>& s_feature_PE22, hls::stream<W_TYPE>& s_feature_PE23, 
    hls::stream<W_TYPE>& s_feature_PE24, hls::stream<W_TYPE>& s_feature_PE25, 
    hls::stream<W_TYPE>& s_feature_PE26, hls::stream<W_TYPE>& s_feature_PE27, 
    hls::stream<W_TYPE>& s_feature_PE28, hls::stream<W_TYPE>& s_feature_PE29, 
    hls::stream<W_TYPE>& s_feature_PE30, hls::stream<W_TYPE>& s_feature_PE31, 
    hls::stream<W_TYPE>& s_feature_PE32, hls::stream<W_TYPE>& s_feature_PE33, 
    hls::stream<W_TYPE>& s_feature_PE34, hls::stream<W_TYPE>& s_feature_PE35, 
    hls::stream<W_TYPE>& s_feature_PE36, hls::stream<W_TYPE>& s_feature_PE37, 
    hls::stream<W_TYPE>& s_feature_PE38, hls::stream<W_TYPE>& s_feature_PE39, 
    hls::stream<W_TYPE>& s_feature_PE40, hls::stream<W_TYPE>& s_feature_PE41, 
    hls::stream<W_TYPE>& s_feature_PE42, hls::stream<W_TYPE>& s_feature_PE43, 
    hls::stream<W_TYPE>& s_feature_PE44, hls::stream<W_TYPE>& s_feature_PE45, 
    hls::stream<W_TYPE>& s_feature_PE46, hls::stream<W_TYPE>& s_feature_PE47, 
    hls::stream<W_TYPE>& s_feature_PE48, hls::stream<W_TYPE>& s_feature_PE49, 
    hls::stream<W_TYPE>& s_feature_PE50, hls::stream<W_TYPE>& s_feature_PE51, 
    hls::stream<W_TYPE>& s_feature_PE52, hls::stream<W_TYPE>& s_feature_PE53, 
    hls::stream<W_TYPE>& s_feature_PE54, hls::stream<W_TYPE>& s_feature_PE55, 
    hls::stream<W_TYPE>& s_feature_PE56, hls::stream<W_TYPE>& s_feature_PE57, 
    hls::stream<W_TYPE>& s_feature_PE58, hls::stream<W_TYPE>& s_feature_PE59, 
    hls::stream<W_TYPE>& s_feature_PE60, hls::stream<W_TYPE>& s_feature_PE61, 
    hls::stream<W_TYPE>& s_feature_PE62, hls::stream<W_TYPE>& s_feature_PE63, 
    hls::stream<W_TYPE>& s_feature_PE64, hls::stream<W_TYPE>& s_feature_PE65, 
    hls::stream<W_TYPE>& s_feature_PE66, hls::stream<W_TYPE>& s_feature_PE67, 
    hls::stream<W_TYPE>& s_feature_PE68, hls::stream<W_TYPE>& s_feature_PE69, 
    hls::stream<W_TYPE>& s_feature_PE70, hls::stream<W_TYPE>& s_feature_PE71, 
    hls::stream<W_TYPE>& s_feature_PE72, hls::stream<W_TYPE>& s_feature_PE73, 
    hls::stream<W_TYPE>& s_feature_PE74, hls::stream<W_TYPE>& s_feature_PE75, 
    hls::stream<W_TYPE>& s_feature_PE76, hls::stream<W_TYPE>& s_feature_PE77, 
    hls::stream<W_TYPE>& s_feature_PE78, hls::stream<W_TYPE>& s_feature_PE79, 
    hls::stream<W_TYPE>& s_feature_PE80, hls::stream<W_TYPE>& s_feature_PE81, 
    hls::stream<W_TYPE>& s_feature_PE82, hls::stream<W_TYPE>& s_feature_PE83, 
    hls::stream<W_TYPE>& s_feature_PE84, hls::stream<W_TYPE>& s_feature_PE85, 
    hls::stream<W_TYPE>& s_feature_PE86, hls::stream<W_TYPE>& s_feature_PE87, 
    hls::stream<W_TYPE>& s_feature_PE88, hls::stream<W_TYPE>& s_feature_PE89, 
    hls::stream<W_TYPE>& s_feature_PE90, hls::stream<W_TYPE>& s_feature_PE91, 
    hls::stream<W_TYPE>& s_feature_PE92, hls::stream<W_TYPE>& s_feature_PE93, 
    hls::stream<W_TYPE>& s_feature_PE94, hls::stream<W_TYPE>& s_feature_PE95, 
    hls::stream<W_TYPE>& s_feature_PE96, hls::stream<W_TYPE>& s_feature_PE97, 
    hls::stream<W_TYPE>& s_feature_PE98, hls::stream<W_TYPE>& s_feature_PE99, 
    hls::stream<W_TYPE>& s_feature_PE100, hls::stream<W_TYPE>& s_feature_PE101, 
    hls::stream<W_TYPE>& s_feature_PE102, hls::stream<W_TYPE>& s_feature_PE103, 
    hls::stream<W_TYPE>& s_feature_PE104, hls::stream<W_TYPE>& s_feature_PE105, 
    hls::stream<W_TYPE>& s_feature_PE106, hls::stream<W_TYPE>& s_feature_PE107, 
    hls::stream<W_TYPE>& s_feature_PE108, hls::stream<W_TYPE>& s_feature_PE109, 
    hls::stream<W_TYPE>& s_feature_PE110, hls::stream<W_TYPE>& s_feature_PE111, 
    hls::stream<W_TYPE>& s_feature_PE112, hls::stream<W_TYPE>& s_feature_PE113, 
    hls::stream<W_TYPE>& s_feature_PE114, hls::stream<W_TYPE>& s_feature_PE115, 
    hls::stream<W_TYPE>& s_feature_PE116, hls::stream<W_TYPE>& s_feature_PE117, 
    hls::stream<W_TYPE>& s_feature_PE118, hls::stream<W_TYPE>& s_feature_PE119, 
    hls::stream<W_TYPE>& s_feature_PE120, hls::stream<W_TYPE>& s_feature_PE121, 
    hls::stream<W_TYPE>& s_feature_PE122, hls::stream<W_TYPE>& s_feature_PE123, 
    hls::stream<W_TYPE>& s_feature_PE124, hls::stream<W_TYPE>& s_feature_PE125, 
    hls::stream<W_TYPE>& s_feature_PE126, hls::stream<W_TYPE>& s_feature_PE127
) {

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE * FEATURE_SIZE / INTS_PER_W; i++) {
        #pragma HLS pipeline II=1

        W_TYPE reg = s_feature_in.read();

        s_feature_PE0.write(reg);
        s_feature_PE1.write(reg);
        s_feature_PE2.write(reg);
        s_feature_PE3.write(reg);
        s_feature_PE4.write(reg);
        s_feature_PE5.write(reg);
        s_feature_PE6.write(reg);
        s_feature_PE7.write(reg);
        s_feature_PE8.write(reg);
        s_feature_PE9.write(reg);
        s_feature_PE10.write(reg);
        s_feature_PE11.write(reg);
        s_feature_PE12.write(reg);
        s_feature_PE13.write(reg);
        s_feature_PE14.write(reg);
        s_feature_PE15.write(reg);
        s_feature_PE16.write(reg);
        s_feature_PE17.write(reg);
        s_feature_PE18.write(reg);
        s_feature_PE19.write(reg);
        s_feature_PE20.write(reg);
        s_feature_PE21.write(reg);
        s_feature_PE22.write(reg);
        s_feature_PE23.write(reg);
        s_feature_PE24.write(reg);
        s_feature_PE25.write(reg);
        s_feature_PE26.write(reg);
        s_feature_PE27.write(reg);
        s_feature_PE28.write(reg);
        s_feature_PE29.write(reg);
        s_feature_PE30.write(reg);
        s_feature_PE31.write(reg);
        s_feature_PE32.write(reg);
        s_feature_PE33.write(reg);
        s_feature_PE34.write(reg);
        s_feature_PE35.write(reg);
        s_feature_PE36.write(reg);
        s_feature_PE37.write(reg);
        s_feature_PE38.write(reg);
        s_feature_PE39.write(reg);
        s_feature_PE40.write(reg);
        s_feature_PE41.write(reg);
        s_feature_PE42.write(reg);
        s_feature_PE43.write(reg);
        s_feature_PE44.write(reg);
        s_feature_PE45.write(reg);
        s_feature_PE46.write(reg);
        s_feature_PE47.write(reg);
        s_feature_PE48.write(reg);
        s_feature_PE49.write(reg);
        s_feature_PE50.write(reg);
        s_feature_PE51.write(reg);
        s_feature_PE52.write(reg);
        s_feature_PE53.write(reg);
        s_feature_PE54.write(reg);
        s_feature_PE55.write(reg);
        s_feature_PE56.write(reg);
        s_feature_PE57.write(reg);
        s_feature_PE58.write(reg);
        s_feature_PE59.write(reg);
        s_feature_PE60.write(reg);
        s_feature_PE61.write(reg);
        s_feature_PE62.write(reg);
        s_feature_PE63.write(reg);
        s_feature_PE64.write(reg);
        s_feature_PE65.write(reg);
        s_feature_PE66.write(reg);
        s_feature_PE67.write(reg);
        s_feature_PE68.write(reg);
        s_feature_PE69.write(reg);
        s_feature_PE70.write(reg);
        s_feature_PE71.write(reg);
        s_feature_PE72.write(reg);
        s_feature_PE73.write(reg);
        s_feature_PE74.write(reg);
        s_feature_PE75.write(reg);
        s_feature_PE76.write(reg);
        s_feature_PE77.write(reg);
        s_feature_PE78.write(reg);
        s_feature_PE79.write(reg);
        s_feature_PE80.write(reg);
        s_feature_PE81.write(reg);
        s_feature_PE82.write(reg);
        s_feature_PE83.write(reg);
        s_feature_PE84.write(reg);
        s_feature_PE85.write(reg);
        s_feature_PE86.write(reg);
        s_feature_PE87.write(reg);
        s_feature_PE88.write(reg);
        s_feature_PE89.write(reg);
        s_feature_PE90.write(reg);
        s_feature_PE91.write(reg);
        s_feature_PE92.write(reg);
        s_feature_PE93.write(reg);
        s_feature_PE94.write(reg);
        s_feature_PE95.write(reg);
        s_feature_PE96.write(reg);
        s_feature_PE97.write(reg);
        s_feature_PE98.write(reg);
        s_feature_PE99.write(reg);
        s_feature_PE100.write(reg);
        s_feature_PE101.write(reg);
        s_feature_PE102.write(reg);
        s_feature_PE103.write(reg);
        s_feature_PE104.write(reg);
        s_feature_PE105.write(reg);
        s_feature_PE106.write(reg);
        s_feature_PE107.write(reg);
        s_feature_PE108.write(reg);
        s_feature_PE109.write(reg);
        s_feature_PE110.write(reg);
        s_feature_PE111.write(reg);
        s_feature_PE112.write(reg);
        s_feature_PE113.write(reg);
        s_feature_PE114.write(reg);
        s_feature_PE115.write(reg);
        s_feature_PE116.write(reg);
        s_feature_PE117.write(reg);
        s_feature_PE118.write(reg);
        s_feature_PE119.write(reg);
        s_feature_PE120.write(reg);
        s_feature_PE121.write(reg);
        s_feature_PE122.write(reg);
        s_feature_PE123.write(reg);
        s_feature_PE124.write(reg);
        s_feature_PE125.write(reg);
        s_feature_PE126.write(reg);
        s_feature_PE127.write(reg);
    }
}

// Row per PE = 8
template<>
void gather_results_32PEs<8>(
    hls::stream<D_TYPE>& s_result_PE0, hls::stream<D_TYPE>& s_result_PE1, 
    hls::stream<D_TYPE>& s_result_PE2, hls::stream<D_TYPE>& s_result_PE3, 
    hls::stream<D_TYPE>& s_result_PE4, hls::stream<D_TYPE>& s_result_PE5, 
    hls::stream<D_TYPE>& s_result_PE6, hls::stream<D_TYPE>& s_result_PE7, 
    hls::stream<D_TYPE>& s_result_PE8, hls::stream<D_TYPE>& s_result_PE9, 
    hls::stream<D_TYPE>& s_result_PE10, hls::stream<D_TYPE>& s_result_PE11, 
    hls::stream<D_TYPE>& s_result_PE12, hls::stream<D_TYPE>& s_result_PE13, 
    hls::stream<D_TYPE>& s_result_PE14, hls::stream<D_TYPE>& s_result_PE15, 
    hls::stream<D_TYPE>& s_result_PE16, hls::stream<D_TYPE>& s_result_PE17, 
    hls::stream<D_TYPE>& s_result_PE18, hls::stream<D_TYPE>& s_result_PE19, 
    hls::stream<D_TYPE>& s_result_PE20, hls::stream<D_TYPE>& s_result_PE21, 
    hls::stream<D_TYPE>& s_result_PE22, hls::stream<D_TYPE>& s_result_PE23, 
    hls::stream<D_TYPE>& s_result_PE24, hls::stream<D_TYPE>& s_result_PE25, 
    hls::stream<D_TYPE>& s_result_PE26, hls::stream<D_TYPE>& s_result_PE27, 
    hls::stream<D_TYPE>& s_result_PE28, hls::stream<D_TYPE>& s_result_PE29, 
    hls::stream<D_TYPE>& s_result_PE30, hls::stream<D_TYPE>& s_result_PE31, 
    hls::stream<W_TYPE>& s_result_all) {
     
    for_each_item:
    for (int item = 0; item < BATCH_NUM * BATCH_SIZE; item++) {
        #pragma HLS pipeline II=64  // write 1 result_all per CC

        W_TYPE reg0, reg1, reg2, reg3, reg4, reg5, reg6, reg7, 
            reg8, reg9, reg10, reg11, reg12, reg13, reg14, reg15, 
            reg16, reg17, reg18, reg19, reg20, reg21, reg22, reg23, 
            reg24, reg25, reg26, reg27, reg28, reg29, reg30, reg31, 
            reg32, reg33, reg34, reg35, reg36, reg37, reg38, reg39, 
            reg40, reg41, reg42, reg43, reg44, reg45, reg46, reg47, 
            reg48, reg49, reg50, reg51, reg52, reg53, reg54, reg55, 
            reg56, reg57, reg58, reg59, reg60, reg61, reg62, reg63;


        reg0.range(31, 0) = s_result_PE0.read() + 1;
        reg0.range(63, 32) = s_result_PE0.read() + 1;
        reg0.range(95, 64) = s_result_PE0.read() + 1;
        reg0.range(127, 96) = s_result_PE0.read() + 1;

        reg1.range(31, 0) = s_result_PE0.read() + 1;
        reg1.range(63, 32) = s_result_PE0.read() + 1;
        reg1.range(95, 64) = s_result_PE0.read() + 1;
        reg1.range(127, 96) = s_result_PE0.read() + 1;

        s_result_all.write(reg0);
        s_result_all.write(reg1);

        reg2.range(31, 0) = s_result_PE1.read() + 1;
        reg2.range(63, 32) = s_result_PE1.read() + 1;
        reg2.range(95, 64) = s_result_PE1.read() + 1;
        reg2.range(127, 96) = s_result_PE1.read() + 1;

        reg3.range(31, 0) = s_result_PE1.read() + 1;
        reg3.range(63, 32) = s_result_PE1.read() + 1;
        reg3.range(95, 64) = s_result_PE1.read() + 1;
        reg3.range(127, 96) = s_result_PE1.read() + 1;

        s_result_all.write(reg2);
        s_result_all.write(reg3);

        reg4.range(31, 0) = s_result_PE2.read() + 1;
        reg4.range(63, 32) = s_result_PE2.read() + 1;
        reg4.range(95, 64) = s_result_PE2.read() + 1;
        reg4.range(127, 96) = s_result_PE2.read() + 1;

        reg5.range(31, 0) = s_result_PE2.read() + 1;
        reg5.range(63, 32) = s_result_PE2.read() + 1;
        reg5.range(95, 64) = s_result_PE2.read() + 1;
        reg5.range(127, 96) = s_result_PE2.read() + 1;

        s_result_all.write(reg4);
        s_result_all.write(reg5);

        reg6.range(31, 0) = s_result_PE3.read() + 1;
        reg6.range(63, 32) = s_result_PE3.read() + 1;
        reg6.range(95, 64) = s_result_PE3.read() + 1;
        reg6.range(127, 96) = s_result_PE3.read() + 1;

        reg7.range(31, 0) = s_result_PE3.read() + 1;
        reg7.range(63, 32) = s_result_PE3.read() + 1;
        reg7.range(95, 64) = s_result_PE3.read() + 1;
        reg7.range(127, 96) = s_result_PE3.read() + 1;

        s_result_all.write(reg6);
        s_result_all.write(reg7);

        reg8.range(31, 0) = s_result_PE4.read() + 1;
        reg8.range(63, 32) = s_result_PE4.read() + 1;
        reg8.range(95, 64) = s_result_PE4.read() + 1;
        reg8.range(127, 96) = s_result_PE4.read() + 1;

        reg9.range(31, 0) = s_result_PE4.read() + 1;
        reg9.range(63, 32) = s_result_PE4.read() + 1;
        reg9.range(95, 64) = s_result_PE4.read() + 1;
        reg9.range(127, 96) = s_result_PE4.read() + 1;

        s_result_all.write(reg8);
        s_result_all.write(reg9);

        reg10.range(31, 0) = s_result_PE5.read() + 1;
        reg10.range(63, 32) = s_result_PE5.read() + 1;
        reg10.range(95, 64) = s_result_PE5.read() + 1;
        reg10.range(127, 96) = s_result_PE5.read() + 1;

        reg11.range(31, 0) = s_result_PE5.read() + 1;
        reg11.range(63, 32) = s_result_PE5.read() + 1;
        reg11.range(95, 64) = s_result_PE5.read() + 1;
        reg11.range(127, 96) = s_result_PE5.read() + 1;

        s_result_all.write(reg10);
        s_result_all.write(reg11);

        reg12.range(31, 0) = s_result_PE6.read() + 1;
        reg12.range(63, 32) = s_result_PE6.read() + 1;
        reg12.range(95, 64) = s_result_PE6.read() + 1;
        reg12.range(127, 96) = s_result_PE6.read() + 1;

        reg13.range(31, 0) = s_result_PE6.read() + 1;
        reg13.range(63, 32) = s_result_PE6.read() + 1;
        reg13.range(95, 64) = s_result_PE6.read() + 1;
        reg13.range(127, 96) = s_result_PE6.read() + 1;

        s_result_all.write(reg12);
        s_result_all.write(reg13);

        reg14.range(31, 0) = s_result_PE7.read() + 1;
        reg14.range(63, 32) = s_result_PE7.read() + 1;
        reg14.range(95, 64) = s_result_PE7.read() + 1;
        reg14.range(127, 96) = s_result_PE7.read() + 1;

        reg15.range(31, 0) = s_result_PE7.read() + 1;
        reg15.range(63, 32) = s_result_PE7.read() + 1;
        reg15.range(95, 64) = s_result_PE7.read() + 1;
        reg15.range(127, 96) = s_result_PE7.read() + 1;

        s_result_all.write(reg14);
        s_result_all.write(reg15);

        reg16.range(31, 0) = s_result_PE8.read() + 1;
        reg16.range(63, 32) = s_result_PE8.read() + 1;
        reg16.range(95, 64) = s_result_PE8.read() + 1;
        reg16.range(127, 96) = s_result_PE8.read() + 1;

        reg17.range(31, 0) = s_result_PE8.read() + 1;
        reg17.range(63, 32) = s_result_PE8.read() + 1;
        reg17.range(95, 64) = s_result_PE8.read() + 1;
        reg17.range(127, 96) = s_result_PE8.read() + 1;

        s_result_all.write(reg16);
        s_result_all.write(reg17);

        reg18.range(31, 0) = s_result_PE9.read() + 1;
        reg18.range(63, 32) = s_result_PE9.read() + 1;
        reg18.range(95, 64) = s_result_PE9.read() + 1;
        reg18.range(127, 96) = s_result_PE9.read() + 1;

        reg19.range(31, 0) = s_result_PE9.read() + 1;
        reg19.range(63, 32) = s_result_PE9.read() + 1;
        reg19.range(95, 64) = s_result_PE9.read() + 1;
        reg19.range(127, 96) = s_result_PE9.read() + 1;

        s_result_all.write(reg18);
        s_result_all.write(reg19);

        reg20.range(31, 0) = s_result_PE10.read() + 1;
        reg20.range(63, 32) = s_result_PE10.read() + 1;
        reg20.range(95, 64) = s_result_PE10.read() + 1;
        reg20.range(127, 96) = s_result_PE10.read() + 1;

        reg21.range(31, 0) = s_result_PE10.read() + 1;
        reg21.range(63, 32) = s_result_PE10.read() + 1;
        reg21.range(95, 64) = s_result_PE10.read() + 1;
        reg21.range(127, 96) = s_result_PE10.read() + 1;

        s_result_all.write(reg20);
        s_result_all.write(reg21);

        reg22.range(31, 0) = s_result_PE11.read() + 1;
        reg22.range(63, 32) = s_result_PE11.read() + 1;
        reg22.range(95, 64) = s_result_PE11.read() + 1;
        reg22.range(127, 96) = s_result_PE11.read() + 1;

        reg23.range(31, 0) = s_result_PE11.read() + 1;
        reg23.range(63, 32) = s_result_PE11.read() + 1;
        reg23.range(95, 64) = s_result_PE11.read() + 1;
        reg23.range(127, 96) = s_result_PE11.read() + 1;

        s_result_all.write(reg22);
        s_result_all.write(reg23);

        reg24.range(31, 0) = s_result_PE12.read() + 1;
        reg24.range(63, 32) = s_result_PE12.read() + 1;
        reg24.range(95, 64) = s_result_PE12.read() + 1;
        reg24.range(127, 96) = s_result_PE12.read() + 1;

        reg25.range(31, 0) = s_result_PE12.read() + 1;
        reg25.range(63, 32) = s_result_PE12.read() + 1;
        reg25.range(95, 64) = s_result_PE12.read() + 1;
        reg25.range(127, 96) = s_result_PE12.read() + 1;

        s_result_all.write(reg24);
        s_result_all.write(reg25);

        reg26.range(31, 0) = s_result_PE13.read() + 1;
        reg26.range(63, 32) = s_result_PE13.read() + 1;
        reg26.range(95, 64) = s_result_PE13.read() + 1;
        reg26.range(127, 96) = s_result_PE13.read() + 1;

        reg27.range(31, 0) = s_result_PE13.read() + 1;
        reg27.range(63, 32) = s_result_PE13.read() + 1;
        reg27.range(95, 64) = s_result_PE13.read() + 1;
        reg27.range(127, 96) = s_result_PE13.read() + 1;

        s_result_all.write(reg26);
        s_result_all.write(reg27);

        reg28.range(31, 0) = s_result_PE14.read() + 1;
        reg28.range(63, 32) = s_result_PE14.read() + 1;
        reg28.range(95, 64) = s_result_PE14.read() + 1;
        reg28.range(127, 96) = s_result_PE14.read() + 1;

        reg29.range(31, 0) = s_result_PE14.read() + 1;
        reg29.range(63, 32) = s_result_PE14.read() + 1;
        reg29.range(95, 64) = s_result_PE14.read() + 1;
        reg29.range(127, 96) = s_result_PE14.read() + 1;

        s_result_all.write(reg28);
        s_result_all.write(reg29);

        reg30.range(31, 0) = s_result_PE15.read() + 1;
        reg30.range(63, 32) = s_result_PE15.read() + 1;
        reg30.range(95, 64) = s_result_PE15.read() + 1;
        reg30.range(127, 96) = s_result_PE15.read() + 1;

        reg31.range(31, 0) = s_result_PE15.read() + 1;
        reg31.range(63, 32) = s_result_PE15.read() + 1;
        reg31.range(95, 64) = s_result_PE15.read() + 1;
        reg31.range(127, 96) = s_result_PE15.read() + 1;

        s_result_all.write(reg30);
        s_result_all.write(reg31);

        reg32.range(31, 0) = s_result_PE16.read() + 1;
        reg32.range(63, 32) = s_result_PE16.read() + 1;
        reg32.range(95, 64) = s_result_PE16.read() + 1;
        reg32.range(127, 96) = s_result_PE16.read() + 1;

        reg33.range(31, 0) = s_result_PE16.read() + 1;
        reg33.range(63, 32) = s_result_PE16.read() + 1;
        reg33.range(95, 64) = s_result_PE16.read() + 1;
        reg33.range(127, 96) = s_result_PE16.read() + 1;

        s_result_all.write(reg32);
        s_result_all.write(reg33);

        reg34.range(31, 0) = s_result_PE17.read() + 1;
        reg34.range(63, 32) = s_result_PE17.read() + 1;
        reg34.range(95, 64) = s_result_PE17.read() + 1;
        reg34.range(127, 96) = s_result_PE17.read() + 1;

        reg35.range(31, 0) = s_result_PE17.read() + 1;
        reg35.range(63, 32) = s_result_PE17.read() + 1;
        reg35.range(95, 64) = s_result_PE17.read() + 1;
        reg35.range(127, 96) = s_result_PE17.read() + 1;

        s_result_all.write(reg34);
        s_result_all.write(reg35);

        reg36.range(31, 0) = s_result_PE18.read() + 1;
        reg36.range(63, 32) = s_result_PE18.read() + 1;
        reg36.range(95, 64) = s_result_PE18.read() + 1;
        reg36.range(127, 96) = s_result_PE18.read() + 1;

        reg37.range(31, 0) = s_result_PE18.read() + 1;
        reg37.range(63, 32) = s_result_PE18.read() + 1;
        reg37.range(95, 64) = s_result_PE18.read() + 1;
        reg37.range(127, 96) = s_result_PE18.read() + 1;

        s_result_all.write(reg36);
        s_result_all.write(reg37);

        reg38.range(31, 0) = s_result_PE19.read() + 1;
        reg38.range(63, 32) = s_result_PE19.read() + 1;
        reg38.range(95, 64) = s_result_PE19.read() + 1;
        reg38.range(127, 96) = s_result_PE19.read() + 1;

        reg39.range(31, 0) = s_result_PE19.read() + 1;
        reg39.range(63, 32) = s_result_PE19.read() + 1;
        reg39.range(95, 64) = s_result_PE19.read() + 1;
        reg39.range(127, 96) = s_result_PE19.read() + 1;

        s_result_all.write(reg38);
        s_result_all.write(reg39);

        reg40.range(31, 0) = s_result_PE20.read() + 1;
        reg40.range(63, 32) = s_result_PE20.read() + 1;
        reg40.range(95, 64) = s_result_PE20.read() + 1;
        reg40.range(127, 96) = s_result_PE20.read() + 1;

        reg41.range(31, 0) = s_result_PE20.read() + 1;
        reg41.range(63, 32) = s_result_PE20.read() + 1;
        reg41.range(95, 64) = s_result_PE20.read() + 1;
        reg41.range(127, 96) = s_result_PE20.read() + 1;

        s_result_all.write(reg40);
        s_result_all.write(reg41);

        reg42.range(31, 0) = s_result_PE21.read() + 1;
        reg42.range(63, 32) = s_result_PE21.read() + 1;
        reg42.range(95, 64) = s_result_PE21.read() + 1;
        reg42.range(127, 96) = s_result_PE21.read() + 1;

        reg43.range(31, 0) = s_result_PE21.read() + 1;
        reg43.range(63, 32) = s_result_PE21.read() + 1;
        reg43.range(95, 64) = s_result_PE21.read() + 1;
        reg43.range(127, 96) = s_result_PE21.read() + 1;

        s_result_all.write(reg42);
        s_result_all.write(reg43);

        reg44.range(31, 0) = s_result_PE22.read() + 1;
        reg44.range(63, 32) = s_result_PE22.read() + 1;
        reg44.range(95, 64) = s_result_PE22.read() + 1;
        reg44.range(127, 96) = s_result_PE22.read() + 1;

        reg45.range(31, 0) = s_result_PE22.read() + 1;
        reg45.range(63, 32) = s_result_PE22.read() + 1;
        reg45.range(95, 64) = s_result_PE22.read() + 1;
        reg45.range(127, 96) = s_result_PE22.read() + 1;

        s_result_all.write(reg44);
        s_result_all.write(reg45);

        reg46.range(31, 0) = s_result_PE23.read() + 1;
        reg46.range(63, 32) = s_result_PE23.read() + 1;
        reg46.range(95, 64) = s_result_PE23.read() + 1;
        reg46.range(127, 96) = s_result_PE23.read() + 1;

        reg47.range(31, 0) = s_result_PE23.read() + 1;
        reg47.range(63, 32) = s_result_PE23.read() + 1;
        reg47.range(95, 64) = s_result_PE23.read() + 1;
        reg47.range(127, 96) = s_result_PE23.read() + 1;

        s_result_all.write(reg46);
        s_result_all.write(reg47);

        reg48.range(31, 0) = s_result_PE24.read() + 1;
        reg48.range(63, 32) = s_result_PE24.read() + 1;
        reg48.range(95, 64) = s_result_PE24.read() + 1;
        reg48.range(127, 96) = s_result_PE24.read() + 1;

        reg49.range(31, 0) = s_result_PE24.read() + 1;
        reg49.range(63, 32) = s_result_PE24.read() + 1;
        reg49.range(95, 64) = s_result_PE24.read() + 1;
        reg49.range(127, 96) = s_result_PE24.read() + 1;

        s_result_all.write(reg48);
        s_result_all.write(reg49);

        reg50.range(31, 0) = s_result_PE25.read() + 1;
        reg50.range(63, 32) = s_result_PE25.read() + 1;
        reg50.range(95, 64) = s_result_PE25.read() + 1;
        reg50.range(127, 96) = s_result_PE25.read() + 1;

        reg51.range(31, 0) = s_result_PE25.read() + 1;
        reg51.range(63, 32) = s_result_PE25.read() + 1;
        reg51.range(95, 64) = s_result_PE25.read() + 1;
        reg51.range(127, 96) = s_result_PE25.read() + 1;

        s_result_all.write(reg50);
        s_result_all.write(reg51);

        reg52.range(31, 0) = s_result_PE26.read() + 1;
        reg52.range(63, 32) = s_result_PE26.read() + 1;
        reg52.range(95, 64) = s_result_PE26.read() + 1;
        reg52.range(127, 96) = s_result_PE26.read() + 1;

        reg53.range(31, 0) = s_result_PE26.read() + 1;
        reg53.range(63, 32) = s_result_PE26.read() + 1;
        reg53.range(95, 64) = s_result_PE26.read() + 1;
        reg53.range(127, 96) = s_result_PE26.read() + 1;

        s_result_all.write(reg52);
        s_result_all.write(reg53);

        reg54.range(31, 0) = s_result_PE27.read() + 1;
        reg54.range(63, 32) = s_result_PE27.read() + 1;
        reg54.range(95, 64) = s_result_PE27.read() + 1;
        reg54.range(127, 96) = s_result_PE27.read() + 1;

        reg55.range(31, 0) = s_result_PE27.read() + 1;
        reg55.range(63, 32) = s_result_PE27.read() + 1;
        reg55.range(95, 64) = s_result_PE27.read() + 1;
        reg55.range(127, 96) = s_result_PE27.read() + 1;

        s_result_all.write(reg54);
        s_result_all.write(reg55);

        reg56.range(31, 0) = s_result_PE28.read() + 1;
        reg56.range(63, 32) = s_result_PE28.read() + 1;
        reg56.range(95, 64) = s_result_PE28.read() + 1;
        reg56.range(127, 96) = s_result_PE28.read() + 1;

        reg57.range(31, 0) = s_result_PE28.read() + 1;
        reg57.range(63, 32) = s_result_PE28.read() + 1;
        reg57.range(95, 64) = s_result_PE28.read() + 1;
        reg57.range(127, 96) = s_result_PE28.read() + 1;

        s_result_all.write(reg56);
        s_result_all.write(reg57);

        reg58.range(31, 0) = s_result_PE29.read() + 1;
        reg58.range(63, 32) = s_result_PE29.read() + 1;
        reg58.range(95, 64) = s_result_PE29.read() + 1;
        reg58.range(127, 96) = s_result_PE29.read() + 1;

        reg59.range(31, 0) = s_result_PE29.read() + 1;
        reg59.range(63, 32) = s_result_PE29.read() + 1;
        reg59.range(95, 64) = s_result_PE29.read() + 1;
        reg59.range(127, 96) = s_result_PE29.read() + 1;

        s_result_all.write(reg58);
        s_result_all.write(reg59);

        reg60.range(31, 0) = s_result_PE30.read() + 1;
        reg60.range(63, 32) = s_result_PE30.read() + 1;
        reg60.range(95, 64) = s_result_PE30.read() + 1;
        reg60.range(127, 96) = s_result_PE30.read() + 1;

        reg61.range(31, 0) = s_result_PE30.read() + 1;
        reg61.range(63, 32) = s_result_PE30.read() + 1;
        reg61.range(95, 64) = s_result_PE30.read() + 1;
        reg61.range(127, 96) = s_result_PE30.read() + 1;

        s_result_all.write(reg60);
        s_result_all.write(reg61);

        reg62.range(31, 0) = s_result_PE31.read() + 1;
        reg62.range(63, 32) = s_result_PE31.read() + 1;
        reg62.range(95, 64) = s_result_PE31.read() + 1;
        reg62.range(127, 96) = s_result_PE31.read() + 1;

        reg63.range(31, 0) = s_result_PE31.read() + 1;
        reg63.range(63, 32) = s_result_PE31.read() + 1;
        reg63.range(95, 64) = s_result_PE31.read() + 1;
        reg63.range(127, 96) = s_result_PE31.read() + 1;

        s_result_all.write(reg62);
        s_result_all.write(reg63);
    }
}


// ROW_PER_PE = 4, layer 2
template<>
void gather_results_128PEs<4>(
    hls::stream<D_TYPE>& s_result_PE0, hls::stream<D_TYPE>& s_result_PE1, 
    hls::stream<D_TYPE>& s_result_PE2, hls::stream<D_TYPE>& s_result_PE3, 
    hls::stream<D_TYPE>& s_result_PE4, hls::stream<D_TYPE>& s_result_PE5, 
    hls::stream<D_TYPE>& s_result_PE6, hls::stream<D_TYPE>& s_result_PE7, 
    hls::stream<D_TYPE>& s_result_PE8, hls::stream<D_TYPE>& s_result_PE9, 
    hls::stream<D_TYPE>& s_result_PE10, hls::stream<D_TYPE>& s_result_PE11, 
    hls::stream<D_TYPE>& s_result_PE12, hls::stream<D_TYPE>& s_result_PE13, 
    hls::stream<D_TYPE>& s_result_PE14, hls::stream<D_TYPE>& s_result_PE15, 
    hls::stream<D_TYPE>& s_result_PE16, hls::stream<D_TYPE>& s_result_PE17, 
    hls::stream<D_TYPE>& s_result_PE18, hls::stream<D_TYPE>& s_result_PE19, 
    hls::stream<D_TYPE>& s_result_PE20, hls::stream<D_TYPE>& s_result_PE21, 
    hls::stream<D_TYPE>& s_result_PE22, hls::stream<D_TYPE>& s_result_PE23, 
    hls::stream<D_TYPE>& s_result_PE24, hls::stream<D_TYPE>& s_result_PE25, 
    hls::stream<D_TYPE>& s_result_PE26, hls::stream<D_TYPE>& s_result_PE27, 
    hls::stream<D_TYPE>& s_result_PE28, hls::stream<D_TYPE>& s_result_PE29, 
    hls::stream<D_TYPE>& s_result_PE30, hls::stream<D_TYPE>& s_result_PE31, 
    hls::stream<D_TYPE>& s_result_PE32, hls::stream<D_TYPE>& s_result_PE33, 
    hls::stream<D_TYPE>& s_result_PE34, hls::stream<D_TYPE>& s_result_PE35, 
    hls::stream<D_TYPE>& s_result_PE36, hls::stream<D_TYPE>& s_result_PE37, 
    hls::stream<D_TYPE>& s_result_PE38, hls::stream<D_TYPE>& s_result_PE39, 
    hls::stream<D_TYPE>& s_result_PE40, hls::stream<D_TYPE>& s_result_PE41, 
    hls::stream<D_TYPE>& s_result_PE42, hls::stream<D_TYPE>& s_result_PE43, 
    hls::stream<D_TYPE>& s_result_PE44, hls::stream<D_TYPE>& s_result_PE45, 
    hls::stream<D_TYPE>& s_result_PE46, hls::stream<D_TYPE>& s_result_PE47, 
    hls::stream<D_TYPE>& s_result_PE48, hls::stream<D_TYPE>& s_result_PE49, 
    hls::stream<D_TYPE>& s_result_PE50, hls::stream<D_TYPE>& s_result_PE51, 
    hls::stream<D_TYPE>& s_result_PE52, hls::stream<D_TYPE>& s_result_PE53, 
    hls::stream<D_TYPE>& s_result_PE54, hls::stream<D_TYPE>& s_result_PE55, 
    hls::stream<D_TYPE>& s_result_PE56, hls::stream<D_TYPE>& s_result_PE57, 
    hls::stream<D_TYPE>& s_result_PE58, hls::stream<D_TYPE>& s_result_PE59, 
    hls::stream<D_TYPE>& s_result_PE60, hls::stream<D_TYPE>& s_result_PE61, 
    hls::stream<D_TYPE>& s_result_PE62, hls::stream<D_TYPE>& s_result_PE63, 
    hls::stream<D_TYPE>& s_result_PE64, hls::stream<D_TYPE>& s_result_PE65, 
    hls::stream<D_TYPE>& s_result_PE66, hls::stream<D_TYPE>& s_result_PE67, 
    hls::stream<D_TYPE>& s_result_PE68, hls::stream<D_TYPE>& s_result_PE69, 
    hls::stream<D_TYPE>& s_result_PE70, hls::stream<D_TYPE>& s_result_PE71, 
    hls::stream<D_TYPE>& s_result_PE72, hls::stream<D_TYPE>& s_result_PE73, 
    hls::stream<D_TYPE>& s_result_PE74, hls::stream<D_TYPE>& s_result_PE75, 
    hls::stream<D_TYPE>& s_result_PE76, hls::stream<D_TYPE>& s_result_PE77, 
    hls::stream<D_TYPE>& s_result_PE78, hls::stream<D_TYPE>& s_result_PE79, 
    hls::stream<D_TYPE>& s_result_PE80, hls::stream<D_TYPE>& s_result_PE81, 
    hls::stream<D_TYPE>& s_result_PE82, hls::stream<D_TYPE>& s_result_PE83, 
    hls::stream<D_TYPE>& s_result_PE84, hls::stream<D_TYPE>& s_result_PE85, 
    hls::stream<D_TYPE>& s_result_PE86, hls::stream<D_TYPE>& s_result_PE87, 
    hls::stream<D_TYPE>& s_result_PE88, hls::stream<D_TYPE>& s_result_PE89, 
    hls::stream<D_TYPE>& s_result_PE90, hls::stream<D_TYPE>& s_result_PE91, 
    hls::stream<D_TYPE>& s_result_PE92, hls::stream<D_TYPE>& s_result_PE93, 
    hls::stream<D_TYPE>& s_result_PE94, hls::stream<D_TYPE>& s_result_PE95, 
    hls::stream<D_TYPE>& s_result_PE96, hls::stream<D_TYPE>& s_result_PE97, 
    hls::stream<D_TYPE>& s_result_PE98, hls::stream<D_TYPE>& s_result_PE99, 
    hls::stream<D_TYPE>& s_result_PE100, hls::stream<D_TYPE>& s_result_PE101, 
    hls::stream<D_TYPE>& s_result_PE102, hls::stream<D_TYPE>& s_result_PE103, 
    hls::stream<D_TYPE>& s_result_PE104, hls::stream<D_TYPE>& s_result_PE105, 
    hls::stream<D_TYPE>& s_result_PE106, hls::stream<D_TYPE>& s_result_PE107, 
    hls::stream<D_TYPE>& s_result_PE108, hls::stream<D_TYPE>& s_result_PE109, 
    hls::stream<D_TYPE>& s_result_PE110, hls::stream<D_TYPE>& s_result_PE111, 
    hls::stream<D_TYPE>& s_result_PE112, hls::stream<D_TYPE>& s_result_PE113, 
    hls::stream<D_TYPE>& s_result_PE114, hls::stream<D_TYPE>& s_result_PE115, 
    hls::stream<D_TYPE>& s_result_PE116, hls::stream<D_TYPE>& s_result_PE117, 
    hls::stream<D_TYPE>& s_result_PE118, hls::stream<D_TYPE>& s_result_PE119, 
    hls::stream<D_TYPE>& s_result_PE120, hls::stream<D_TYPE>& s_result_PE121, 
    hls::stream<D_TYPE>& s_result_PE122, hls::stream<D_TYPE>& s_result_PE123, 
    hls::stream<D_TYPE>& s_result_PE124, hls::stream<D_TYPE>& s_result_PE125, 
    hls::stream<D_TYPE>& s_result_PE126, hls::stream<D_TYPE>& s_result_PE127, 
    hls::stream<W_TYPE>& s_result_all) {

    for_each_item:
    for (int item = 0; item < BATCH_NUM * BATCH_SIZE; item++) {
        #pragma HLS pipeline II=128  // write 1 result_all per CC

        W_TYPE reg0, reg1, reg2, reg3, reg4, reg5, reg6, reg7, 
            reg8, reg9, reg10, reg11, reg12, reg13, reg14, reg15, 
            reg16, reg17, reg18, reg19, reg20, reg21, reg22, reg23, 
            reg24, reg25, reg26, reg27, reg28, reg29, reg30, reg31, 
            reg32, reg33, reg34, reg35, reg36, reg37, reg38, reg39, 
            reg40, reg41, reg42, reg43, reg44, reg45, reg46, reg47, 
            reg48, reg49, reg50, reg51, reg52, reg53, reg54, reg55, 
            reg56, reg57, reg58, reg59, reg60, reg61, reg62, reg63, 
            reg64, reg65, reg66, reg67, reg68, reg69, reg70, reg71, 
            reg72, reg73, reg74, reg75, reg76, reg77, reg78, reg79, 
            reg80, reg81, reg82, reg83, reg84, reg85, reg86, reg87, 
            reg88, reg89, reg90, reg91, reg92, reg93, reg94, reg95, 
            reg96, reg97, reg98, reg99, reg100, reg101, reg102, reg103, 
            reg104, reg105, reg106, reg107, reg108, reg109, reg110, reg111, 
            reg112, reg113, reg114, reg115, reg116, reg117, reg118, reg119, 
            reg120, reg121, reg122, reg123, reg124, reg125, reg126, reg127;


        reg0.range(31, 0) = s_result_PE0.read() + 1;
        reg0.range(63, 32) = s_result_PE0.read() + 1;
        reg0.range(95, 64) = s_result_PE0.read() + 1;
        reg0.range(127, 96) = s_result_PE0.read() + 1;

        s_result_all.write(reg0);

        reg1.range(31, 0) = s_result_PE1.read() + 1;
        reg1.range(63, 32) = s_result_PE1.read() + 1;
        reg1.range(95, 64) = s_result_PE1.read() + 1;
        reg1.range(127, 96) = s_result_PE1.read() + 1;

        s_result_all.write(reg1);

        reg2.range(31, 0) = s_result_PE2.read() + 1;
        reg2.range(63, 32) = s_result_PE2.read() + 1;
        reg2.range(95, 64) = s_result_PE2.read() + 1;
        reg2.range(127, 96) = s_result_PE2.read() + 1;

        s_result_all.write(reg2);

        reg3.range(31, 0) = s_result_PE3.read() + 1;
        reg3.range(63, 32) = s_result_PE3.read() + 1;
        reg3.range(95, 64) = s_result_PE3.read() + 1;
        reg3.range(127, 96) = s_result_PE3.read() + 1;

        s_result_all.write(reg3);

        reg4.range(31, 0) = s_result_PE4.read() + 1;
        reg4.range(63, 32) = s_result_PE4.read() + 1;
        reg4.range(95, 64) = s_result_PE4.read() + 1;
        reg4.range(127, 96) = s_result_PE4.read() + 1;

        s_result_all.write(reg4);

        reg5.range(31, 0) = s_result_PE5.read() + 1;
        reg5.range(63, 32) = s_result_PE5.read() + 1;
        reg5.range(95, 64) = s_result_PE5.read() + 1;
        reg5.range(127, 96) = s_result_PE5.read() + 1;

        s_result_all.write(reg5);

        reg6.range(31, 0) = s_result_PE6.read() + 1;
        reg6.range(63, 32) = s_result_PE6.read() + 1;
        reg6.range(95, 64) = s_result_PE6.read() + 1;
        reg6.range(127, 96) = s_result_PE6.read() + 1;

        s_result_all.write(reg6);

        reg7.range(31, 0) = s_result_PE7.read() + 1;
        reg7.range(63, 32) = s_result_PE7.read() + 1;
        reg7.range(95, 64) = s_result_PE7.read() + 1;
        reg7.range(127, 96) = s_result_PE7.read() + 1;

        s_result_all.write(reg7);

        reg8.range(31, 0) = s_result_PE8.read() + 1;
        reg8.range(63, 32) = s_result_PE8.read() + 1;
        reg8.range(95, 64) = s_result_PE8.read() + 1;
        reg8.range(127, 96) = s_result_PE8.read() + 1;

        s_result_all.write(reg8);

        reg9.range(31, 0) = s_result_PE9.read() + 1;
        reg9.range(63, 32) = s_result_PE9.read() + 1;
        reg9.range(95, 64) = s_result_PE9.read() + 1;
        reg9.range(127, 96) = s_result_PE9.read() + 1;

        s_result_all.write(reg9);

        reg10.range(31, 0) = s_result_PE10.read() + 1;
        reg10.range(63, 32) = s_result_PE10.read() + 1;
        reg10.range(95, 64) = s_result_PE10.read() + 1;
        reg10.range(127, 96) = s_result_PE10.read() + 1;

        s_result_all.write(reg10);

        reg11.range(31, 0) = s_result_PE11.read() + 1;
        reg11.range(63, 32) = s_result_PE11.read() + 1;
        reg11.range(95, 64) = s_result_PE11.read() + 1;
        reg11.range(127, 96) = s_result_PE11.read() + 1;

        s_result_all.write(reg11);

        reg12.range(31, 0) = s_result_PE12.read() + 1;
        reg12.range(63, 32) = s_result_PE12.read() + 1;
        reg12.range(95, 64) = s_result_PE12.read() + 1;
        reg12.range(127, 96) = s_result_PE12.read() + 1;

        s_result_all.write(reg12);

        reg13.range(31, 0) = s_result_PE13.read() + 1;
        reg13.range(63, 32) = s_result_PE13.read() + 1;
        reg13.range(95, 64) = s_result_PE13.read() + 1;
        reg13.range(127, 96) = s_result_PE13.read() + 1;

        s_result_all.write(reg13);

        reg14.range(31, 0) = s_result_PE14.read() + 1;
        reg14.range(63, 32) = s_result_PE14.read() + 1;
        reg14.range(95, 64) = s_result_PE14.read() + 1;
        reg14.range(127, 96) = s_result_PE14.read() + 1;

        s_result_all.write(reg14);

        reg15.range(31, 0) = s_result_PE15.read() + 1;
        reg15.range(63, 32) = s_result_PE15.read() + 1;
        reg15.range(95, 64) = s_result_PE15.read() + 1;
        reg15.range(127, 96) = s_result_PE15.read() + 1;

        s_result_all.write(reg15);

        reg16.range(31, 0) = s_result_PE16.read() + 1;
        reg16.range(63, 32) = s_result_PE16.read() + 1;
        reg16.range(95, 64) = s_result_PE16.read() + 1;
        reg16.range(127, 96) = s_result_PE16.read() + 1;

        s_result_all.write(reg16);

        reg17.range(31, 0) = s_result_PE17.read() + 1;
        reg17.range(63, 32) = s_result_PE17.read() + 1;
        reg17.range(95, 64) = s_result_PE17.read() + 1;
        reg17.range(127, 96) = s_result_PE17.read() + 1;

        s_result_all.write(reg17);

        reg18.range(31, 0) = s_result_PE18.read() + 1;
        reg18.range(63, 32) = s_result_PE18.read() + 1;
        reg18.range(95, 64) = s_result_PE18.read() + 1;
        reg18.range(127, 96) = s_result_PE18.read() + 1;

        s_result_all.write(reg18);

        reg19.range(31, 0) = s_result_PE19.read() + 1;
        reg19.range(63, 32) = s_result_PE19.read() + 1;
        reg19.range(95, 64) = s_result_PE19.read() + 1;
        reg19.range(127, 96) = s_result_PE19.read() + 1;

        s_result_all.write(reg19);

        reg20.range(31, 0) = s_result_PE20.read() + 1;
        reg20.range(63, 32) = s_result_PE20.read() + 1;
        reg20.range(95, 64) = s_result_PE20.read() + 1;
        reg20.range(127, 96) = s_result_PE20.read() + 1;

        s_result_all.write(reg20);

        reg21.range(31, 0) = s_result_PE21.read() + 1;
        reg21.range(63, 32) = s_result_PE21.read() + 1;
        reg21.range(95, 64) = s_result_PE21.read() + 1;
        reg21.range(127, 96) = s_result_PE21.read() + 1;

        s_result_all.write(reg21);

        reg22.range(31, 0) = s_result_PE22.read() + 1;
        reg22.range(63, 32) = s_result_PE22.read() + 1;
        reg22.range(95, 64) = s_result_PE22.read() + 1;
        reg22.range(127, 96) = s_result_PE22.read() + 1;

        s_result_all.write(reg22);

        reg23.range(31, 0) = s_result_PE23.read() + 1;
        reg23.range(63, 32) = s_result_PE23.read() + 1;
        reg23.range(95, 64) = s_result_PE23.read() + 1;
        reg23.range(127, 96) = s_result_PE23.read() + 1;

        s_result_all.write(reg23);

        reg24.range(31, 0) = s_result_PE24.read() + 1;
        reg24.range(63, 32) = s_result_PE24.read() + 1;
        reg24.range(95, 64) = s_result_PE24.read() + 1;
        reg24.range(127, 96) = s_result_PE24.read() + 1;

        s_result_all.write(reg24);

        reg25.range(31, 0) = s_result_PE25.read() + 1;
        reg25.range(63, 32) = s_result_PE25.read() + 1;
        reg25.range(95, 64) = s_result_PE25.read() + 1;
        reg25.range(127, 96) = s_result_PE25.read() + 1;

        s_result_all.write(reg25);

        reg26.range(31, 0) = s_result_PE26.read() + 1;
        reg26.range(63, 32) = s_result_PE26.read() + 1;
        reg26.range(95, 64) = s_result_PE26.read() + 1;
        reg26.range(127, 96) = s_result_PE26.read() + 1;

        s_result_all.write(reg26);

        reg27.range(31, 0) = s_result_PE27.read() + 1;
        reg27.range(63, 32) = s_result_PE27.read() + 1;
        reg27.range(95, 64) = s_result_PE27.read() + 1;
        reg27.range(127, 96) = s_result_PE27.read() + 1;

        s_result_all.write(reg27);

        reg28.range(31, 0) = s_result_PE28.read() + 1;
        reg28.range(63, 32) = s_result_PE28.read() + 1;
        reg28.range(95, 64) = s_result_PE28.read() + 1;
        reg28.range(127, 96) = s_result_PE28.read() + 1;

        s_result_all.write(reg28);

        reg29.range(31, 0) = s_result_PE29.read() + 1;
        reg29.range(63, 32) = s_result_PE29.read() + 1;
        reg29.range(95, 64) = s_result_PE29.read() + 1;
        reg29.range(127, 96) = s_result_PE29.read() + 1;

        s_result_all.write(reg29);

        reg30.range(31, 0) = s_result_PE30.read() + 1;
        reg30.range(63, 32) = s_result_PE30.read() + 1;
        reg30.range(95, 64) = s_result_PE30.read() + 1;
        reg30.range(127, 96) = s_result_PE30.read() + 1;

        s_result_all.write(reg30);

        reg31.range(31, 0) = s_result_PE31.read() + 1;
        reg31.range(63, 32) = s_result_PE31.read() + 1;
        reg31.range(95, 64) = s_result_PE31.read() + 1;
        reg31.range(127, 96) = s_result_PE31.read() + 1;

        s_result_all.write(reg31);

        reg32.range(31, 0) = s_result_PE32.read() + 1;
        reg32.range(63, 32) = s_result_PE32.read() + 1;
        reg32.range(95, 64) = s_result_PE32.read() + 1;
        reg32.range(127, 96) = s_result_PE32.read() + 1;

        s_result_all.write(reg32);

        reg33.range(31, 0) = s_result_PE33.read() + 1;
        reg33.range(63, 32) = s_result_PE33.read() + 1;
        reg33.range(95, 64) = s_result_PE33.read() + 1;
        reg33.range(127, 96) = s_result_PE33.read() + 1;

        s_result_all.write(reg33);

        reg34.range(31, 0) = s_result_PE34.read() + 1;
        reg34.range(63, 32) = s_result_PE34.read() + 1;
        reg34.range(95, 64) = s_result_PE34.read() + 1;
        reg34.range(127, 96) = s_result_PE34.read() + 1;

        s_result_all.write(reg34);

        reg35.range(31, 0) = s_result_PE35.read() + 1;
        reg35.range(63, 32) = s_result_PE35.read() + 1;
        reg35.range(95, 64) = s_result_PE35.read() + 1;
        reg35.range(127, 96) = s_result_PE35.read() + 1;

        s_result_all.write(reg35);

        reg36.range(31, 0) = s_result_PE36.read() + 1;
        reg36.range(63, 32) = s_result_PE36.read() + 1;
        reg36.range(95, 64) = s_result_PE36.read() + 1;
        reg36.range(127, 96) = s_result_PE36.read() + 1;

        s_result_all.write(reg36);

        reg37.range(31, 0) = s_result_PE37.read() + 1;
        reg37.range(63, 32) = s_result_PE37.read() + 1;
        reg37.range(95, 64) = s_result_PE37.read() + 1;
        reg37.range(127, 96) = s_result_PE37.read() + 1;

        s_result_all.write(reg37);

        reg38.range(31, 0) = s_result_PE38.read() + 1;
        reg38.range(63, 32) = s_result_PE38.read() + 1;
        reg38.range(95, 64) = s_result_PE38.read() + 1;
        reg38.range(127, 96) = s_result_PE38.read() + 1;

        s_result_all.write(reg38);

        reg39.range(31, 0) = s_result_PE39.read() + 1;
        reg39.range(63, 32) = s_result_PE39.read() + 1;
        reg39.range(95, 64) = s_result_PE39.read() + 1;
        reg39.range(127, 96) = s_result_PE39.read() + 1;

        s_result_all.write(reg39);

        reg40.range(31, 0) = s_result_PE40.read() + 1;
        reg40.range(63, 32) = s_result_PE40.read() + 1;
        reg40.range(95, 64) = s_result_PE40.read() + 1;
        reg40.range(127, 96) = s_result_PE40.read() + 1;

        s_result_all.write(reg40);

        reg41.range(31, 0) = s_result_PE41.read() + 1;
        reg41.range(63, 32) = s_result_PE41.read() + 1;
        reg41.range(95, 64) = s_result_PE41.read() + 1;
        reg41.range(127, 96) = s_result_PE41.read() + 1;

        s_result_all.write(reg41);

        reg42.range(31, 0) = s_result_PE42.read() + 1;
        reg42.range(63, 32) = s_result_PE42.read() + 1;
        reg42.range(95, 64) = s_result_PE42.read() + 1;
        reg42.range(127, 96) = s_result_PE42.read() + 1;

        s_result_all.write(reg42);

        reg43.range(31, 0) = s_result_PE43.read() + 1;
        reg43.range(63, 32) = s_result_PE43.read() + 1;
        reg43.range(95, 64) = s_result_PE43.read() + 1;
        reg43.range(127, 96) = s_result_PE43.read() + 1;

        s_result_all.write(reg43);

        reg44.range(31, 0) = s_result_PE44.read() + 1;
        reg44.range(63, 32) = s_result_PE44.read() + 1;
        reg44.range(95, 64) = s_result_PE44.read() + 1;
        reg44.range(127, 96) = s_result_PE44.read() + 1;

        s_result_all.write(reg44);

        reg45.range(31, 0) = s_result_PE45.read() + 1;
        reg45.range(63, 32) = s_result_PE45.read() + 1;
        reg45.range(95, 64) = s_result_PE45.read() + 1;
        reg45.range(127, 96) = s_result_PE45.read() + 1;

        s_result_all.write(reg45);

        reg46.range(31, 0) = s_result_PE46.read() + 1;
        reg46.range(63, 32) = s_result_PE46.read() + 1;
        reg46.range(95, 64) = s_result_PE46.read() + 1;
        reg46.range(127, 96) = s_result_PE46.read() + 1;

        s_result_all.write(reg46);

        reg47.range(31, 0) = s_result_PE47.read() + 1;
        reg47.range(63, 32) = s_result_PE47.read() + 1;
        reg47.range(95, 64) = s_result_PE47.read() + 1;
        reg47.range(127, 96) = s_result_PE47.read() + 1;

        s_result_all.write(reg47);

        reg48.range(31, 0) = s_result_PE48.read() + 1;
        reg48.range(63, 32) = s_result_PE48.read() + 1;
        reg48.range(95, 64) = s_result_PE48.read() + 1;
        reg48.range(127, 96) = s_result_PE48.read() + 1;

        s_result_all.write(reg48);

        reg49.range(31, 0) = s_result_PE49.read() + 1;
        reg49.range(63, 32) = s_result_PE49.read() + 1;
        reg49.range(95, 64) = s_result_PE49.read() + 1;
        reg49.range(127, 96) = s_result_PE49.read() + 1;

        s_result_all.write(reg49);

        reg50.range(31, 0) = s_result_PE50.read() + 1;
        reg50.range(63, 32) = s_result_PE50.read() + 1;
        reg50.range(95, 64) = s_result_PE50.read() + 1;
        reg50.range(127, 96) = s_result_PE50.read() + 1;

        s_result_all.write(reg50);

        reg51.range(31, 0) = s_result_PE51.read() + 1;
        reg51.range(63, 32) = s_result_PE51.read() + 1;
        reg51.range(95, 64) = s_result_PE51.read() + 1;
        reg51.range(127, 96) = s_result_PE51.read() + 1;

        s_result_all.write(reg51);

        reg52.range(31, 0) = s_result_PE52.read() + 1;
        reg52.range(63, 32) = s_result_PE52.read() + 1;
        reg52.range(95, 64) = s_result_PE52.read() + 1;
        reg52.range(127, 96) = s_result_PE52.read() + 1;

        s_result_all.write(reg52);

        reg53.range(31, 0) = s_result_PE53.read() + 1;
        reg53.range(63, 32) = s_result_PE53.read() + 1;
        reg53.range(95, 64) = s_result_PE53.read() + 1;
        reg53.range(127, 96) = s_result_PE53.read() + 1;

        s_result_all.write(reg53);

        reg54.range(31, 0) = s_result_PE54.read() + 1;
        reg54.range(63, 32) = s_result_PE54.read() + 1;
        reg54.range(95, 64) = s_result_PE54.read() + 1;
        reg54.range(127, 96) = s_result_PE54.read() + 1;

        s_result_all.write(reg54);

        reg55.range(31, 0) = s_result_PE55.read() + 1;
        reg55.range(63, 32) = s_result_PE55.read() + 1;
        reg55.range(95, 64) = s_result_PE55.read() + 1;
        reg55.range(127, 96) = s_result_PE55.read() + 1;

        s_result_all.write(reg55);

        reg56.range(31, 0) = s_result_PE56.read() + 1;
        reg56.range(63, 32) = s_result_PE56.read() + 1;
        reg56.range(95, 64) = s_result_PE56.read() + 1;
        reg56.range(127, 96) = s_result_PE56.read() + 1;

        s_result_all.write(reg56);

        reg57.range(31, 0) = s_result_PE57.read() + 1;
        reg57.range(63, 32) = s_result_PE57.read() + 1;
        reg57.range(95, 64) = s_result_PE57.read() + 1;
        reg57.range(127, 96) = s_result_PE57.read() + 1;

        s_result_all.write(reg57);

        reg58.range(31, 0) = s_result_PE58.read() + 1;
        reg58.range(63, 32) = s_result_PE58.read() + 1;
        reg58.range(95, 64) = s_result_PE58.read() + 1;
        reg58.range(127, 96) = s_result_PE58.read() + 1;

        s_result_all.write(reg58);

        reg59.range(31, 0) = s_result_PE59.read() + 1;
        reg59.range(63, 32) = s_result_PE59.read() + 1;
        reg59.range(95, 64) = s_result_PE59.read() + 1;
        reg59.range(127, 96) = s_result_PE59.read() + 1;

        s_result_all.write(reg59);

        reg60.range(31, 0) = s_result_PE60.read() + 1;
        reg60.range(63, 32) = s_result_PE60.read() + 1;
        reg60.range(95, 64) = s_result_PE60.read() + 1;
        reg60.range(127, 96) = s_result_PE60.read() + 1;

        s_result_all.write(reg60);

        reg61.range(31, 0) = s_result_PE61.read() + 1;
        reg61.range(63, 32) = s_result_PE61.read() + 1;
        reg61.range(95, 64) = s_result_PE61.read() + 1;
        reg61.range(127, 96) = s_result_PE61.read() + 1;

        s_result_all.write(reg61);

        reg62.range(31, 0) = s_result_PE62.read() + 1;
        reg62.range(63, 32) = s_result_PE62.read() + 1;
        reg62.range(95, 64) = s_result_PE62.read() + 1;
        reg62.range(127, 96) = s_result_PE62.read() + 1;

        s_result_all.write(reg62);

        reg63.range(31, 0) = s_result_PE63.read() + 1;
        reg63.range(63, 32) = s_result_PE63.read() + 1;
        reg63.range(95, 64) = s_result_PE63.read() + 1;
        reg63.range(127, 96) = s_result_PE63.read() + 1;

        s_result_all.write(reg63);

        reg64.range(31, 0) = s_result_PE64.read() + 1;
        reg64.range(63, 32) = s_result_PE64.read() + 1;
        reg64.range(95, 64) = s_result_PE64.read() + 1;
        reg64.range(127, 96) = s_result_PE64.read() + 1;

        s_result_all.write(reg64);

        reg65.range(31, 0) = s_result_PE65.read() + 1;
        reg65.range(63, 32) = s_result_PE65.read() + 1;
        reg65.range(95, 64) = s_result_PE65.read() + 1;
        reg65.range(127, 96) = s_result_PE65.read() + 1;

        s_result_all.write(reg65);

        reg66.range(31, 0) = s_result_PE66.read() + 1;
        reg66.range(63, 32) = s_result_PE66.read() + 1;
        reg66.range(95, 64) = s_result_PE66.read() + 1;
        reg66.range(127, 96) = s_result_PE66.read() + 1;

        s_result_all.write(reg66);

        reg67.range(31, 0) = s_result_PE67.read() + 1;
        reg67.range(63, 32) = s_result_PE67.read() + 1;
        reg67.range(95, 64) = s_result_PE67.read() + 1;
        reg67.range(127, 96) = s_result_PE67.read() + 1;

        s_result_all.write(reg67);

        reg68.range(31, 0) = s_result_PE68.read() + 1;
        reg68.range(63, 32) = s_result_PE68.read() + 1;
        reg68.range(95, 64) = s_result_PE68.read() + 1;
        reg68.range(127, 96) = s_result_PE68.read() + 1;

        s_result_all.write(reg68);

        reg69.range(31, 0) = s_result_PE69.read() + 1;
        reg69.range(63, 32) = s_result_PE69.read() + 1;
        reg69.range(95, 64) = s_result_PE69.read() + 1;
        reg69.range(127, 96) = s_result_PE69.read() + 1;

        s_result_all.write(reg69);

        reg70.range(31, 0) = s_result_PE70.read() + 1;
        reg70.range(63, 32) = s_result_PE70.read() + 1;
        reg70.range(95, 64) = s_result_PE70.read() + 1;
        reg70.range(127, 96) = s_result_PE70.read() + 1;

        s_result_all.write(reg70);

        reg71.range(31, 0) = s_result_PE71.read() + 1;
        reg71.range(63, 32) = s_result_PE71.read() + 1;
        reg71.range(95, 64) = s_result_PE71.read() + 1;
        reg71.range(127, 96) = s_result_PE71.read() + 1;

        s_result_all.write(reg71);

        reg72.range(31, 0) = s_result_PE72.read() + 1;
        reg72.range(63, 32) = s_result_PE72.read() + 1;
        reg72.range(95, 64) = s_result_PE72.read() + 1;
        reg72.range(127, 96) = s_result_PE72.read() + 1;

        s_result_all.write(reg72);

        reg73.range(31, 0) = s_result_PE73.read() + 1;
        reg73.range(63, 32) = s_result_PE73.read() + 1;
        reg73.range(95, 64) = s_result_PE73.read() + 1;
        reg73.range(127, 96) = s_result_PE73.read() + 1;

        s_result_all.write(reg73);

        reg74.range(31, 0) = s_result_PE74.read() + 1;
        reg74.range(63, 32) = s_result_PE74.read() + 1;
        reg74.range(95, 64) = s_result_PE74.read() + 1;
        reg74.range(127, 96) = s_result_PE74.read() + 1;

        s_result_all.write(reg74);

        reg75.range(31, 0) = s_result_PE75.read() + 1;
        reg75.range(63, 32) = s_result_PE75.read() + 1;
        reg75.range(95, 64) = s_result_PE75.read() + 1;
        reg75.range(127, 96) = s_result_PE75.read() + 1;

        s_result_all.write(reg75);

        reg76.range(31, 0) = s_result_PE76.read() + 1;
        reg76.range(63, 32) = s_result_PE76.read() + 1;
        reg76.range(95, 64) = s_result_PE76.read() + 1;
        reg76.range(127, 96) = s_result_PE76.read() + 1;

        s_result_all.write(reg76);

        reg77.range(31, 0) = s_result_PE77.read() + 1;
        reg77.range(63, 32) = s_result_PE77.read() + 1;
        reg77.range(95, 64) = s_result_PE77.read() + 1;
        reg77.range(127, 96) = s_result_PE77.read() + 1;

        s_result_all.write(reg77);

        reg78.range(31, 0) = s_result_PE78.read() + 1;
        reg78.range(63, 32) = s_result_PE78.read() + 1;
        reg78.range(95, 64) = s_result_PE78.read() + 1;
        reg78.range(127, 96) = s_result_PE78.read() + 1;

        s_result_all.write(reg78);

        reg79.range(31, 0) = s_result_PE79.read() + 1;
        reg79.range(63, 32) = s_result_PE79.read() + 1;
        reg79.range(95, 64) = s_result_PE79.read() + 1;
        reg79.range(127, 96) = s_result_PE79.read() + 1;

        s_result_all.write(reg79);

        reg80.range(31, 0) = s_result_PE80.read() + 1;
        reg80.range(63, 32) = s_result_PE80.read() + 1;
        reg80.range(95, 64) = s_result_PE80.read() + 1;
        reg80.range(127, 96) = s_result_PE80.read() + 1;

        s_result_all.write(reg80);

        reg81.range(31, 0) = s_result_PE81.read() + 1;
        reg81.range(63, 32) = s_result_PE81.read() + 1;
        reg81.range(95, 64) = s_result_PE81.read() + 1;
        reg81.range(127, 96) = s_result_PE81.read() + 1;

        s_result_all.write(reg81);

        reg82.range(31, 0) = s_result_PE82.read() + 1;
        reg82.range(63, 32) = s_result_PE82.read() + 1;
        reg82.range(95, 64) = s_result_PE82.read() + 1;
        reg82.range(127, 96) = s_result_PE82.read() + 1;

        s_result_all.write(reg82);

        reg83.range(31, 0) = s_result_PE83.read() + 1;
        reg83.range(63, 32) = s_result_PE83.read() + 1;
        reg83.range(95, 64) = s_result_PE83.read() + 1;
        reg83.range(127, 96) = s_result_PE83.read() + 1;

        s_result_all.write(reg83);

        reg84.range(31, 0) = s_result_PE84.read() + 1;
        reg84.range(63, 32) = s_result_PE84.read() + 1;
        reg84.range(95, 64) = s_result_PE84.read() + 1;
        reg84.range(127, 96) = s_result_PE84.read() + 1;

        s_result_all.write(reg84);

        reg85.range(31, 0) = s_result_PE85.read() + 1;
        reg85.range(63, 32) = s_result_PE85.read() + 1;
        reg85.range(95, 64) = s_result_PE85.read() + 1;
        reg85.range(127, 96) = s_result_PE85.read() + 1;

        s_result_all.write(reg85);

        reg86.range(31, 0) = s_result_PE86.read() + 1;
        reg86.range(63, 32) = s_result_PE86.read() + 1;
        reg86.range(95, 64) = s_result_PE86.read() + 1;
        reg86.range(127, 96) = s_result_PE86.read() + 1;

        s_result_all.write(reg86);

        reg87.range(31, 0) = s_result_PE87.read() + 1;
        reg87.range(63, 32) = s_result_PE87.read() + 1;
        reg87.range(95, 64) = s_result_PE87.read() + 1;
        reg87.range(127, 96) = s_result_PE87.read() + 1;

        s_result_all.write(reg87);

        reg88.range(31, 0) = s_result_PE88.read() + 1;
        reg88.range(63, 32) = s_result_PE88.read() + 1;
        reg88.range(95, 64) = s_result_PE88.read() + 1;
        reg88.range(127, 96) = s_result_PE88.read() + 1;

        s_result_all.write(reg88);

        reg89.range(31, 0) = s_result_PE89.read() + 1;
        reg89.range(63, 32) = s_result_PE89.read() + 1;
        reg89.range(95, 64) = s_result_PE89.read() + 1;
        reg89.range(127, 96) = s_result_PE89.read() + 1;

        s_result_all.write(reg89);

        reg90.range(31, 0) = s_result_PE90.read() + 1;
        reg90.range(63, 32) = s_result_PE90.read() + 1;
        reg90.range(95, 64) = s_result_PE90.read() + 1;
        reg90.range(127, 96) = s_result_PE90.read() + 1;

        s_result_all.write(reg90);

        reg91.range(31, 0) = s_result_PE91.read() + 1;
        reg91.range(63, 32) = s_result_PE91.read() + 1;
        reg91.range(95, 64) = s_result_PE91.read() + 1;
        reg91.range(127, 96) = s_result_PE91.read() + 1;

        s_result_all.write(reg91);

        reg92.range(31, 0) = s_result_PE92.read() + 1;
        reg92.range(63, 32) = s_result_PE92.read() + 1;
        reg92.range(95, 64) = s_result_PE92.read() + 1;
        reg92.range(127, 96) = s_result_PE92.read() + 1;

        s_result_all.write(reg92);

        reg93.range(31, 0) = s_result_PE93.read() + 1;
        reg93.range(63, 32) = s_result_PE93.read() + 1;
        reg93.range(95, 64) = s_result_PE93.read() + 1;
        reg93.range(127, 96) = s_result_PE93.read() + 1;

        s_result_all.write(reg93);

        reg94.range(31, 0) = s_result_PE94.read() + 1;
        reg94.range(63, 32) = s_result_PE94.read() + 1;
        reg94.range(95, 64) = s_result_PE94.read() + 1;
        reg94.range(127, 96) = s_result_PE94.read() + 1;

        s_result_all.write(reg94);

        reg95.range(31, 0) = s_result_PE95.read() + 1;
        reg95.range(63, 32) = s_result_PE95.read() + 1;
        reg95.range(95, 64) = s_result_PE95.read() + 1;
        reg95.range(127, 96) = s_result_PE95.read() + 1;

        s_result_all.write(reg95);

        reg96.range(31, 0) = s_result_PE96.read() + 1;
        reg96.range(63, 32) = s_result_PE96.read() + 1;
        reg96.range(95, 64) = s_result_PE96.read() + 1;
        reg96.range(127, 96) = s_result_PE96.read() + 1;

        s_result_all.write(reg96);

        reg97.range(31, 0) = s_result_PE97.read() + 1;
        reg97.range(63, 32) = s_result_PE97.read() + 1;
        reg97.range(95, 64) = s_result_PE97.read() + 1;
        reg97.range(127, 96) = s_result_PE97.read() + 1;

        s_result_all.write(reg97);

        reg98.range(31, 0) = s_result_PE98.read() + 1;
        reg98.range(63, 32) = s_result_PE98.read() + 1;
        reg98.range(95, 64) = s_result_PE98.read() + 1;
        reg98.range(127, 96) = s_result_PE98.read() + 1;

        s_result_all.write(reg98);

        reg99.range(31, 0) = s_result_PE99.read() + 1;
        reg99.range(63, 32) = s_result_PE99.read() + 1;
        reg99.range(95, 64) = s_result_PE99.read() + 1;
        reg99.range(127, 96) = s_result_PE99.read() + 1;

        s_result_all.write(reg99);

        reg100.range(31, 0) = s_result_PE100.read() + 1;
        reg100.range(63, 32) = s_result_PE100.read() + 1;
        reg100.range(95, 64) = s_result_PE100.read() + 1;
        reg100.range(127, 96) = s_result_PE100.read() + 1;

        s_result_all.write(reg100);

        reg101.range(31, 0) = s_result_PE101.read() + 1;
        reg101.range(63, 32) = s_result_PE101.read() + 1;
        reg101.range(95, 64) = s_result_PE101.read() + 1;
        reg101.range(127, 96) = s_result_PE101.read() + 1;

        s_result_all.write(reg101);

        reg102.range(31, 0) = s_result_PE102.read() + 1;
        reg102.range(63, 32) = s_result_PE102.read() + 1;
        reg102.range(95, 64) = s_result_PE102.read() + 1;
        reg102.range(127, 96) = s_result_PE102.read() + 1;

        s_result_all.write(reg102);

        reg103.range(31, 0) = s_result_PE103.read() + 1;
        reg103.range(63, 32) = s_result_PE103.read() + 1;
        reg103.range(95, 64) = s_result_PE103.read() + 1;
        reg103.range(127, 96) = s_result_PE103.read() + 1;

        s_result_all.write(reg103);

        reg104.range(31, 0) = s_result_PE104.read() + 1;
        reg104.range(63, 32) = s_result_PE104.read() + 1;
        reg104.range(95, 64) = s_result_PE104.read() + 1;
        reg104.range(127, 96) = s_result_PE104.read() + 1;

        s_result_all.write(reg104);

        reg105.range(31, 0) = s_result_PE105.read() + 1;
        reg105.range(63, 32) = s_result_PE105.read() + 1;
        reg105.range(95, 64) = s_result_PE105.read() + 1;
        reg105.range(127, 96) = s_result_PE105.read() + 1;

        s_result_all.write(reg105);

        reg106.range(31, 0) = s_result_PE106.read() + 1;
        reg106.range(63, 32) = s_result_PE106.read() + 1;
        reg106.range(95, 64) = s_result_PE106.read() + 1;
        reg106.range(127, 96) = s_result_PE106.read() + 1;

        s_result_all.write(reg106);

        reg107.range(31, 0) = s_result_PE107.read() + 1;
        reg107.range(63, 32) = s_result_PE107.read() + 1;
        reg107.range(95, 64) = s_result_PE107.read() + 1;
        reg107.range(127, 96) = s_result_PE107.read() + 1;

        s_result_all.write(reg107);

        reg108.range(31, 0) = s_result_PE108.read() + 1;
        reg108.range(63, 32) = s_result_PE108.read() + 1;
        reg108.range(95, 64) = s_result_PE108.read() + 1;
        reg108.range(127, 96) = s_result_PE108.read() + 1;

        s_result_all.write(reg108);

        reg109.range(31, 0) = s_result_PE109.read() + 1;
        reg109.range(63, 32) = s_result_PE109.read() + 1;
        reg109.range(95, 64) = s_result_PE109.read() + 1;
        reg109.range(127, 96) = s_result_PE109.read() + 1;

        s_result_all.write(reg109);

        reg110.range(31, 0) = s_result_PE110.read() + 1;
        reg110.range(63, 32) = s_result_PE110.read() + 1;
        reg110.range(95, 64) = s_result_PE110.read() + 1;
        reg110.range(127, 96) = s_result_PE110.read() + 1;

        s_result_all.write(reg110);

        reg111.range(31, 0) = s_result_PE111.read() + 1;
        reg111.range(63, 32) = s_result_PE111.read() + 1;
        reg111.range(95, 64) = s_result_PE111.read() + 1;
        reg111.range(127, 96) = s_result_PE111.read() + 1;

        s_result_all.write(reg111);

        reg112.range(31, 0) = s_result_PE112.read() + 1;
        reg112.range(63, 32) = s_result_PE112.read() + 1;
        reg112.range(95, 64) = s_result_PE112.read() + 1;
        reg112.range(127, 96) = s_result_PE112.read() + 1;

        s_result_all.write(reg112);

        reg113.range(31, 0) = s_result_PE113.read() + 1;
        reg113.range(63, 32) = s_result_PE113.read() + 1;
        reg113.range(95, 64) = s_result_PE113.read() + 1;
        reg113.range(127, 96) = s_result_PE113.read() + 1;

        s_result_all.write(reg113);

        reg114.range(31, 0) = s_result_PE114.read() + 1;
        reg114.range(63, 32) = s_result_PE114.read() + 1;
        reg114.range(95, 64) = s_result_PE114.read() + 1;
        reg114.range(127, 96) = s_result_PE114.read() + 1;

        s_result_all.write(reg114);

        reg115.range(31, 0) = s_result_PE115.read() + 1;
        reg115.range(63, 32) = s_result_PE115.read() + 1;
        reg115.range(95, 64) = s_result_PE115.read() + 1;
        reg115.range(127, 96) = s_result_PE115.read() + 1;

        s_result_all.write(reg115);

        reg116.range(31, 0) = s_result_PE116.read() + 1;
        reg116.range(63, 32) = s_result_PE116.read() + 1;
        reg116.range(95, 64) = s_result_PE116.read() + 1;
        reg116.range(127, 96) = s_result_PE116.read() + 1;

        s_result_all.write(reg116);

        reg117.range(31, 0) = s_result_PE117.read() + 1;
        reg117.range(63, 32) = s_result_PE117.read() + 1;
        reg117.range(95, 64) = s_result_PE117.read() + 1;
        reg117.range(127, 96) = s_result_PE117.read() + 1;

        s_result_all.write(reg117);

        reg118.range(31, 0) = s_result_PE118.read() + 1;
        reg118.range(63, 32) = s_result_PE118.read() + 1;
        reg118.range(95, 64) = s_result_PE118.read() + 1;
        reg118.range(127, 96) = s_result_PE118.read() + 1;

        s_result_all.write(reg118);

        reg119.range(31, 0) = s_result_PE119.read() + 1;
        reg119.range(63, 32) = s_result_PE119.read() + 1;
        reg119.range(95, 64) = s_result_PE119.read() + 1;
        reg119.range(127, 96) = s_result_PE119.read() + 1;

        s_result_all.write(reg119);

        reg120.range(31, 0) = s_result_PE120.read() + 1;
        reg120.range(63, 32) = s_result_PE120.read() + 1;
        reg120.range(95, 64) = s_result_PE120.read() + 1;
        reg120.range(127, 96) = s_result_PE120.read() + 1;

        s_result_all.write(reg120);

        reg121.range(31, 0) = s_result_PE121.read() + 1;
        reg121.range(63, 32) = s_result_PE121.read() + 1;
        reg121.range(95, 64) = s_result_PE121.read() + 1;
        reg121.range(127, 96) = s_result_PE121.read() + 1;

        s_result_all.write(reg121);

        reg122.range(31, 0) = s_result_PE122.read() + 1;
        reg122.range(63, 32) = s_result_PE122.read() + 1;
        reg122.range(95, 64) = s_result_PE122.read() + 1;
        reg122.range(127, 96) = s_result_PE122.read() + 1;

        s_result_all.write(reg122);

        reg123.range(31, 0) = s_result_PE123.read() + 1;
        reg123.range(63, 32) = s_result_PE123.read() + 1;
        reg123.range(95, 64) = s_result_PE123.read() + 1;
        reg123.range(127, 96) = s_result_PE123.read() + 1;

        s_result_all.write(reg123);

        reg124.range(31, 0) = s_result_PE124.read() + 1;
        reg124.range(63, 32) = s_result_PE124.read() + 1;
        reg124.range(95, 64) = s_result_PE124.read() + 1;
        reg124.range(127, 96) = s_result_PE124.read() + 1;

        s_result_all.write(reg124);

        reg125.range(31, 0) = s_result_PE125.read() + 1;
        reg125.range(63, 32) = s_result_PE125.read() + 1;
        reg125.range(95, 64) = s_result_PE125.read() + 1;
        reg125.range(127, 96) = s_result_PE125.read() + 1;

        s_result_all.write(reg125);

        reg126.range(31, 0) = s_result_PE126.read() + 1;
        reg126.range(63, 32) = s_result_PE126.read() + 1;
        reg126.range(95, 64) = s_result_PE126.read() + 1;
        reg126.range(127, 96) = s_result_PE126.read() + 1;

        s_result_all.write(reg126);

        reg127.range(31, 0) = s_result_PE127.read() + 1;
        reg127.range(63, 32) = s_result_PE127.read() + 1;
        reg127.range(95, 64) = s_result_PE127.read() + 1;
        reg127.range(127, 96) = s_result_PE127.read() + 1;

        s_result_all.write(reg127);
    }
}

// ROW_PER_PE = 8, layer 1
template<>
void gather_results_128PEs<8>(
    hls::stream<D_TYPE>& s_result_PE0, hls::stream<D_TYPE>& s_result_PE1, 
    hls::stream<D_TYPE>& s_result_PE2, hls::stream<D_TYPE>& s_result_PE3, 
    hls::stream<D_TYPE>& s_result_PE4, hls::stream<D_TYPE>& s_result_PE5, 
    hls::stream<D_TYPE>& s_result_PE6, hls::stream<D_TYPE>& s_result_PE7, 
    hls::stream<D_TYPE>& s_result_PE8, hls::stream<D_TYPE>& s_result_PE9, 
    hls::stream<D_TYPE>& s_result_PE10, hls::stream<D_TYPE>& s_result_PE11, 
    hls::stream<D_TYPE>& s_result_PE12, hls::stream<D_TYPE>& s_result_PE13, 
    hls::stream<D_TYPE>& s_result_PE14, hls::stream<D_TYPE>& s_result_PE15, 
    hls::stream<D_TYPE>& s_result_PE16, hls::stream<D_TYPE>& s_result_PE17, 
    hls::stream<D_TYPE>& s_result_PE18, hls::stream<D_TYPE>& s_result_PE19, 
    hls::stream<D_TYPE>& s_result_PE20, hls::stream<D_TYPE>& s_result_PE21, 
    hls::stream<D_TYPE>& s_result_PE22, hls::stream<D_TYPE>& s_result_PE23, 
    hls::stream<D_TYPE>& s_result_PE24, hls::stream<D_TYPE>& s_result_PE25, 
    hls::stream<D_TYPE>& s_result_PE26, hls::stream<D_TYPE>& s_result_PE27, 
    hls::stream<D_TYPE>& s_result_PE28, hls::stream<D_TYPE>& s_result_PE29, 
    hls::stream<D_TYPE>& s_result_PE30, hls::stream<D_TYPE>& s_result_PE31, 
    hls::stream<D_TYPE>& s_result_PE32, hls::stream<D_TYPE>& s_result_PE33, 
    hls::stream<D_TYPE>& s_result_PE34, hls::stream<D_TYPE>& s_result_PE35, 
    hls::stream<D_TYPE>& s_result_PE36, hls::stream<D_TYPE>& s_result_PE37, 
    hls::stream<D_TYPE>& s_result_PE38, hls::stream<D_TYPE>& s_result_PE39, 
    hls::stream<D_TYPE>& s_result_PE40, hls::stream<D_TYPE>& s_result_PE41, 
    hls::stream<D_TYPE>& s_result_PE42, hls::stream<D_TYPE>& s_result_PE43, 
    hls::stream<D_TYPE>& s_result_PE44, hls::stream<D_TYPE>& s_result_PE45, 
    hls::stream<D_TYPE>& s_result_PE46, hls::stream<D_TYPE>& s_result_PE47, 
    hls::stream<D_TYPE>& s_result_PE48, hls::stream<D_TYPE>& s_result_PE49, 
    hls::stream<D_TYPE>& s_result_PE50, hls::stream<D_TYPE>& s_result_PE51, 
    hls::stream<D_TYPE>& s_result_PE52, hls::stream<D_TYPE>& s_result_PE53, 
    hls::stream<D_TYPE>& s_result_PE54, hls::stream<D_TYPE>& s_result_PE55, 
    hls::stream<D_TYPE>& s_result_PE56, hls::stream<D_TYPE>& s_result_PE57, 
    hls::stream<D_TYPE>& s_result_PE58, hls::stream<D_TYPE>& s_result_PE59, 
    hls::stream<D_TYPE>& s_result_PE60, hls::stream<D_TYPE>& s_result_PE61, 
    hls::stream<D_TYPE>& s_result_PE62, hls::stream<D_TYPE>& s_result_PE63, 
    hls::stream<D_TYPE>& s_result_PE64, hls::stream<D_TYPE>& s_result_PE65, 
    hls::stream<D_TYPE>& s_result_PE66, hls::stream<D_TYPE>& s_result_PE67, 
    hls::stream<D_TYPE>& s_result_PE68, hls::stream<D_TYPE>& s_result_PE69, 
    hls::stream<D_TYPE>& s_result_PE70, hls::stream<D_TYPE>& s_result_PE71, 
    hls::stream<D_TYPE>& s_result_PE72, hls::stream<D_TYPE>& s_result_PE73, 
    hls::stream<D_TYPE>& s_result_PE74, hls::stream<D_TYPE>& s_result_PE75, 
    hls::stream<D_TYPE>& s_result_PE76, hls::stream<D_TYPE>& s_result_PE77, 
    hls::stream<D_TYPE>& s_result_PE78, hls::stream<D_TYPE>& s_result_PE79, 
    hls::stream<D_TYPE>& s_result_PE80, hls::stream<D_TYPE>& s_result_PE81, 
    hls::stream<D_TYPE>& s_result_PE82, hls::stream<D_TYPE>& s_result_PE83, 
    hls::stream<D_TYPE>& s_result_PE84, hls::stream<D_TYPE>& s_result_PE85, 
    hls::stream<D_TYPE>& s_result_PE86, hls::stream<D_TYPE>& s_result_PE87, 
    hls::stream<D_TYPE>& s_result_PE88, hls::stream<D_TYPE>& s_result_PE89, 
    hls::stream<D_TYPE>& s_result_PE90, hls::stream<D_TYPE>& s_result_PE91, 
    hls::stream<D_TYPE>& s_result_PE92, hls::stream<D_TYPE>& s_result_PE93, 
    hls::stream<D_TYPE>& s_result_PE94, hls::stream<D_TYPE>& s_result_PE95, 
    hls::stream<D_TYPE>& s_result_PE96, hls::stream<D_TYPE>& s_result_PE97, 
    hls::stream<D_TYPE>& s_result_PE98, hls::stream<D_TYPE>& s_result_PE99, 
    hls::stream<D_TYPE>& s_result_PE100, hls::stream<D_TYPE>& s_result_PE101, 
    hls::stream<D_TYPE>& s_result_PE102, hls::stream<D_TYPE>& s_result_PE103, 
    hls::stream<D_TYPE>& s_result_PE104, hls::stream<D_TYPE>& s_result_PE105, 
    hls::stream<D_TYPE>& s_result_PE106, hls::stream<D_TYPE>& s_result_PE107, 
    hls::stream<D_TYPE>& s_result_PE108, hls::stream<D_TYPE>& s_result_PE109, 
    hls::stream<D_TYPE>& s_result_PE110, hls::stream<D_TYPE>& s_result_PE111, 
    hls::stream<D_TYPE>& s_result_PE112, hls::stream<D_TYPE>& s_result_PE113, 
    hls::stream<D_TYPE>& s_result_PE114, hls::stream<D_TYPE>& s_result_PE115, 
    hls::stream<D_TYPE>& s_result_PE116, hls::stream<D_TYPE>& s_result_PE117, 
    hls::stream<D_TYPE>& s_result_PE118, hls::stream<D_TYPE>& s_result_PE119, 
    hls::stream<D_TYPE>& s_result_PE120, hls::stream<D_TYPE>& s_result_PE121, 
    hls::stream<D_TYPE>& s_result_PE122, hls::stream<D_TYPE>& s_result_PE123, 
    hls::stream<D_TYPE>& s_result_PE124, hls::stream<D_TYPE>& s_result_PE125, 
    hls::stream<D_TYPE>& s_result_PE126, hls::stream<D_TYPE>& s_result_PE127, 
    hls::stream<W_TYPE>& s_result_all) {
     
    for_each_item:
    for (int item = 0; item < BATCH_NUM * BATCH_SIZE; item++) {
        #pragma HLS pipeline II=256  // write 1 result_all per CC

        W_TYPE reg0, reg1, reg2, reg3, reg4, reg5, reg6, reg7, 
            reg8, reg9, reg10, reg11, reg12, reg13, reg14, reg15, 
            reg16, reg17, reg18, reg19, reg20, reg21, reg22, reg23, 
            reg24, reg25, reg26, reg27, reg28, reg29, reg30, reg31, 
            reg32, reg33, reg34, reg35, reg36, reg37, reg38, reg39, 
            reg40, reg41, reg42, reg43, reg44, reg45, reg46, reg47, 
            reg48, reg49, reg50, reg51, reg52, reg53, reg54, reg55, 
            reg56, reg57, reg58, reg59, reg60, reg61, reg62, reg63, 
            reg64, reg65, reg66, reg67, reg68, reg69, reg70, reg71, 
            reg72, reg73, reg74, reg75, reg76, reg77, reg78, reg79, 
            reg80, reg81, reg82, reg83, reg84, reg85, reg86, reg87, 
            reg88, reg89, reg90, reg91, reg92, reg93, reg94, reg95, 
            reg96, reg97, reg98, reg99, reg100, reg101, reg102, reg103, 
            reg104, reg105, reg106, reg107, reg108, reg109, reg110, reg111, 
            reg112, reg113, reg114, reg115, reg116, reg117, reg118, reg119, 
            reg120, reg121, reg122, reg123, reg124, reg125, reg126, reg127, 
            reg128, reg129, reg130, reg131, reg132, reg133, reg134, reg135, 
            reg136, reg137, reg138, reg139, reg140, reg141, reg142, reg143, 
            reg144, reg145, reg146, reg147, reg148, reg149, reg150, reg151, 
            reg152, reg153, reg154, reg155, reg156, reg157, reg158, reg159, 
            reg160, reg161, reg162, reg163, reg164, reg165, reg166, reg167, 
            reg168, reg169, reg170, reg171, reg172, reg173, reg174, reg175, 
            reg176, reg177, reg178, reg179, reg180, reg181, reg182, reg183, 
            reg184, reg185, reg186, reg187, reg188, reg189, reg190, reg191, 
            reg192, reg193, reg194, reg195, reg196, reg197, reg198, reg199, 
            reg200, reg201, reg202, reg203, reg204, reg205, reg206, reg207, 
            reg208, reg209, reg210, reg211, reg212, reg213, reg214, reg215, 
            reg216, reg217, reg218, reg219, reg220, reg221, reg222, reg223, 
            reg224, reg225, reg226, reg227, reg228, reg229, reg230, reg231, 
            reg232, reg233, reg234, reg235, reg236, reg237, reg238, reg239, 
            reg240, reg241, reg242, reg243, reg244, reg245, reg246, reg247, 
            reg248, reg249, reg250, reg251, reg252, reg253, reg254, reg255;


        reg0.range(31, 0) = s_result_PE0.read() + 1;
        reg0.range(63, 32) = s_result_PE0.read() + 1;
        reg0.range(95, 64) = s_result_PE0.read() + 1;
        reg0.range(127, 96) = s_result_PE0.read() + 1;

        reg1.range(31, 0) = s_result_PE0.read() + 1;
        reg1.range(63, 32) = s_result_PE0.read() + 1;
        reg1.range(95, 64) = s_result_PE0.read() + 1;
        reg1.range(127, 96) = s_result_PE0.read() + 1;

        s_result_all.write(reg0);
        s_result_all.write(reg1);

        reg2.range(31, 0) = s_result_PE1.read() + 1;
        reg2.range(63, 32) = s_result_PE1.read() + 1;
        reg2.range(95, 64) = s_result_PE1.read() + 1;
        reg2.range(127, 96) = s_result_PE1.read() + 1;

        reg3.range(31, 0) = s_result_PE1.read() + 1;
        reg3.range(63, 32) = s_result_PE1.read() + 1;
        reg3.range(95, 64) = s_result_PE1.read() + 1;
        reg3.range(127, 96) = s_result_PE1.read() + 1;

        s_result_all.write(reg2);
        s_result_all.write(reg3);

        reg4.range(31, 0) = s_result_PE2.read() + 1;
        reg4.range(63, 32) = s_result_PE2.read() + 1;
        reg4.range(95, 64) = s_result_PE2.read() + 1;
        reg4.range(127, 96) = s_result_PE2.read() + 1;

        reg5.range(31, 0) = s_result_PE2.read() + 1;
        reg5.range(63, 32) = s_result_PE2.read() + 1;
        reg5.range(95, 64) = s_result_PE2.read() + 1;
        reg5.range(127, 96) = s_result_PE2.read() + 1;

        s_result_all.write(reg4);
        s_result_all.write(reg5);

        reg6.range(31, 0) = s_result_PE3.read() + 1;
        reg6.range(63, 32) = s_result_PE3.read() + 1;
        reg6.range(95, 64) = s_result_PE3.read() + 1;
        reg6.range(127, 96) = s_result_PE3.read() + 1;

        reg7.range(31, 0) = s_result_PE3.read() + 1;
        reg7.range(63, 32) = s_result_PE3.read() + 1;
        reg7.range(95, 64) = s_result_PE3.read() + 1;
        reg7.range(127, 96) = s_result_PE3.read() + 1;

        s_result_all.write(reg6);
        s_result_all.write(reg7);

        reg8.range(31, 0) = s_result_PE4.read() + 1;
        reg8.range(63, 32) = s_result_PE4.read() + 1;
        reg8.range(95, 64) = s_result_PE4.read() + 1;
        reg8.range(127, 96) = s_result_PE4.read() + 1;

        reg9.range(31, 0) = s_result_PE4.read() + 1;
        reg9.range(63, 32) = s_result_PE4.read() + 1;
        reg9.range(95, 64) = s_result_PE4.read() + 1;
        reg9.range(127, 96) = s_result_PE4.read() + 1;

        s_result_all.write(reg8);
        s_result_all.write(reg9);

        reg10.range(31, 0) = s_result_PE5.read() + 1;
        reg10.range(63, 32) = s_result_PE5.read() + 1;
        reg10.range(95, 64) = s_result_PE5.read() + 1;
        reg10.range(127, 96) = s_result_PE5.read() + 1;

        reg11.range(31, 0) = s_result_PE5.read() + 1;
        reg11.range(63, 32) = s_result_PE5.read() + 1;
        reg11.range(95, 64) = s_result_PE5.read() + 1;
        reg11.range(127, 96) = s_result_PE5.read() + 1;

        s_result_all.write(reg10);
        s_result_all.write(reg11);

        reg12.range(31, 0) = s_result_PE6.read() + 1;
        reg12.range(63, 32) = s_result_PE6.read() + 1;
        reg12.range(95, 64) = s_result_PE6.read() + 1;
        reg12.range(127, 96) = s_result_PE6.read() + 1;

        reg13.range(31, 0) = s_result_PE6.read() + 1;
        reg13.range(63, 32) = s_result_PE6.read() + 1;
        reg13.range(95, 64) = s_result_PE6.read() + 1;
        reg13.range(127, 96) = s_result_PE6.read() + 1;

        s_result_all.write(reg12);
        s_result_all.write(reg13);

        reg14.range(31, 0) = s_result_PE7.read() + 1;
        reg14.range(63, 32) = s_result_PE7.read() + 1;
        reg14.range(95, 64) = s_result_PE7.read() + 1;
        reg14.range(127, 96) = s_result_PE7.read() + 1;

        reg15.range(31, 0) = s_result_PE7.read() + 1;
        reg15.range(63, 32) = s_result_PE7.read() + 1;
        reg15.range(95, 64) = s_result_PE7.read() + 1;
        reg15.range(127, 96) = s_result_PE7.read() + 1;

        s_result_all.write(reg14);
        s_result_all.write(reg15);

        reg16.range(31, 0) = s_result_PE8.read() + 1;
        reg16.range(63, 32) = s_result_PE8.read() + 1;
        reg16.range(95, 64) = s_result_PE8.read() + 1;
        reg16.range(127, 96) = s_result_PE8.read() + 1;

        reg17.range(31, 0) = s_result_PE8.read() + 1;
        reg17.range(63, 32) = s_result_PE8.read() + 1;
        reg17.range(95, 64) = s_result_PE8.read() + 1;
        reg17.range(127, 96) = s_result_PE8.read() + 1;

        s_result_all.write(reg16);
        s_result_all.write(reg17);

        reg18.range(31, 0) = s_result_PE9.read() + 1;
        reg18.range(63, 32) = s_result_PE9.read() + 1;
        reg18.range(95, 64) = s_result_PE9.read() + 1;
        reg18.range(127, 96) = s_result_PE9.read() + 1;

        reg19.range(31, 0) = s_result_PE9.read() + 1;
        reg19.range(63, 32) = s_result_PE9.read() + 1;
        reg19.range(95, 64) = s_result_PE9.read() + 1;
        reg19.range(127, 96) = s_result_PE9.read() + 1;

        s_result_all.write(reg18);
        s_result_all.write(reg19);

        reg20.range(31, 0) = s_result_PE10.read() + 1;
        reg20.range(63, 32) = s_result_PE10.read() + 1;
        reg20.range(95, 64) = s_result_PE10.read() + 1;
        reg20.range(127, 96) = s_result_PE10.read() + 1;

        reg21.range(31, 0) = s_result_PE10.read() + 1;
        reg21.range(63, 32) = s_result_PE10.read() + 1;
        reg21.range(95, 64) = s_result_PE10.read() + 1;
        reg21.range(127, 96) = s_result_PE10.read() + 1;

        s_result_all.write(reg20);
        s_result_all.write(reg21);

        reg22.range(31, 0) = s_result_PE11.read() + 1;
        reg22.range(63, 32) = s_result_PE11.read() + 1;
        reg22.range(95, 64) = s_result_PE11.read() + 1;
        reg22.range(127, 96) = s_result_PE11.read() + 1;

        reg23.range(31, 0) = s_result_PE11.read() + 1;
        reg23.range(63, 32) = s_result_PE11.read() + 1;
        reg23.range(95, 64) = s_result_PE11.read() + 1;
        reg23.range(127, 96) = s_result_PE11.read() + 1;

        s_result_all.write(reg22);
        s_result_all.write(reg23);

        reg24.range(31, 0) = s_result_PE12.read() + 1;
        reg24.range(63, 32) = s_result_PE12.read() + 1;
        reg24.range(95, 64) = s_result_PE12.read() + 1;
        reg24.range(127, 96) = s_result_PE12.read() + 1;

        reg25.range(31, 0) = s_result_PE12.read() + 1;
        reg25.range(63, 32) = s_result_PE12.read() + 1;
        reg25.range(95, 64) = s_result_PE12.read() + 1;
        reg25.range(127, 96) = s_result_PE12.read() + 1;

        s_result_all.write(reg24);
        s_result_all.write(reg25);

        reg26.range(31, 0) = s_result_PE13.read() + 1;
        reg26.range(63, 32) = s_result_PE13.read() + 1;
        reg26.range(95, 64) = s_result_PE13.read() + 1;
        reg26.range(127, 96) = s_result_PE13.read() + 1;

        reg27.range(31, 0) = s_result_PE13.read() + 1;
        reg27.range(63, 32) = s_result_PE13.read() + 1;
        reg27.range(95, 64) = s_result_PE13.read() + 1;
        reg27.range(127, 96) = s_result_PE13.read() + 1;

        s_result_all.write(reg26);
        s_result_all.write(reg27);

        reg28.range(31, 0) = s_result_PE14.read() + 1;
        reg28.range(63, 32) = s_result_PE14.read() + 1;
        reg28.range(95, 64) = s_result_PE14.read() + 1;
        reg28.range(127, 96) = s_result_PE14.read() + 1;

        reg29.range(31, 0) = s_result_PE14.read() + 1;
        reg29.range(63, 32) = s_result_PE14.read() + 1;
        reg29.range(95, 64) = s_result_PE14.read() + 1;
        reg29.range(127, 96) = s_result_PE14.read() + 1;

        s_result_all.write(reg28);
        s_result_all.write(reg29);

        reg30.range(31, 0) = s_result_PE15.read() + 1;
        reg30.range(63, 32) = s_result_PE15.read() + 1;
        reg30.range(95, 64) = s_result_PE15.read() + 1;
        reg30.range(127, 96) = s_result_PE15.read() + 1;

        reg31.range(31, 0) = s_result_PE15.read() + 1;
        reg31.range(63, 32) = s_result_PE15.read() + 1;
        reg31.range(95, 64) = s_result_PE15.read() + 1;
        reg31.range(127, 96) = s_result_PE15.read() + 1;

        s_result_all.write(reg30);
        s_result_all.write(reg31);

        reg32.range(31, 0) = s_result_PE16.read() + 1;
        reg32.range(63, 32) = s_result_PE16.read() + 1;
        reg32.range(95, 64) = s_result_PE16.read() + 1;
        reg32.range(127, 96) = s_result_PE16.read() + 1;

        reg33.range(31, 0) = s_result_PE16.read() + 1;
        reg33.range(63, 32) = s_result_PE16.read() + 1;
        reg33.range(95, 64) = s_result_PE16.read() + 1;
        reg33.range(127, 96) = s_result_PE16.read() + 1;

        s_result_all.write(reg32);
        s_result_all.write(reg33);

        reg34.range(31, 0) = s_result_PE17.read() + 1;
        reg34.range(63, 32) = s_result_PE17.read() + 1;
        reg34.range(95, 64) = s_result_PE17.read() + 1;
        reg34.range(127, 96) = s_result_PE17.read() + 1;

        reg35.range(31, 0) = s_result_PE17.read() + 1;
        reg35.range(63, 32) = s_result_PE17.read() + 1;
        reg35.range(95, 64) = s_result_PE17.read() + 1;
        reg35.range(127, 96) = s_result_PE17.read() + 1;

        s_result_all.write(reg34);
        s_result_all.write(reg35);

        reg36.range(31, 0) = s_result_PE18.read() + 1;
        reg36.range(63, 32) = s_result_PE18.read() + 1;
        reg36.range(95, 64) = s_result_PE18.read() + 1;
        reg36.range(127, 96) = s_result_PE18.read() + 1;

        reg37.range(31, 0) = s_result_PE18.read() + 1;
        reg37.range(63, 32) = s_result_PE18.read() + 1;
        reg37.range(95, 64) = s_result_PE18.read() + 1;
        reg37.range(127, 96) = s_result_PE18.read() + 1;

        s_result_all.write(reg36);
        s_result_all.write(reg37);

        reg38.range(31, 0) = s_result_PE19.read() + 1;
        reg38.range(63, 32) = s_result_PE19.read() + 1;
        reg38.range(95, 64) = s_result_PE19.read() + 1;
        reg38.range(127, 96) = s_result_PE19.read() + 1;

        reg39.range(31, 0) = s_result_PE19.read() + 1;
        reg39.range(63, 32) = s_result_PE19.read() + 1;
        reg39.range(95, 64) = s_result_PE19.read() + 1;
        reg39.range(127, 96) = s_result_PE19.read() + 1;

        s_result_all.write(reg38);
        s_result_all.write(reg39);

        reg40.range(31, 0) = s_result_PE20.read() + 1;
        reg40.range(63, 32) = s_result_PE20.read() + 1;
        reg40.range(95, 64) = s_result_PE20.read() + 1;
        reg40.range(127, 96) = s_result_PE20.read() + 1;

        reg41.range(31, 0) = s_result_PE20.read() + 1;
        reg41.range(63, 32) = s_result_PE20.read() + 1;
        reg41.range(95, 64) = s_result_PE20.read() + 1;
        reg41.range(127, 96) = s_result_PE20.read() + 1;

        s_result_all.write(reg40);
        s_result_all.write(reg41);

        reg42.range(31, 0) = s_result_PE21.read() + 1;
        reg42.range(63, 32) = s_result_PE21.read() + 1;
        reg42.range(95, 64) = s_result_PE21.read() + 1;
        reg42.range(127, 96) = s_result_PE21.read() + 1;

        reg43.range(31, 0) = s_result_PE21.read() + 1;
        reg43.range(63, 32) = s_result_PE21.read() + 1;
        reg43.range(95, 64) = s_result_PE21.read() + 1;
        reg43.range(127, 96) = s_result_PE21.read() + 1;

        s_result_all.write(reg42);
        s_result_all.write(reg43);

        reg44.range(31, 0) = s_result_PE22.read() + 1;
        reg44.range(63, 32) = s_result_PE22.read() + 1;
        reg44.range(95, 64) = s_result_PE22.read() + 1;
        reg44.range(127, 96) = s_result_PE22.read() + 1;

        reg45.range(31, 0) = s_result_PE22.read() + 1;
        reg45.range(63, 32) = s_result_PE22.read() + 1;
        reg45.range(95, 64) = s_result_PE22.read() + 1;
        reg45.range(127, 96) = s_result_PE22.read() + 1;

        s_result_all.write(reg44);
        s_result_all.write(reg45);

        reg46.range(31, 0) = s_result_PE23.read() + 1;
        reg46.range(63, 32) = s_result_PE23.read() + 1;
        reg46.range(95, 64) = s_result_PE23.read() + 1;
        reg46.range(127, 96) = s_result_PE23.read() + 1;

        reg47.range(31, 0) = s_result_PE23.read() + 1;
        reg47.range(63, 32) = s_result_PE23.read() + 1;
        reg47.range(95, 64) = s_result_PE23.read() + 1;
        reg47.range(127, 96) = s_result_PE23.read() + 1;

        s_result_all.write(reg46);
        s_result_all.write(reg47);

        reg48.range(31, 0) = s_result_PE24.read() + 1;
        reg48.range(63, 32) = s_result_PE24.read() + 1;
        reg48.range(95, 64) = s_result_PE24.read() + 1;
        reg48.range(127, 96) = s_result_PE24.read() + 1;

        reg49.range(31, 0) = s_result_PE24.read() + 1;
        reg49.range(63, 32) = s_result_PE24.read() + 1;
        reg49.range(95, 64) = s_result_PE24.read() + 1;
        reg49.range(127, 96) = s_result_PE24.read() + 1;

        s_result_all.write(reg48);
        s_result_all.write(reg49);

        reg50.range(31, 0) = s_result_PE25.read() + 1;
        reg50.range(63, 32) = s_result_PE25.read() + 1;
        reg50.range(95, 64) = s_result_PE25.read() + 1;
        reg50.range(127, 96) = s_result_PE25.read() + 1;

        reg51.range(31, 0) = s_result_PE25.read() + 1;
        reg51.range(63, 32) = s_result_PE25.read() + 1;
        reg51.range(95, 64) = s_result_PE25.read() + 1;
        reg51.range(127, 96) = s_result_PE25.read() + 1;

        s_result_all.write(reg50);
        s_result_all.write(reg51);

        reg52.range(31, 0) = s_result_PE26.read() + 1;
        reg52.range(63, 32) = s_result_PE26.read() + 1;
        reg52.range(95, 64) = s_result_PE26.read() + 1;
        reg52.range(127, 96) = s_result_PE26.read() + 1;

        reg53.range(31, 0) = s_result_PE26.read() + 1;
        reg53.range(63, 32) = s_result_PE26.read() + 1;
        reg53.range(95, 64) = s_result_PE26.read() + 1;
        reg53.range(127, 96) = s_result_PE26.read() + 1;

        s_result_all.write(reg52);
        s_result_all.write(reg53);

        reg54.range(31, 0) = s_result_PE27.read() + 1;
        reg54.range(63, 32) = s_result_PE27.read() + 1;
        reg54.range(95, 64) = s_result_PE27.read() + 1;
        reg54.range(127, 96) = s_result_PE27.read() + 1;

        reg55.range(31, 0) = s_result_PE27.read() + 1;
        reg55.range(63, 32) = s_result_PE27.read() + 1;
        reg55.range(95, 64) = s_result_PE27.read() + 1;
        reg55.range(127, 96) = s_result_PE27.read() + 1;

        s_result_all.write(reg54);
        s_result_all.write(reg55);

        reg56.range(31, 0) = s_result_PE28.read() + 1;
        reg56.range(63, 32) = s_result_PE28.read() + 1;
        reg56.range(95, 64) = s_result_PE28.read() + 1;
        reg56.range(127, 96) = s_result_PE28.read() + 1;

        reg57.range(31, 0) = s_result_PE28.read() + 1;
        reg57.range(63, 32) = s_result_PE28.read() + 1;
        reg57.range(95, 64) = s_result_PE28.read() + 1;
        reg57.range(127, 96) = s_result_PE28.read() + 1;

        s_result_all.write(reg56);
        s_result_all.write(reg57);

        reg58.range(31, 0) = s_result_PE29.read() + 1;
        reg58.range(63, 32) = s_result_PE29.read() + 1;
        reg58.range(95, 64) = s_result_PE29.read() + 1;
        reg58.range(127, 96) = s_result_PE29.read() + 1;

        reg59.range(31, 0) = s_result_PE29.read() + 1;
        reg59.range(63, 32) = s_result_PE29.read() + 1;
        reg59.range(95, 64) = s_result_PE29.read() + 1;
        reg59.range(127, 96) = s_result_PE29.read() + 1;

        s_result_all.write(reg58);
        s_result_all.write(reg59);

        reg60.range(31, 0) = s_result_PE30.read() + 1;
        reg60.range(63, 32) = s_result_PE30.read() + 1;
        reg60.range(95, 64) = s_result_PE30.read() + 1;
        reg60.range(127, 96) = s_result_PE30.read() + 1;

        reg61.range(31, 0) = s_result_PE30.read() + 1;
        reg61.range(63, 32) = s_result_PE30.read() + 1;
        reg61.range(95, 64) = s_result_PE30.read() + 1;
        reg61.range(127, 96) = s_result_PE30.read() + 1;

        s_result_all.write(reg60);
        s_result_all.write(reg61);

        reg62.range(31, 0) = s_result_PE31.read() + 1;
        reg62.range(63, 32) = s_result_PE31.read() + 1;
        reg62.range(95, 64) = s_result_PE31.read() + 1;
        reg62.range(127, 96) = s_result_PE31.read() + 1;

        reg63.range(31, 0) = s_result_PE31.read() + 1;
        reg63.range(63, 32) = s_result_PE31.read() + 1;
        reg63.range(95, 64) = s_result_PE31.read() + 1;
        reg63.range(127, 96) = s_result_PE31.read() + 1;

        s_result_all.write(reg62);
        s_result_all.write(reg63);

        reg64.range(31, 0) = s_result_PE32.read() + 1;
        reg64.range(63, 32) = s_result_PE32.read() + 1;
        reg64.range(95, 64) = s_result_PE32.read() + 1;
        reg64.range(127, 96) = s_result_PE32.read() + 1;

        reg65.range(31, 0) = s_result_PE32.read() + 1;
        reg65.range(63, 32) = s_result_PE32.read() + 1;
        reg65.range(95, 64) = s_result_PE32.read() + 1;
        reg65.range(127, 96) = s_result_PE32.read() + 1;

        s_result_all.write(reg64);
        s_result_all.write(reg65);

        reg66.range(31, 0) = s_result_PE33.read() + 1;
        reg66.range(63, 32) = s_result_PE33.read() + 1;
        reg66.range(95, 64) = s_result_PE33.read() + 1;
        reg66.range(127, 96) = s_result_PE33.read() + 1;

        reg67.range(31, 0) = s_result_PE33.read() + 1;
        reg67.range(63, 32) = s_result_PE33.read() + 1;
        reg67.range(95, 64) = s_result_PE33.read() + 1;
        reg67.range(127, 96) = s_result_PE33.read() + 1;

        s_result_all.write(reg66);
        s_result_all.write(reg67);

        reg68.range(31, 0) = s_result_PE34.read() + 1;
        reg68.range(63, 32) = s_result_PE34.read() + 1;
        reg68.range(95, 64) = s_result_PE34.read() + 1;
        reg68.range(127, 96) = s_result_PE34.read() + 1;

        reg69.range(31, 0) = s_result_PE34.read() + 1;
        reg69.range(63, 32) = s_result_PE34.read() + 1;
        reg69.range(95, 64) = s_result_PE34.read() + 1;
        reg69.range(127, 96) = s_result_PE34.read() + 1;

        s_result_all.write(reg68);
        s_result_all.write(reg69);

        reg70.range(31, 0) = s_result_PE35.read() + 1;
        reg70.range(63, 32) = s_result_PE35.read() + 1;
        reg70.range(95, 64) = s_result_PE35.read() + 1;
        reg70.range(127, 96) = s_result_PE35.read() + 1;

        reg71.range(31, 0) = s_result_PE35.read() + 1;
        reg71.range(63, 32) = s_result_PE35.read() + 1;
        reg71.range(95, 64) = s_result_PE35.read() + 1;
        reg71.range(127, 96) = s_result_PE35.read() + 1;

        s_result_all.write(reg70);
        s_result_all.write(reg71);

        reg72.range(31, 0) = s_result_PE36.read() + 1;
        reg72.range(63, 32) = s_result_PE36.read() + 1;
        reg72.range(95, 64) = s_result_PE36.read() + 1;
        reg72.range(127, 96) = s_result_PE36.read() + 1;

        reg73.range(31, 0) = s_result_PE36.read() + 1;
        reg73.range(63, 32) = s_result_PE36.read() + 1;
        reg73.range(95, 64) = s_result_PE36.read() + 1;
        reg73.range(127, 96) = s_result_PE36.read() + 1;

        s_result_all.write(reg72);
        s_result_all.write(reg73);

        reg74.range(31, 0) = s_result_PE37.read() + 1;
        reg74.range(63, 32) = s_result_PE37.read() + 1;
        reg74.range(95, 64) = s_result_PE37.read() + 1;
        reg74.range(127, 96) = s_result_PE37.read() + 1;

        reg75.range(31, 0) = s_result_PE37.read() + 1;
        reg75.range(63, 32) = s_result_PE37.read() + 1;
        reg75.range(95, 64) = s_result_PE37.read() + 1;
        reg75.range(127, 96) = s_result_PE37.read() + 1;

        s_result_all.write(reg74);
        s_result_all.write(reg75);

        reg76.range(31, 0) = s_result_PE38.read() + 1;
        reg76.range(63, 32) = s_result_PE38.read() + 1;
        reg76.range(95, 64) = s_result_PE38.read() + 1;
        reg76.range(127, 96) = s_result_PE38.read() + 1;

        reg77.range(31, 0) = s_result_PE38.read() + 1;
        reg77.range(63, 32) = s_result_PE38.read() + 1;
        reg77.range(95, 64) = s_result_PE38.read() + 1;
        reg77.range(127, 96) = s_result_PE38.read() + 1;

        s_result_all.write(reg76);
        s_result_all.write(reg77);

        reg78.range(31, 0) = s_result_PE39.read() + 1;
        reg78.range(63, 32) = s_result_PE39.read() + 1;
        reg78.range(95, 64) = s_result_PE39.read() + 1;
        reg78.range(127, 96) = s_result_PE39.read() + 1;

        reg79.range(31, 0) = s_result_PE39.read() + 1;
        reg79.range(63, 32) = s_result_PE39.read() + 1;
        reg79.range(95, 64) = s_result_PE39.read() + 1;
        reg79.range(127, 96) = s_result_PE39.read() + 1;

        s_result_all.write(reg78);
        s_result_all.write(reg79);

        reg80.range(31, 0) = s_result_PE40.read() + 1;
        reg80.range(63, 32) = s_result_PE40.read() + 1;
        reg80.range(95, 64) = s_result_PE40.read() + 1;
        reg80.range(127, 96) = s_result_PE40.read() + 1;

        reg81.range(31, 0) = s_result_PE40.read() + 1;
        reg81.range(63, 32) = s_result_PE40.read() + 1;
        reg81.range(95, 64) = s_result_PE40.read() + 1;
        reg81.range(127, 96) = s_result_PE40.read() + 1;

        s_result_all.write(reg80);
        s_result_all.write(reg81);

        reg82.range(31, 0) = s_result_PE41.read() + 1;
        reg82.range(63, 32) = s_result_PE41.read() + 1;
        reg82.range(95, 64) = s_result_PE41.read() + 1;
        reg82.range(127, 96) = s_result_PE41.read() + 1;

        reg83.range(31, 0) = s_result_PE41.read() + 1;
        reg83.range(63, 32) = s_result_PE41.read() + 1;
        reg83.range(95, 64) = s_result_PE41.read() + 1;
        reg83.range(127, 96) = s_result_PE41.read() + 1;

        s_result_all.write(reg82);
        s_result_all.write(reg83);

        reg84.range(31, 0) = s_result_PE42.read() + 1;
        reg84.range(63, 32) = s_result_PE42.read() + 1;
        reg84.range(95, 64) = s_result_PE42.read() + 1;
        reg84.range(127, 96) = s_result_PE42.read() + 1;

        reg85.range(31, 0) = s_result_PE42.read() + 1;
        reg85.range(63, 32) = s_result_PE42.read() + 1;
        reg85.range(95, 64) = s_result_PE42.read() + 1;
        reg85.range(127, 96) = s_result_PE42.read() + 1;

        s_result_all.write(reg84);
        s_result_all.write(reg85);

        reg86.range(31, 0) = s_result_PE43.read() + 1;
        reg86.range(63, 32) = s_result_PE43.read() + 1;
        reg86.range(95, 64) = s_result_PE43.read() + 1;
        reg86.range(127, 96) = s_result_PE43.read() + 1;

        reg87.range(31, 0) = s_result_PE43.read() + 1;
        reg87.range(63, 32) = s_result_PE43.read() + 1;
        reg87.range(95, 64) = s_result_PE43.read() + 1;
        reg87.range(127, 96) = s_result_PE43.read() + 1;

        s_result_all.write(reg86);
        s_result_all.write(reg87);

        reg88.range(31, 0) = s_result_PE44.read() + 1;
        reg88.range(63, 32) = s_result_PE44.read() + 1;
        reg88.range(95, 64) = s_result_PE44.read() + 1;
        reg88.range(127, 96) = s_result_PE44.read() + 1;

        reg89.range(31, 0) = s_result_PE44.read() + 1;
        reg89.range(63, 32) = s_result_PE44.read() + 1;
        reg89.range(95, 64) = s_result_PE44.read() + 1;
        reg89.range(127, 96) = s_result_PE44.read() + 1;

        s_result_all.write(reg88);
        s_result_all.write(reg89);

        reg90.range(31, 0) = s_result_PE45.read() + 1;
        reg90.range(63, 32) = s_result_PE45.read() + 1;
        reg90.range(95, 64) = s_result_PE45.read() + 1;
        reg90.range(127, 96) = s_result_PE45.read() + 1;

        reg91.range(31, 0) = s_result_PE45.read() + 1;
        reg91.range(63, 32) = s_result_PE45.read() + 1;
        reg91.range(95, 64) = s_result_PE45.read() + 1;
        reg91.range(127, 96) = s_result_PE45.read() + 1;

        s_result_all.write(reg90);
        s_result_all.write(reg91);

        reg92.range(31, 0) = s_result_PE46.read() + 1;
        reg92.range(63, 32) = s_result_PE46.read() + 1;
        reg92.range(95, 64) = s_result_PE46.read() + 1;
        reg92.range(127, 96) = s_result_PE46.read() + 1;

        reg93.range(31, 0) = s_result_PE46.read() + 1;
        reg93.range(63, 32) = s_result_PE46.read() + 1;
        reg93.range(95, 64) = s_result_PE46.read() + 1;
        reg93.range(127, 96) = s_result_PE46.read() + 1;

        s_result_all.write(reg92);
        s_result_all.write(reg93);

        reg94.range(31, 0) = s_result_PE47.read() + 1;
        reg94.range(63, 32) = s_result_PE47.read() + 1;
        reg94.range(95, 64) = s_result_PE47.read() + 1;
        reg94.range(127, 96) = s_result_PE47.read() + 1;

        reg95.range(31, 0) = s_result_PE47.read() + 1;
        reg95.range(63, 32) = s_result_PE47.read() + 1;
        reg95.range(95, 64) = s_result_PE47.read() + 1;
        reg95.range(127, 96) = s_result_PE47.read() + 1;

        s_result_all.write(reg94);
        s_result_all.write(reg95);

        reg96.range(31, 0) = s_result_PE48.read() + 1;
        reg96.range(63, 32) = s_result_PE48.read() + 1;
        reg96.range(95, 64) = s_result_PE48.read() + 1;
        reg96.range(127, 96) = s_result_PE48.read() + 1;

        reg97.range(31, 0) = s_result_PE48.read() + 1;
        reg97.range(63, 32) = s_result_PE48.read() + 1;
        reg97.range(95, 64) = s_result_PE48.read() + 1;
        reg97.range(127, 96) = s_result_PE48.read() + 1;

        s_result_all.write(reg96);
        s_result_all.write(reg97);

        reg98.range(31, 0) = s_result_PE49.read() + 1;
        reg98.range(63, 32) = s_result_PE49.read() + 1;
        reg98.range(95, 64) = s_result_PE49.read() + 1;
        reg98.range(127, 96) = s_result_PE49.read() + 1;

        reg99.range(31, 0) = s_result_PE49.read() + 1;
        reg99.range(63, 32) = s_result_PE49.read() + 1;
        reg99.range(95, 64) = s_result_PE49.read() + 1;
        reg99.range(127, 96) = s_result_PE49.read() + 1;

        s_result_all.write(reg98);
        s_result_all.write(reg99);

        reg100.range(31, 0) = s_result_PE50.read() + 1;
        reg100.range(63, 32) = s_result_PE50.read() + 1;
        reg100.range(95, 64) = s_result_PE50.read() + 1;
        reg100.range(127, 96) = s_result_PE50.read() + 1;

        reg101.range(31, 0) = s_result_PE50.read() + 1;
        reg101.range(63, 32) = s_result_PE50.read() + 1;
        reg101.range(95, 64) = s_result_PE50.read() + 1;
        reg101.range(127, 96) = s_result_PE50.read() + 1;

        s_result_all.write(reg100);
        s_result_all.write(reg101);

        reg102.range(31, 0) = s_result_PE51.read() + 1;
        reg102.range(63, 32) = s_result_PE51.read() + 1;
        reg102.range(95, 64) = s_result_PE51.read() + 1;
        reg102.range(127, 96) = s_result_PE51.read() + 1;

        reg103.range(31, 0) = s_result_PE51.read() + 1;
        reg103.range(63, 32) = s_result_PE51.read() + 1;
        reg103.range(95, 64) = s_result_PE51.read() + 1;
        reg103.range(127, 96) = s_result_PE51.read() + 1;

        s_result_all.write(reg102);
        s_result_all.write(reg103);

        reg104.range(31, 0) = s_result_PE52.read() + 1;
        reg104.range(63, 32) = s_result_PE52.read() + 1;
        reg104.range(95, 64) = s_result_PE52.read() + 1;
        reg104.range(127, 96) = s_result_PE52.read() + 1;

        reg105.range(31, 0) = s_result_PE52.read() + 1;
        reg105.range(63, 32) = s_result_PE52.read() + 1;
        reg105.range(95, 64) = s_result_PE52.read() + 1;
        reg105.range(127, 96) = s_result_PE52.read() + 1;

        s_result_all.write(reg104);
        s_result_all.write(reg105);

        reg106.range(31, 0) = s_result_PE53.read() + 1;
        reg106.range(63, 32) = s_result_PE53.read() + 1;
        reg106.range(95, 64) = s_result_PE53.read() + 1;
        reg106.range(127, 96) = s_result_PE53.read() + 1;

        reg107.range(31, 0) = s_result_PE53.read() + 1;
        reg107.range(63, 32) = s_result_PE53.read() + 1;
        reg107.range(95, 64) = s_result_PE53.read() + 1;
        reg107.range(127, 96) = s_result_PE53.read() + 1;

        s_result_all.write(reg106);
        s_result_all.write(reg107);

        reg108.range(31, 0) = s_result_PE54.read() + 1;
        reg108.range(63, 32) = s_result_PE54.read() + 1;
        reg108.range(95, 64) = s_result_PE54.read() + 1;
        reg108.range(127, 96) = s_result_PE54.read() + 1;

        reg109.range(31, 0) = s_result_PE54.read() + 1;
        reg109.range(63, 32) = s_result_PE54.read() + 1;
        reg109.range(95, 64) = s_result_PE54.read() + 1;
        reg109.range(127, 96) = s_result_PE54.read() + 1;

        s_result_all.write(reg108);
        s_result_all.write(reg109);

        reg110.range(31, 0) = s_result_PE55.read() + 1;
        reg110.range(63, 32) = s_result_PE55.read() + 1;
        reg110.range(95, 64) = s_result_PE55.read() + 1;
        reg110.range(127, 96) = s_result_PE55.read() + 1;

        reg111.range(31, 0) = s_result_PE55.read() + 1;
        reg111.range(63, 32) = s_result_PE55.read() + 1;
        reg111.range(95, 64) = s_result_PE55.read() + 1;
        reg111.range(127, 96) = s_result_PE55.read() + 1;

        s_result_all.write(reg110);
        s_result_all.write(reg111);

        reg112.range(31, 0) = s_result_PE56.read() + 1;
        reg112.range(63, 32) = s_result_PE56.read() + 1;
        reg112.range(95, 64) = s_result_PE56.read() + 1;
        reg112.range(127, 96) = s_result_PE56.read() + 1;

        reg113.range(31, 0) = s_result_PE56.read() + 1;
        reg113.range(63, 32) = s_result_PE56.read() + 1;
        reg113.range(95, 64) = s_result_PE56.read() + 1;
        reg113.range(127, 96) = s_result_PE56.read() + 1;

        s_result_all.write(reg112);
        s_result_all.write(reg113);

        reg114.range(31, 0) = s_result_PE57.read() + 1;
        reg114.range(63, 32) = s_result_PE57.read() + 1;
        reg114.range(95, 64) = s_result_PE57.read() + 1;
        reg114.range(127, 96) = s_result_PE57.read() + 1;

        reg115.range(31, 0) = s_result_PE57.read() + 1;
        reg115.range(63, 32) = s_result_PE57.read() + 1;
        reg115.range(95, 64) = s_result_PE57.read() + 1;
        reg115.range(127, 96) = s_result_PE57.read() + 1;

        s_result_all.write(reg114);
        s_result_all.write(reg115);

        reg116.range(31, 0) = s_result_PE58.read() + 1;
        reg116.range(63, 32) = s_result_PE58.read() + 1;
        reg116.range(95, 64) = s_result_PE58.read() + 1;
        reg116.range(127, 96) = s_result_PE58.read() + 1;

        reg117.range(31, 0) = s_result_PE58.read() + 1;
        reg117.range(63, 32) = s_result_PE58.read() + 1;
        reg117.range(95, 64) = s_result_PE58.read() + 1;
        reg117.range(127, 96) = s_result_PE58.read() + 1;

        s_result_all.write(reg116);
        s_result_all.write(reg117);

        reg118.range(31, 0) = s_result_PE59.read() + 1;
        reg118.range(63, 32) = s_result_PE59.read() + 1;
        reg118.range(95, 64) = s_result_PE59.read() + 1;
        reg118.range(127, 96) = s_result_PE59.read() + 1;

        reg119.range(31, 0) = s_result_PE59.read() + 1;
        reg119.range(63, 32) = s_result_PE59.read() + 1;
        reg119.range(95, 64) = s_result_PE59.read() + 1;
        reg119.range(127, 96) = s_result_PE59.read() + 1;

        s_result_all.write(reg118);
        s_result_all.write(reg119);

        reg120.range(31, 0) = s_result_PE60.read() + 1;
        reg120.range(63, 32) = s_result_PE60.read() + 1;
        reg120.range(95, 64) = s_result_PE60.read() + 1;
        reg120.range(127, 96) = s_result_PE60.read() + 1;

        reg121.range(31, 0) = s_result_PE60.read() + 1;
        reg121.range(63, 32) = s_result_PE60.read() + 1;
        reg121.range(95, 64) = s_result_PE60.read() + 1;
        reg121.range(127, 96) = s_result_PE60.read() + 1;

        s_result_all.write(reg120);
        s_result_all.write(reg121);

        reg122.range(31, 0) = s_result_PE61.read() + 1;
        reg122.range(63, 32) = s_result_PE61.read() + 1;
        reg122.range(95, 64) = s_result_PE61.read() + 1;
        reg122.range(127, 96) = s_result_PE61.read() + 1;

        reg123.range(31, 0) = s_result_PE61.read() + 1;
        reg123.range(63, 32) = s_result_PE61.read() + 1;
        reg123.range(95, 64) = s_result_PE61.read() + 1;
        reg123.range(127, 96) = s_result_PE61.read() + 1;

        s_result_all.write(reg122);
        s_result_all.write(reg123);

        reg124.range(31, 0) = s_result_PE62.read() + 1;
        reg124.range(63, 32) = s_result_PE62.read() + 1;
        reg124.range(95, 64) = s_result_PE62.read() + 1;
        reg124.range(127, 96) = s_result_PE62.read() + 1;

        reg125.range(31, 0) = s_result_PE62.read() + 1;
        reg125.range(63, 32) = s_result_PE62.read() + 1;
        reg125.range(95, 64) = s_result_PE62.read() + 1;
        reg125.range(127, 96) = s_result_PE62.read() + 1;

        s_result_all.write(reg124);
        s_result_all.write(reg125);

        reg126.range(31, 0) = s_result_PE63.read() + 1;
        reg126.range(63, 32) = s_result_PE63.read() + 1;
        reg126.range(95, 64) = s_result_PE63.read() + 1;
        reg126.range(127, 96) = s_result_PE63.read() + 1;

        reg127.range(31, 0) = s_result_PE63.read() + 1;
        reg127.range(63, 32) = s_result_PE63.read() + 1;
        reg127.range(95, 64) = s_result_PE63.read() + 1;
        reg127.range(127, 96) = s_result_PE63.read() + 1;

        s_result_all.write(reg126);
        s_result_all.write(reg127);

        reg128.range(31, 0) = s_result_PE64.read() + 1;
        reg128.range(63, 32) = s_result_PE64.read() + 1;
        reg128.range(95, 64) = s_result_PE64.read() + 1;
        reg128.range(127, 96) = s_result_PE64.read() + 1;

        reg129.range(31, 0) = s_result_PE64.read() + 1;
        reg129.range(63, 32) = s_result_PE64.read() + 1;
        reg129.range(95, 64) = s_result_PE64.read() + 1;
        reg129.range(127, 96) = s_result_PE64.read() + 1;

        s_result_all.write(reg128);
        s_result_all.write(reg129);

        reg130.range(31, 0) = s_result_PE65.read() + 1;
        reg130.range(63, 32) = s_result_PE65.read() + 1;
        reg130.range(95, 64) = s_result_PE65.read() + 1;
        reg130.range(127, 96) = s_result_PE65.read() + 1;

        reg131.range(31, 0) = s_result_PE65.read() + 1;
        reg131.range(63, 32) = s_result_PE65.read() + 1;
        reg131.range(95, 64) = s_result_PE65.read() + 1;
        reg131.range(127, 96) = s_result_PE65.read() + 1;

        s_result_all.write(reg130);
        s_result_all.write(reg131);

        reg132.range(31, 0) = s_result_PE66.read() + 1;
        reg132.range(63, 32) = s_result_PE66.read() + 1;
        reg132.range(95, 64) = s_result_PE66.read() + 1;
        reg132.range(127, 96) = s_result_PE66.read() + 1;

        reg133.range(31, 0) = s_result_PE66.read() + 1;
        reg133.range(63, 32) = s_result_PE66.read() + 1;
        reg133.range(95, 64) = s_result_PE66.read() + 1;
        reg133.range(127, 96) = s_result_PE66.read() + 1;

        s_result_all.write(reg132);
        s_result_all.write(reg133);

        reg134.range(31, 0) = s_result_PE67.read() + 1;
        reg134.range(63, 32) = s_result_PE67.read() + 1;
        reg134.range(95, 64) = s_result_PE67.read() + 1;
        reg134.range(127, 96) = s_result_PE67.read() + 1;

        reg135.range(31, 0) = s_result_PE67.read() + 1;
        reg135.range(63, 32) = s_result_PE67.read() + 1;
        reg135.range(95, 64) = s_result_PE67.read() + 1;
        reg135.range(127, 96) = s_result_PE67.read() + 1;

        s_result_all.write(reg134);
        s_result_all.write(reg135);

        reg136.range(31, 0) = s_result_PE68.read() + 1;
        reg136.range(63, 32) = s_result_PE68.read() + 1;
        reg136.range(95, 64) = s_result_PE68.read() + 1;
        reg136.range(127, 96) = s_result_PE68.read() + 1;

        reg137.range(31, 0) = s_result_PE68.read() + 1;
        reg137.range(63, 32) = s_result_PE68.read() + 1;
        reg137.range(95, 64) = s_result_PE68.read() + 1;
        reg137.range(127, 96) = s_result_PE68.read() + 1;

        s_result_all.write(reg136);
        s_result_all.write(reg137);

        reg138.range(31, 0) = s_result_PE69.read() + 1;
        reg138.range(63, 32) = s_result_PE69.read() + 1;
        reg138.range(95, 64) = s_result_PE69.read() + 1;
        reg138.range(127, 96) = s_result_PE69.read() + 1;

        reg139.range(31, 0) = s_result_PE69.read() + 1;
        reg139.range(63, 32) = s_result_PE69.read() + 1;
        reg139.range(95, 64) = s_result_PE69.read() + 1;
        reg139.range(127, 96) = s_result_PE69.read() + 1;

        s_result_all.write(reg138);
        s_result_all.write(reg139);

        reg140.range(31, 0) = s_result_PE70.read() + 1;
        reg140.range(63, 32) = s_result_PE70.read() + 1;
        reg140.range(95, 64) = s_result_PE70.read() + 1;
        reg140.range(127, 96) = s_result_PE70.read() + 1;

        reg141.range(31, 0) = s_result_PE70.read() + 1;
        reg141.range(63, 32) = s_result_PE70.read() + 1;
        reg141.range(95, 64) = s_result_PE70.read() + 1;
        reg141.range(127, 96) = s_result_PE70.read() + 1;

        s_result_all.write(reg140);
        s_result_all.write(reg141);

        reg142.range(31, 0) = s_result_PE71.read() + 1;
        reg142.range(63, 32) = s_result_PE71.read() + 1;
        reg142.range(95, 64) = s_result_PE71.read() + 1;
        reg142.range(127, 96) = s_result_PE71.read() + 1;

        reg143.range(31, 0) = s_result_PE71.read() + 1;
        reg143.range(63, 32) = s_result_PE71.read() + 1;
        reg143.range(95, 64) = s_result_PE71.read() + 1;
        reg143.range(127, 96) = s_result_PE71.read() + 1;

        s_result_all.write(reg142);
        s_result_all.write(reg143);

        reg144.range(31, 0) = s_result_PE72.read() + 1;
        reg144.range(63, 32) = s_result_PE72.read() + 1;
        reg144.range(95, 64) = s_result_PE72.read() + 1;
        reg144.range(127, 96) = s_result_PE72.read() + 1;

        reg145.range(31, 0) = s_result_PE72.read() + 1;
        reg145.range(63, 32) = s_result_PE72.read() + 1;
        reg145.range(95, 64) = s_result_PE72.read() + 1;
        reg145.range(127, 96) = s_result_PE72.read() + 1;

        s_result_all.write(reg144);
        s_result_all.write(reg145);

        reg146.range(31, 0) = s_result_PE73.read() + 1;
        reg146.range(63, 32) = s_result_PE73.read() + 1;
        reg146.range(95, 64) = s_result_PE73.read() + 1;
        reg146.range(127, 96) = s_result_PE73.read() + 1;

        reg147.range(31, 0) = s_result_PE73.read() + 1;
        reg147.range(63, 32) = s_result_PE73.read() + 1;
        reg147.range(95, 64) = s_result_PE73.read() + 1;
        reg147.range(127, 96) = s_result_PE73.read() + 1;

        s_result_all.write(reg146);
        s_result_all.write(reg147);

        reg148.range(31, 0) = s_result_PE74.read() + 1;
        reg148.range(63, 32) = s_result_PE74.read() + 1;
        reg148.range(95, 64) = s_result_PE74.read() + 1;
        reg148.range(127, 96) = s_result_PE74.read() + 1;

        reg149.range(31, 0) = s_result_PE74.read() + 1;
        reg149.range(63, 32) = s_result_PE74.read() + 1;
        reg149.range(95, 64) = s_result_PE74.read() + 1;
        reg149.range(127, 96) = s_result_PE74.read() + 1;

        s_result_all.write(reg148);
        s_result_all.write(reg149);

        reg150.range(31, 0) = s_result_PE75.read() + 1;
        reg150.range(63, 32) = s_result_PE75.read() + 1;
        reg150.range(95, 64) = s_result_PE75.read() + 1;
        reg150.range(127, 96) = s_result_PE75.read() + 1;

        reg151.range(31, 0) = s_result_PE75.read() + 1;
        reg151.range(63, 32) = s_result_PE75.read() + 1;
        reg151.range(95, 64) = s_result_PE75.read() + 1;
        reg151.range(127, 96) = s_result_PE75.read() + 1;

        s_result_all.write(reg150);
        s_result_all.write(reg151);

        reg152.range(31, 0) = s_result_PE76.read() + 1;
        reg152.range(63, 32) = s_result_PE76.read() + 1;
        reg152.range(95, 64) = s_result_PE76.read() + 1;
        reg152.range(127, 96) = s_result_PE76.read() + 1;

        reg153.range(31, 0) = s_result_PE76.read() + 1;
        reg153.range(63, 32) = s_result_PE76.read() + 1;
        reg153.range(95, 64) = s_result_PE76.read() + 1;
        reg153.range(127, 96) = s_result_PE76.read() + 1;

        s_result_all.write(reg152);
        s_result_all.write(reg153);

        reg154.range(31, 0) = s_result_PE77.read() + 1;
        reg154.range(63, 32) = s_result_PE77.read() + 1;
        reg154.range(95, 64) = s_result_PE77.read() + 1;
        reg154.range(127, 96) = s_result_PE77.read() + 1;

        reg155.range(31, 0) = s_result_PE77.read() + 1;
        reg155.range(63, 32) = s_result_PE77.read() + 1;
        reg155.range(95, 64) = s_result_PE77.read() + 1;
        reg155.range(127, 96) = s_result_PE77.read() + 1;

        s_result_all.write(reg154);
        s_result_all.write(reg155);

        reg156.range(31, 0) = s_result_PE78.read() + 1;
        reg156.range(63, 32) = s_result_PE78.read() + 1;
        reg156.range(95, 64) = s_result_PE78.read() + 1;
        reg156.range(127, 96) = s_result_PE78.read() + 1;

        reg157.range(31, 0) = s_result_PE78.read() + 1;
        reg157.range(63, 32) = s_result_PE78.read() + 1;
        reg157.range(95, 64) = s_result_PE78.read() + 1;
        reg157.range(127, 96) = s_result_PE78.read() + 1;

        s_result_all.write(reg156);
        s_result_all.write(reg157);

        reg158.range(31, 0) = s_result_PE79.read() + 1;
        reg158.range(63, 32) = s_result_PE79.read() + 1;
        reg158.range(95, 64) = s_result_PE79.read() + 1;
        reg158.range(127, 96) = s_result_PE79.read() + 1;

        reg159.range(31, 0) = s_result_PE79.read() + 1;
        reg159.range(63, 32) = s_result_PE79.read() + 1;
        reg159.range(95, 64) = s_result_PE79.read() + 1;
        reg159.range(127, 96) = s_result_PE79.read() + 1;

        s_result_all.write(reg158);
        s_result_all.write(reg159);

        reg160.range(31, 0) = s_result_PE80.read() + 1;
        reg160.range(63, 32) = s_result_PE80.read() + 1;
        reg160.range(95, 64) = s_result_PE80.read() + 1;
        reg160.range(127, 96) = s_result_PE80.read() + 1;

        reg161.range(31, 0) = s_result_PE80.read() + 1;
        reg161.range(63, 32) = s_result_PE80.read() + 1;
        reg161.range(95, 64) = s_result_PE80.read() + 1;
        reg161.range(127, 96) = s_result_PE80.read() + 1;

        s_result_all.write(reg160);
        s_result_all.write(reg161);

        reg162.range(31, 0) = s_result_PE81.read() + 1;
        reg162.range(63, 32) = s_result_PE81.read() + 1;
        reg162.range(95, 64) = s_result_PE81.read() + 1;
        reg162.range(127, 96) = s_result_PE81.read() + 1;

        reg163.range(31, 0) = s_result_PE81.read() + 1;
        reg163.range(63, 32) = s_result_PE81.read() + 1;
        reg163.range(95, 64) = s_result_PE81.read() + 1;
        reg163.range(127, 96) = s_result_PE81.read() + 1;

        s_result_all.write(reg162);
        s_result_all.write(reg163);

        reg164.range(31, 0) = s_result_PE82.read() + 1;
        reg164.range(63, 32) = s_result_PE82.read() + 1;
        reg164.range(95, 64) = s_result_PE82.read() + 1;
        reg164.range(127, 96) = s_result_PE82.read() + 1;

        reg165.range(31, 0) = s_result_PE82.read() + 1;
        reg165.range(63, 32) = s_result_PE82.read() + 1;
        reg165.range(95, 64) = s_result_PE82.read() + 1;
        reg165.range(127, 96) = s_result_PE82.read() + 1;

        s_result_all.write(reg164);
        s_result_all.write(reg165);

        reg166.range(31, 0) = s_result_PE83.read() + 1;
        reg166.range(63, 32) = s_result_PE83.read() + 1;
        reg166.range(95, 64) = s_result_PE83.read() + 1;
        reg166.range(127, 96) = s_result_PE83.read() + 1;

        reg167.range(31, 0) = s_result_PE83.read() + 1;
        reg167.range(63, 32) = s_result_PE83.read() + 1;
        reg167.range(95, 64) = s_result_PE83.read() + 1;
        reg167.range(127, 96) = s_result_PE83.read() + 1;

        s_result_all.write(reg166);
        s_result_all.write(reg167);

        reg168.range(31, 0) = s_result_PE84.read() + 1;
        reg168.range(63, 32) = s_result_PE84.read() + 1;
        reg168.range(95, 64) = s_result_PE84.read() + 1;
        reg168.range(127, 96) = s_result_PE84.read() + 1;

        reg169.range(31, 0) = s_result_PE84.read() + 1;
        reg169.range(63, 32) = s_result_PE84.read() + 1;
        reg169.range(95, 64) = s_result_PE84.read() + 1;
        reg169.range(127, 96) = s_result_PE84.read() + 1;

        s_result_all.write(reg168);
        s_result_all.write(reg169);

        reg170.range(31, 0) = s_result_PE85.read() + 1;
        reg170.range(63, 32) = s_result_PE85.read() + 1;
        reg170.range(95, 64) = s_result_PE85.read() + 1;
        reg170.range(127, 96) = s_result_PE85.read() + 1;

        reg171.range(31, 0) = s_result_PE85.read() + 1;
        reg171.range(63, 32) = s_result_PE85.read() + 1;
        reg171.range(95, 64) = s_result_PE85.read() + 1;
        reg171.range(127, 96) = s_result_PE85.read() + 1;

        s_result_all.write(reg170);
        s_result_all.write(reg171);

        reg172.range(31, 0) = s_result_PE86.read() + 1;
        reg172.range(63, 32) = s_result_PE86.read() + 1;
        reg172.range(95, 64) = s_result_PE86.read() + 1;
        reg172.range(127, 96) = s_result_PE86.read() + 1;

        reg173.range(31, 0) = s_result_PE86.read() + 1;
        reg173.range(63, 32) = s_result_PE86.read() + 1;
        reg173.range(95, 64) = s_result_PE86.read() + 1;
        reg173.range(127, 96) = s_result_PE86.read() + 1;

        s_result_all.write(reg172);
        s_result_all.write(reg173);

        reg174.range(31, 0) = s_result_PE87.read() + 1;
        reg174.range(63, 32) = s_result_PE87.read() + 1;
        reg174.range(95, 64) = s_result_PE87.read() + 1;
        reg174.range(127, 96) = s_result_PE87.read() + 1;

        reg175.range(31, 0) = s_result_PE87.read() + 1;
        reg175.range(63, 32) = s_result_PE87.read() + 1;
        reg175.range(95, 64) = s_result_PE87.read() + 1;
        reg175.range(127, 96) = s_result_PE87.read() + 1;

        s_result_all.write(reg174);
        s_result_all.write(reg175);

        reg176.range(31, 0) = s_result_PE88.read() + 1;
        reg176.range(63, 32) = s_result_PE88.read() + 1;
        reg176.range(95, 64) = s_result_PE88.read() + 1;
        reg176.range(127, 96) = s_result_PE88.read() + 1;

        reg177.range(31, 0) = s_result_PE88.read() + 1;
        reg177.range(63, 32) = s_result_PE88.read() + 1;
        reg177.range(95, 64) = s_result_PE88.read() + 1;
        reg177.range(127, 96) = s_result_PE88.read() + 1;

        s_result_all.write(reg176);
        s_result_all.write(reg177);

        reg178.range(31, 0) = s_result_PE89.read() + 1;
        reg178.range(63, 32) = s_result_PE89.read() + 1;
        reg178.range(95, 64) = s_result_PE89.read() + 1;
        reg178.range(127, 96) = s_result_PE89.read() + 1;

        reg179.range(31, 0) = s_result_PE89.read() + 1;
        reg179.range(63, 32) = s_result_PE89.read() + 1;
        reg179.range(95, 64) = s_result_PE89.read() + 1;
        reg179.range(127, 96) = s_result_PE89.read() + 1;

        s_result_all.write(reg178);
        s_result_all.write(reg179);

        reg180.range(31, 0) = s_result_PE90.read() + 1;
        reg180.range(63, 32) = s_result_PE90.read() + 1;
        reg180.range(95, 64) = s_result_PE90.read() + 1;
        reg180.range(127, 96) = s_result_PE90.read() + 1;

        reg181.range(31, 0) = s_result_PE90.read() + 1;
        reg181.range(63, 32) = s_result_PE90.read() + 1;
        reg181.range(95, 64) = s_result_PE90.read() + 1;
        reg181.range(127, 96) = s_result_PE90.read() + 1;

        s_result_all.write(reg180);
        s_result_all.write(reg181);

        reg182.range(31, 0) = s_result_PE91.read() + 1;
        reg182.range(63, 32) = s_result_PE91.read() + 1;
        reg182.range(95, 64) = s_result_PE91.read() + 1;
        reg182.range(127, 96) = s_result_PE91.read() + 1;

        reg183.range(31, 0) = s_result_PE91.read() + 1;
        reg183.range(63, 32) = s_result_PE91.read() + 1;
        reg183.range(95, 64) = s_result_PE91.read() + 1;
        reg183.range(127, 96) = s_result_PE91.read() + 1;

        s_result_all.write(reg182);
        s_result_all.write(reg183);

        reg184.range(31, 0) = s_result_PE92.read() + 1;
        reg184.range(63, 32) = s_result_PE92.read() + 1;
        reg184.range(95, 64) = s_result_PE92.read() + 1;
        reg184.range(127, 96) = s_result_PE92.read() + 1;

        reg185.range(31, 0) = s_result_PE92.read() + 1;
        reg185.range(63, 32) = s_result_PE92.read() + 1;
        reg185.range(95, 64) = s_result_PE92.read() + 1;
        reg185.range(127, 96) = s_result_PE92.read() + 1;

        s_result_all.write(reg184);
        s_result_all.write(reg185);

        reg186.range(31, 0) = s_result_PE93.read() + 1;
        reg186.range(63, 32) = s_result_PE93.read() + 1;
        reg186.range(95, 64) = s_result_PE93.read() + 1;
        reg186.range(127, 96) = s_result_PE93.read() + 1;

        reg187.range(31, 0) = s_result_PE93.read() + 1;
        reg187.range(63, 32) = s_result_PE93.read() + 1;
        reg187.range(95, 64) = s_result_PE93.read() + 1;
        reg187.range(127, 96) = s_result_PE93.read() + 1;

        s_result_all.write(reg186);
        s_result_all.write(reg187);

        reg188.range(31, 0) = s_result_PE94.read() + 1;
        reg188.range(63, 32) = s_result_PE94.read() + 1;
        reg188.range(95, 64) = s_result_PE94.read() + 1;
        reg188.range(127, 96) = s_result_PE94.read() + 1;

        reg189.range(31, 0) = s_result_PE94.read() + 1;
        reg189.range(63, 32) = s_result_PE94.read() + 1;
        reg189.range(95, 64) = s_result_PE94.read() + 1;
        reg189.range(127, 96) = s_result_PE94.read() + 1;

        s_result_all.write(reg188);
        s_result_all.write(reg189);

        reg190.range(31, 0) = s_result_PE95.read() + 1;
        reg190.range(63, 32) = s_result_PE95.read() + 1;
        reg190.range(95, 64) = s_result_PE95.read() + 1;
        reg190.range(127, 96) = s_result_PE95.read() + 1;

        reg191.range(31, 0) = s_result_PE95.read() + 1;
        reg191.range(63, 32) = s_result_PE95.read() + 1;
        reg191.range(95, 64) = s_result_PE95.read() + 1;
        reg191.range(127, 96) = s_result_PE95.read() + 1;

        s_result_all.write(reg190);
        s_result_all.write(reg191);

        reg192.range(31, 0) = s_result_PE96.read() + 1;
        reg192.range(63, 32) = s_result_PE96.read() + 1;
        reg192.range(95, 64) = s_result_PE96.read() + 1;
        reg192.range(127, 96) = s_result_PE96.read() + 1;

        reg193.range(31, 0) = s_result_PE96.read() + 1;
        reg193.range(63, 32) = s_result_PE96.read() + 1;
        reg193.range(95, 64) = s_result_PE96.read() + 1;
        reg193.range(127, 96) = s_result_PE96.read() + 1;

        s_result_all.write(reg192);
        s_result_all.write(reg193);

        reg194.range(31, 0) = s_result_PE97.read() + 1;
        reg194.range(63, 32) = s_result_PE97.read() + 1;
        reg194.range(95, 64) = s_result_PE97.read() + 1;
        reg194.range(127, 96) = s_result_PE97.read() + 1;

        reg195.range(31, 0) = s_result_PE97.read() + 1;
        reg195.range(63, 32) = s_result_PE97.read() + 1;
        reg195.range(95, 64) = s_result_PE97.read() + 1;
        reg195.range(127, 96) = s_result_PE97.read() + 1;

        s_result_all.write(reg194);
        s_result_all.write(reg195);

        reg196.range(31, 0) = s_result_PE98.read() + 1;
        reg196.range(63, 32) = s_result_PE98.read() + 1;
        reg196.range(95, 64) = s_result_PE98.read() + 1;
        reg196.range(127, 96) = s_result_PE98.read() + 1;

        reg197.range(31, 0) = s_result_PE98.read() + 1;
        reg197.range(63, 32) = s_result_PE98.read() + 1;
        reg197.range(95, 64) = s_result_PE98.read() + 1;
        reg197.range(127, 96) = s_result_PE98.read() + 1;

        s_result_all.write(reg196);
        s_result_all.write(reg197);

        reg198.range(31, 0) = s_result_PE99.read() + 1;
        reg198.range(63, 32) = s_result_PE99.read() + 1;
        reg198.range(95, 64) = s_result_PE99.read() + 1;
        reg198.range(127, 96) = s_result_PE99.read() + 1;

        reg199.range(31, 0) = s_result_PE99.read() + 1;
        reg199.range(63, 32) = s_result_PE99.read() + 1;
        reg199.range(95, 64) = s_result_PE99.read() + 1;
        reg199.range(127, 96) = s_result_PE99.read() + 1;

        s_result_all.write(reg198);
        s_result_all.write(reg199);

        reg200.range(31, 0) = s_result_PE100.read() + 1;
        reg200.range(63, 32) = s_result_PE100.read() + 1;
        reg200.range(95, 64) = s_result_PE100.read() + 1;
        reg200.range(127, 96) = s_result_PE100.read() + 1;

        reg201.range(31, 0) = s_result_PE100.read() + 1;
        reg201.range(63, 32) = s_result_PE100.read() + 1;
        reg201.range(95, 64) = s_result_PE100.read() + 1;
        reg201.range(127, 96) = s_result_PE100.read() + 1;

        s_result_all.write(reg200);
        s_result_all.write(reg201);

        reg202.range(31, 0) = s_result_PE101.read() + 1;
        reg202.range(63, 32) = s_result_PE101.read() + 1;
        reg202.range(95, 64) = s_result_PE101.read() + 1;
        reg202.range(127, 96) = s_result_PE101.read() + 1;

        reg203.range(31, 0) = s_result_PE101.read() + 1;
        reg203.range(63, 32) = s_result_PE101.read() + 1;
        reg203.range(95, 64) = s_result_PE101.read() + 1;
        reg203.range(127, 96) = s_result_PE101.read() + 1;

        s_result_all.write(reg202);
        s_result_all.write(reg203);

        reg204.range(31, 0) = s_result_PE102.read() + 1;
        reg204.range(63, 32) = s_result_PE102.read() + 1;
        reg204.range(95, 64) = s_result_PE102.read() + 1;
        reg204.range(127, 96) = s_result_PE102.read() + 1;

        reg205.range(31, 0) = s_result_PE102.read() + 1;
        reg205.range(63, 32) = s_result_PE102.read() + 1;
        reg205.range(95, 64) = s_result_PE102.read() + 1;
        reg205.range(127, 96) = s_result_PE102.read() + 1;

        s_result_all.write(reg204);
        s_result_all.write(reg205);

        reg206.range(31, 0) = s_result_PE103.read() + 1;
        reg206.range(63, 32) = s_result_PE103.read() + 1;
        reg206.range(95, 64) = s_result_PE103.read() + 1;
        reg206.range(127, 96) = s_result_PE103.read() + 1;

        reg207.range(31, 0) = s_result_PE103.read() + 1;
        reg207.range(63, 32) = s_result_PE103.read() + 1;
        reg207.range(95, 64) = s_result_PE103.read() + 1;
        reg207.range(127, 96) = s_result_PE103.read() + 1;

        s_result_all.write(reg206);
        s_result_all.write(reg207);

        reg208.range(31, 0) = s_result_PE104.read() + 1;
        reg208.range(63, 32) = s_result_PE104.read() + 1;
        reg208.range(95, 64) = s_result_PE104.read() + 1;
        reg208.range(127, 96) = s_result_PE104.read() + 1;

        reg209.range(31, 0) = s_result_PE104.read() + 1;
        reg209.range(63, 32) = s_result_PE104.read() + 1;
        reg209.range(95, 64) = s_result_PE104.read() + 1;
        reg209.range(127, 96) = s_result_PE104.read() + 1;

        s_result_all.write(reg208);
        s_result_all.write(reg209);

        reg210.range(31, 0) = s_result_PE105.read() + 1;
        reg210.range(63, 32) = s_result_PE105.read() + 1;
        reg210.range(95, 64) = s_result_PE105.read() + 1;
        reg210.range(127, 96) = s_result_PE105.read() + 1;

        reg211.range(31, 0) = s_result_PE105.read() + 1;
        reg211.range(63, 32) = s_result_PE105.read() + 1;
        reg211.range(95, 64) = s_result_PE105.read() + 1;
        reg211.range(127, 96) = s_result_PE105.read() + 1;

        s_result_all.write(reg210);
        s_result_all.write(reg211);

        reg212.range(31, 0) = s_result_PE106.read() + 1;
        reg212.range(63, 32) = s_result_PE106.read() + 1;
        reg212.range(95, 64) = s_result_PE106.read() + 1;
        reg212.range(127, 96) = s_result_PE106.read() + 1;

        reg213.range(31, 0) = s_result_PE106.read() + 1;
        reg213.range(63, 32) = s_result_PE106.read() + 1;
        reg213.range(95, 64) = s_result_PE106.read() + 1;
        reg213.range(127, 96) = s_result_PE106.read() + 1;

        s_result_all.write(reg212);
        s_result_all.write(reg213);

        reg214.range(31, 0) = s_result_PE107.read() + 1;
        reg214.range(63, 32) = s_result_PE107.read() + 1;
        reg214.range(95, 64) = s_result_PE107.read() + 1;
        reg214.range(127, 96) = s_result_PE107.read() + 1;

        reg215.range(31, 0) = s_result_PE107.read() + 1;
        reg215.range(63, 32) = s_result_PE107.read() + 1;
        reg215.range(95, 64) = s_result_PE107.read() + 1;
        reg215.range(127, 96) = s_result_PE107.read() + 1;

        s_result_all.write(reg214);
        s_result_all.write(reg215);

        reg216.range(31, 0) = s_result_PE108.read() + 1;
        reg216.range(63, 32) = s_result_PE108.read() + 1;
        reg216.range(95, 64) = s_result_PE108.read() + 1;
        reg216.range(127, 96) = s_result_PE108.read() + 1;

        reg217.range(31, 0) = s_result_PE108.read() + 1;
        reg217.range(63, 32) = s_result_PE108.read() + 1;
        reg217.range(95, 64) = s_result_PE108.read() + 1;
        reg217.range(127, 96) = s_result_PE108.read() + 1;

        s_result_all.write(reg216);
        s_result_all.write(reg217);

        reg218.range(31, 0) = s_result_PE109.read() + 1;
        reg218.range(63, 32) = s_result_PE109.read() + 1;
        reg218.range(95, 64) = s_result_PE109.read() + 1;
        reg218.range(127, 96) = s_result_PE109.read() + 1;

        reg219.range(31, 0) = s_result_PE109.read() + 1;
        reg219.range(63, 32) = s_result_PE109.read() + 1;
        reg219.range(95, 64) = s_result_PE109.read() + 1;
        reg219.range(127, 96) = s_result_PE109.read() + 1;

        s_result_all.write(reg218);
        s_result_all.write(reg219);

        reg220.range(31, 0) = s_result_PE110.read() + 1;
        reg220.range(63, 32) = s_result_PE110.read() + 1;
        reg220.range(95, 64) = s_result_PE110.read() + 1;
        reg220.range(127, 96) = s_result_PE110.read() + 1;

        reg221.range(31, 0) = s_result_PE110.read() + 1;
        reg221.range(63, 32) = s_result_PE110.read() + 1;
        reg221.range(95, 64) = s_result_PE110.read() + 1;
        reg221.range(127, 96) = s_result_PE110.read() + 1;

        s_result_all.write(reg220);
        s_result_all.write(reg221);

        reg222.range(31, 0) = s_result_PE111.read() + 1;
        reg222.range(63, 32) = s_result_PE111.read() + 1;
        reg222.range(95, 64) = s_result_PE111.read() + 1;
        reg222.range(127, 96) = s_result_PE111.read() + 1;

        reg223.range(31, 0) = s_result_PE111.read() + 1;
        reg223.range(63, 32) = s_result_PE111.read() + 1;
        reg223.range(95, 64) = s_result_PE111.read() + 1;
        reg223.range(127, 96) = s_result_PE111.read() + 1;

        s_result_all.write(reg222);
        s_result_all.write(reg223);

        reg224.range(31, 0) = s_result_PE112.read() + 1;
        reg224.range(63, 32) = s_result_PE112.read() + 1;
        reg224.range(95, 64) = s_result_PE112.read() + 1;
        reg224.range(127, 96) = s_result_PE112.read() + 1;

        reg225.range(31, 0) = s_result_PE112.read() + 1;
        reg225.range(63, 32) = s_result_PE112.read() + 1;
        reg225.range(95, 64) = s_result_PE112.read() + 1;
        reg225.range(127, 96) = s_result_PE112.read() + 1;

        s_result_all.write(reg224);
        s_result_all.write(reg225);

        reg226.range(31, 0) = s_result_PE113.read() + 1;
        reg226.range(63, 32) = s_result_PE113.read() + 1;
        reg226.range(95, 64) = s_result_PE113.read() + 1;
        reg226.range(127, 96) = s_result_PE113.read() + 1;

        reg227.range(31, 0) = s_result_PE113.read() + 1;
        reg227.range(63, 32) = s_result_PE113.read() + 1;
        reg227.range(95, 64) = s_result_PE113.read() + 1;
        reg227.range(127, 96) = s_result_PE113.read() + 1;

        s_result_all.write(reg226);
        s_result_all.write(reg227);

        reg228.range(31, 0) = s_result_PE114.read() + 1;
        reg228.range(63, 32) = s_result_PE114.read() + 1;
        reg228.range(95, 64) = s_result_PE114.read() + 1;
        reg228.range(127, 96) = s_result_PE114.read() + 1;

        reg229.range(31, 0) = s_result_PE114.read() + 1;
        reg229.range(63, 32) = s_result_PE114.read() + 1;
        reg229.range(95, 64) = s_result_PE114.read() + 1;
        reg229.range(127, 96) = s_result_PE114.read() + 1;

        s_result_all.write(reg228);
        s_result_all.write(reg229);

        reg230.range(31, 0) = s_result_PE115.read() + 1;
        reg230.range(63, 32) = s_result_PE115.read() + 1;
        reg230.range(95, 64) = s_result_PE115.read() + 1;
        reg230.range(127, 96) = s_result_PE115.read() + 1;

        reg231.range(31, 0) = s_result_PE115.read() + 1;
        reg231.range(63, 32) = s_result_PE115.read() + 1;
        reg231.range(95, 64) = s_result_PE115.read() + 1;
        reg231.range(127, 96) = s_result_PE115.read() + 1;

        s_result_all.write(reg230);
        s_result_all.write(reg231);

        reg232.range(31, 0) = s_result_PE116.read() + 1;
        reg232.range(63, 32) = s_result_PE116.read() + 1;
        reg232.range(95, 64) = s_result_PE116.read() + 1;
        reg232.range(127, 96) = s_result_PE116.read() + 1;

        reg233.range(31, 0) = s_result_PE116.read() + 1;
        reg233.range(63, 32) = s_result_PE116.read() + 1;
        reg233.range(95, 64) = s_result_PE116.read() + 1;
        reg233.range(127, 96) = s_result_PE116.read() + 1;

        s_result_all.write(reg232);
        s_result_all.write(reg233);

        reg234.range(31, 0) = s_result_PE117.read() + 1;
        reg234.range(63, 32) = s_result_PE117.read() + 1;
        reg234.range(95, 64) = s_result_PE117.read() + 1;
        reg234.range(127, 96) = s_result_PE117.read() + 1;

        reg235.range(31, 0) = s_result_PE117.read() + 1;
        reg235.range(63, 32) = s_result_PE117.read() + 1;
        reg235.range(95, 64) = s_result_PE117.read() + 1;
        reg235.range(127, 96) = s_result_PE117.read() + 1;

        s_result_all.write(reg234);
        s_result_all.write(reg235);

        reg236.range(31, 0) = s_result_PE118.read() + 1;
        reg236.range(63, 32) = s_result_PE118.read() + 1;
        reg236.range(95, 64) = s_result_PE118.read() + 1;
        reg236.range(127, 96) = s_result_PE118.read() + 1;

        reg237.range(31, 0) = s_result_PE118.read() + 1;
        reg237.range(63, 32) = s_result_PE118.read() + 1;
        reg237.range(95, 64) = s_result_PE118.read() + 1;
        reg237.range(127, 96) = s_result_PE118.read() + 1;

        s_result_all.write(reg236);
        s_result_all.write(reg237);

        reg238.range(31, 0) = s_result_PE119.read() + 1;
        reg238.range(63, 32) = s_result_PE119.read() + 1;
        reg238.range(95, 64) = s_result_PE119.read() + 1;
        reg238.range(127, 96) = s_result_PE119.read() + 1;

        reg239.range(31, 0) = s_result_PE119.read() + 1;
        reg239.range(63, 32) = s_result_PE119.read() + 1;
        reg239.range(95, 64) = s_result_PE119.read() + 1;
        reg239.range(127, 96) = s_result_PE119.read() + 1;

        s_result_all.write(reg238);
        s_result_all.write(reg239);

        reg240.range(31, 0) = s_result_PE120.read() + 1;
        reg240.range(63, 32) = s_result_PE120.read() + 1;
        reg240.range(95, 64) = s_result_PE120.read() + 1;
        reg240.range(127, 96) = s_result_PE120.read() + 1;

        reg241.range(31, 0) = s_result_PE120.read() + 1;
        reg241.range(63, 32) = s_result_PE120.read() + 1;
        reg241.range(95, 64) = s_result_PE120.read() + 1;
        reg241.range(127, 96) = s_result_PE120.read() + 1;

        s_result_all.write(reg240);
        s_result_all.write(reg241);

        reg242.range(31, 0) = s_result_PE121.read() + 1;
        reg242.range(63, 32) = s_result_PE121.read() + 1;
        reg242.range(95, 64) = s_result_PE121.read() + 1;
        reg242.range(127, 96) = s_result_PE121.read() + 1;

        reg243.range(31, 0) = s_result_PE121.read() + 1;
        reg243.range(63, 32) = s_result_PE121.read() + 1;
        reg243.range(95, 64) = s_result_PE121.read() + 1;
        reg243.range(127, 96) = s_result_PE121.read() + 1;

        s_result_all.write(reg242);
        s_result_all.write(reg243);

        reg244.range(31, 0) = s_result_PE122.read() + 1;
        reg244.range(63, 32) = s_result_PE122.read() + 1;
        reg244.range(95, 64) = s_result_PE122.read() + 1;
        reg244.range(127, 96) = s_result_PE122.read() + 1;

        reg245.range(31, 0) = s_result_PE122.read() + 1;
        reg245.range(63, 32) = s_result_PE122.read() + 1;
        reg245.range(95, 64) = s_result_PE122.read() + 1;
        reg245.range(127, 96) = s_result_PE122.read() + 1;

        s_result_all.write(reg244);
        s_result_all.write(reg245);

        reg246.range(31, 0) = s_result_PE123.read() + 1;
        reg246.range(63, 32) = s_result_PE123.read() + 1;
        reg246.range(95, 64) = s_result_PE123.read() + 1;
        reg246.range(127, 96) = s_result_PE123.read() + 1;

        reg247.range(31, 0) = s_result_PE123.read() + 1;
        reg247.range(63, 32) = s_result_PE123.read() + 1;
        reg247.range(95, 64) = s_result_PE123.read() + 1;
        reg247.range(127, 96) = s_result_PE123.read() + 1;

        s_result_all.write(reg246);
        s_result_all.write(reg247);

        reg248.range(31, 0) = s_result_PE124.read() + 1;
        reg248.range(63, 32) = s_result_PE124.read() + 1;
        reg248.range(95, 64) = s_result_PE124.read() + 1;
        reg248.range(127, 96) = s_result_PE124.read() + 1;

        reg249.range(31, 0) = s_result_PE124.read() + 1;
        reg249.range(63, 32) = s_result_PE124.read() + 1;
        reg249.range(95, 64) = s_result_PE124.read() + 1;
        reg249.range(127, 96) = s_result_PE124.read() + 1;

        s_result_all.write(reg248);
        s_result_all.write(reg249);

        reg250.range(31, 0) = s_result_PE125.read() + 1;
        reg250.range(63, 32) = s_result_PE125.read() + 1;
        reg250.range(95, 64) = s_result_PE125.read() + 1;
        reg250.range(127, 96) = s_result_PE125.read() + 1;

        reg251.range(31, 0) = s_result_PE125.read() + 1;
        reg251.range(63, 32) = s_result_PE125.read() + 1;
        reg251.range(95, 64) = s_result_PE125.read() + 1;
        reg251.range(127, 96) = s_result_PE125.read() + 1;

        s_result_all.write(reg250);
        s_result_all.write(reg251);

        reg252.range(31, 0) = s_result_PE126.read() + 1;
        reg252.range(63, 32) = s_result_PE126.read() + 1;
        reg252.range(95, 64) = s_result_PE126.read() + 1;
        reg252.range(127, 96) = s_result_PE126.read() + 1;

        reg253.range(31, 0) = s_result_PE126.read() + 1;
        reg253.range(63, 32) = s_result_PE126.read() + 1;
        reg253.range(95, 64) = s_result_PE126.read() + 1;
        reg253.range(127, 96) = s_result_PE126.read() + 1;

        s_result_all.write(reg252);
        s_result_all.write(reg253);

        reg254.range(31, 0) = s_result_PE127.read() + 1;
        reg254.range(63, 32) = s_result_PE127.read() + 1;
        reg254.range(95, 64) = s_result_PE127.read() + 1;
        reg254.range(127, 96) = s_result_PE127.read() + 1;

        reg255.range(31, 0) = s_result_PE127.read() + 1;
        reg255.range(63, 32) = s_result_PE127.read() + 1;
        reg255.range(95, 64) = s_result_PE127.read() + 1;
        reg255.range(127, 96) = s_result_PE127.read() + 1;

        s_result_all.write(reg254);
        s_result_all.write(reg255);
    }
}

//////////////////////////////     For debugging     ////////////////////////////// 
template<const int FEATURE_SIZE>
void consume_W(
    hls::stream<W_TYPE>& s_feature_in
) {

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE * FEATURE_SIZE / INTS_PER_W; i++) {
        #pragma HLS pipeline II=1

        s_feature_in.read();
    }
}


template<const int FEATURE_SIZE>
void consume_D(
    hls::stream<D_TYPE>& s_result_in
) {

    for (int i = 0; i < BATCH_NUM * BATCH_SIZE * FEATURE_SIZE; i++) {
        #pragma HLS pipeline II=1

        s_result_in.read();
    }
}
