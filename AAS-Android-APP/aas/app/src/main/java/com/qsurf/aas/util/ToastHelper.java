package com.qsurf.aas.util;

import android.content.Context;
import android.widget.Toast;

public class ToastHelper {
	private static Toast toast;

	public static void show(Context context, String message) {

		if (toast != null) {
			toast.cancel();
		}
		toast = Toast.makeText(context, message, Toast.LENGTH_SHORT);
		toast.show();
	}
	
	public static void show(Context context, int msgId) {
		show(context, context.getResources().getString(msgId));
	}
	
	public static void cancel() {
		if (toast == null) return;
		
		toast.cancel();
		toast = null;
	}
}
