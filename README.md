# pathfinding

블럭도 버전
-------------

## v-0

![초기모델](https://user-images.githubusercontent.com/86651809/168045285-6d0701d6-00d3-491a-9ba0-307cd29ebb0b.JPG)

## 2주차 교수님의 피드백 내용
로봇과 web의 하드웨어 플렛폼 작성 요청

처음에 rp lider에서 slam을 돌려 맵 정보를 받아오고 그 값을 장애물 인식 및 이동으로 전달하여 휠이 동작하는 형태로 블럭도 수정 요청 

web부분은 2학기에 구현하고 1학기는 ROS에 집중 추천

## v-1

### 수정사항
로봇에 사용할 하드웨어 플렛폼 작성(Jetson Xavier)

web관련 블럭도 제거 및 수정\n

작품 사진 첨부

![모델2](https://user-images.githubusercontent.com/86651809/168053988-410f9912-c7b6-450a-a028-ebb65804f97e.JPG)

## 3주차 교수님의 피드백 내용
rp liader -> slaming -> map 과 같이 알아보기 쉽게 블럭도 구성 요청

Remote PC 파트를 jetson nano보드 말고 우분투 돌아가는 pc에서 gui모니터링(Rviz) 추천

각 노드들이 하는 기능들 define 필요 

server cliant 없애고 노드와 마스터의 형태로 만들기 요청

## v-2

### 수정사항
블럭도 보기 편하게 구현

Remote PC 파트를 PC로 

SLAM 구동 작품 영상 업로드 

![모델3](https://user-images.githubusercontent.com/86651809/168058432-46b3e1d4-476b-4d52-9331-e786155999fe.JPG)

구동 영상 이미지

![구동영상](https://user-images.githubusercontent.com/86651809/168060073-2a84af30-0410-4837-ac42-2eb4aff65e9c.JPG)


## 5주차 교수님의 피드백 내용

RP lider도 publicsh 노드로 변경 요청

subsciriver 와 publish 표시

모터 컨트롤 노드도 추가 요청

색으로 완료한 기능 표시 (예 파랑은 완성된 기능 노랑은 다음에 만들 기능 빨강은 나중에 만들 기능)

