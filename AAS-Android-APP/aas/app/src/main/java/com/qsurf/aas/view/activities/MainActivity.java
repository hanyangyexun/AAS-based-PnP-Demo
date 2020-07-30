package com.qsurf.aas.view.activities;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.widget.ImageView;

import com.qsurf.aas.R;

import java.io.InputStream;

public class MainActivity extends ParentActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);


        try {
            Intent intent;

            InputStream ism = Runtime.getRuntime().exec("getprop ro.build.characteristics").getInputStream();
            byte[] bts = new byte[1024];
            ism.read(bts);
            ism.close();

            boolean isTablet = new String(bts).toLowerCase().contains("tablet");
            if (isTablet) {
                intent = new Intent(MainActivity.this, AASEcosystemLActivity.class);
            } else {
                intent = new Intent(MainActivity.this, QRScanActivity.class);
            }
            startActivity(intent);
            finish();
        }
        catch (Throwable t) {
            Intent intent;
            intent = new Intent(MainActivity.this, AASEcosystemLActivity.class);
            startActivity(intent);
            finish();
        }
    }
}
