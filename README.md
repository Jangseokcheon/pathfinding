# 호텔 서비스 로봇

![Anurag's GitHub stats](https://github-readme-stats.vercel.app/api?username=Jangseokcheon&show_icons=true&theme=radical)
github-readme-stats.vercel.app/api/top-langs/?username=Jangseokcheon&langs_count=8

## 1. 주제 개요

코로나로 인해 음식점과 같이 사람들간의 접촉이 필요한 시설에 대한 불안감이 커지면서 사람들간의 직접적인 교류가 힘들어 지고 배달 사업의 규모가 커지고 있는데 이를 해결할 방법으로 언택트 사업이 각광 받고 있는 이 시점에 음식점과 사람과의 접촉을 획기적으로 줄일 수 있는 호텔 서비스 로봇은 코로나 시대에 꼭 필요한 작품일 것입니다.
또한 최근 배달 및 서비스  기술이 중요해 짐에 따라 이러한 로봇이 더욱 필요할 예정입니다.

## 2. 주제 수행 내용

자율주행차량은 로보티즈의 와플 모양으로 사용할 예정이며, 바퀴는 2개로 전륜구동할 계획입니다.   
라이다 센서로 SLAM, 자율주행에 사용   
보드는 jetson보드 사용   
무게 센서를 이용하여 무게 측정   
ROS 2를 사용하여 멀티프로세스로 모터, 센서, 카메라 등을 한번에 처리   
라이다 센서로 SLAM알고리즘을 이용하여 맵 제작   
제작된 맵을 이용하여 최단거리 알고리즘으로 navigation활용   
무게 측정하여 사용자가 물품을 가져갔을 시 자동 시건 후 복귀   

## 3. 최종 목표

Dynamix을 이용해 호텔 서비스 로봇을 제작하고 Java 기반의 웹사이트와 연동 시켜 웹사이트 상에서 호텔 서비스 로봇의 시점을 웹사이트에서 보여줌과 동시에 호텔 서비스 로봇을 제어할 수 있습니다.   
호텔 서비스 로봇은 라이더 센서와 ROS를 이용하여 자체적으로 사용자가 원하는 위치로 장애물을 회피하고 최단거리로 물건이나 식품을 배달 할 수 있습니다.



## 4. 블록도

![모델5](https://user-images.githubusercontent.com/86651809/168182709-a7080309-9382-4864-9684-f8a59c6aea4e.JPG)

## 5. SLAM

https://youtu.be/NXHmEm0RPJ4
![구동영상](https://user-images.githubusercontent.com/86651809/168182858-f9d4e4ed-2b60-4e79-9b6c-3dd1c67ca7b1.JPG)

## 6. 길찾기 알고리즘 (A* 알고리즘)

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
