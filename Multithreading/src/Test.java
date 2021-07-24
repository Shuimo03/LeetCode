public class Test {

    private int x = 0;

    public static void main(String[] args) throws InterruptedException {

        Test test = new Test();
        System.out.println("修改之前:"+test.x);

        Thread thread1 = new Thread(()->{
           test.x++;
        });

        Thread thread2 = new Thread(()->{
            test.x++;
        });


        thread1.start();
        thread2.start();
        System.out.println("修改之后:"+test.x);
    }
}
