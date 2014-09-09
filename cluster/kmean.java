/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package cluster;

import java.io.*;
import java.lang.*;

class kmean{

    public static void main(String args[]) {
        int N = 1;
        
        float arr[][] = {{2, 10}, {2, 5}, {8, 4}, {5, 8}, {7, 5}, {6, 4}, {1, 2}, {4, 9}};    // initial data
        int i, j = 0;
        boolean flag = true;
        float[] cluster1_10 = arr[0];
            float[] cluster2_10 = arr[3];
            float[] cluster3_10 = arr[6];
        
        int len1 = arr.length;
        int len2 = arr[0].length;
        for (i = 0; i < len1; i++) {
            for (j = 0; j < len2; j++) {
                if (j < 1) {
                    System.out.print(arr[i][j] + " , ");
                } else {
                    System.out.print(arr[i][j]);
                }
            }
            System.out.println();
        }
        float cluster1[][] = new float[len1][len2];
        float cluster2[][] = new float[len1][len2];
        float cluster3[][] = new float[len1][len2];
        int IteratioArr1 = 0;
        int IteratioArr2 = 0;
        int IteratioArr3 = 0;
        do {            
            float[] pt1 = pointCalculation(arr, cluster1_10);
            float[] pt2 = pointCalculation(arr, cluster2_10);
            float[] pt3 = pointCalculation(arr, cluster3_10);
            IteratioArr1 = 0;
            IteratioArr2 = 0;
            IteratioArr3 = 0;     
            System.out.println("Iteration " + N + ":\n" + "Mean1\tMean2\tMean3");
            for (i = 0; i < len1; i++) {
                System.out.println(pt1[i] + "       " + pt2[i] + "     " + pt3[i]);
                if (pt1[i] < pt2[i] && pt1[i] < pt3[i]) {
                    cluster1[IteratioArr1][0] = arr[i][0];
                    cluster1[IteratioArr1][1] = arr[i][1];
                    IteratioArr1++;
                } else if (pt2[i] < pt3[i] && pt2[i] < pt1[i]) {
                    cluster2[IteratioArr2][0] = arr[i][0];
                    cluster2[IteratioArr2][1] = arr[i][1];
                    IteratioArr2++;
                } else if (pt3[i] < pt1[i] && pt3[i] < pt2[i]) {
                    cluster3[IteratioArr3][0] = arr[i][0];
                    cluster3[IteratioArr3][1] = arr[i][1];
                    IteratioArr3++;
                }
            }

            float[][] cluster1Avg = findAvg(cluster1, IteratioArr1);
            float[][] cluster2Avg = findAvg(cluster2, IteratioArr2);
            float[][] cluster3Avg = findAvg(cluster3, IteratioArr3);

            System.out.println("In ITERATION " + N + " CLUSTER 1(centroid):" + cluster1Avg[0][0] + "  " + cluster1Avg[0][1]);
            //System.out.println("OLD CLUSTER 1:" + cluster1_10[0] + "  " + cluster1_10[1]);

            System.out.println("In ITERATION " + N + " CLUSTER 2(centroid):" + cluster2Avg[0][0] + "  " + cluster2Avg[0][1]);
            //System.out.println("OLD CLUSTER 2:" + cluster2_10[0] + "  " + cluster2_10[1]);

            System.out.println("In ITERATION " + N + " CLUSTER 3(centroid):" + cluster3Avg[0][0] + "  " + cluster3Avg[0][1]);
            //System.out.println("OLD CLUSTER 3:" + cluster3_10[0] + "  " + cluster3_10[1]);
            if (cluster1_10[0] == cluster1Avg[0][0] && cluster1_10[1] == cluster1Avg[0][1]
                    && cluster2_10[0] == cluster2Avg[0][0] && cluster2_10[1] == cluster2Avg[0][1]
                    && cluster3_10[0] == cluster3Avg[0][0] && cluster3_10[1] == cluster3Avg[0][1]) {
                flag = false;
            } else {
                flag = true;
            }
            cluster1_10[0] = cluster1Avg[0][0];
            cluster1_10[1] = cluster1Avg[0][1];
            cluster2_10[0] = cluster2Avg[0][0];
            cluster2_10[1] = cluster2Avg[0][1];
            cluster3_10[0] = cluster3Avg[0][0];
            cluster3_10[1] = cluster3Avg[0][1];
            N++;
        } while (flag);
        System.out.println("Cluster 1 Points:");
        for (i = 0; i < IteratioArr1; i++) {
            System.out.println("( " + cluster1[i][0] + " , " + cluster1[i][1] + " )");
        }
        System.out.println("Cluster 2 Points:");
        for (i = 0; i < IteratioArr2; i++) {
            System.out.println("( " + cluster2[i][0] + " , " + cluster1[i][1] + " )");
        }
        System.out.println("Cluster 3 Points:");
        for (i = 0; i < IteratioArr3; i++) {
            System.out.println("( " + cluster3[i][0] + " , " + cluster3[i][1] + " )");
        }
    }

    private static float[] pointCalculation(float[][] arr1, float[] clusterpt1) {
        int len1 = arr1.length;
        int len2 = arr1[0].length;
        float pt[] = new float[len1];
        for (int i = 0; i < len1; i++) {
            System.out.println("------(" + arr1[i][0] + " , " + arr1[i][1] + ")------");
            int sum = 0;
            for (int j = 0; j < len2; j++) {
                if ((arr1[i][j] - clusterpt1[j]) < 0) {
                    sum += ((arr1[i][j] - clusterpt1[j]) * -1);
                } else {
                    sum += (arr1[i][j] - clusterpt1[j]);
                }
            }
            pt[i] = sum;
        }
        return pt;
    }

    private static float[][] findAvg(float[][] cluster, int len) {
        int pt10Sum = 0;
        int pt11Sum = 0;
        for (int i = 0; i < len; i++) {
            System.out.println("++++++(" + cluster[i][0] + " , " + cluster[i][1] + ")+++++");
            pt10Sum += cluster[i][0];
            pt11Sum += cluster[i][1];
        }
        float pt10Avg = (float) pt10Sum / (len);
        float pt11Avg = (float) pt11Sum / (len);
        float[][] avg = {{pt10Avg, pt11Avg}};
        return avg;
    }
}
