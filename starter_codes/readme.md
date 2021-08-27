

#### This repository provides you starter code to get you started.

* `plot_ecdf_m1.py` provides sample Python code to generate ECDF.

* `HW1_M2_SMA_AD_YOUR_WSU_ID` contains code for Milestone #2. Organize your code and directory structure based on your WSU ID.
For example, if your WSU ID is `K868R756`, the directory name will be `HW1_M2_SMA_AD_K868R756`. Copy this directory into your development machine (`<optee_source>/optee_examples/`)

* Generate UUID for your trusted application from https://www.uuidgenerator.net

* Follow the instructions below to update the template code.

### Changes required in the template

* Update Line 13 (`LOCAL_MODULE`) in `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/Android.mk` with your WSU ID
* Update Line 1 (`project`) in `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/CMakeLists.txt`
* Update Line 2 (`local_module`) in `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/ta/Android.mk` with your generated UUID
* Update Line 5 (`BINARY`) in `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/ta/Makefile` with new UUID
* Update Line 2 (`srcs-y`) in `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/ta/sub.mk` with the source TA name contains your WSU ID
* Modify Line 15 (`BINARY`) in `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/host/Makefile` with your WSU ID
* Modify TA header file name in `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/ta/include/HW1_M2_SMA_AD_YOUR_WSU_ID_ta.h` with your WSU ID
* Rename `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/ta/HW1_M2_SMA_AD_YOUR_WSU_ID.c` with your WSU ID
* Check the `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/ta/include/HW1_M2_SMA_AD_YOUR_WSU_ID_ta.h` file and update variable names based on your WSU ID
* Check the `optee_examples/HW1_M2_SMA_AD_YOUR_WSU_ID/ta/user_ta_header_defines.h` file and update variable names based on your WSU ID
* Use proper TA filenames and variable names in the source files in both host and TA directory
