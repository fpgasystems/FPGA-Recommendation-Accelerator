#include "host.hpp"

#define BANK_NAME(n) n | XCL_MEM_TOPOLOGY
/* for U280 specifically */
const int bank[40] = {
    /* 0 ~ 31 HBM */
    BANK_NAME(0),  BANK_NAME(1),  BANK_NAME(2),  BANK_NAME(3),  BANK_NAME(4),
    BANK_NAME(5),  BANK_NAME(6),  BANK_NAME(7),  BANK_NAME(8),  BANK_NAME(9),
    BANK_NAME(10), BANK_NAME(11), BANK_NAME(12), BANK_NAME(13), BANK_NAME(14),
    BANK_NAME(15), BANK_NAME(16), BANK_NAME(17), BANK_NAME(18), BANK_NAME(19),
    BANK_NAME(20), BANK_NAME(21), BANK_NAME(22), BANK_NAME(23), BANK_NAME(24),
    BANK_NAME(25), BANK_NAME(26), BANK_NAME(27), BANK_NAME(28), BANK_NAME(29),
    BANK_NAME(30), BANK_NAME(31), 
    /* 32, 33 DDR */ 
    BANK_NAME(32), BANK_NAME(33), 
    /* 34 ~ 39 PLRAM */ 
    BANK_NAME(34), BANK_NAME(35), BANK_NAME(36), BANK_NAME(37), 
    BANK_NAME(38), BANK_NAME(39)};

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <XCLBIN File>" << std::endl;
		return EXIT_FAILURE;
	}

    std::string binaryFile = argv[1];
//////////////////////////////   TEMPLATE START  //////////////////////////////
    size_t HBM_embedding0_size =  HBM_BANK0_SIZE;
    size_t HBM_embedding1_size =  HBM_BANK1_SIZE;
    size_t HBM_embedding2_size =  HBM_BANK2_SIZE;
    size_t HBM_embedding3_size =  HBM_BANK3_SIZE;
    size_t HBM_embedding4_size =  HBM_BANK4_SIZE;
    size_t HBM_embedding5_size =  HBM_BANK5_SIZE;
    size_t HBM_embedding6_size =  HBM_BANK6_SIZE;
    size_t HBM_embedding7_size =  HBM_BANK7_SIZE;
    size_t HBM_embedding8_size =  HBM_BANK8_SIZE;
    size_t HBM_embedding9_size =  HBM_BANK9_SIZE;
    size_t HBM_embedding10_size =  HBM_BANK10_SIZE;
    size_t HBM_embedding11_size =  HBM_BANK11_SIZE;
    size_t HBM_embedding12_size =  HBM_BANK12_SIZE;
    size_t HBM_embedding13_size =  HBM_BANK13_SIZE;
    size_t HBM_embedding14_size =  HBM_BANK14_SIZE;
    size_t HBM_embedding15_size =  HBM_BANK15_SIZE;
    size_t HBM_embedding16_size =  HBM_BANK16_SIZE;
    size_t HBM_embedding17_size =  HBM_BANK17_SIZE;
    size_t HBM_embedding18_size =  HBM_BANK18_SIZE;
    size_t HBM_embedding19_size =  HBM_BANK19_SIZE;
    size_t HBM_embedding20_size =  HBM_BANK20_SIZE;
    size_t HBM_embedding21_size =  HBM_BANK21_SIZE;
    size_t HBM_embedding22_size =  HBM_BANK22_SIZE;
    size_t HBM_embedding23_size =  HBM_BANK23_SIZE;
    size_t HBM_embedding24_size =  HBM_BANK24_SIZE;
    size_t HBM_embedding25_size =  HBM_BANK25_SIZE;
    size_t HBM_embedding26_size =  HBM_BANK26_SIZE;
    size_t HBM_embedding27_size =  HBM_BANK27_SIZE;
    size_t HBM_embedding28_size =  HBM_BANK28_SIZE;
    size_t HBM_embedding29_size =  HBM_BANK29_SIZE;
    size_t HBM_embedding30_size =  HBM_BANK30_SIZE;
    size_t HBM_embedding31_size =  HBM_BANK31_SIZE;

    size_t DDR_embedding0_size =  DDR_BANK0_SIZE;
    size_t DDR_embedding1_size =  DDR_BANK1_SIZE;

    size_t PLRAM_embedding0_size =  PLRAM_BANK0_SIZE;
    size_t PLRAM_embedding1_size =  PLRAM_BANK1_SIZE;
    size_t PLRAM_embedding2_size =  PLRAM_BANK2_SIZE;
    size_t PLRAM_embedding3_size =  PLRAM_BANK3_SIZE;
//////////////////////////////   TEMPLATE END  //////////////////////////////

    size_t idx_size = BATCH_SIZE;
    cl_int err;
    unsigned fileBufSize;

    // allocate aligned 2D vectors
//////////////////////////////   TEMPLATE START  //////////////////////////////
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding0(HBM_embedding0_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding1(HBM_embedding1_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding2(HBM_embedding2_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding3(HBM_embedding3_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding4(HBM_embedding4_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding5(HBM_embedding5_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding6(HBM_embedding6_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding7(HBM_embedding7_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding8(HBM_embedding8_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding9(HBM_embedding9_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding10(HBM_embedding10_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding11(HBM_embedding11_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding12(HBM_embedding12_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding13(HBM_embedding13_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding14(HBM_embedding14_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding15(HBM_embedding15_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding16(HBM_embedding16_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding17(HBM_embedding17_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding18(HBM_embedding18_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding19(HBM_embedding19_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding20(HBM_embedding20_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding21(HBM_embedding21_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding22(HBM_embedding22_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding23(HBM_embedding23_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding24(HBM_embedding24_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding25(HBM_embedding25_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding26(HBM_embedding26_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding27(HBM_embedding27_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding28(HBM_embedding28_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding29(HBM_embedding29_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding30(HBM_embedding30_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> HBM_embedding31(HBM_embedding31_size, 0);


    std::vector<D_TYPE, aligned_allocator<D_TYPE>> PLRAM_embedding0(PLRAM_embedding0_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> PLRAM_embedding1(PLRAM_embedding1_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> PLRAM_embedding2(PLRAM_embedding2_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> PLRAM_embedding3(PLRAM_embedding3_size, 0);

    std::vector<D_TYPE, aligned_allocator<D_TYPE>> DDR_embedding0(DDR_embedding0_size, 0);
    std::vector<D_TYPE, aligned_allocator<D_TYPE>> DDR_embedding1(DDR_embedding1_size, 0);
//////////////////////////////   TEMPLATE END  //////////////////////////////
    std::vector<int, aligned_allocator<int>> access_idx(idx_size, 0);


    int size_feature = BATCH_SIZE * INPUT_SIZE;

    int size_weights1 = INPUT_SIZE * HIDDEN_SIZE1;
    int size_bias1 = HIDDEN_SIZE1;
    int size_results1 = BATCH_SIZE * HIDDEN_SIZE1;

    int size_weights2 = HIDDEN_SIZE1 * HIDDEN_SIZE2;
    int size_bias2 = HIDDEN_SIZE2;
    int size_results2 = BATCH_SIZE * HIDDEN_SIZE2;

    int size_weights3 = HIDDEN_SIZE2 * HIDDEN_SIZE3;
    int size_bias3 = HIDDEN_SIZE3;
    int size_results3 = BATCH_SIZE * HIDDEN_SIZE3;

    int size_weights_out = HIDDEN_SIZE3 * OUTPUT_SIZE;
    int size_bias_out = OUTPUT_SIZE;
    // To fit in PLRAM, only use 1 batch
    int size_results_out = BATCH_SIZE * OUTPUT_SIZE; 

    std::vector<D_TYPE,aligned_allocator<D_TYPE>> feature(size_feature);
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> feature_batch_template(BATCH_SIZE * INPUT_SIZE);

    // w[INPUT_SIZE][OUTPUT_SIZE] transpose -> w_transpose[OUTPUT_SIZE][INPUT_SIZE]
    // better data alignment for matMul on CPU
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> weights1_transpose(size_weights1);
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> bias1(size_bias1);
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> results1(size_results1);

    std::vector<D_TYPE,aligned_allocator<D_TYPE>> weights2_transpose(size_weights2);
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> bias2(size_bias2);
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> results2(size_results2);

    std::vector<D_TYPE,aligned_allocator<D_TYPE>> weights3_transpose(size_weights3);
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> bias3(size_bias3);
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> results3(size_results3);

    std::vector<D_TYPE,aligned_allocator<D_TYPE>> weights_out_transpose(size_weights_out);
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> bias_out(size_bias_out);

    std::vector<D_TYPE,aligned_allocator<D_TYPE>> source_hw_results(size_results_out);
    std::vector<D_TYPE,aligned_allocator<D_TYPE>> source_sw_results(size_results_out);


    // generate embedding table
//////////////////////////////   TEMPLATE START  //////////////////////////////

    std::cout << "Generating table contents..." << std::endl;
    std::cout << "HBM Round 0..." << std::endl;
#define DEBUG
    // Round 0
    for (int i = 0 ; i < TABLE_SIZE_HBM_0 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_0; j++) {
#ifdef DEBUG
        HBM_embedding0[i * PADDED_SIZE_HBM_0 + j + ADDR_AXI_HBM_0] = 1;
#else
        HBM_embedding0[i * PADDED_SIZE_HBM_0 + j + ADDR_AXI_HBM_0] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_1 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_1; j++) {
#ifdef DEBUG
        HBM_embedding1[i * PADDED_SIZE_HBM_1 + j + ADDR_AXI_HBM_1] = 1;
#else
        HBM_embedding1[i * PADDED_SIZE_HBM_1 + j + ADDR_AXI_HBM_1] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_2 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_2; j++) {
#ifdef DEBUG
        HBM_embedding2[i * PADDED_SIZE_HBM_2 + j + ADDR_AXI_HBM_2] = 1;
#else
        HBM_embedding2[i * PADDED_SIZE_HBM_2 + j + ADDR_AXI_HBM_2] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_3 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_3; j++) {
#ifdef DEBUG
        HBM_embedding3[i * PADDED_SIZE_HBM_3 + j + ADDR_AXI_HBM_3] = 1;
#else
        HBM_embedding3[i * PADDED_SIZE_HBM_3 + j + ADDR_AXI_HBM_3] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_4 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_4; j++) {
#ifdef DEBUG
        HBM_embedding4[i * PADDED_SIZE_HBM_4 + j + ADDR_AXI_HBM_4] = 1;
#else
        HBM_embedding4[i * PADDED_SIZE_HBM_4 + j + ADDR_AXI_HBM_4] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_5 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_5; j++) {
#ifdef DEBUG
        HBM_embedding5[i * PADDED_SIZE_HBM_5 + j + ADDR_AXI_HBM_5] = 1;
#else
        HBM_embedding5[i * PADDED_SIZE_HBM_5 + j + ADDR_AXI_HBM_5] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_6 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_6; j++) {
#ifdef DEBUG
        HBM_embedding6[i * PADDED_SIZE_HBM_6 + j + ADDR_AXI_HBM_6] = 1;
#else
        HBM_embedding6[i * PADDED_SIZE_HBM_6 + j + ADDR_AXI_HBM_6] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_7 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_7; j++) {
#ifdef DEBUG
        HBM_embedding7[i * PADDED_SIZE_HBM_7 + j + ADDR_AXI_HBM_7] = 1;
#else
        HBM_embedding7[i * PADDED_SIZE_HBM_7 + j + ADDR_AXI_HBM_7] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_8 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_8; j++) {
#ifdef DEBUG
        HBM_embedding8[i * PADDED_SIZE_HBM_8 + j + ADDR_AXI_HBM_8] = 1;
#else
        HBM_embedding8[i * PADDED_SIZE_HBM_8 + j + ADDR_AXI_HBM_8] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_9 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_9; j++) {
#ifdef DEBUG
        HBM_embedding9[i * PADDED_SIZE_HBM_9 + j + ADDR_AXI_HBM_9] = 1;
#else
        HBM_embedding9[i * PADDED_SIZE_HBM_9 + j + ADDR_AXI_HBM_9] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_10 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_10; j++) {
#ifdef DEBUG
        HBM_embedding10[i * PADDED_SIZE_HBM_10 + j + ADDR_AXI_HBM_10] = 1;
#else
        HBM_embedding10[i * PADDED_SIZE_HBM_10 + j + ADDR_AXI_HBM_10] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_11 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_11; j++) {
#ifdef DEBUG
        HBM_embedding11[i * PADDED_SIZE_HBM_11 + j + ADDR_AXI_HBM_11] = 1;
#else
        HBM_embedding11[i * PADDED_SIZE_HBM_11 + j + ADDR_AXI_HBM_11] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_12 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_12; j++) {
#ifdef DEBUG
        HBM_embedding12[i * PADDED_SIZE_HBM_12 + j + ADDR_AXI_HBM_12] = 1;
#else
        HBM_embedding12[i * PADDED_SIZE_HBM_12 + j + ADDR_AXI_HBM_12] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_13 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_13; j++) {
#ifdef DEBUG
        HBM_embedding13[i * PADDED_SIZE_HBM_13 + j + ADDR_AXI_HBM_13] = 1;
#else
        HBM_embedding13[i * PADDED_SIZE_HBM_13 + j + ADDR_AXI_HBM_13] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_14 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_14; j++) {
#ifdef DEBUG
        HBM_embedding14[i * PADDED_SIZE_HBM_14 + j + ADDR_AXI_HBM_14] = 1;
#else
        HBM_embedding14[i * PADDED_SIZE_HBM_14 + j + ADDR_AXI_HBM_14] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_15 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_15; j++) {
#ifdef DEBUG
        HBM_embedding15[i * PADDED_SIZE_HBM_15 + j + ADDR_AXI_HBM_15] = 1;
#else
        HBM_embedding15[i * PADDED_SIZE_HBM_15 + j + ADDR_AXI_HBM_15] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_16 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_16; j++) {
#ifdef DEBUG
        HBM_embedding16[i * PADDED_SIZE_HBM_16 + j + ADDR_AXI_HBM_16] = 1;
#else
        HBM_embedding16[i * PADDED_SIZE_HBM_16 + j + ADDR_AXI_HBM_16] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_17 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_17; j++) {
#ifdef DEBUG
        HBM_embedding17[i * PADDED_SIZE_HBM_17 + j + ADDR_AXI_HBM_17] = 1;
#else
        HBM_embedding17[i * PADDED_SIZE_HBM_17 + j + ADDR_AXI_HBM_17] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_18 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_18; j++) {
#ifdef DEBUG
        HBM_embedding18[i * PADDED_SIZE_HBM_18 + j + ADDR_AXI_HBM_18] = 1;
#else
        HBM_embedding18[i * PADDED_SIZE_HBM_18 + j + ADDR_AXI_HBM_18] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_19 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_19; j++) {
#ifdef DEBUG
        HBM_embedding19[i * PADDED_SIZE_HBM_19 + j + ADDR_AXI_HBM_19] = 1;
#else
        HBM_embedding19[i * PADDED_SIZE_HBM_19 + j + ADDR_AXI_HBM_19] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_20 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_20; j++) {
#ifdef DEBUG
        HBM_embedding20[i * PADDED_SIZE_HBM_20 + j + ADDR_AXI_HBM_20] = 1;
#else
        HBM_embedding20[i * PADDED_SIZE_HBM_20 + j + ADDR_AXI_HBM_20] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_21 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_21; j++) {
#ifdef DEBUG
        HBM_embedding21[i * PADDED_SIZE_HBM_21 + j + ADDR_AXI_HBM_21] = 1;
#else
        HBM_embedding21[i * PADDED_SIZE_HBM_21 + j + ADDR_AXI_HBM_21] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_22 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_22; j++) {
#ifdef DEBUG
        HBM_embedding22[i * PADDED_SIZE_HBM_22 + j + ADDR_AXI_HBM_22] = 1;
#else
        HBM_embedding22[i * PADDED_SIZE_HBM_22 + j + ADDR_AXI_HBM_22] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_23 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_23; j++) {
#ifdef DEBUG
        HBM_embedding23[i * PADDED_SIZE_HBM_23 + j + ADDR_AXI_HBM_23] = 1;
#else
        HBM_embedding23[i * PADDED_SIZE_HBM_23 + j + ADDR_AXI_HBM_23] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_24 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_24; j++) {
#ifdef DEBUG
        HBM_embedding24[i * PADDED_SIZE_HBM_24 + j + ADDR_AXI_HBM_24] = 1;
#else
        HBM_embedding24[i * PADDED_SIZE_HBM_24 + j + ADDR_AXI_HBM_24] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_25 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_25; j++) {
#ifdef DEBUG
        HBM_embedding25[i * PADDED_SIZE_HBM_25 + j + ADDR_AXI_HBM_25] = 1;
#else
        HBM_embedding25[i * PADDED_SIZE_HBM_25 + j + ADDR_AXI_HBM_25] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_26 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_26; j++) {
#ifdef DEBUG
        HBM_embedding26[i * PADDED_SIZE_HBM_26 + j + ADDR_AXI_HBM_26] = 1;
#else
        HBM_embedding26[i * PADDED_SIZE_HBM_26 + j + ADDR_AXI_HBM_26] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_27 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_27; j++) {
#ifdef DEBUG
        HBM_embedding27[i * PADDED_SIZE_HBM_27 + j + ADDR_AXI_HBM_27] = 1;
#else
        HBM_embedding27[i * PADDED_SIZE_HBM_27 + j + ADDR_AXI_HBM_27] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_28 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_28; j++) {
#ifdef DEBUG
        HBM_embedding28[i * PADDED_SIZE_HBM_28 + j + ADDR_AXI_HBM_28] = 1;
#else
        HBM_embedding28[i * PADDED_SIZE_HBM_28 + j + ADDR_AXI_HBM_28] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_29 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_29; j++) {
#ifdef DEBUG
        HBM_embedding29[i * PADDED_SIZE_HBM_29 + j + ADDR_AXI_HBM_29] = 1;
#else
        HBM_embedding29[i * PADDED_SIZE_HBM_29 + j + ADDR_AXI_HBM_29] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_30 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_30; j++) {
#ifdef DEBUG
        HBM_embedding30[i * PADDED_SIZE_HBM_30 + j + ADDR_AXI_HBM_30] = 1;
#else
        HBM_embedding30[i * PADDED_SIZE_HBM_30 + j + ADDR_AXI_HBM_30] = rand() % 2;
#endif
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_HBM_31 ; i++) {
        for (int j = 0; j < DATA_SIZE_HBM_31; j++) {
#ifdef DEBUG
        HBM_embedding31[i * PADDED_SIZE_HBM_31 + j + ADDR_AXI_HBM_31] = 1;
#else
        HBM_embedding31[i * PADDED_SIZE_HBM_31 + j + ADDR_AXI_HBM_31] = rand() % 2;
#endif
        }
    }

    std::cout << "DDR Round 0..." << std::endl;
    // For DDR, use LONG as type to avoid index overflow
    // Round 0
    for (long i = 0 ; i < TABLE_SIZE_DDR_0 ; i++) {
        for (long j = 0; j < DATA_SIZE_DDR_0; j++) {
#ifdef DEBUG
        DDR_embedding0[i * PADDED_SIZE_DDR_0 + j] = 1;
#else
        DDR_embedding0[i * PADDED_SIZE_DDR_0 + j] = rand() % 2;
#endif
        }
    }
    for (long i = 0 ; i < TABLE_SIZE_DDR_1 ; i++) {
        for (long j = 0; j < DATA_SIZE_DDR_1; j++) {
#ifdef DEBUG
        DDR_embedding1[i * PADDED_SIZE_DDR_1 + j] = 1;
#else
        DDR_embedding1[i * PADDED_SIZE_DDR_1 + j] = rand() % 2;
#endif
        }
    }

    std::cout << "PLRAM Round 0..." << std::endl;

    const D_TYPE PLRAM_template_even[8] = {0, -1, 0, -1, 0, 0, -1, 0};
    const D_TYPE PLRAM_template_odd[8] = {-1, 1, 0, 0, 0, 1, -1, 0};
    // D_TYPE PLRAM_template_even[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    // D_TYPE PLRAM_template_odd[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    // Round 0
    for (int i = 0 ; i < TABLE_SIZE_PLRAM_0 / 2; i++) {
        for (int j = 0; j < DATA_SIZE_PLRAM_0; j++) {
            PLRAM_embedding0[2 * i * PADDED_SIZE_PLRAM_0 + j + ADDR_AXI_PLRAM_0] = PLRAM_template_even[j];
            PLRAM_embedding0[(2 * i + 1) * PADDED_SIZE_PLRAM_0 + j + ADDR_AXI_PLRAM_0] = PLRAM_template_odd[j];
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_PLRAM_1  / 2; i++) {
        for (int j = 0; j < DATA_SIZE_PLRAM_1; j++) {
        PLRAM_embedding1[2 * i * PADDED_SIZE_PLRAM_1 + j + ADDR_AXI_PLRAM_1] = PLRAM_template_even[j];
        PLRAM_embedding1[(2 * i + 1) * PADDED_SIZE_PLRAM_1 + j + ADDR_AXI_PLRAM_1] = PLRAM_template_odd[j];
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_PLRAM_2  / 2; i++) {
        for (int j = 0; j < DATA_SIZE_PLRAM_2; j++) {
        PLRAM_embedding2[2 * i * PADDED_SIZE_PLRAM_2 + j + ADDR_AXI_PLRAM_2] = PLRAM_template_even[j];
        PLRAM_embedding2[(2 * i + 1) * PADDED_SIZE_PLRAM_2 + j + ADDR_AXI_PLRAM_2] = PLRAM_template_odd[j];
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_PLRAM_3  / 2; i++) {
        for (int j = 0; j < DATA_SIZE_PLRAM_3; j++) {
        PLRAM_embedding3[2 * i * PADDED_SIZE_PLRAM_3 + j + ADDR_AXI_PLRAM_3] = PLRAM_template_even[j];
        PLRAM_embedding3[(2 * i + 1) * PADDED_SIZE_PLRAM_3 + j + ADDR_AXI_PLRAM_3] = PLRAM_template_odd[j];
        }
    }

    std::cout << "PLRAM Round 1..." << std::endl;
    // Round 1
    for (int i = 0 ; i < TABLE_SIZE_PLRAM_4  / 2; i++) {
        for (int j = 0; j < DATA_SIZE_PLRAM_4; j++) {
        PLRAM_embedding0[2 * i * PADDED_SIZE_PLRAM_4 + j + ADDR_AXI_PLRAM_4] = PLRAM_template_even[j];
        PLRAM_embedding0[(2 * i + 1) * PADDED_SIZE_PLRAM_4 + j + ADDR_AXI_PLRAM_4] = PLRAM_template_odd[j];
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_PLRAM_5  / 2; i++) {
        for (int j = 0; j < DATA_SIZE_PLRAM_5; j++) {
        PLRAM_embedding1[2 * i * PADDED_SIZE_PLRAM_5 + j + ADDR_AXI_PLRAM_5] = PLRAM_template_even[j];
        PLRAM_embedding1[(2 * i + 1) * PADDED_SIZE_PLRAM_5 + j + ADDR_AXI_PLRAM_5] = PLRAM_template_odd[j];
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_PLRAM_6  / 2; i++) {
        for (int j = 0; j < DATA_SIZE_PLRAM_6; j++) {
        PLRAM_embedding2[2 * i * PADDED_SIZE_PLRAM_6 + j + ADDR_AXI_PLRAM_6] = PLRAM_template_even[j];
        PLRAM_embedding2[(2 * i + 1) * PADDED_SIZE_PLRAM_6 + j + ADDR_AXI_PLRAM_6] = PLRAM_template_odd[j];
        }
    }
    for (int i = 0 ; i < TABLE_SIZE_PLRAM_7  / 2; i++) {
        for (int j = 0; j < DATA_SIZE_PLRAM_7; j++) {
        PLRAM_embedding3[2 * i * PADDED_SIZE_PLRAM_7 + j + ADDR_AXI_PLRAM_7] = PLRAM_template_even[j];
        PLRAM_embedding3[(2 * i + 1) * PADDED_SIZE_PLRAM_7 + j + ADDR_AXI_PLRAM_7] = PLRAM_template_odd[j];
        }
    }

//////////////////////////////   TEMPLATE END  //////////////////////////////
    // software result
    int idx_random[] = {3, 99, 38, 72, 29, 57, 1, 72, 36, 76, 35, 50, 37, 57, 
        13, 66, 26, 70, 41, 93, 48, 82, 44, 78, 25, 52, 3, 92, 36, 56, 46, 88};

    // only compute one batch to verify the result
    for (int j = 0; j < BATCH_SIZE; j++) {
            access_idx[j] = idx_random[j];
    }

    // Layer 1
    D_TYPE row_template_layer1_even[INPUT_SIZE] = 
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
        0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0};

    D_TYPE row_template_layer1_odd[INPUT_SIZE] = 
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
        0,  1,  0,  0,  0,  0,  0,  0,  1,  0,  1,  0};

    for (int r = 0; r < HIDDEN_SIZE1 / 2; r++) {
        for (int d = 0; d < INPUT_SIZE; d++) {
            weights1_transpose[2 * r * INPUT_SIZE + d] = row_template_layer1_even[d];
            weights1_transpose[(2 * r + 1) * INPUT_SIZE + d] = row_template_layer1_odd[d];
        }
    }
    for (int r = 0; r < HIDDEN_SIZE1; r++) {
        bias1[r] = 1;
    }
// Layer 2
    D_TYPE row_template_layer2_even[HIDDEN_SIZE1] = 
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

    D_TYPE row_template_layer2_odd[HIDDEN_SIZE1] = 
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

    for (int r = 0; r < HIDDEN_SIZE2 / 2; r++) {
        for (int d = 0; d < HIDDEN_SIZE1; d++) {
            weights2_transpose[2 * r * HIDDEN_SIZE1 + d] = row_template_layer2_even[d];
            weights2_transpose[(2 * r + 1) * HIDDEN_SIZE1 + d] = row_template_layer2_odd[d];
        }
    }
    for (int r = 0; r < HIDDEN_SIZE2; r++) {
        bias2[r] = 1;
    }

// Layer 3
    D_TYPE row_template_layer3_even[HIDDEN_SIZE2] = 
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

    D_TYPE row_template_layer3_odd[HIDDEN_SIZE2] = 
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

    for (int r = 0; r < HIDDEN_SIZE3 / 2; r++) {
        for (int d = 0; d < HIDDEN_SIZE2; d++) {
            weights3_transpose[2 * r * HIDDEN_SIZE2 + d] = row_template_layer3_even[d];
            weights3_transpose[(2 * r + 1) * HIDDEN_SIZE2 + d] = row_template_layer3_odd[d];
        }
    }
    for (int r = 0; r < HIDDEN_SIZE3; r++) {
        bias3[r] = 1;
    }

    
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
    for (int r = 0; r < OUTPUT_SIZE; r++) {
        for (int d = 0; d < HIDDEN_SIZE3; d++) {
            weights_out_transpose[r * HIDDEN_SIZE3 + d] = row_template_layer_out[d];
        }
    }
    for (int r = 0; r < OUTPUT_SIZE; r++) {
        bias_out[r] = 1;
    }

    // Concatenate tables into input feature 
    for (int item = 0; item < BATCH_SIZE; item++) {
        int idx = access_idx[item];
        int start_idx = item * INPUT_SIZE;

        // TODO: for 128 table version, write order is HBM bank
        // instead of table id, please be consistent with HW version
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_0; d++) {
            feature[start_idx + d] = HBM_embedding0[idx * AXI_PADDED_SIZE_HBM_0 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_0;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_1; d++) {
            feature[start_idx + d] = HBM_embedding1[idx * AXI_PADDED_SIZE_HBM_1 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_1;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_2; d++) {
            feature[start_idx + d] = HBM_embedding2[idx * AXI_PADDED_SIZE_HBM_2 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_2;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_3; d++) {
            feature[start_idx + d] = HBM_embedding3[idx * AXI_PADDED_SIZE_HBM_3 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_3;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_4; d++) {
            feature[start_idx + d] = HBM_embedding4[idx * AXI_PADDED_SIZE_HBM_4 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_4;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_5; d++) {
            feature[start_idx + d] = HBM_embedding5[idx * AXI_PADDED_SIZE_HBM_5 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_5;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_6; d++) {
            feature[start_idx + d] = HBM_embedding6[idx * AXI_PADDED_SIZE_HBM_6 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_6;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_7; d++) {
            feature[start_idx + d] = HBM_embedding7[idx * AXI_PADDED_SIZE_HBM_7 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_7;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_8; d++) {
            feature[start_idx + d] = HBM_embedding8[idx * AXI_PADDED_SIZE_HBM_8 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_8;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_9; d++) {
            feature[start_idx + d] = HBM_embedding9[idx * AXI_PADDED_SIZE_HBM_9 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_9;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_10; d++) {
            feature[start_idx + d] = HBM_embedding10[idx * AXI_PADDED_SIZE_HBM_10 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_10;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_11; d++) {
            feature[start_idx + d] = HBM_embedding11[idx * AXI_PADDED_SIZE_HBM_11 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_11;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_12; d++) {
            feature[start_idx + d] = HBM_embedding12[idx * AXI_PADDED_SIZE_HBM_12 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_12;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_13; d++) {
            feature[start_idx + d] = HBM_embedding13[idx * AXI_PADDED_SIZE_HBM_13 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_13;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_14; d++) {
            feature[start_idx + d] = HBM_embedding14[idx * AXI_PADDED_SIZE_HBM_14 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_14;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_15; d++) {
            feature[start_idx + d] = HBM_embedding15[idx * AXI_PADDED_SIZE_HBM_15 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_15;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_16; d++) {
            feature[start_idx + d] = HBM_embedding16[idx * AXI_PADDED_SIZE_HBM_16 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_16;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_17; d++) {
            feature[start_idx + d] = HBM_embedding17[idx * AXI_PADDED_SIZE_HBM_17 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_17;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_18; d++) {
            feature[start_idx + d] = HBM_embedding18[idx * AXI_PADDED_SIZE_HBM_18 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_18;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_19; d++) {
            feature[start_idx + d] = HBM_embedding19[idx * AXI_PADDED_SIZE_HBM_19 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_19;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_20; d++) {
            feature[start_idx + d] = HBM_embedding20[idx * AXI_PADDED_SIZE_HBM_20 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_20;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_21; d++) {
            feature[start_idx + d] = HBM_embedding21[idx * AXI_PADDED_SIZE_HBM_21 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_21;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_22; d++) {
            feature[start_idx + d] = HBM_embedding22[idx * AXI_PADDED_SIZE_HBM_22 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_22;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_23; d++) {
            feature[start_idx + d] = HBM_embedding23[idx * AXI_PADDED_SIZE_HBM_23 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_23;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_24; d++) {
            feature[start_idx + d] = HBM_embedding24[idx * AXI_PADDED_SIZE_HBM_24 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_24;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_25; d++) {
            feature[start_idx + d] = HBM_embedding25[idx * AXI_PADDED_SIZE_HBM_25 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_25;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_26; d++) {
            feature[start_idx + d] = HBM_embedding26[idx * AXI_PADDED_SIZE_HBM_26 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_26;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_27; d++) {
            feature[start_idx + d] = HBM_embedding27[idx * AXI_PADDED_SIZE_HBM_27 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_27;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_28; d++) {
            feature[start_idx + d] = HBM_embedding28[idx * AXI_PADDED_SIZE_HBM_28 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_28;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_29; d++) {
            feature[start_idx + d] = HBM_embedding29[idx * AXI_PADDED_SIZE_HBM_29 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_29;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_30; d++) {
            feature[start_idx + d] = HBM_embedding30[idx * AXI_PADDED_SIZE_HBM_30 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_30;
        for (int d = 0; d < AXI_PADDED_SIZE_HBM_31; d++) {
            feature[start_idx + d] = HBM_embedding31[idx * AXI_PADDED_SIZE_HBM_31 + d];
        }
        start_idx += AXI_PADDED_SIZE_HBM_31;


        for (int d = 0; d < AXI_PADDED_SIZE_DDR_0; d++) {
            feature[start_idx + d] = DDR_embedding0[idx * AXI_PADDED_SIZE_DDR_0 + d];
        }
        start_idx += AXI_PADDED_SIZE_DDR_0;
        for (int d = 0; d < AXI_PADDED_SIZE_DDR_1; d++) {
            feature[start_idx + d] = DDR_embedding1[idx * AXI_PADDED_SIZE_DDR_1 + d];
        }
        start_idx += AXI_PADDED_SIZE_DDR_1;


        for (int d = 0; d < AXI_PADDED_SIZE_PLRAM_0; d++) {
            feature[start_idx + d] = PLRAM_embedding0[ADDR_AXI_PLRAM_0 + idx * AXI_PADDED_SIZE_PLRAM_0 + d];
        }
        start_idx += AXI_PADDED_SIZE_PLRAM_0;
        for (int d = 0; d < AXI_PADDED_SIZE_PLRAM_4; d++) {
            feature[start_idx + d] = PLRAM_embedding0[ADDR_AXI_PLRAM_4 + idx * AXI_PADDED_SIZE_PLRAM_4 + d];
        }
        start_idx += AXI_PADDED_SIZE_PLRAM_4;
        for (int d = 0; d < AXI_PADDED_SIZE_PLRAM_1; d++) {
            feature[start_idx + d] = PLRAM_embedding1[ADDR_AXI_PLRAM_1 + idx * AXI_PADDED_SIZE_PLRAM_1 + d];
        }
        start_idx += AXI_PADDED_SIZE_PLRAM_1;
        for (int d = 0; d < AXI_PADDED_SIZE_PLRAM_5; d++) {
            feature[start_idx + d] = PLRAM_embedding1[ADDR_AXI_PLRAM_5 + idx * AXI_PADDED_SIZE_PLRAM_5 + d];
        }
        start_idx += AXI_PADDED_SIZE_PLRAM_5;
        for (int d = 0; d < AXI_PADDED_SIZE_PLRAM_2; d++) {
            feature[start_idx + d] = PLRAM_embedding2[ADDR_AXI_PLRAM_2 + idx * AXI_PADDED_SIZE_PLRAM_2 + d];
        }
        start_idx += AXI_PADDED_SIZE_PLRAM_2;
        for (int d = 0; d < AXI_PADDED_SIZE_PLRAM_6; d++) {
            feature[start_idx + d] = PLRAM_embedding2[ADDR_AXI_PLRAM_6 + idx * AXI_PADDED_SIZE_PLRAM_6 + d];
        }
        start_idx += AXI_PADDED_SIZE_PLRAM_6;
        for (int d = 0; d < AXI_PADDED_SIZE_PLRAM_3; d++) {
            feature[start_idx + d] = PLRAM_embedding3[ADDR_AXI_PLRAM_3 + idx * AXI_PADDED_SIZE_PLRAM_3 + d];
        }
        start_idx += AXI_PADDED_SIZE_PLRAM_3;
        for (int d = 0; d < AXI_PADDED_SIZE_PLRAM_7; d++) {
            feature[start_idx + d] = PLRAM_embedding3[ADDR_AXI_PLRAM_7 + idx * AXI_PADDED_SIZE_PLRAM_7 + d];
        }
        start_idx += AXI_PADDED_SIZE_PLRAM_7;

        if (start_idx % INPUT_SIZE != 0) {
            std::cout << "feature concatenation error! idx not match! start idx = " << start_idx <<"Input size: " << INPUT_SIZE << std::endl;
        }
    }

    // sw results
    // only compute 1 batch, since every batch has the same result
    for (int item = 0; item < BATCH_SIZE; item++) {

        int feature_start_idx = item * INPUT_SIZE;
        int result1_start_idx = item * HIDDEN_SIZE1;  
        int result2_start_idx = item * HIDDEN_SIZE2; 
        int result3_start_idx = item * HIDDEN_SIZE3; 
        int result_out_start_idx = item * OUTPUT_SIZE;       

        // Layer 1
        for (int row = 0; row < HIDDEN_SIZE1; row++) {
            D_TYPE result = 0;
            for (int i = 0; i < INPUT_SIZE; i++) {
                // feature[i] * weights[row][i]
                // weights_transpose[HIDDEN_SIZE][INPUT_SIZE]
                result += feature[feature_start_idx + i] * weights1_transpose[row * INPUT_SIZE + i];
            }
            results1[result1_start_idx + row] = result + bias1[row];
        }
        // Layer 2
        for (int row = 0; row < HIDDEN_SIZE2; row++) {
            D_TYPE result = 0;
            for (int i = 0; i < HIDDEN_SIZE1; i++) {
                // feature[i] * weights[row][i]
                // weights_transpose[HIDDEN_SIZE][INPUT_SIZE]
                result += results1[result1_start_idx + i] * weights2_transpose[row * HIDDEN_SIZE1 + i];
            }
            results2[result2_start_idx + row] = result + bias2[row];
        }      
        // Layer 3
        for (int row = 0; row < HIDDEN_SIZE3; row++) {
            D_TYPE result = 0;
            for (int i = 0; i < HIDDEN_SIZE2; i++) {
                // feature[i] * weights[row][i]
                // weights_transpose[HIDDEN_SIZE][INPUT_SIZE]
                result += results2[result2_start_idx + i] * weights3_transpose[row * HIDDEN_SIZE2 + i];
            }
            results3[result3_start_idx + row] = result + bias3[row];
        }             
        // Layer out
        for (int row = 0; row < OUTPUT_SIZE; row++) {
            D_TYPE result = 0;
            for (int i = 0; i < HIDDEN_SIZE3; i++) {
                // feature[i] * weights[row][i]
                // weights_transpose[HIDDEN_SIZE][INPUT_SIZE]
                result += results3[result3_start_idx + i] * weights_out_transpose[row * HIDDEN_SIZE3 + i];
            }
            source_sw_results[result_out_start_idx + row] = result + bias_out[row];
        }          
    }

    std::cout << "Finished software results computation..." << std::endl;
    
// OPENCL HOST CODE AREA START
	
// ------------------------------------------------------------------------------------
// Step 1: Get All PLATFORMS, then search for Target_Platform_Vendor (CL_PLATFORM_VENDOR)
//	   Search for Platform: Xilinx 
// Check if the current platform matches Target_Platform_Vendor
// ------------------------------------------------------------------------------------	
    std::vector<cl::Device> devices = get_devices("Xilinx");
    devices.resize(1);
    cl::Device device = devices[0];
    std::cout << "Finished getting device..." << std::endl;
// ------------------------------------------------------------------------------------
// Step 1: Create Context
// ------------------------------------------------------------------------------------
    OCL_CHECK(err, cl::Context context(device, NULL, NULL, NULL, &err));
	std::cout << "Finished creating context..." << std::endl;
// ------------------------------------------------------------------------------------
// Step 1: Create Command Queue
// ------------------------------------------------------------------------------------
    OCL_CHECK(err, cl::CommandQueue q(context, device, CL_QUEUE_PROFILING_ENABLE, &err));
	std::cout << "Finished creating command queue..." << std::endl;
// ------------------------------------------------------------------
// Step 1: Load Binary File from disk
// ------------------------------------------------------------------		
    char* fileBuf = read_binary_file(binaryFile, fileBufSize);
    cl::Program::Binaries bins{{fileBuf, fileBufSize}};
    	std::cout << "Finished loading binary..." << std::endl;
	
// -------------------------------------------------------------
// Step 1: Create the program object from the binary and program the FPGA device with it
// -------------------------------------------------------------	
    OCL_CHECK(err, cl::Program program(context, devices, bins, NULL, &err));
	std::cout << "Finished creating program..." << std::endl;
// -------------------------------------------------------------
// Step 1: Create Kernels
// -------------------------------------------------------------
    OCL_CHECK(err, cl::Kernel krnl_vector_add(program,"vadd", &err));
    std::cout << "Finished creating kernel..." << std::endl;

// ================================================================
// Step 2: Setup Buffers and run Kernels
// ================================================================
//   o) Allocate Memory to store the results 
//   o) Create Buffers in Global Memory to store data
// ================================================================

// ------------------------------------------------------------------
// Step 2: Create Buffers in Global Memory to store data
//             o) buffer_in1 - stores source_in1
//             o) buffer_in2 - stores source_in2
//             o) buffer_ouput - stores Results
// ------------------------------------------------------------------	

// .......................................................
// Allocate Global Memory for source_in1
// .......................................................	
//////////////////////////////   TEMPLATE START  //////////////////////////////
    std::cout << "Start to allocate device memory..." << std::endl;
    cl_mem_ext_ptr_t HBM_embedding0Ext, HBM_embedding1Ext, HBM_embedding2Ext, HBM_embedding3Ext, 
        HBM_embedding4Ext, HBM_embedding5Ext, HBM_embedding6Ext, HBM_embedding7Ext, 
        HBM_embedding8Ext, HBM_embedding9Ext, HBM_embedding10Ext, HBM_embedding11Ext, 
        HBM_embedding12Ext, HBM_embedding13Ext, HBM_embedding14Ext, HBM_embedding15Ext, 
        HBM_embedding16Ext, HBM_embedding17Ext, HBM_embedding18Ext, HBM_embedding19Ext, 
        HBM_embedding20Ext, HBM_embedding21Ext, HBM_embedding22Ext, HBM_embedding23Ext, 
        HBM_embedding24Ext, HBM_embedding25Ext, HBM_embedding26Ext, HBM_embedding27Ext, 
        HBM_embedding28Ext, HBM_embedding29Ext, HBM_embedding30Ext, HBM_embedding31Ext, 
        DDR_embedding0Ext, DDR_embedding1Ext,
        // PLRAM_embedding0Ext, PLRAM_embedding1Ext, PLRAM_embedding2Ext, PLRAM_embedding3Ext, 
        sourcce_hw_resultsExt;
//////////////////////////////   TEMPLATE END  //////////////////////////////

//////////////////////////////   TEMPLATE START  //////////////////////////////
    HBM_embedding0Ext.obj = HBM_embedding0.data();
    HBM_embedding0Ext.param = 0;
    HBM_embedding0Ext.flags = bank[0];
    HBM_embedding1Ext.obj = HBM_embedding1.data();
    HBM_embedding1Ext.param = 0;
    HBM_embedding1Ext.flags = bank[1];
    HBM_embedding2Ext.obj = HBM_embedding2.data();
    HBM_embedding2Ext.param = 0;
    HBM_embedding2Ext.flags = bank[2];
    HBM_embedding3Ext.obj = HBM_embedding3.data();
    HBM_embedding3Ext.param = 0;
    HBM_embedding3Ext.flags = bank[3];
    HBM_embedding4Ext.obj = HBM_embedding4.data();
    HBM_embedding4Ext.param = 0;
    HBM_embedding4Ext.flags = bank[4];
    HBM_embedding5Ext.obj = HBM_embedding5.data();
    HBM_embedding5Ext.param = 0;
    HBM_embedding5Ext.flags = bank[5];
    HBM_embedding6Ext.obj = HBM_embedding6.data();
    HBM_embedding6Ext.param = 0;
    HBM_embedding6Ext.flags = bank[6];
    HBM_embedding7Ext.obj = HBM_embedding7.data();
    HBM_embedding7Ext.param = 0;
    HBM_embedding7Ext.flags = bank[7];
    HBM_embedding8Ext.obj = HBM_embedding8.data();
    HBM_embedding8Ext.param = 0;
    HBM_embedding8Ext.flags = bank[8];
    HBM_embedding9Ext.obj = HBM_embedding9.data();
    HBM_embedding9Ext.param = 0;
    HBM_embedding9Ext.flags = bank[9];
    HBM_embedding10Ext.obj = HBM_embedding10.data();
    HBM_embedding10Ext.param = 0;
    HBM_embedding10Ext.flags = bank[10];
    HBM_embedding11Ext.obj = HBM_embedding11.data();
    HBM_embedding11Ext.param = 0;
    HBM_embedding11Ext.flags = bank[11];
    HBM_embedding12Ext.obj = HBM_embedding12.data();
    HBM_embedding12Ext.param = 0;
    HBM_embedding12Ext.flags = bank[12];
    HBM_embedding13Ext.obj = HBM_embedding13.data();
    HBM_embedding13Ext.param = 0;
    HBM_embedding13Ext.flags = bank[13];
    HBM_embedding14Ext.obj = HBM_embedding14.data();
    HBM_embedding14Ext.param = 0;
    HBM_embedding14Ext.flags = bank[14];
    HBM_embedding15Ext.obj = HBM_embedding15.data();
    HBM_embedding15Ext.param = 0;
    HBM_embedding15Ext.flags = bank[15];
    HBM_embedding16Ext.obj = HBM_embedding16.data();
    HBM_embedding16Ext.param = 0;
    HBM_embedding16Ext.flags = bank[16];
    HBM_embedding17Ext.obj = HBM_embedding17.data();
    HBM_embedding17Ext.param = 0;
    HBM_embedding17Ext.flags = bank[17];
    HBM_embedding18Ext.obj = HBM_embedding18.data();
    HBM_embedding18Ext.param = 0;
    HBM_embedding18Ext.flags = bank[18];
    HBM_embedding19Ext.obj = HBM_embedding19.data();
    HBM_embedding19Ext.param = 0;
    HBM_embedding19Ext.flags = bank[19];
    HBM_embedding20Ext.obj = HBM_embedding20.data();
    HBM_embedding20Ext.param = 0;
    HBM_embedding20Ext.flags = bank[20];
    HBM_embedding21Ext.obj = HBM_embedding21.data();
    HBM_embedding21Ext.param = 0;
    HBM_embedding21Ext.flags = bank[21];
    HBM_embedding22Ext.obj = HBM_embedding22.data();
    HBM_embedding22Ext.param = 0;
    HBM_embedding22Ext.flags = bank[22];
    HBM_embedding23Ext.obj = HBM_embedding23.data();
    HBM_embedding23Ext.param = 0;
    HBM_embedding23Ext.flags = bank[23];
    HBM_embedding24Ext.obj = HBM_embedding24.data();
    HBM_embedding24Ext.param = 0;
    HBM_embedding24Ext.flags = bank[24];
    HBM_embedding25Ext.obj = HBM_embedding25.data();
    HBM_embedding25Ext.param = 0;
    HBM_embedding25Ext.flags = bank[25];
    HBM_embedding26Ext.obj = HBM_embedding26.data();
    HBM_embedding26Ext.param = 0;
    HBM_embedding26Ext.flags = bank[26];
    HBM_embedding27Ext.obj = HBM_embedding27.data();
    HBM_embedding27Ext.param = 0;
    HBM_embedding27Ext.flags = bank[27];
    HBM_embedding28Ext.obj = HBM_embedding28.data();
    HBM_embedding28Ext.param = 0;
    HBM_embedding28Ext.flags = bank[28];
    HBM_embedding29Ext.obj = HBM_embedding29.data();
    HBM_embedding29Ext.param = 0;
    HBM_embedding29Ext.flags = bank[29];
    HBM_embedding30Ext.obj = HBM_embedding30.data();
    HBM_embedding30Ext.param = 0;
    HBM_embedding30Ext.flags = bank[30];
    HBM_embedding31Ext.obj = HBM_embedding31.data();
    HBM_embedding31Ext.param = 0;
    HBM_embedding31Ext.flags = bank[31];

    DDR_embedding0Ext.obj = DDR_embedding0.data();
    DDR_embedding0Ext.param = 0;
    DDR_embedding0Ext.flags = bank[0 + 32];
    DDR_embedding1Ext.obj = DDR_embedding1.data();
    DDR_embedding1Ext.param = 0;
    DDR_embedding1Ext.flags = bank[1 + 32];

    // PLRAM
    sourcce_hw_resultsExt.obj = source_hw_results.data();
    sourcce_hw_resultsExt.param = 0;
    sourcce_hw_resultsExt.flags = bank[34];

    // CL_MEM_EXT_PTR_XILINX
//////////////////////////////   TEMPLATE START  //////////////////////////////
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding0(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding0_size *sizeof(D_TYPE), &HBM_embedding0Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding1(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding1_size *sizeof(D_TYPE), &HBM_embedding1Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding2(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding2_size *sizeof(D_TYPE), &HBM_embedding2Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding3(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding3_size *sizeof(D_TYPE), &HBM_embedding3Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding4(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding4_size *sizeof(D_TYPE), &HBM_embedding4Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding5(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding5_size *sizeof(D_TYPE), &HBM_embedding5Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding6(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding6_size *sizeof(D_TYPE), &HBM_embedding6Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding7(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding7_size *sizeof(D_TYPE), &HBM_embedding7Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding8(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding8_size *sizeof(D_TYPE), &HBM_embedding8Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding9(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding9_size *sizeof(D_TYPE), &HBM_embedding9Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding10(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding10_size *sizeof(D_TYPE), &HBM_embedding10Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding11(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding11_size *sizeof(D_TYPE), &HBM_embedding11Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding12(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding12_size *sizeof(D_TYPE), &HBM_embedding12Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding13(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding13_size *sizeof(D_TYPE), &HBM_embedding13Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding14(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding14_size *sizeof(D_TYPE), &HBM_embedding14Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding15(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding15_size *sizeof(D_TYPE), &HBM_embedding15Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding16(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding16_size *sizeof(D_TYPE), &HBM_embedding16Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding17(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding17_size *sizeof(D_TYPE), &HBM_embedding17Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding18(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding18_size *sizeof(D_TYPE), &HBM_embedding18Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding19(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding19_size *sizeof(D_TYPE), &HBM_embedding19Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding20(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding20_size *sizeof(D_TYPE), &HBM_embedding20Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding21(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding21_size *sizeof(D_TYPE), &HBM_embedding21Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding22(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding22_size *sizeof(D_TYPE), &HBM_embedding22Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding23(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding23_size *sizeof(D_TYPE), &HBM_embedding23Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding24(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding24_size *sizeof(D_TYPE), &HBM_embedding24Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding25(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding25_size *sizeof(D_TYPE), &HBM_embedding25Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding26(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding26_size *sizeof(D_TYPE), &HBM_embedding26Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding27(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding27_size *sizeof(D_TYPE), &HBM_embedding27Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding28(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding28_size *sizeof(D_TYPE), &HBM_embedding28Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding29(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding29_size *sizeof(D_TYPE), &HBM_embedding29Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding30(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding30_size *sizeof(D_TYPE), &HBM_embedding30Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_HBM_embedding31(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            HBM_embedding31_size *sizeof(D_TYPE), &HBM_embedding31Ext, &err));

    OCL_CHECK(err, cl::Buffer buffer_DDR_embedding0(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            DDR_embedding0_size *sizeof(D_TYPE), &DDR_embedding0Ext, &err));
    OCL_CHECK(err, cl::Buffer buffer_DDR_embedding1(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY | CL_MEM_EXT_PTR_XILINX, 
            DDR_embedding1_size *sizeof(D_TYPE), &DDR_embedding1Ext, &err));

// .......................................................
// Allocate Global Memory for sourcce_hw_results
// .......................................................
    OCL_CHECK(err, cl::Buffer buffer_output(
        context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY | CL_MEM_EXT_PTR_XILINX, 
        size_results_out *sizeof(D_TYPE), &sourcce_hw_resultsExt, &err));

// ============================================================================
// Step 2: Set Kernel Arguments and Run the Application
//         o) Set Kernel Arguments
//         o) Copy Input Data from Host to Global Memory on the device
//         o) Submit Kernels for Execution
//         o) Copy Results from Global Memory, device to Host
// ============================================================================	
    
//////////////////////////////   TEMPLATE START  //////////////////////////////
    OCL_CHECK(err, err = krnl_vector_add.setArg(0, buffer_HBM_embedding0));
    OCL_CHECK(err, err = krnl_vector_add.setArg(1, buffer_HBM_embedding1));
    OCL_CHECK(err, err = krnl_vector_add.setArg(2, buffer_HBM_embedding2));
    OCL_CHECK(err, err = krnl_vector_add.setArg(3, buffer_HBM_embedding3));
    OCL_CHECK(err, err = krnl_vector_add.setArg(4, buffer_HBM_embedding4));
    OCL_CHECK(err, err = krnl_vector_add.setArg(5, buffer_HBM_embedding5));
    OCL_CHECK(err, err = krnl_vector_add.setArg(6, buffer_HBM_embedding6));
    OCL_CHECK(err, err = krnl_vector_add.setArg(7, buffer_HBM_embedding7));
    OCL_CHECK(err, err = krnl_vector_add.setArg(8, buffer_HBM_embedding8));
    OCL_CHECK(err, err = krnl_vector_add.setArg(9, buffer_HBM_embedding9));
    OCL_CHECK(err, err = krnl_vector_add.setArg(10, buffer_HBM_embedding10));
    OCL_CHECK(err, err = krnl_vector_add.setArg(11, buffer_HBM_embedding11));
    OCL_CHECK(err, err = krnl_vector_add.setArg(12, buffer_HBM_embedding12));
    OCL_CHECK(err, err = krnl_vector_add.setArg(13, buffer_HBM_embedding13));
    OCL_CHECK(err, err = krnl_vector_add.setArg(14, buffer_HBM_embedding14));
    OCL_CHECK(err, err = krnl_vector_add.setArg(15, buffer_HBM_embedding15));
    OCL_CHECK(err, err = krnl_vector_add.setArg(16, buffer_HBM_embedding16));
    OCL_CHECK(err, err = krnl_vector_add.setArg(17, buffer_HBM_embedding17));
    OCL_CHECK(err, err = krnl_vector_add.setArg(18, buffer_HBM_embedding18));
    OCL_CHECK(err, err = krnl_vector_add.setArg(19, buffer_HBM_embedding19));
    OCL_CHECK(err, err = krnl_vector_add.setArg(20, buffer_HBM_embedding20));
    OCL_CHECK(err, err = krnl_vector_add.setArg(21, buffer_HBM_embedding21));
    OCL_CHECK(err, err = krnl_vector_add.setArg(22, buffer_HBM_embedding22));
    OCL_CHECK(err, err = krnl_vector_add.setArg(23, buffer_HBM_embedding23));
    OCL_CHECK(err, err = krnl_vector_add.setArg(24, buffer_HBM_embedding24));
    OCL_CHECK(err, err = krnl_vector_add.setArg(25, buffer_HBM_embedding25));
    OCL_CHECK(err, err = krnl_vector_add.setArg(26, buffer_HBM_embedding26));
    OCL_CHECK(err, err = krnl_vector_add.setArg(27, buffer_HBM_embedding27));
    OCL_CHECK(err, err = krnl_vector_add.setArg(28, buffer_HBM_embedding28));
    OCL_CHECK(err, err = krnl_vector_add.setArg(29, buffer_HBM_embedding29));
    OCL_CHECK(err, err = krnl_vector_add.setArg(30, buffer_HBM_embedding30));
    OCL_CHECK(err, err = krnl_vector_add.setArg(31, buffer_HBM_embedding31));

    OCL_CHECK(err, err = krnl_vector_add.setArg(0 + 32, buffer_DDR_embedding0));
    OCL_CHECK(err, err = krnl_vector_add.setArg(1 + 32, buffer_DDR_embedding1));

    OCL_CHECK(err, err = krnl_vector_add.setArg(34, buffer_output));
//////////////////////////////   TEMPLATE END  //////////////////////////////
// ------------------------------------------------------
// Step 2: Copy Input data from Host to Global Memory on the device
// ------------------------------------------------------
//////////////////////////////   TEMPLATE START  //////////////////////////////
    std::cout << "Starting copy from Host to device..." << std::endl;
    OCL_CHECK(
        err, err = q.enqueueMigrateMemObjects({
        buffer_HBM_embedding0, buffer_HBM_embedding1, buffer_HBM_embedding2, buffer_HBM_embedding3, 
        buffer_HBM_embedding4, buffer_HBM_embedding5, buffer_HBM_embedding6, buffer_HBM_embedding7, 
        buffer_HBM_embedding8, buffer_HBM_embedding9, buffer_HBM_embedding10, buffer_HBM_embedding11, 
        buffer_HBM_embedding12, buffer_HBM_embedding13, buffer_HBM_embedding14, buffer_HBM_embedding15, 
        buffer_HBM_embedding16, buffer_HBM_embedding17, buffer_HBM_embedding18, buffer_HBM_embedding19, 
        buffer_HBM_embedding20, buffer_HBM_embedding21, buffer_HBM_embedding22, buffer_HBM_embedding23, 
        buffer_HBM_embedding24, buffer_HBM_embedding25, buffer_HBM_embedding26, buffer_HBM_embedding27, 
        buffer_HBM_embedding28, buffer_HBM_embedding29, buffer_HBM_embedding30, buffer_HBM_embedding31, 
        buffer_DDR_embedding0, buffer_DDR_embedding1}, 0/* 0 means from host*/));	
    std::cout << "Host to device finished..." << std::endl;
//////////////////////////////   TEMPLATE END  //////////////////////////////
// ----------------------------------------
// Step 2: Submit Kernels for Execution
// ----------------------------------------
    OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add));
// --------------------------------------------------
// Step 2: Copy Results from Device Global Memory to Host
// --------------------------------------------------
    OCL_CHECK(err, err = q.enqueueMigrateMemObjects({buffer_output},CL_MIGRATE_MEM_OBJECT_HOST));

    q.finish();
// OPENCL HOST CODE AREA END

    // Compare the results of the Device to the simulation
    // only check the last batch (since other are not transfered back)
    std::cout << "Comparing Results..." << std::endl;
    bool match = true;
    for (int i = 0 ; i < OUTPUT_SIZE * BATCH_SIZE; i++) {
        if (source_hw_results[i] != source_sw_results[i]) {
            std::cout << "Error: Result mismatch" << std::endl;
            std::cout << "i = " << i << " CPU result = " << source_sw_results[i]
                << " Device result = " << source_hw_results[i] << std::endl;
            match = false;
        }
        else {
            std::cout << "i = " << i << " result = " << source_sw_results[i] << std::endl;
        }
    }

// ============================================================================
// Step 3: Release Allocated Resources
// ============================================================================
    delete[] fileBuf;

    std::cout << "TEST " << (match ? "PASSED" : "FAILED") << std::endl; 
    return (match ? EXIT_SUCCESS : EXIT_FAILURE);
}

