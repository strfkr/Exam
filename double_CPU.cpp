////һ��˫��CPU���������ܹ�ͬʱ�Ĵ�������
////������n����֪��������������Ҫ����CPU������
////������֪CPU��ÿ����1����Դ���1kb��ÿ����ͬʱֻ�ܴ���һ������
////n��������԰�������˳�����CPU���д�����
////������Ҫ���һ��������CPU�������������������ʱ�����٣��������С��ʱ�䡣
//
////=========================================================
////��������:
////����������У�
////��һ��Ϊ����n(1 �� n �� 50)
////�ڶ���Ϊn������length[i](1024 �� length[i] �� 4194304)����ʾÿ������ĳ���Ϊlength[i]kb��ÿ������Ϊ1024�ı�����
//
////�������:
////���һ����������ʾ������Ҫ������ʱ��
//
////*********************************************************
////�������� :
////5
////3072 3072 7168 3072 1024
////
////������� :
////	 9216
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
////�������� �ֳ����������飬ʹ������֮����С
////���룺
////5
////3072 3072 7168 3072 1024
////�����
////9216
//
//void main(){
//	int n;
//	vector<int> nums;
//
//	cin >> n;
//
//	if (n == 0){
//		cout << "0" << endl;
//	}
//
//	int sum = 0;
//	int half_sum = 0;
//
//	int temp;
//	for (int i = 0; i < n; i++){
//		cin >> temp;
//		temp >>= 10;
//		sum += temp;
//		nums.push_back(temp);
//	}
//
//	sort(nums.begin(), nums.end());
//
//	half_sum = sum / 2;
//
//	int* f = new int[half_sum + 1]();
//
//	for (int i = 0; i < n; i++)
//	{
//		//cout << "i========:: " << i << " value : " << nums[i] << endl;
//			//01����
//		for (int j = half_sum; j >= nums[i]; j--) 
//			//��ȫ����
//		/*for (int j = nums[i]; j <= half_sum;j++)*/
//		{
//			f[j] = max(f[j], f[j - nums[i]] + nums[i]);
//		}
//		/*for (int k = 0; k <= half_sum; k++){
//			cout << f[k] << " ";
//		}
//		cout << "\n\n";*/
//	}
//
//	int ret = max(f[half_sum], sum - f[half_sum]);
//	ret <<= 10;
//	cout << ret << endl;
//
//	delete[] f;
//}