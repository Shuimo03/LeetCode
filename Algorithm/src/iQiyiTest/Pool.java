package iQiyiTest;


import java.util.ArrayList;
import java.util.Arrays;

/**
 * 你的省份有多个湖泊，所有湖泊一开始都是空的。当第 n 个湖泊下雨的时候，如果第 n 个湖泊是空的，那么它就会装满水，否则这个湖泊会发生洪水。你的目标是避免任意一个湖泊发生洪水
 *
 *
 *
 * 输入描述
 * 给你一个整数数组 rains ，其中：
 *
 * rains[i] > 0 表示第 i 天时，第 rains[i] 个湖泊会下雨。
 *
 * rains[i] == 0 表示第 i 天没有湖泊会下雨，你可以选择 一个 湖泊并 抽干 这个湖泊的水
 *
 * 输出描述
 * 返回一个数组 ans ，满足：
 *
 * ans.length == rains.length
 *
 * 如果 rains[i] > 0 ，那么ans[i] == -1 。
 *
 * 如果 rains[i] == 0 ，ans[i] 是你第 i 天选择抽干的湖泊。
 *
 * 如果有多种可行解，请返回它们中的 任意一个 。如果没办法阻止洪水，请返回一个 空的数组
 */

public class Pool {

    public static int[]pool(int rains[]) {

        ArrayList<Integer> arrayList = new ArrayList<>();

//        for (int i = 0; i < rains.length; i++){
//           // int max = Math.max(rains[0],rains[i]);
//            if (rains[i] > 0){
//                rains[i] = -1;
//            } else if (rains[i] == 0){
//                rains[i] = ;
//            }
//        }

        for (int i = 0; i < rains.length; i++){
            arrayList.add(rains[i]);
            if (arrayList.get(i) > 0){
                arrayList.set(arrayList.get(i), -1);
            }
            else if (arrayList.get(i) == 0){
                arrayList.set(arrayList.get(i),2);
            }
        }
        return rains;
    }

    public static void main(String[]args){
//        int res[] = new int[]{1,2,0,0,2,1};
//        ArrayList<Integer> arrayList = new ArrayList<>();
//       //Pool.pool(res);
//        for (int i = 0; i < res.length-1; i++){
//            arrayList.add(res[i]);
//            if (arrayList.get(i) > 0){
//                arrayList.set(arrayList.get(i), -1);
//            }
//            else if (arrayList.get(i) == 0){
//                arrayList.set(arrayList.get(i),2);
//            }
//        }
//
//        for (int i = 0; i < arrayList.size();i++){
//            System.out.print(arrayList.get(i));
//        }
    }
}
