package com.bandonleon.ndkskeleton;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView outputTxt = (TextView) findViewById(R.id.output_txt);
        if (outputTxt != null) {
            outputTxt.setText(getOutputString());
        }
    }

    private native String getOutputString();

    static {
        System.loadLibrary("ndk-skeleton");
    }
}
