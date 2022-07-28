# 호텔 서비스 로봇

## 주제 개요

이 프로젝트는 코로나로 인해 음식점과 같이 사람들간의 접촉이 필요한 시설에 대한 불안감이 커지면서 사람들간의 직접적인 교류가 힘들어 지고    배달 사업의 규모가 커지고 있는데 이를 해결할 방법으로 언택트 사업이 각광 받고 있는 이 시점에 음식점과 사람과의 접촉을 획기적으로 줄일 수 있는 호텔 서비스 로봇을 프로젝트 구상하였습니다.

* Jetson Board 기반의 이동 로봇 제작
* Lidar_Senser를 활용한 Slam 맵 제작
* Ros 기반의 자율 주행 알고리즘 개발
* Dynamixel을 통한 동작 제어
* Lidar, Imu 센서를 통한 이동 로봇 자세 추정

## 요구 사항

* Jetson_Xavier
* Lidar_Senser
* Dynmixel
* Imu
* Ros
* Slam


## 주제 수행 내용

자율주행차량은 로보티즈의 와플 모양 판과 프레임을 사용하여 뼈대를 구성하고 바퀴 2개로 전륜구동할 계획입니다. 
작품의 기능은 다음과 같습니다.

* 베이스 보드는 Jetson_Xavier Board 사용   
* Lidar_Senser를 통해 받아온 정보를 바탕으로 SLAM을 통해 맵 제작 
* ROS를 사용하여 멀티프로세스로 모터, 센서, 카메라 등을 한번에 처리
* 제작된 맵을 이용하여 최단거리 알고리즘으로 Navigation활용   
* 무게 센서를 이용하여 무게 측정하여 사용자가 물품을 가져갔을 시 자동 시건 후 복귀   

## 최종 목표

* 하드웨어
  * Dynamixel과Jetson_Xavier Board를 기반으로 Rp_Lidar_Senser를 이용해 자동으로 목표지점까지 이동하는 호텔 서비스 로봇을 제작. 
* 소프트웨어
  * 호텔 서비스 로봇은 Rp_Lidar_Senser와 ROS를 이용하여 사용자가 원하는 위치까지 장애물을 회피하고 최단거리로 물건이나 식품을 배달 할 수 있는 프로그램 제작



## 블록도

### Service robot Block Diagram  
![image](https://user-images.githubusercontent.com/94602114/175318217-ec607ce4-3d4f-4d13-819b-c79d845eed28.png)

### navigation node Block Diagram  
![image](https://user-images.githubusercontent.com/94602114/175333138-0412e1da-08a6-404e-8b5b-cf6c49e9353e.png)  

## [현재 구현 상황](https://github.com/Jangseokcheon/pathfinding/blob/master/README.md)
* SLAM
* 길찾기 알고리즘 (A*알고리즘)
* AMCL Node
* MoveBase Node
* Gazebo Simulation을 이용한 목표점 이동
* Turtlesim을 이용한 목표점 이동
 
## [수정 내역](https://github.com/Jangseokcheon/pathfinding/blob/footer/README.md)
 
 * 마지막 수정일 
   * 2022-06-22 / V-8
 
## 팀원
 
 * [고신엽](https://github.com/sinyeopgo/capstone-design)
 * [이승헌](https://github.com/SeungHeon3649/ros-controller)
 * [장석천](https://github.com/Jangseokcheon/pathfinding)
  
-
