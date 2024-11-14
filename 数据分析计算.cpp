#include<iostream>
#include<string> 
#include<cmath>
using namespace std;

template<class T>//���鸳ֵ����ģ�� 
void input(int n,T arr[])
{
	for(int i=0;i<n;i++)
	cin>>arr[i];
}

template <class T>//������麯��ģ�� 
void output(int n,const T arr[])
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"  ";
}

template<typename T>//��С����ð��������ģ�� 
void order(int n,T arr[])
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			    T temp = arr[j+1];
			    arr[j+1]=arr[j];
			    arr[j] = temp;
		    }
		}
	}
}

template <class T>//�������λ������ģ��
T mid(int n,const T arr[])
{
	T Arr[n];
	for(int i=0;i<n;i++)
	Arr[i]=arr[i];
	order(n,Arr);
	T m=0;
	int N=n%2;
	switch(N) 
	{
		case 0:
			m=(Arr[n/2]+Arr[n/2-1])/2;
			break;
		default:
			m=Arr[n/2];
	}
	return m;
}

template <typename T>//�����ƽ��ֵ����ģ��
T average(int n,const T arr[]) 
{
	T s=0;
	for(int i=0;i<n;i++)
	s+=arr[i];
	return s/n;
}

template <class T>//����������ģ�� 
T Sum(int n,const T arr[])
{
	T s=0;
	T a = average(n,arr);
	T Arr[n];
	for(int i=0;i<n;i++)
	Arr[i]=arr[i];
	for(int i=0;i<n;i++)
	Arr[i]-=a;
	for(int i=0;i<n;i++)
	s+=(Arr[i]*Arr[i]);
	return s/n;
}

int fun(int T)//������С���� 
{
	switch(T){
		case 0:
		    break;
		case 1:
			cout<<"(���˺��ˣ����������)\n";
			break;
		case 2:
			cout<<"(�ԣ���������)\n";
	        break;
		case 3:
			cout<<"(��㣬�ҿ�û��������)\n";
			break;
		case 4:
			cout<<"(�㵽���ò���? ���þ����˰�)\n";
		    break;
		case 5:
			cout<<"(ܳ���裬��ƨ��ţ��٣�)\n";
			break;
		case 6:
			cout<<"(��ɵ�ƣ��������һ�λ��ᣬ�������Ͳ���������)\n";
			break;
		default:
			for(int i=0;i<100;i++){
				for(int j=0;j<60;j++){
					cout<<"�����~\t������\t��զ��\t�в���\t�����\t������\tcnm\t�ұ��������\t����������������\n";
				}
				system("cls");
			}
			cout<<"  �Ǻǡ�����\n\n����Ȩ����---���ϣ�����ת������Ȩ��лл��ϣ�";
			cin.get();
			cin.get();
			system("cls");
			cout<<"�ټ�������~~\n"; 
			system("pause");
			return 0;
	} 
} 

double *table(int n)//����ʵ�����A�಻ȷ���ȵ�t�ֲ��� 
{
	double *T=new double[4];
	if((n<3)||(n>10&&n<15)||(n>15&&n<20)){
		for(int i=0;i<4;i++)
		T[i]=0;
	}
	else{
		switch(n){
		case 3:
			T[0]=1.32;T[1]=2.92;T[2]=4.30;T[3]=9.93;
			break;
		case 4:
			T[0]=1.20;T[1]=2.35;T[2]=3.18;T[3]=5.84;
			break;
		case 5:
			T[0]=1.14;T[1]=2.13;T[2]=2.78;T[3]=4.60;
			break;
		case 6:
			T[0]=1.11;T[1]=2.02;T[2]=2.57;T[3]=4.03;
			break;
		case 7:
			T[0]=1.09;T[1]=1.94;T[2]=2.46;T[3]=3.71;
			break;
		case 8:
			T[0]=1.08;T[1]=1.86;T[2]=2.37;T[3]=3.50;
			break;
		case 9:
			T[0]=1.07;T[1]=1.83;T[2]=2.31;T[3]=3.36;
			break;
		case 10:
			T[0]=1.06;T[1]=1.76;T[2]=2.26;T[3]=3.25;
			break;
		case 15:
			T[0]=1.04;T[1]=1.73;T[2]=2.15;T[3]=2.98;
			break;
		case 20:
			T[0]=1.03;T[1]=1.71;T[2]=2.09;T[3]=2.86;
			break;
		default://n��������
			T[0]=1.00;T[1]=1.65;T[2]=1.96;T[3]=2.58;
			break;
	    }
	}
	return T;
}

int main(){
    bool R=1;
	while(R){
    	cout<<"������������ٸ����֣�������һ�����������س���������\n"; 
			int M=0;
			string str;
			int time=0; 
			Target: 
			fun(time);
			if(time==7)
			return(fun(time));
			cin>>str;
			int m=0;
			int a=str.length();
			    for(int i=1;a-i>=0;i++){
				    int b=(int)str[a-i];//ASCII�� ��ת�ַ���Ϊ���� 
				    if(b>47&&b<58){
					    b-=48;
				     	for(int j=0;i-j>0;j++){
						    b=b*10;
					    }
				    	b=b/10;
				        m+=b;
			    	}
				    else{
						system("cls");
					    cout<<"������һ����Ч��������\n";
					    time++;
						goto Target;
			     	}
		        }
		    if(m==0){
				system("cls");
				cout<<"������һ������0��������\n";
				time++;
				goto Target;
			}	 
			system("cls");
		    M=m;
			/*while(true){
				cin>>M;
		    	if(M<1){
				system("cls");
				cout<<"���������Ӧ���ڵ��� 1\n���������룺";
			    }
			    else{
			    	system("cls");
			    	break;
				}
			} */
			double arr[M];
			cout<<"������"<<M<<"�����֣�ÿ����һ�����ֵ���س�������\n����������һ�����֣�"<<M<<"�����ּ����һ���ո������������ٵ�س���������\n";
			input(M,arr);
			cout<<"\n������ "<<M<<" ������\n"<<"�������Ⱥ�˳��ֱ��ǣ�\n";
			output(M,arr);
			cout<<"\n�����ǰ���С�����������������֣�\n"; 
			order(M,arr);
			output(M,arr);
			double B=Sum(M,arr)*M/(M-1);
			double *t=table(M);
			cout<<"\n\n�⴮���ֵ�\n��Сֵ��"<<arr[0]<<"\n���ֵ��"<<arr[M-1]<<"\n��λ����"<<mid(M,arr)
			<<"\nƽ��ֵ��"<<average(M,arr)<<"\n�ܺͣ�\t"<<average(M,arr)*M<<"\n���\t"<<arr[M-1]-arr[0]
			<<"\n���\t"<<Sum(M,arr)<<"\n��׼�"<<sqrt(Sum(M,arr))
			<<"\n\n����ʵ��������ݷ�������������ʵ��Cר�ã�\n" <<"���޴β����ı�׼�\tS = "<<sqrt(B)
			<<"\n����ƽ��ֵx�ı�׼ƫ�\tSx= "<<sqrt(B/M)<<" ������򲻳���x�ϼ�һ�ܵ��ַ����ǵò��ϣ�"
			<<"\nA�಻ȷ���ȣ���t�ֲ���n="<<M<<"��\n"
			<<"��P=0.68��t="<<t[0]<<"ʱ��\t��A="<<t[0]*sqrt(B/M)
			<<"\n��P=0.90��t="<<t[1]<<"ʱ��\t��A="<<t[1]*sqrt(B/M)
			<<"\n��P=0.95��t="<<t[2]<<"ʱ��\t��A="<<t[2]*sqrt(B/M)
			<<"\n��P=0.99��t="<<t[3]<<"ʱ��\t��A="<<t[3]*sqrt(B/M); 
			if(M<3)
			cout<<"\n(��Ϊn<3��������ʵ�������׼��ʵ�����������壬���Զ���t��ֵΪ0)";
			else if(M>20)
			cout<<"\n(��Ϊn>20�������˽̲������ķ�Χ�����Զ���nĬ��Ϊ�����Ϊt����Ӧ��ֵ)";
			else if((M>10&&M<15)||(M>15&&M<20)){
				cout<<"\n\n(��Ϊn="<<M<<"���̲��е�t�ֲ���δ���������ֵ����ʱ��t��ֵΪ0)\n"
				<<"�����Ƿ��ֶ���������Ӧ��ֵ��(�������ִ������ѡ������󰴻س�������)\n1����		2����\n" ; 
				int ch = 0;
				cin>>ch;
				if(ch==1){
					cout<<"�������ӦP�µ���Ӧ��tֵ��(���갴�س��������������������Ҫ�õ���tֵ����0���س�����������)\n";
					double e,f,g,h;
					cout<<"��P=0.68��t=";cin>>e;cout<<"��A="<<e*sqrt(B/M)
					<<"\n��P=0.90��t=";cin>>f;cout<<"��A="<<f*sqrt(B/M)
					<<"\n��P=0.95��t=";cin>>g;cout<<"��A="<<g*sqrt(B/M)
					<<"\n��P=0.99��t=";cin>>h;cout<<"��A="<<h*sqrt(B/M);
				}
			}
			delete[] table(M);
			cout<<"\n\n����1���س�������������\n"<<"����0���س����˳�����\n";
			cin>>R;
			if(R){
				cin.get();
			    system("cls"); 
			}
			else
			break;
	} 
	system("pause");
    return 0; 
 } 
