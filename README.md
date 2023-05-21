# offroad_tree_obstacles
to detect palm trees hanging down along an offroad path

- use segmentaion to detect road path
- find image moemnts from road 
- determine roi from road center( use its x coordinates window as  base for ROI
- use object detection tecnhniques on ROI , using pretrained newtork for palm trees either yolo or faster-rcnn based


## input images and masks
Raw input Image             |  Segmentation Mask
:-------------------------:|:-------------------------:
![test](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/69656450-b352-426a-9ea6-f9fc388169e1) | ![res](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/5aad1215-40ed-4f8f-a837-746999c1e64a)
![test3](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/b8a17bee-44e0-4fdb-a21c-43c4ae354d2a) | ![res3](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/a39a1f45-aec1-4ee0-8be2-fb2d0801e8fd)
![test7](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/362dbfe6-fda1-4e1f-ac48-314d206c8855) | ![res7](https://github.com/tshiamor/offroad_tree_obstacles/assets/56265291/509a049c-b092-4827-aa9c-c4cfd12a03a0)
