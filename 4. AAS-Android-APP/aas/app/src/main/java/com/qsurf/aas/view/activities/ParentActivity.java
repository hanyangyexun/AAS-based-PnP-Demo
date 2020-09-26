package com.qsurf.aas.view.activities;

import android.app.Activity;
import android.os.Bundle;

import com.qsurf.aas.R;

public class ParentActivity extends Activity {
    int onStartCount = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        onStartCount = 1;
        if (savedInstanceState == null) { // 1st time
            this.overridePendingTransition(R.anim.anim_slide_in_left, R.anim.anim_slide_out_left);
        } else { // already created so reverse animation
            onStartCount = 2;
        }
    }

    @Override
    protected void onStart() {
        super.onStart();
        if (onStartCount > 1) {
            this.overridePendingTransition(R.anim.anim_slide_in_right, R.anim.anim_slide_out_right);
        } else if (onStartCount == 1) {
            onStartCount++;
        }
    }
}
