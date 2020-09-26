package com.qsurf.aas.view.activities;

import android.content.BroadcastReceiver;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.res.AssetManager;
import android.os.AsyncTask;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.util.Log;
import android.view.WindowManager;
import android.widget.ImageView;
import android.widget.Toast;

import com.qsurf.aas.R;
import com.qsurf.aas.util.RequestHttpURLConnection;
import com.qsurf.aas.view.adapters.Dir;
import com.qsurf.aas.view.adapters.DirectoryNodeBinder;
import com.qsurf.aas.view.adapters.File;
import com.qsurf.aas.view.adapters.FileNodeBinder;
import com.qsurf.aas.view.adapters.TreeNode;
import com.qsurf.aas.view.adapters.TreeViewAdapter;

import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class AASBrowserPActivity extends AppCompatActivity {
    private static final String TAG = "TREEVIEW";
    private static final String MOTOR_URL = "http://192.168.0.140:8080/xmldata.xml";    //motor xml url
    private static final String ROBOT_URL = "http://192.168.0.141:8080/xmldata.xml";    //robot xml url
    private static final String ACTION_FOR_INTENT_CALLBACK = "THIS_IS_A_UNIQUE_KEY_WE_USE_TO_COMMUNICATE";

    private RecyclerView mRecycleView;
    private TreeViewAdapter mAdapter;
    List<TreeNode> mNodes;
    String a1,a2,a3,a4,a5; //motor data
    String b1,b2,b3,b4,b5,b6,b7; //robot data
    String qrcode;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_aas_browser_p);

        getWindow().addFlags(WindowManager.LayoutParams.FLAG_TURN_SCREEN_ON | WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

        mRecycleView = (RecyclerView) findViewById(R.id.rv);
        mRecycleView.setLayoutManager(new LinearLayoutManager(this));
		
		mNodes = new ArrayList<>();
        // makeMotorTree();

        /*
        mAdapter = new TreeViewAdapter(mNodes, Arrays.asList(new FileNodeBinder(), new DirectoryNodeBinder()));
        mAdapter.setOnTreeNodeListener(new TreeViewAdapter.OnTreeNodeListener() {
            @Override
            public boolean onClick(TreeNode node, RecyclerView.ViewHolder holder) {
                if (!node.isLeaf()) {
                    //Update and toggle the node.
                    onToggle(!node.isExpand(), holder);
                }
                return false;
            }

            @Override
            public void onToggle(boolean isExpand, RecyclerView.ViewHolder holder) {
                DirectoryNodeBinder.ViewHolder dirViewHolder = (DirectoryNodeBinder.ViewHolder) holder;
                final ImageView ivArrow = dirViewHolder.getIvArrow();
                int rotateDegree = isExpand ? 90 : -90;
                ivArrow.animate().rotationBy(rotateDegree)
                        .start();
            }
        });

        mRecycleView.setAdapter(mAdapter);
        */

        qrcode = getIntent().getStringExtra("qrcode");
        if(qrcode.equals("http://www.csslab.hanyang.ac.kr/aas/motor3")) {
            ((AppCompatActivity) this).getSupportActionBar().setTitle("Insights into AAS_Motor");
            loadDataMotor();
        }
        else if (qrcode.equals("http://www.csslab.hanyang.ac.kr/aas/robot1")){
            ((AppCompatActivity) this).getSupportActionBar().setTitle("Insights into AAS_Robot");
            loadDataRobot();
        }
        else{
            Toast.makeText(this, "QR Scan failed...", Toast.LENGTH_LONG).show();
        }
    }

    @Override
    public void onResume() {
        super.onResume();
        registerReceiver(receiver, new IntentFilter(ACTION_FOR_INTENT_CALLBACK));
    }

    @Override
    public void onPause() {
        super.onPause();
        unregisterReceiver(receiver);
    }

    public class NetworkTask extends AsyncTask<Void, Void, String> {
        public static final String HTTP_RESPONSE = "httpResponse";

        private Context mContext;
        private String mAction;
        private String mUrl;

        NetworkTask(Context context, String action, String url) {
            this.mContext = context;
            this.mAction = action;
            this.mUrl = url;
        }

        @Override
        protected void onPreExecute() {
            super.onPreExecute();
        }

        @Override
        protected String doInBackground(Void... params) {
            String result;
            RequestHttpURLConnection requestHttpURLConnection = new RequestHttpURLConnection();
            result = requestHttpURLConnection.request(mUrl);
            return result;
        }

        @Override
        protected void onPostExecute(String result) {
            Intent intent = new Intent(mAction);
            intent.putExtra(HTTP_RESPONSE, result);
            mContext.sendBroadcast(intent);
        }
    }

    private BroadcastReceiver receiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            String response = intent.getStringExtra(NetworkTask.HTTP_RESPONSE);
                try {
                    XmlPullParserFactory factory = XmlPullParserFactory.newInstance();
                    XmlPullParser parser = factory.newPullParser();

                    byte[] bytes = Charset.forName("UTF-8").encode(response).array();
                    InputStream is = new ByteArrayInputStream(bytes);
                    parser.setInput(new InputStreamReader(is, "UTF-8"));

                    int eventType = parser.getEventType();

                    while (eventType != XmlPullParser.END_DOCUMENT) {
                        switch (eventType) {
                            case XmlPullParser.START_TAG:
                                String startTag = parser.getName();
                                if (startTag.equals("ControlValue")) {
                                    a1 = parser.nextText();
                                    Log.e("TTT", "ControlValue :" + a1);
                                } else if (startTag.equals("EnergyValue")) {
                                    a2 = parser.nextText();
                                    Log.e("TTT", "EnergyValue :" + a2);
                                } else if (startTag.equals("EnergyLevel")) {
                                    a3 = parser.nextText();
                                    Log.e("TTT", "EnergyLevel :" + a3);
                                } else if (startTag.equals("RuntimeSpeed")) {
                                    a4 = parser.nextText();
                                    Log.e("TTT", "RuntimeSpeed :" + a4);
                                } else if (startTag.equals("EnergyEfficiency")) {
                                    a5 = parser.nextText();
                                    Log.e("TTT", "EnergyEfficiency :" + a5);
                                } else if (startTag.equals("robot1")) {
                                    b1 = parser.nextText();
                                    Log.e("TTT", "robot1 :" + b1);
                                } else if (startTag.equals("robot2")) {
                                    b2 = parser.nextText();
                                    Log.e("TTT", "robot2 :" + b2);
                                } else if (startTag.equals("robot3")) {
                                    b3 = parser.nextText();
                                    Log.e("TTT", "robot3 :" + b3);
                                } else if (startTag.equals("robot4")) {
                                    b4 = parser.nextText();
                                    Log.e("TTT", "robot4 :" + b4);
                                } else if (startTag.equals("robot5")) {
                                    b5 = parser.nextText();
                                    Log.e("TTT", "robot5 :" + b5);
                                } else if (startTag.equals("robot6")) {
                                    b6 = parser.nextText();
                                    Log.e("TTT", "robot6 :" + b6);
                                } else if (startTag.equals("robot7")) {
                                    b7 = parser.nextText();
                                    Log.e("TTT", "robot7 :" + b7);
                                }
                                break;
                            case XmlPullParser.END_TAG:
                                String endTag = parser.getName();
                                break;
                        }
                        eventType = parser.next();
                    }
                } catch (XmlPullParserException e) {
                    e.printStackTrace();
                } catch (UnsupportedEncodingException e) {
                    e.printStackTrace();
                } catch (IOException e) {
                    e.printStackTrace();
                }

                if (qrcode.equals("http://www.csslab.hanyang.ac.kr/aas/motor3")) {
                    makeMotorTree();
                } else if (qrcode.equals("http://www.csslab.hanyang.ac.kr/aas/robot1")) {
                    makeRobotTree();
                }

                mAdapter = new TreeViewAdapter(mNodes, Arrays.asList(new FileNodeBinder(), new DirectoryNodeBinder()));
                mAdapter.setOnTreeNodeListener(new TreeViewAdapter.OnTreeNodeListener() {
                    @Override
                    public boolean onClick(TreeNode node, RecyclerView.ViewHolder holder) {
                        if (!node.isLeaf()) {
                            //Update and toggle the node.
                            onToggle(!node.isExpand(), holder);
                        }
                        return false;
                    }

                    @Override
                    public void onToggle(boolean isExpand, RecyclerView.ViewHolder holder) {
                        DirectoryNodeBinder.ViewHolder dirViewHolder = (DirectoryNodeBinder.ViewHolder) holder;
                        final ImageView ivArrow = dirViewHolder.getIvArrow();
                        int rotateDegree = isExpand ? 90 : -90;
                        ivArrow.animate().rotationBy(rotateDegree)
                                .start();
                    }
                });
                mRecycleView.setAdapter(mAdapter);
                //mAdapter.notifyDataSetChanged();
            }
    };
	private void makeMotorTree() {
        mNodes.clear();

        TreeNode<Dir> appA = new TreeNode<>(new Dir("Asset Administration Shell of Motor_3"));
        TreeNode<Dir> appH = new TreeNode<>(new Dir("DF Header"));
        TreeNode<Dir> appB = new TreeNode<>(new Dir("DF Body"));
        appA.addChild(appH);
        appA.addChild(appB);
        appH.addChild(new TreeNode<>(new File("- Identification of the Asset: <URL: http://www.csslab.hanyang.ac.kr/asset/motor3>")));
        appH.addChild(new TreeNode<>(new File("- Identification of the AAS: <URL: http://www.csslab.hanyang.ac.kr/aas/motor3>")));
        appH.addChild(new TreeNode<>(new File("- Number of Generic Submodel: 4")));
        appH.addChild(new TreeNode<>(new File("- Number of Specific Submodel: 1")));

        appB.addChild(new TreeNode<>(new Dir("Submodel 1: Index data item"))
                .addChild(new TreeNode<>(new File("- 1: Index data item <GUID: 6bf6e423-72cd-42d8-9cab-47eb438509bb>")))
                .addChild(new TreeNode<>(new File("- 2: Property Value Statement <GUID: 8bc98f00-3e5d-4ff1-8992-d74db2b51947>")))
                .addChild(new TreeNode<>(new File("- 3: Documentation <GUID: c92892db-6531-45ca-a252-c398b823bb55>")))
                .addChild(new TreeNode<>(new File("- 4: Communication <GUID: a34d3457-091a-49b3-b324-d4c17b55083a>")))
                .addChild(new TreeNode<>(new File("- 5: Energy Efficiency <GUID: c64d4977-cfab-457b-92f0-cf12a04d2e09>")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 2: Property value statement"))
                .addChild(new TreeNode<>(new File("- Asset name: Motor_5 (EzM2-56L-A Series)")))
                .addChild(new TreeNode<>(new File("- Asset manufacturer: FASTECH")))
                .addChild(new TreeNode<>(new File("- Dimensions: 80mm*57mm*47mm")))
                .addChild(new TreeNode<>(new File("- Rotor inertia (g·cm²): 520")))
                .addChild(new TreeNode<>(new File("- Current (A): 3")))
                .addChild(new TreeNode<>(new File("- Holding Torque (N·m): 1.5")))
                .addChild(new TreeNode<>(new File("- Motor Driver: EzS2-PE Series")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submdel 3: Documentation"))
                .addChild(new TreeNode<>(new Dir("Configuration"))
                        .addChild(new TreeNode<>(new File("- isServiceEnabled: True")))
                        .addChild(new TreeNode<>(new File("- Motor IP: 192.168.0.5:3001")))
                        .addChild(new TreeNode<>(new File("- Maximum speed (rpm): 900")))
                )
                .addChild(new TreeNode<>(new Dir("Runtime"))
                        .addChild(new TreeNode<>(new File("- isRunning: True")))
                        .addChild(new TreeNode<>(new File("- Running speed (rpm): 0~900")))
                )
                .addChild(new TreeNode<>(new Dir("Life cycle"))
                        .addChild(new TreeNode<>(new File("- Life cycle stages: Engineering - Operation - End of Life")))
                        .addChild(new TreeNode<>(new File("- Current stage: Operation")))
                )
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 4: Communication"))
                .addChild(new TreeNode<>(new File("- Number of interface: 1")))
                .addChild(new TreeNode<>(new File("- External interface: UDP")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 5: Energy efficiency"))
                .addChild(new TreeNode<>(new File("- Motor running mode: Controllable")))
                .addChild(new TreeNode<>(new Dir("Input"))
                        .addChild(new TreeNode<>(new File("- Speed control value: " + a1)))
                        .addChild(new TreeNode<>(new File("- Data type: String")))
                )
                .addChild(new TreeNode<>(new Dir("Output"))
                        .addChild(new TreeNode<>(new File("- Runtime speed (rpm): " + a4)))
                        .addChild(new TreeNode<>(new File("- Power consumption value (W): " + a2)))
                        .addChild(new TreeNode<>(new File("- Power consumption level: " + a3)))
                        .addChild(new TreeNode<>(new File("- Energy efficiency (%): " + a5)))
                        .addChild(new TreeNode<>(new File("- Data type: String")))
                )
        );

        mNodes.add(appA);
    }

    private void makeRobotTree() {
        mNodes.clear();

        TreeNode<Dir> appA = new TreeNode<>(new Dir("Asset Administration Shell of Robot_1"));
        TreeNode<Dir> appH = new TreeNode<>(new Dir("DF Header"));
        TreeNode<Dir> appB = new TreeNode<>(new Dir("DF Body"));
        appA.addChild(appH);
        appA.addChild(appB);
        appH.addChild(new TreeNode<>(new File("- Identification of the Asset: <URL: http://www.csslab.hanyang.ac.kr/asset/robot1>")));
        appH.addChild(new TreeNode<>(new File("- Identification of the AAS: <URL: http://www.csslab.hanyang.ac.kr/aas/robot1>")));
        appH.addChild(new TreeNode<>(new File("- Number of Generic Submodel: 4")));
        appH.addChild(new TreeNode<>(new File("- Number of Specific Submodel: 1")));

        appB.addChild(new TreeNode<>(new Dir("Submodel 1: Index data item"))
                .addChild(new TreeNode<>(new File("- 1: Index data item <GUID: b2774251-652d-4ef9-b758-751c7ef2e870>")))
                .addChild(new TreeNode<>(new File("- 2: Property Value Statement <GUID: c9dd8b70-0026-419e-82d2-abcf6fccd2c3>")))
                .addChild(new TreeNode<>(new File("- 3: Documentation <GUID: 23cfb5d6-cc53-4a54-9b35-87a07d1030ad>")))
                .addChild(new TreeNode<>(new File("- 4: Communication <GUID: 0e07e378-78bf-4335-a9ab-08630c78ef39>")))
                .addChild(new TreeNode<>(new File("- 5: Pick-and-Place <GUID: 8abb6760-bc2d-4560-ab25-6516c79c8b3f>")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 2: Property value statement"))
                .addChild(new TreeNode<>(new File("- Asset name: uArm Robot")))
                .addChild(new TreeNode<>(new File("- Asset manufacturer: tUFACTORY")))
                .addChild(new TreeNode<>(new File("- Degree of freedom: 4")))
                .addChild(new TreeNode<>(new File("- Number of motor: 5")))
                .addChild(new TreeNode<>(new File("- Input Voltage (V): 12")))
                .addChild(new TreeNode<>(new File("- Connector: Micro USB")))
                .addChild(new TreeNode<>(new File("- Wireless: Bluetooth 4.0")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 3: Documentation"))
                .addChild(new TreeNode<>(new Dir("Configuration"))
                        .addChild(new TreeNode<>(new File("- Maximum payload (g): 500")))
                        .addChild(new TreeNode<>(new File("- Maximum linear speed (mm/s): 100")))
                )
                .addChild(new TreeNode<>(new Dir("Runtime"))
                        .addChild(new TreeNode<>(new File("- isRunning: True")))
                        .addChild(new TreeNode<>(new File("- Joint motor speed (°/s): 40")))
                        .addChild(new TreeNode<>(new File("- Joint motor torque (kg*cm): 12")))
                )
                .addChild(new TreeNode<>(new Dir("Life cycle"))
                        .addChild(new TreeNode<>(new File("- Life cycle stages: Engineering - Operation - End of Life")))
                        .addChild(new TreeNode<>(new File("- Current stage: Operation")))
                )
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 4: Communication"))
                .addChild(new TreeNode<>(new File("- Number of interface: 1")))
                .addChild(new TreeNode<>(new File("- External interface: Serial port")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 5: Pick-and-Place"))
                .addChild(new TreeNode<>(new Dir("Input (Sensor status)"))
                        .addChild(new TreeNode<>(new File("- Sensor distance (cm): " + b1)))
                        .addChild(new TreeNode<>(new File("- Data type: String")))
                )
                .addChild(new TreeNode<>(new Dir("Output (Robot status)"))
                        .addChild(new TreeNode<>(new File("- Coordinate_X (cm): " + b2)))
                        .addChild(new TreeNode<>(new File("- Coordinate_Y (cm): " + b3)))
                        .addChild(new TreeNode<>(new File("- Coordinate_Z (cm): " + b4)))
                        .addChild(new TreeNode<>(new File("- BaseMotor_Angle (°): " + b5)))
                        .addChild(new TreeNode<>(new File("- LeftMotor_Angle (°): " + b6)))
                        .addChild(new TreeNode<>(new File("- RightMotor_Angle (°): " + b7)))
                        .addChild(new TreeNode<>(new File("- Data type: String")))
                )
        );

        mNodes.add(appA);
    }

    private void loadDataMotor() {
        NetworkTask task = new NetworkTask(this, ACTION_FOR_INTENT_CALLBACK, MOTOR_URL);
        task.execute();
    }
	
    private void loadDataRobot() {
        NetworkTask task = new NetworkTask(this, ACTION_FOR_INTENT_CALLBACK, ROBOT_URL);
        task.execute();
    }
    
}
