#include <iostream>
#include <vector>

using namespace std;


/*

��������˼·��
1. �ӵ�һ��Ԫ�ؿ�ʼ����Ԫ�ؿ�����Ϊ�Ѿ�������
2. ȡ����һ��Ԫ�أ����Ѿ������Ԫ�������дӺ���ǰɨ��
3. �����Ԫ�أ������򣩴�����Ԫ�أ�����Ԫ���Ƶ���һλ��
4. �ظ�����3��ֱ���ҵ��������Ԫ��С�ڻ��ߵ�����Ԫ�ص�λ��
5. ����Ԫ�ز��뵽��λ�ú�
6. �ظ�����2~5
*/

class Solution{
private:
    void InsertSort(vector<int>& v){
        int len = v.size();
        for(int i=1; i < len; ++i){
            int temp = v[i];
            for(int j=i-1; j>=0; --j){
                if(v[j] > temp){
                    v[j+1] = v[j];
                    v[j] = temp;
                }else{
                    break;
                }
            }
        }

    }
};