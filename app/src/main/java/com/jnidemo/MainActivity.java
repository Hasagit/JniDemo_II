package com.jnidemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity {
    private JniUntil until;
    //测试2
    //测试3
    //测试4
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView str = (TextView) findViewById(R.id.str_text);
        TextView integer = (TextView) findViewById(R.id.int_text);
        TextView array = (TextView) findViewById(R.id.array_text);
        until = new JniUntil();
        str.setText(until.getString("心系一处守口如瓶"));
        integer.setText(until.sum(5,7)+"");
        int a[]=new int[]{1,2,3,4,5,6,7,8,9};
        array.setText(until.sumArray(a)+"");
    }
}
