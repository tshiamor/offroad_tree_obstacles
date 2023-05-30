# offroad_tree_obstacles
to detect palm trees hanging down along an offroad path

- use segmentaion to detect road path
- find image momets from road 
- determine roi from road center( use its x coordinates window as  base for ROI
- use object detection tecnhniques on ROI , using pretrained netwrk for palm trees either yolo or faster-rcnn based


## input images and masks
Raw input Image             |  Segmentation Mask
:-------------------------:|:-------------------------:
![test](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/69656450-b352-426a-9ea6-f9fc388169e1) | ![res](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/5aad1215-40ed-4f8f-a837-746999c1e64a)
![test3](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/b8a17bee-44e0-4fdb-a21c-43c4ae354d2a) | ![res3](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/a39a1f45-aec1-4ee0-8be2-fb2d0801e8fd)
![test7](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/362dbfe6-fda1-4e1f-ac48-314d206c8855) | ![res7](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/509a049c-b092-4827-aa9c-c4cfd12a03a0)


datasets for training purposes of palm tree leaf detector(in coco json format):

https://universe.roboflow.com/saud/palm-26uqe/dataset/1


## inspired by work done here:
https://github.com/kasiv008/OFFSEG

https://github.com/rayguan97/GANav-offroad

https://github.com/open-mmlab/mmsegmentation/tree/main

https://github.com/unmannedlab/RELLIS-3D/blob/main/README.md#annotated-data

http://rugd.vision/


![image](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/15d893bb-165e-48ee-b227-17cd027fb2c5)


## section 1: training the classifier to detect palm trees
training the classifier
trained models found here:
https://drive.google.com/file/d/1Q2t1n0ZFvX2cBCRQuiYjWPfbqNrmOH4U/view?usp=sharing
- trainied model *pt model is converted to onnx for usier use by any/other platforms in inference 
- steps:


## section 2: obtain a region of interest for searching (incomplete)
![image](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/da95d5df-3a73-4d42-b20c-3aa4011573a5)
![image](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/ca33b95c-1a69-4fe9-8d7b-9f90b5126f08)
![image](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/0c8d70c2-bc27-4ed7-a65c-aba8f56f7081)




## section 3: integration in ros for deployment
ros source codes : src/palmfield



