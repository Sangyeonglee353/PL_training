### 04-1 스택이란?
- 스택(stack): 데이터를 임시 저장할 때 사용하는 자료구조
- 데이터 입출력 방식: 후입선출(LIFO, Last In First Out)
- 푸시(PUSH): 스택에 데이터를 넣는 작업
- 팝(POP): 스택에서 데이터를 꺼내는 작업
- 꼭대기(TOP): 스택의 가장 윗부분
- 바닥(BOTTOM): 스택의 가장 아랫부분

#### 스택 구현하기
- 스택의 배열: stk
- 스택 크기: capacity
- 스택 포인터: ptr
- 예외 처리 클래스 Empty
- 예외 처리 클래스 Full
- 초기화하는 \__init__() 함수
- 쌓여 있는 데이터 개수를 알아내는 \__len__() 함수
- 스택이 비어있는지를 판단하는 is_Empty() 함수
- 스택이 가득 차 있는지를 판단하는 is_full() 함수
- 데이터를 푸시하는 push() 함수
- 데이터를 팝하는 pop() 함수
- 데이터를 들여다보는 peek() 함수
- 스택의 모든 데이터를 삭제하는 clear() 함수
- 데이터를 검색하는 find() 함수
- 데이터 개수를 세는 count() 함수
- 데이터가 포함되어 있는지 판단하는 \__contain()__ 함수 -> 정의시 in을 사용가능하다.
- 스택의 모든 데이터를 출력하는 dump() 함수

#### collections 컨테이너 모듈

### 04-2 큐란?
- 큐(queue)): 데이터를 임시 저장할 때 사용하는 자료구조
- 기본적으로 큐는 디큐할때마다 원소들을 한칸씩 앞으로 옮겨줘야 한다.
- 자료 입출력 방식: 선입선출(FIFO, First In First Out)
- 인큐(enqueue): 큐에 데이터를 추가하는 작업
- 디큐(dequeue): 큐에서 데이터를 꺼내는 작업
- 프런트(front): 데이터를 꺼내는 쪽
- 리어(rear): 데이터를 넣는 쪽

#### 우선순위 큐(priority queue)
- 파이썬에서 우선순위를 부여하는 큐는 heapq 모듈에서 제공
- 인큐(enqueue): heapq.heappush(heap, data)
- 디큐(dequeue): heapq.heappop(heap)

#### 링 버퍼로 큐 구현하기
- 링 버퍼(ring buffer): 디큐할 때 배열 안의 원소를 옮기지 않는 큐
- 링 버퍼는 오래된 데이터를 버리는 용도로 활용할 수 있습니다.
- 프런트(front): 맨 앞 원소의 인덱스
- 리어(rear): 맨 끝 원소 바로 뒤의 인덱스(다음 인큐되는 데이터가 저장되는 위치)
- 예외 처리 클래스 Empty
- 예외 처리 클래스 Full
- 초기화하는 \__init__() 함수
- 추가한 데이터 개수를 알아내는 \__len__() 함수
- 큐가 비어 있는지를 판단하는 is_empty() 함수
- 큐가 가득 차 있는지를 판단하는 is_full() 함수
- 데이터를 넣는 enque() 함수
- 데이터를 꺼내는 deque() 함수
- 데이터를 들여다보는 peek() 함수
- 검색하는 find() 함수
- 데이터 개수를 세는 count() 함수
- 데이터가 포함되어 있는지를 판단하는 \__contains__() 함수
- 큐의 전체 원소를 삭제하는 clear() 함수
- 큐의 전체 데이터를 출력하는 dump() 함수

#### 덱(deque)이란?
- 덱(deque: Double-ended queue): 양방향에서 추가•삭제가 가능한 큐
