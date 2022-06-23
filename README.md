# 호텔 서비스 로봇

## 주제 개요

이 프로젝트는 코로나로 인해 음식점과 같이 사람들간의 접촉이 필요한 시설에 대한 불안감이 커지면서 사람들간의 직접적인 교류가 힘들어 지고    배달 사업의 규모가 커지고 있는데 이를 해결할 방법으로 언택트 사업이 각광 받고 있는 이 시점에 음식점과 사람과의 접촉을 획기적으로 줄일 수 있는 호텔 서비스 로봇을 프로젝트 구상하였습니다.

* Jetson Board 기반의 하드웨어를 사용하여 제작
* Rp laider 센서를 활용한 Slam 맵 제작
* Ros 기반의 이동 로봇 구현

## 요구 사항

* Jetson_Xavier
* Rp_Lidar_Senser
* Ros
* Slam

## 주제 수행 내용

자율주행차량은 로보티즈의 와플 모양 판과 프레임을 사용하여 뼈대를 구성하고 바퀴 2개로 전륜구동할 계획입니다. 
작품의 기능은 다음과 같습니다.

* 베이스 보드는 Jetson_Xavier Board 사용   
* Rp_Lidar_Senser를 통해 받아온 정보를 바탕으로 SLAM을 통해 맵 제작 
* ROS를 사용하여 멀티프로세스로 모터, 센서, 카메라 등을 한번에 처리
* 제작된 맵을 이용하여 최단거리 알고리즘으로 Navigation활용   
* 무게 센서를 이용하여 무게 측정하여 사용자가 물품을 가져갔을 시 자동 시건 후 복귀   

## 최종 목표

* 하드웨어
  * Dynamixel과Jetson_Xavier Board를 기반으로 Rp_Lidar_Senser를 이용해 자동으로 목표지점까지 이동하는 호텔 서비스 로봇을 제작. 
* 소프트웨어
  * 호텔 서비스 로봇은 Rp_Lidar_Senser와 ROS를 이용하여 사용자가 원하는 위치까지 장애물을 회피하고 최단거리로 물건이나 식품을 배달 할 수 있는 프로그램 제작



## 블록도

![모델5](https://user-images.githubusercontent.com/86651809/168182709-a7080309-9382-4864-9684-f8a59c6aea4e.JPG)

## SLAM

process1
## https://youtu.be/NXHmEm0RPJ4
![구동영상](https://user-images.githubusercontent.com/86651809/168182858-f9d4e4ed-2b60-4e79-9b6c-3dd1c67ca7b1.JPG)

## 길찾기 알고리즘 (A* 알고리즘)

C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\include\bits
에 stdc++.h 파일 넣으면 여러 
#include <iostream> 
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
using namespace std; 
와 같은 헤더파일들을 #include <bits/stdc++.h> 한줄로 선언이 가능하다 단점은 실행할때마다  #include <bits/stdc++.h>에 포함된 모든 헤더파일을 실행하기 때문에 낭비가 생김
  

 ![image](https://user-images.githubusercontent.com/86651809/166835749-57b852b7-eff5-48be-adc5-5f8aa59d3883.png)
 
 
 map2.txt는 맵 파일(텍스트) 0은 길 1은 벽 2는 출발지 3은 도착지
 
## 수정사항
 현재 버전 V-10
## 팀원
 
 * [고신엽](https://github.com/Jangseokcheon/EmbeddedSystem/tree/Node_Red)
 * [이승헌](https://github.com/Jangseokcheon/EmbeddedSystem/tree/Node_Red)
  
