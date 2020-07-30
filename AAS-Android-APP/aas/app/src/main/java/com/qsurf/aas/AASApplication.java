package com.qsurf.aas;

import android.app.Application;

public class AASApplication extends Application {
    private static final String TAG = "AASApplication";

    private static AASApplication appContext = null;

    @Override
    public void onCreate() {
        super.onCreate();

        appContext = this;
    }

    public static AASApplication getContext() {
        return appContext;
    }
}
