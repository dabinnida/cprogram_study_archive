include <stdio.h>
int main()
{
    int n, i, j, a[5], temp;
    scanf("%d", &n);        // 데이터의 개수 n을 정한다.
    for (i = 0; i < n; i++) // n개만큼 데이터 값을 받는다.
    {
        scanf("%d", &a[i]);
    }
    // 버블 정렬 시작
    for (i = 0; i < n - 1; i++) // 마지막 값은 자동 정렬되므로 n-1번까지만 반복한다.
    {
        for (j = 0; j < n - i - 1; j++) // i번 돌때마다 마지막 값에는 큰 값이 들어오므로 끝까지 비교할 필요가 없다. 따라서 n-i-1번까지만 비교한다.
        {
            if (a[j] > a[j + 1]) // 인접한 2개를 비교했을 때 처음 위치값이 크다면 자리 교환
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // 버블 정렬 끝났으므로 출력한다.
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}