# 호텔 서비스 로봇

![Anurag's GitHub stats](https://github-readme-stats.vercel.app/api?username=Jangseokcheon&show_icons=true&theme=radical)
[![Top Langs](https://github-readme-stats.vercel.app/api/top-langs/?username=ohbyul&layout=compact&theme=dracula)](https://github.com/metleeha)

## 1. 주제 개요

코로나로 인해 음식점과 같이 사람들간의 접촉이 필요한 시설에 대한 불안감이 커지면서 사람들간의 직접적인 교류가 힘들어 지고 배달 사업의 규모가 커지고 있는데 이를 해결할 방법으로 언택트 사업이 각광 받고 있는 이 시점에 음식점과 사람과의 접촉을 획기적으로 줄일 수 있는 호텔 서비스 로봇은 코로나 시대에 꼭 필요한 작품일 것입니다.
또한 최근 배달 및 서비스  기술이 중요해 짐에 따라 이러한 로봇이 더욱 필요할 예정입니다.

## 2. 주제 수행 내용

자율주행차량은 로보티즈의 와플 모양으로 사용할 예정이며, 바퀴는 2개로 전륜구동할 계획입니다.   
라이다 센서로 SLAM, 자율주행에 사용   
보드는 jetson보드 사용   
무게 센서를 이용하여 무게 측정   
ROS를 사용하여 멀티프로세스로 모터, 센서, 카메라 등을 한번에 처리   
라이다 센서로 SLAM알고리즘을 이용하여 맵 제작   
제작된 맵을 이용하여 최단거리 알고리즘으로 navigation활용   
무게 측정하여 사용자가 물품을 가져갔을 시 자동 시건 후 복귀   

## 3. 최종 목표

Dynamix을 이용해 호텔 서비스 로봇을 제작하고 Java 기반의 웹사이트와 연동 시켜 웹사이트 상에서 호텔 서비스 로봇의 시점을 웹사이트에서 보여줌과 동시에 호텔 서비스 로봇을 제어할 수 있습니다.   
호텔 서비스 로봇은 라이더 센서와 ROS를 이용하여 자체적으로 사용자가 원하는 위치로 장애물을 회피하고 최단거리로 물건이나 식품을 배달 할 수 있습니다.



## 4. 블록도

![모델5](https://user-images.githubusercontent.com/86651809/168182709-a7080309-9382-4864-9684-f8a59c6aea4e.JPG)

## 5. SLAM

process1
## https://youtu.be/NXHmEm0RPJ4
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
  
  
  #  PathFinding

# 블럭도 버전

## v-0

![초기모델](https://user-images.githubusercontent.com/86651809/168045285-6d0701d6-00d3-491a-9ba0-307cd29ebb0b.JPG)

## 2주차 교수님의 피드백 내용

* 로봇과 web의 하드웨어 플렛폼 작성 요청   
* 처음에 rp lider에서 slam을 돌려 맵 정보를 받아오고 그 값을 장애물 인식 및 이동으로 전달하여 휠이 동작하는 형태로 블럭도 수정 요청    
* web부분은 2학기에 구현하고 1학기는 ROS에 집중 추천   
    
    
    
    
## v-1

### 수정사항

* 로봇에 사용할 하드웨어 플렛폼 작성(Jetson Xavier)   
* web관련 블럭도 제거 및 수정   
* 작품 사진 첨부   

![모델2](https://user-images.githubusercontent.com/86651809/168053988-410f9912-c7b6-450a-a028-ebb65804f97e.JPG)

## 3주차 교수님의 피드백 내용

* rp liader -> slaming -> map 과 같이 알아보기 쉽게 블럭도 구성 요청   
* Remote PC 파트를 jetson nano보드 말고 우분투 돌아가는 pc에서 gui모니터링(Rviz) 추천   
* 각 노드들이 하는 기능들 define 필요    
* server cliant 없애고 노드와 마스터의 형태로 만들기 요청   
   
   
   
   
## v-2

### 수정사항

* 블럭도 보기 편하게 구현   
* Remote PC 파트를 PC로    
* SLAM 구동 작품 영상 업로드    

![모델3](https://user-images.githubusercontent.com/86651809/168058432-46b3e1d4-476b-4d52-9331-e786155999fe.JPG)

구동 영상 이미지

![구동영상](https://user-images.githubusercontent.com/86651809/168060073-2a84af30-0410-4837-ac42-2eb4aff65e9c.JPG)


## 5주차 교수님의 피드백 내용

* RP lider도 publicsh 노드로 변경 요청   
* subsciriver 와 publish 표시   
* 모터 컨트롤 노드도 추가 요청   
* 색으로 완료한 기능 표시 (예 파랑은 완성된 기능 노랑은 다음에 만들 기능 빨강은 나중에 만들 기능)   
   
   
   
   
## v-3

### 수정사항

* 블럭도에 subsciriver 와 publish 표시   
* 색으로 진행사항 쵸시   
* 노드 추가   

![모델4](https://user-images.githubusercontent.com/86651809/168063861-c345e8fc-1a88-454f-9cbf-a84cf0267ab7.JPG)

## 6주차 교수님의 피드백 내용

* Ros host와 master 관련 ip주소 적어주기
   
   
   
   
## v-4

### 수정사항

* Ros host와 master 관련 ip주소 적어주기   
* 완성된 기능 파란색 추가

![모델5](https://user-images.githubusercontent.com/86651809/168065864-6ffc0cc6-0cd4-4759-af1b-f0115c2b0b7f.JPG)

## 7주차 교수님의 피드백 내용

* 없음
   
   
   
   
## v-5

### 수정사항

* 팀원간의 깃 협업 공간 생성 

![git](https://user-images.githubusercontent.com/86651809/168180682-60dd5e6b-bf6b-4137-b0e2-9584c2f4d104.png)

## 9주차 교수님의 피드백 내용

* 깃 활용 추천
   
   
   
   
## v-6

### 수정사항

* ROS 환경에서 돌아갈 길찾기 알고리즘 테스트   
* github에 A* 알고리즘 관련 파일 협업 공간에 업로드

![astar](https://user-images.githubusercontent.com/86651809/168180958-9062496e-9b5b-4d4b-86d1-80e086d134af.png)


## 10주차 교수님의 피드백 내용

* 깃에 블럭도 및 수정사항 기재 요청

