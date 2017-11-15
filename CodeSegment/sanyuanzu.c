/*
*稀疏矩阵---三元组顺序表
*/

typedef struct 
{
	int i,j; //行号，列号
	EelemType e; //非0元值
}triple;

typedef struct 
{
	triple *data; //三元组表
	int mu,nu,tu; //行，列，非0元个数
}TSMatrix;

//稀疏矩阵的转置
Status TransposeSMatrix(TSMatrix M,TSMatrix &T)
{
	//采用三元组存储表示，求稀疏矩阵M的转置矩阵T
	T.mu = M.nu;
	T.nu = M.mu;
	T.tu = M.tu;

	if(T.tu)
	{
		q = 1;
		for(col = 1; col <= M.nu; ++col)
			for(p = 1; p <= M.tu; ++p)
				if(M.data[p].j == col)
				{
					T.data[q].i = M.data[p].j;
					T.data[q].j = M.data[p].i;
					T.data[q].e = M.data[p].e;
					++p;
				}
	}
	return OK;
} //TransposeSMatrix