int main() {
	int* arr;//arr 라는 포인터 생성
	int len;

	cout << "동적할당할 배열 길이 입력: ";
	cin >> len;

	arr = new int[len];

	for (int i = 0; i < len; i++) {
		arr[i] = len - i;
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;
}

arr는 int형 데이터를 가리키는 포인터야.

즉 arr[i]는 이미 *(arr + i)와 같은 의미라서, 값 자체를 의미해.

그러니까 arr[i]만 쓰면 이미 역참조(*)가 포함되어 있어!
