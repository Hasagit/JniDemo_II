package com.jnidemo;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by DengJf on 2017/10/10.
 */

public class JniUntil {
    public native String getString(String str);

    public native int sum(int a,int b);

    public native int sumArray(int array[]);

    public int getNum(){
        return 1;
    }

    static {
        System.loadLibrary("JniTest");
    }
}
