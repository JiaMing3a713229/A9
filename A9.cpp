/*
�D��:�@�~09: ����k�v�ɱ`���H�e�R�A�ѩ�L��o�S�֦��K�y�A
�]���ͷN���������A�ɱ`�j�ƪ��s�A
�L�Q��o��֤@�I�A�]����F�A�o��
�q���������L�ιq���ӥ[�ֺ�R���t�סC
�L���e�R�W�h��²��A�W�h�O�o�˪��A
��J�@�Ӥ���A�M��̷ӤU���������G
�s�@:�f�a�� 
�ק�/�������:2019/4/7 
*/ 

#include<stdio.h>
#include<stdlib.h>

void is_fortunate(int,int,int);//�ƨ禡�쫬 

int main(void){
	int born_year,born_month,born_day;//�إ�int�ܼ��x�s�X�ͦ~�B��B�� 
	
	printf("�п�J�X�ͤ��:");
	scanf("%d%d%d",&born_year,&born_month,&born_day);
	
	is_fortunate(born_year,born_month,born_day);//�ƨ禡 is_fortunate��ܹB�� 
	
	return 0;
	system("pause");
}
void is_fortunate(int year,int month,int day){
	int result;
	
	result=(month*2+day)%3;
	
	switch(result){
		
		case 0:
			printf("���q");
			break;
		case 1:
			printf("�N");
			break;
		case 2:
			printf("�j�N");
			break;
			
	}
}
