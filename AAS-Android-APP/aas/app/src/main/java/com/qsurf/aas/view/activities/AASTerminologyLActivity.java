package com.qsurf.aas.view.activities;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.MotionEvent;
import android.view.View;
import android.view.WindowManager;
import android.widget.ImageView;
import android.widget.LinearLayout;

import com.qsurf.aas.R;

public class AASTerminologyLActivity extends ParentActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_aas_terminology_l);
        ImageView myview=findViewById(R.id.imageView);


        getWindow().addFlags(WindowManager.LayoutParams.FLAG_TURN_SCREEN_ON | WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

        LinearLayout ll = (LinearLayout)findViewById(R.id.ll);
        ll.setOnTouchListener(new View.OnTouchListener() {
            public boolean onTouch(View v, MotionEvent event) {
                switch(event.getAction()) {
                    case MotionEvent.ACTION_DOWN :
                    case MotionEvent.ACTION_MOVE :
                    case MotionEvent.ACTION_UP   :
                        float x = event.getX();
                        float y = event.getY();

                        if (x == 10 && y == 10) {
//                            Intent intent = new Intent(AASEcosystemLActivity.this, AASTerminologyLActivity.class);
                            Intent intent = new Intent(AASTerminologyLActivity.this, AASTerminologyLActivity1.class);
                            startActivity(intent);
                        }
                        else if (x == 20 && y == 20) {
//                            Intent intent = new Intent(AASEcosystemLActivity.this, AASBrowserLActivity.class);
                            Intent intent = new Intent(AASTerminologyLActivity.this, AASBrowserLActivity.class);
                            startActivity(intent);
                        }
                        Intent intent = new Intent(AASTerminologyLActivity.this, AASTerminologyLActivity1.class);
                        startActivity(intent);
                }
                return true;
            }

    });
}
    }
