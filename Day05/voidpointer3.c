///*
//	void pointer - 포인터인데 데이터 타입이 정해지지 않은 포인터 
//*/
//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	double db = 3.14;
//
//	// 원래
//	//int* pn = &n;
//	//double* pdb = &db;
//	
//	void* p;
//
//	p = &n;
//	printf("*p : %d\n", *(int*)p);
//
//	p = &db;
//	printf("*p : %.1lf\n", *(double*)p);
//
//
//	return 0;
//}