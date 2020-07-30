package com.qsurf.aas.view.activities;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.widget.Toast;

import com.google.zxing.integration.android.IntentIntegrator;
import com.google.zxing.integration.android.IntentResult;

public class QRScanActivity extends Activity {
    private IntentIntegrator qrScan;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        qrScan = new IntentIntegrator(this);
        qrScan.setBeepEnabled(false);
        qrScan.setCaptureActivity(QRCustomActivity.class);
        qrScan.setOrientationLocked(false);
        qrScan.initiateScan();
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        if(resultCode == Activity.RESULT_OK) {
            IntentResult scanResult = IntentIntegrator.parseActivityResult(requestCode, resultCode, data);
            Intent intent = new Intent(QRScanActivity.this, AASBrowserPActivity.class);
            intent.putExtra("qrcode", scanResult.getContents());
            startActivity(intent);
            finish();

        } else {
            super.onActivityResult(requestCode, resultCode, data);

            Toast.makeText(this, "QR Scan failed", Toast.LENGTH_LONG).show();
            finish();
        }
    }
}
