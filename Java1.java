import java.util.scannner

public class GongBei {
    public static void main(String[] args) {
        Scanner sc = new Scanner(systerm.in};
        System.out.println("�����һ������");
        int x = sc.nextInt();
        System.out.println("����ڶ�������");
        int y = sc.nextInt();
        System.out.println("���Լ����"+gongyue(x,y));
        System.out.println("��С��������"+gongbei(x,y));
         }
         public static int gongyue(int x,int y){//���Լ��
        if(x>y){
            int t = x;
            x = y;
            y = t;
        }
        while(x!=0){
            int temp = y%x;
            y = x;
            x = temp;
        }
        return y;
    }
    public static int gongbei(int x,int y){//��С������
        int a = x,b = y;
        int g = gongyue(a,b);
        return x*y/g;
    }

}
