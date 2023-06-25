#include <stdio.h>

int main(){
	unsigned long long test_index, tson_index, tenz_index, temp, no_test_cases, tson_mobs, tenz_mobs, tson_no, tenz_no;
	scanf("%llu", &no_test_cases);
	/* Iterate for each test case */
	for(test_index = 0; test_index < no_test_cases; test_index++){
		tson_mobs = 0;
		tenz_mobs = 0;
		/* Get mobs of tsondu */
		scanf("%llu", &tson_no);
		/* Get mobs of tenzing */
		scanf("%llu", &tenz_no);
		/* Get ability values of tsondu monsters */
		for(tson_index = 0; tson_index < tson_no; tson_index++){
			scanf("%llu", &temp);
			tson_mobs += temp;
		}
		/* Get ability values of tenzing monsters */
		for(tenz_index = 0; tenz_index < tenz_no; tenz_index++){
			scanf("%llu", &temp);
			tenz_mobs += temp;
		}
		/* Compare values */
		if(tson_mobs > tenz_mobs){
			printf("Tsondu\n");
		}
		else if(tenz_mobs > tson_mobs){
			printf("Tenzing\n");
		}
		else{
			printf("Draw\n");
		}
	}
	return 0;
}
