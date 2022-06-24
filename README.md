# 현재 구현된 기술들

## [SLAM](https://youtu.be/NXHmEm0RPJ4)

![구동영상](https://user-images.githubusercontent.com/86651809/168182858-f9d4e4ed-2b60-4e79-9b6c-3dd1c67ca7b1.JPG)

## 길찾기 알고리즘 (A* 알고리즘)

C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\include\bits
에 stdc++.h 파일 넣으면 여러 
```
#include <iostream> 
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
using namespace std; 
```
와 같은 헤더파일들을 #include <bits/stdc++.h> 한줄로 선언이 가능하다 단점은 실행할때마다  #include <bits/stdc++.h>에 포함된 모든 헤더파일을 실행하기 때문에 낭비가 생김
  

 ![image](https://user-images.githubusercontent.com/86651809/166835749-57b852b7-eff5-48be-adc5-5f8aa59d3883.png)
 
 
 map2.txt는 맵 파일(텍스트) 0은 길 1은 벽 2는 출발지 3은 도착지
 
## AMCL Node 알고리즘

lidar data를 가지고 특징점을 찾아 자신의 위치를 추정하는 알고리즘 

  - 초기  ● amcl 알고리즘 후  
<p align="third">
  <img src="https://user-images.githubusercontent.com/94602114/175321758-4bb87b78-14c9-4028-9af3-bc452ef81cc8.png" width="400" height="400"/>
  <img src="https://user-images.githubusercontent.com/94602114/175323423-8b2a0eca-ac7f-465e-9346-e68d694dab4e.png" width="400" height="400"/>
</p>

  - amcl 알고리즘 후  

## [MoveBase Node 알고리즘](https://youtu.be/1NEKSqXpm4c)

목표값(goal)을 주면 로봇이 갈 길을 찾고 모터제어명령을 내리는 알고리즘

  - Global path plan & local plan  

![image](https://user-images.githubusercontent.com/94602114/175328295-d821cbb6-3c05-4afa-8392-278c6792a0a8.png)

![asfasf](https://user-images.githubusercontent.com/86651809/175437941-27b0ee58-5659-4713-a80c-6807212487e2.PNG)


