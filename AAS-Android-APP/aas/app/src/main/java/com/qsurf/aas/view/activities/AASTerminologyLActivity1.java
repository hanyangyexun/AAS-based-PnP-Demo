package com.qsurf.aas.view.activities;

import android.content.Intent;
import android.os.Bundle;
import android.view.MotionEvent;
import android.view.View;
import android.view.WindowManager;
import android.widget.ImageView;
import android.widget.LinearLayout;

import com.qsurf.aas.R;

public class AASTerminologyLActivity1 extends ParentActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_aas_terminology_l_1);
        //ImageView myview = findViewById(R.id.imageView);


        getWindow().addFlags(WindowManager.LayoutParams.FLAG_TURN_SCREEN_ON | WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

        LinearLayout ll = (LinearLayout) findViewById(R.id.ll);

        ImageView iv_motor = (ImageView) findViewById(R.id.motor_iv);
        ImageView iv_robot = (ImageView) findViewById(R.id.robot_iv);

        iv_motor.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(AASTerminologyLActivity1.this, AASBrowserLActivity.class);
                intent.putExtra("type", "motor");
                startActivity(intent);
            }
        });
        iv_robot.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(AASTerminologyLActivity1.this, AASBrowserLActivity.class);
                intent.putExtra("type", "robot");
                startActivity(intent);
            }
        });
    }
}