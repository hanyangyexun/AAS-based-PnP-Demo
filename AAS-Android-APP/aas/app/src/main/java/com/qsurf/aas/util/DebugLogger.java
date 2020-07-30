package com.qsurf.aas.util;

import android.util.Log;

public class DebugLogger {
	private static final boolean isDebug = true;
	private static final String debugHeader = "[ FLATI ] -- ";

	public static void v(String tag, String msg) {
		if(!isDebug) return;
		Log.v(tag, debugHeader + msg);
	}
	
	public static void i(String tag, String msg) {
		if(!isDebug) return;
		Log.i(tag, debugHeader + msg);
	}
	
	public static void d(String tag, String msg) {
		if(!isDebug) return;
		Log.d(tag, debugHeader + msg);
	}
	
	public static void w(String tag, String msg) {
		if(!isDebug) return;
		Log.w(tag, debugHeader + msg);
	}
	
	public static void e(String tag, String msg) {
		if(!isDebug) return;
		Log.e(tag, debugHeader + msg);
	}
}