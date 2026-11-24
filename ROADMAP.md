# 12개월 로드맵

**기간:** 2026-11-25 ~ 2027-11-24 (한국 시간)  
**목표 직무:** FPS 게임플레이/클라이언트 C++ 프로그래머. 게임 네트워크 경험을 강점으로 확장.

| 단계 | 기간 | 핵심 학습 | 검증 가능한 결과물 |
|---|---|---|---|
| M01 | 2026-11-25 ~ 12-24 | C++ 기초, 메모리, RAII, STL | CMake 기반 콘솔 전투 시뮬레이터 |
| M02 | 2026-12-25 ~ 2027-01-24 | Modern C++, 게임 수학 입문, UE5 기본 구조 | 3D 캐릭터 이동/카메라 |
| M03 | 2027-01-25 ~ 02-24 | 벡터·회전·충돌, 운영체제 기초, FPS 입력 | 싱글플레이 FPS 프로토타입 |
| M04 | 2027-02-25 ~ 03-24 | 언리얼 Gameplay Framework, 무기·피격 판정 | 무기 2종 및 전투 시스템 |
| M05 | 2027-03-25 ~ 04-24 | 게임 루프, 간단한 AI, 상태 관리, 프로파일링 기초 | 적 AI·라운드 시스템 |
| M06 | 2027-04-25 ~ 05-24 | 서버 권한, UE Replication/RPC, 네트워크 기초 | 1:1 멀티플레이 |
| M07 | 2027-05-25 ~ 06-24 | Dedicated Server, 전투 판정과 보안 | 서버 권한 기반 사격/피격 |
| M08 | 2027-06-25 ~ 07-24 | 지연·손실 테스트, 보간 및 보정 설계 | 지연 상황의 동기화 실험 보고서 |
| M09 | 2027-07-25 ~ 08-24 | 팀/라운드/리스폰, 멀티플레이 통합 | 소규모 팀 기반 FPS 플레이테스트 |
| M10 | 2027-08-25 ~ 09-24 | Unreal Insights, CPU/GPU/네트워크 병목 | 측정값을 포함한 최적화 사례 |
| M11 | 2027-09-25 ~ 10-24 | 버그 수정, 배포, 기술 문서, 시연 영상 | 공개 가능한 대표 포트폴리오 |
| M12 | 2027-10-25 ~ 11-24 | C++/CS/엔진 면접, 코딩 테스트, 지원 | 지원 현황·면접 회고·기술 사례 |

## 학습 자료

- C++ 기초: 《윤성우의 열혈 C++ 프로그래밍》, cppreference
- Modern C++: 《Effective Modern C++》와 최신 C++ 레퍼런스
- 컴퓨터 시스템: CS:APP, OSTEP (필요 주제 선별)
- 게임 수학: 《이득우의 게임 수학》
- Unreal Engine: 공식 문서와 《이득우의 언리얼 프로그래밍》
- 심화: 《Game Engine Architecture》 (선별 학습)

## 우선순위 원칙

1. 처음부터 엔진 내부 구현을 모두 이해하려고 하지 않는다.
2. 배우는 개념은 같은 주에 작은 코드로 적용한다.
3. 일정이 밀리면 기능 범위를 줄이고 핵심 게임 플레이를 지킨다.
4. 4주 단위로 상세 Issue를 재작성하여 실제 가용 시간에 맞춘다.
5. 포트폴리오용 주장은 테스트·프로파일링·재현 방법으로 뒷받침한다.

## 초반 실행 계획

- [Day 01: 개발 환경 구축](https://github.com/high-risk-gambler/road-to-fps-engineer/issues/1)
- [Day 02: 타입과 메모리](https://github.com/high-risk-gambler/road-to-fps-engineer/issues/2)
- [Day 03: 포인터와 참조](https://github.com/high-risk-gambler/road-to-fps-engineer/issues/3)
- [Day 04: 함수와 스택](https://github.com/high-risk-gambler/road-to-fps-engineer/issues/4)
- [Day 05: 동적 메모리](https://github.com/high-risk-gambler/road-to-fps-engineer/issues/5)
- [Day 06: 클래스 설계](https://github.com/high-risk-gambler/road-to-fps-engineer/issues/6)
- [Sprint 2: 객체와 수명](https://github.com/high-risk-gambler/road-to-fps-engineer/issues/7)
- [Sprint 3: STL과 게임 루프](https://github.com/high-risk-gambler/road-to-fps-engineer/issues/8)
- [Sprint 4: 콘솔 전투 게임](https://github.com/high-risk-gambler/road-to-fps-engineer/issues/9)

_이 문서는 연간 방향을 보여주는 기준선이며, 확정된 채용 일정이나 성과를 의미하지 않습니다._
