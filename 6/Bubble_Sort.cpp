#include <stdio.h>

int main(void) {
	int i, j, tab;
	int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	for(i = 0; i < 9; i++) {
		for(j = 0; j < 9 - i; j++) {
			if(array[j] > array[j+1]) {
				tab = array[j];
				array[j] = array[j+1];
				array[j+1] = tab;
			}
		}
	}
	for(i = 0; i < 10; i++){ 
		printf("%d", array[i]);
	}
	return 0;
}

//�������ĺ��� �� ���� O(N^2), ���� ����ð� ���� ��
//�� 3���� ��ɾ ����ؼ� ��ǻ�Ͱ� �۾��ؾ��� ���� ����.(�� ȿ����)
