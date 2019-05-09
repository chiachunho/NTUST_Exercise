#define _CRT_SECURE_NO_WARNINGS
#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#include <stdio.h>

int main() {

	int a,b;
	while (scanf("%d %d", &a,&b) != EOF) {
		int room[256][256] = { 0 };
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				scanf("%d", &room[i][j]);
			}
		}
		int wl[256] = {0};   // 每一條橫條往左可延伸的長度
		int wr[256] = { 0 };   // 每一條橫條往右可延伸的長度
		int h[256] = { 0 };    // 矩形往上可延伸的高度
		int l[256] = { 0 };    // 矩形往上延伸到底後，往左可延伸的距離。
		int r[256] = { 0 };    // 矩形往上延伸到底後，往右可延伸的距離。
		int max_area = 0;// 最大矩形面積，初始化為最小值

		// 以每一個橫條當作長方形底部
		for (int i = 1; i <=a; i++){
			// 往左可延伸的長度
			for (int j = 1; j <b; j++) {
				if (room[i][j]) wl[j] = wl[j - 1] + 1;
				else wl[j] = 0;
			}
			// 往右可延伸的長度
			for (int j = b; j >= 1; j--) {
				if (room[i][j]) wr[j] = wr[j + 1] + 1;
				else wr[j] = 0;
			}
			// 矩形往上可延伸的高度
			for (int j = 1; j <=a; j++) {
				if (room[i][j])	h[j] = h[j] + 1;
				else h[j] = 0;
			}
			// 矩形往上延伸到底，往左可延伸的距離。
			for (int j = 1; j <=a; j++) {
				if (l[j] == 0) l[j] = wl[j];
				else l[j] = min(wl[j], l[j]);
			}
			// 矩形往上延伸到底後，往右可延伸的距離。
			for (int j = 1; j <=a; j++) {
				if (r[j] == 0) r[j] = wr[j];
				else r[j] = min(wr[j], r[j]);
			}
			// 記錄 Largest Empty Rectangle
			for (int j = 1; j <=a; j++)
				max_area = max(max_area, (l[j] + r[j] - 1) * h[j]);
		}
		printf("%d\n", max_area);
	}
	return 0;
}
