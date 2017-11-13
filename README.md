## Crowd Counting Via Sacle-adaptive Convolutional Nerual Network
By ZHANG Lu and SHI Miaojing   
This implementation is written by ZHANG Lu and SHI Miaojing.

### Introduction 
This project is an implementation of the crowd counting method proposed in our arxiv paper - Crowd counting via scale-adaptive convolutional neural network (SaCNN). SaCNN extracts feature maps from multiple layers and adapts them to produce the final density map. A relative count loss is proposed to improve the network generalization on crowd scenes with few pedestrians; a new dataset SmartCity is collected for this scenario. 

### License
This code is released under the MIT License (Please refer to the LICENSE file for details). It can only be used for academic research purposes. Tecent has all the rights reserved.

### Citation
Please cite our paper in your publications if it helps your research:
```
@article{zhang17sacnn,
Author = {Lu Zhang* and Miaojing Shi*},
Title = {Crowd Counting Via Sacle-adaptive Convolutional Nerual Network},
Journal = {ArXiv},
Year = {2017}
}
```

### Dependencies and Installation 
We have tested the implementation on Linux with GPU Nvidia Tesla M40. CUDA7.5 and CuDNN v5 is tested. The other version should be working. Caffe installation is pre-required. 

### Training and Test
1. Clone the SaCNN repository 
```
$ git clone https://github.com/miao0913/SaCNN-CrowdCounting-Tencent_Youtu.git
```

2. Train SaCNN: 
```
$ sh train_sacnn.sh
```

3. Test SaCNN: 
```
$ sh test_sacnn.sh  
$ MATLAB crowdtest 
```
Pretrained model on ShanghaiTech PartA and PartB can be downloaded from BaiduYun or GoogleDrive. 


### SmartCity Dataset
We have collected a new dataset SmartCity in the paper. It consists of 50 images in total collected from ten city scenes including office entrance, sidewalk, atrium, shopping mall etc.. Some examples are shown in Fig. 4 in our arxiv paper. Unlike the existing crowd counting datasets with images of hundreds/thousands of pedestrians and nearly all the images being taken outdoors, SmartCity has few pedestrians in images and consists of both outdoor and indoor scenes: the average number of pedestrians is only 7.4 with minimum being 1 and maximum being 14. We use this set to test the generalization ability of the proposed framework on very sparse crowd scenes.

1. The dataset is available. This paper is done in Tencent Youtu Lab. Tecent has the copyright of the dataset. So please email Dr. Miaojing Shi (miao0913@gmail.com)/Chengjie Wang(jasoncjwang@tencent.com) with your name and affiliation to get the download link. It's better to use your official email address.
2. These data can only be used for academic research purposes.

### Q&A
Please send message to Dr. Miaojing Shi miao0913@gmail.com if you have any queestions.

