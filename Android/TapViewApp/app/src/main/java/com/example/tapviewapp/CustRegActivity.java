package com.example.tapviewapp;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

/**
 * Created by 전성우 on 2016-01-19.
 */
public class CustRegActivity extends AppCompatActivity {
    @Override
    public void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);

        TextView textView = new TextView(this);
        textView.setText("고객등록 화면");
        setContentView(textView);
    }
}
