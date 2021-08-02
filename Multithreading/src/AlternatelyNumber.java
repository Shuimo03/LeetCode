public class AlternatelyNumber {

    /**
     * 写一段简单的程序，启动两个线程交替打印1–100
     */

    static class  TestThread implements Runnable{

        int num = 1;

        @Override
        public void run(){
            while (true){

                synchronized (this){
                    notify();

                    try {
                        Thread.currentThread();
                        Thread.sleep(100);
                    }catch (InterruptedException e){
                        e.printStackTrace();
                    }

                    if (num <= 100){
                        System.out.println(Thread.currentThread().getName()+":"+num);
                        num++;
                        try {
                            wait();
                        }catch (InterruptedException e){
                            e.printStackTrace();
                        }
                    }
                }
            }
        }
    }

    public static void main(String[] args) {

        TestThread thread = new TestThread();
        Thread thread1 = new Thread(thread);
        Thread thread2 = new Thread(thread);

        thread1.setName("thread1");
        thread2.setName("thread2");

        thread1.start();
        thread2.start();
    }
}
