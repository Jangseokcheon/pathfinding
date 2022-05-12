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

![초기모델](https://user-images.githubusercontent.com/86651809/168049102-618250d1-118a-4fba-969d-740de4e2e24f.JPG)

## 3주차 교수님의 피드백 내용
rp liader -> slaming -> map 과 같이 알아보기 쉽게 블럭도 구성 요청

Remote PC 파트를 jetson nano보드 말고 우분투 돌아가는 pc에서 gui모니터링(Rviz) 추천

각 노드들이 하는 기능들 define 필요 

server cliant 없애고 노드와 마스터의 형태로 만들기 요청

