/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package cluster;

import java.io.*;
import java.lang.*;
import java.util.Scanner;

class input {

    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int i = 0, j = 0;
        boolean flag = true;
        System.out.println("Enter the totalpoints:");
        float totalpoints = sc.nextInt();
        System.out.println("Enter diffpts: ");
        float diffpts = sc.nextInt();
        float[][] arr = new float[Math.round(totalpoints)][Math.round(diffpts)];
        System.out.println("Enter the points one by one:");
        for (i = 0; i < totalpoints; i++) {
            System.out.println("Enter the points for :" + i + "th point");
            for (j = 0; j < diffpts; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter totalcluster: ");
        int totalcluster = sc.nextInt();
        float centreoidPts[][] = new float[totalcluster][Math.round(diffpts)];
        System.out.println("Enter the center points one by one from 1 to :" + (totalpoints - 1));
        for (i = 0; i < totalcluster; i++) {
            int val = sc.nextInt();
            centreoidPts[i] = arr[val - 1];
        }
        System.out.println("The input points are: ");
        printArray(arr, totalpoints, diffpts, "The point in position:");
        System.out.println("\nThe centeroid points are: ");
        printArray(centreoidPts, totalcluster, diffpts, "The centeroid point at:");

        int IteratioArr1 = 0;
        int IteratioArr2 = 0;
        int IteratioArr3 = 0;
        int N = 1;
        do {
            float[][] pt = pointCalculate(arr, centreoidPts);
            float[] avg = new float[pt[0].length];
            float[][] clusterptArray = clusterClassification(pt, centreoidPts.length);
            
            
            
            
                avg = findAvg(pt, pt.length);
         

            for (int n = 0; n < avg.length; n++) {
                System.out.println("The avg of avg[ " + n + " ]" + avg[n]);
            }

            printArray(pt, totalcluster, pt[0].length, "\nThe sum is:::::::::");
            flag = false;
        } while (flag);
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

    private static void printArray(float[][] arr, float arrayalength, float pts, String message) {
        for (int i = 0; i < arrayalength; i++) {
            System.out.println("\n" + message + (i + 1));
            for (int j = 0; j < pts; j++) {
                System.out.print("\t" + arr[i][j]);
            }
        }
    }

    private static float[] arrayPartition(int length) {
        float[] centreoidArray = new float[4];
        for (int i = 0; i < length; i++) {
        }
        return null;
    }

    private static float[][] pointCalculate(float[][] arr, float[][] centreoidPts) {
        int len1 = arr.length;
        int len2 = arr[0].length;
        float pt[][] = new float[len1][len1];
        int k = 0;
        for (int g = 0; g < centreoidPts.length; g++) {
            k = 0;
            for (int i = 0; i < len1; i++) {
                int sum = 0;
                for (int j = 0; j < len2; j++) {
                    if ((arr[i][j] - centreoidPts[g][j]) < 0) {
                        sum += ((arr[i][j] - centreoidPts[g][j]) * -1);
                    } else {
                        sum += (arr[i][j] - centreoidPts[g][j]);
                    }
                    if (j == (len2 - 1)) {
                        pt[g][k] = sum;
                        System.out.println(">>>>>>>>>>" + "   " + sum + "  " + pt[g][k]);
                    }


                }
                k++;


            }
        }
        return pt;
    }

    private static float[][] clusterClassification(float[][] pt, int ptlen) {
         //System.out.println("Iteration " + N + ":\n" + "Mean1\tMean2\tMean3");
        float[][] point = new float[ptlen][pt[0].length];
            for (int i = 0; i < ptlen; i++) {
                System.out.println("pt.length: " + pt.length + "\t pt[0].length:" + pt[0].length);
                 for (int j = 0; j < pt[0].length; j++) {
                System.out.println(pt[i][j] + "       " + pt[i][j] + "     " + pt[i][j]);
                 
               /* if (pt1[i] < pt2[i] && pt1[i] < pt3[i]) {
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
                }*/
            }

        
            }
        return null;
    }
}
