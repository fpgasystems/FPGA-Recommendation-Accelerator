# FPGA-Recommendation-Accelerator

This is the repository for our paper at MLSys 2021 --- [MicroRec: efficient recommendation inference by hardware and data structure solutions](https://proceedings.mlsys.org/paper/2021/file/ec8956637a99787bd197eacd77acce5e-Paper.pdf)



We experiment a set of recommendation models from Alibaba and Facebook. Each folder presents a specific model setting (feature number, DNN layers, precision, etc.).



We use Vitis 2019.2 and the FPGA model we target is restricted to Xilinx Alveo U280. To build the project, be sure to setup the environment for the build, and use the following command in each folder.

```
# folder differs depending on installation settings
source /opt/Xilinx/Vitis/2019.2/settings64.sh
source /opt/xilinx/xrt/setup.sh

make check TARGET=hw DEVICE=xilinx_u280_xdma_201920_3 VER=host_cpp
```



## Reference

This folder is for our MicroRec paper:

Jiang, W., He, Z., Zhang, S., Preußer, T. B., Zeng, K., Feng, L., ... & Alonso, G. (2021). MicroRec: efficient recommendation inference by hardware and data structure solutions. *Proceedings of Machine Learning and Systems*, *3*.



We further extend the paper using a hybrid GPU-FPGA cluster:

Jiang, W., He, Z., Zhang, S., Zeng, K., Feng, L., Zhang, J., ... & Alonso, G. (2021, August). FleetRec: Large-Scale Recommendation Inference on Hybrid GPU-FPGA Clusters. In *27th SIGKDD Conference on Knowledge Discovery and Data Mining (KDD 2021)*.