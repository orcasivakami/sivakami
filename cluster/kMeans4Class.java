/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package cluster;

import java.io.*;
import java.lang.*;

class kMeans4Class {

    public static void main(String args[]) {
        int N = 1;
        float arr[][] = {{18, 73, 75, 57}, {18, 79, 85, 75}, {23, 70, 70, 52}, {20, 55, 55, 55}, {22, 85, 86, 87}, {19, 91, 90, 89}, {20, 70, 65, 60}, {21, 53, 56, 59}, {19, 82, 82, 60}, {47, 75, 76, 77}};    // initial data
        int i, j = 0;
        boolean flag = true;
        float[] c1 = arr[0];
        float[] c2 = arr[1];
        float[] c3 = arr[2];

        float[] cluster1_10 = c1;
        float[] cluster2_10 = c2;
        float[] cluster3_10 = c3;


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
            int z = 0;
            System.out.println("Iteration " + N + ":\n" + "Mean1\tMean2\tMean3");
            for (i = 0; i < len1; i++) {
                System.out.println(pt1[i] + "       " + pt2[i] + "     " + pt3[i]);
                if (pt1[i] < pt2[i] && pt1[i] < pt3[i]) {
                    for (int l = 0; l < 4; l++) {
                        cluster1[IteratioArr1][l] = arr[i][l];
                        System.out.println(arr[i][l]);
                    }
                    IteratioArr1++;
                } else if (pt2[i] < pt3[i] && pt2[i] < pt1[i]) {
                    for (int l = 0; l < 4; l++) {
                        cluster2[IteratioArr2][l] = arr[i][l];
                    }

                    IteratioArr2++;
                } else if (pt3[i] < pt1[i] && pt3[i] < pt2[i]) {
                    for (int l = 0; l < 4; l++) {
                        cluster3[IteratioArr3][l] = arr[i][l];
                    }

                    IteratioArr3++;
                }
            }

            System.out.println("Cluster 1 Points:");
            for (i = 0; i < IteratioArr1; i++) {
                System.out.println("( " + cluster1[i][0] + " , " + cluster1[i][1] + " , " + cluster1[i][2] + ", " + cluster1[i][3] + ")");
            }

            System.out.println("Cluster 2 Points:");
            for (i = 0; i < IteratioArr2; i++) {
                System.out.println("( " + cluster2[i][0] + " , " + cluster2[i][1] + " , " + cluster2[i][2] + ", " + cluster2[i][3] + ")");
            }


            System.out.println("Cluster 3 Points:");
            for (i = 0; i < IteratioArr3; i++) {
                System.out.println("( " + cluster3[i][0] + " , " + cluster3[i][1] + " , " + cluster3[i][2] + ", " + cluster3[i][3] + ")");
            }


            float[] cluster1Avg = findAvg(cluster1, IteratioArr1);
            float[] cluster2Avg = findAvg(cluster2, IteratioArr2);
            float[] cluster3Avg = findAvg(cluster3, IteratioArr3);

            System.out.println("In ITERATION " + N + " CLUSTER 1(centroid):" + cluster1Avg[0] + "  " + cluster1Avg[1] + "  " + cluster1Avg[2] + "  " + cluster1Avg[3]);
            System.out.println("OLD CLUSTER 1:" + cluster1_10[0] + "  " + cluster1_10[1] + "  " + cluster1_10[2] + "  " + cluster1_10[3]);

            System.out.println("In ITERATION " + N + " CLUSTER 2(centroid):" + cluster2Avg[0] + "  " + cluster2Avg[1] + "  " + cluster2Avg[2] + "  " + cluster2Avg[3]);
            System.out.println("OLD CLUSTER 2:" + cluster2_10[0] + "  " + cluster2_10[1] + "  " + cluster2_10[2] + "  " + cluster2_10[3]);

            System.out.println("In ITERATION " + N + " CLUSTER 3(centroid):" + cluster3Avg[0] + "  " + cluster3Avg[1] + "  " + cluster3Avg[2] + "  " + cluster3Avg[3]);
            System.out.println("OLD CLUSTER 3:" + cluster3_10[0] + "  " + cluster3_10[1] + "   " + cluster3_10[2] + "  " + cluster3_10[3]);
            if (cluster1_10[0] == cluster1Avg[0] && cluster1_10[1] == cluster1Avg[1]
                    && cluster1_10[2] == cluster1Avg[2] && cluster1_10[3] == cluster1Avg[3]
                    && cluster2_10[0] == cluster2Avg[0] && cluster2_10[1] == cluster2Avg[1]
                    && cluster2_10[2] == cluster2Avg[2] && cluster2_10[3] == cluster2Avg[3]
                    && cluster3_10[0] == cluster3Avg[0] && cluster3_10[1] == cluster3Avg[1]
                    && cluster3_10[2] == cluster3Avg[2] && cluster3_10[3] == cluster3Avg[3]) {
                flag = false;
            } else {
                flag = true;
            }
            cluster1_10 = cluster1Avg;
            cluster2_10 = cluster2Avg;
            cluster3_10 = cluster3Avg;
            N++;

        } while (flag);
        System.out.println("------------------FINAL CLUSTERS AND POINTS---------------");
         System.out.println("Cluster 1 Points:");
            for (i = 0; i < IteratioArr1; i++) {
                System.out.println("( " + cluster1[i][0] + " , " + cluster1[i][1] + " , " + cluster1[i][2] + ", " + cluster1[i][3] + ")");
            }

            System.out.println("Cluster 2 Points:");
            for (i = 0; i < IteratioArr2; i++) {
                System.out.println("( " + cluster2[i][0] + " , " + cluster2[i][1] + " , " + cluster2[i][2] + ", " + cluster2[i][3] + ")");
            }


            System.out.println("Cluster 3 Points:");
            for (i = 0; i < IteratioArr3; i++) {
                System.out.println("( " + cluster3[i][0] + " , " + cluster3[i][1] + " , " + cluster3[i][2] + ", " + cluster3[i][3] + ")");
            }

    }

    private static float[] pointCalculation(float[][] arr, float[] clusterpt1) {
        int len1 = arr.length;
        int len2 = arr[0].length;
        float pt[] = new float[len1];
        for (int i = 0; i < len1; i++) {
            int sum = 0;
            for (int j = 0; j < len2; j++) {
                if ((arr[i][j] - clusterpt1[j]) < 0) {
                    sum += ((arr[i][j] - clusterpt1[j]) * -1);
                } else {
                    sum += (arr[i][j] - clusterpt1[j]);
                }
            }
            pt[i] = sum;
        }
        return pt;
    }

    private static float[] findAvg(float[][] cluster, int len) throws java.lang.ArrayIndexOutOfBoundsException {
        float ptSum[] = new float[cluster[0].length];
        float avg[] = new float[cluster[0].length];
        float sum = 0;
        for (int i = 0; i < cluster[0].length; i++) {
            sum = 0;
            for (int j = 0; j < len; j++) {
                sum += cluster[j][i];
            }
            ptSum[i] = sum;
        }
        for (int i = 0; i < cluster[0].length; i++) {
            avg[i] = ptSum[i] / len;
        }
        return avg;
    }
}
