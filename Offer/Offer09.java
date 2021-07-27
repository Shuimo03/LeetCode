import java.util.Stack;

public class Offer09 {

    class CQueue{

        public CQueue() {

        }

        Stack<Integer> stack1 = new Stack<>();
        Stack<Integer> stack2 = new Stack<>();

        /**
         * 在队列尾插入数据
         */
        public void appendTail(int value) {
            stack1.push(value);
        }

        /**
         *
         * 在队头删除元素
         */
        public int deleteHead() {

            int res = stack2.pop();

            if (stack2.isEmpty()){
                if(stack1.isEmpty()){
                    return -1;
                }

                while (!stack1.isEmpty()){
                    stack2.push(stack1.pop());
                }
                return res;
            }
            else{
                return res;
            }
        }
    }
}
