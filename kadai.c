#include <stdio.h>
#include <math.h>

int main(){
	double rika[20] = {65.0,80.0,67.0,35.0,58.0,60.0,72.0,75.0,68.0,92.0,36.0,50.0,2.0,58.5,46.0,42.0,78.0,62.0,84.0,70.0};
	double eng[20] = {44.0,87.0,100.0,63.0,52.0,60.0,58.0,73.0,55.0,86.0,29.0,56.0,89.0,23.0,65.0,84.0,64.0,27.0,86.0,84.0};
	
	double ave_r,ave_e,bun_r,bun_e,hjn_r,hjn_e,hensa_r[20],hensa_e[20];
	double bsum_r = 0;
	double bsum_e = 0;

	double sum_r = 0;
	double sum_e = 0;

	int i;

	for(i=0; i < 20; i++){
		sum_r+=rika[i];
		sum_e+=eng[i];
	}

	ave_r = sum_r/20;
	ave_e = sum_e/20;

	for(i=0; i < 20; i++){
		bsum_r+=(rika[i]-ave_r)*(rika[i]-ave_r);
		bsum_e+=(eng[i]-ave_e)*(eng[i]-ave_e);
	}

	bun_r=bsum_r/20;
	bun_e=bsum_e/20;

	hjn_r = sqrt(bun_r);
	hjn_e = sqrt(bun_e);

	printf("理科\n");
	printf("平均 : %.5f\n",ave_r);
	printf("標準偏差 : %.5f\n",hjn_r);
	printf("合計点 : %.5f\n",sum_r); 
	printf("\n");

	printf("英語\n");
	printf("平均 : %.5f\n",ave_e);
	printf("標準偏差 : %.5f\n",hjn_e);
	printf("合計点 : %.5f\n",sum_e);

	for(i=0; i<20; i++){
		hensa_r[i]=10*((rika[i]-ave_r)/hjn_r)+50;
		hensa_e[i]=10*((eng[i]-ave_e)/hjn_e)+50;

		printf("%d番さんの偏差値\n",i+1);
		printf
	}
	return 0;
}
