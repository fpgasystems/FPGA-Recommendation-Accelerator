#include <hls_stream.h>

#include "constants.hpp"

extern "C" {

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
    int *out
    );
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
    hls::stream<int>& s_idx_buffer_HBM30, hls::stream<int>& s_idx_buffer_HBM31);

template<const long START_ADDR_0, const long AXI_PADDED_SIZE_0>
void load_single_embedding_1_tables(
    hls::stream<int>& s_idx_buffer, const t_hbm* table_RAM, 
    hls::stream<t_hbm>& s_embedding_buffer);

template<const long START_ADDR_0, const long AXI_PADDED_SIZE_0>
void load_single_embedding_2_tables(
    hls::stream<int>& s_idx_buffer, const t_hbm* table_RAM, 
    hls::stream<t_hbm>& s_embedding_buffer);

template<const int TOTAL_VECTOR_LENGTH>
void reduction_add_single(
    hls::stream<t_hbm>& s_embedding_buffer, 
    hls::stream<int>& s_result_buffer);

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
    hls::stream<int>& s_vout_buffer);

void write_results(
    hls::stream<int>& s_vout_buffer, int out_RAM[BATCH_SIZE]);


const int trip_count_item_num = BATCH_NUM * BATCH_SIZE;

const int fifo_batch_size = FIFO_BATCH_SIZE;

const int depth_s_embedding_buffer_HBM0 = VECTOR_SIZE_HBM_BANK_0 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM1 = VECTOR_SIZE_HBM_BANK_1 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM2 = VECTOR_SIZE_HBM_BANK_2 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM3 = VECTOR_SIZE_HBM_BANK_3 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM4 = VECTOR_SIZE_HBM_BANK_4 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM5 = VECTOR_SIZE_HBM_BANK_5 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM6 = VECTOR_SIZE_HBM_BANK_6 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM7 = VECTOR_SIZE_HBM_BANK_7 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM8 = VECTOR_SIZE_HBM_BANK_8 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM9 = VECTOR_SIZE_HBM_BANK_9 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM10 = VECTOR_SIZE_HBM_BANK_10 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM11 = VECTOR_SIZE_HBM_BANK_11 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM12 = VECTOR_SIZE_HBM_BANK_12 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM13 = VECTOR_SIZE_HBM_BANK_13 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM14 = VECTOR_SIZE_HBM_BANK_14 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM15 = VECTOR_SIZE_HBM_BANK_15 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM16 = VECTOR_SIZE_HBM_BANK_16 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM17 = VECTOR_SIZE_HBM_BANK_17 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM18 = VECTOR_SIZE_HBM_BANK_18 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM19 = VECTOR_SIZE_HBM_BANK_19 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM20 = VECTOR_SIZE_HBM_BANK_20 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM21 = VECTOR_SIZE_HBM_BANK_21 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM22 = VECTOR_SIZE_HBM_BANK_22 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM23 = VECTOR_SIZE_HBM_BANK_23 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM24 = VECTOR_SIZE_HBM_BANK_24 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM25 = VECTOR_SIZE_HBM_BANK_25 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM26 = VECTOR_SIZE_HBM_BANK_26 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM27 = VECTOR_SIZE_HBM_BANK_27 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM28 = VECTOR_SIZE_HBM_BANK_28 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM29 = VECTOR_SIZE_HBM_BANK_29 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM30 = VECTOR_SIZE_HBM_BANK_30 * FIFO_BATCH_SIZE;
const int depth_s_embedding_buffer_HBM31 = VECTOR_SIZE_HBM_BANK_31 * FIFO_BATCH_SIZE;

// const int depth_s_embedding_buffer_PLRAM0 = VECTOR_SIZE_PLRAM_BANK_0 * FIFO_BATCH_SIZE;
// const int depth_s_embedding_buffer_PLRAM1 = VECTOR_SIZE_PLRAM_BANK_1 * FIFO_BATCH_SIZE;
// const int depth_s_embedding_buffer_PLRAM2 = VECTOR_SIZE_PLRAM_BANK_2 * FIFO_BATCH_SIZE;
// const int depth_s_embedding_buffer_PLRAM3 = VECTOR_SIZE_PLRAM_BANK_3 * FIFO_BATCH_SIZE;

// const int depth_s_embedding_buffer_DDR0 = VECTOR_SIZE_DDR_BANK_0 * FIFO_BATCH_SIZE;
// const int depth_s_embedding_buffer_DDR1 = VECTOR_SIZE_DDR_BANK_1 * FIFO_BATCH_SIZE;