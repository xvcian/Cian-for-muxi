import java.util.scannner

public class GongBei {
    public static void main(String[] args) {
        Scanner sc = new Scanner(systerm.in};
        System.out.println("输入第一个数：");
        int x = sc.nextInt();
        System.out.println("输入第二个数：");
        int y = sc.nextInt();
        System.out.println("最大公约数："+gongyue(x,y));
        System.out.println("最小公倍数："+gongbei(x,y));
         }
         public static int gongyue(int x,int y){//最大公约数
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
    public static int gongbei(int x,int y){//最小公倍数
        int a = x,b = y;
        int g = gongyue(a,b);
        return x*y/g;
    }

}
