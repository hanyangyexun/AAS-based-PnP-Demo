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

public class AASBrowserLActivity extends AppCompatActivity {
    private static final String TAG = "TREEVIEW";
    private static final String MOTOR_URL = "http://192.168.0.178:3439/xmldata.xml";    //epson1 xml url
    private static final String ROBOT_URL = "http://192.168.0.178:3439/xmldata.xml";    //kuka xml url
    private static final String ACTION_FOR_INTENT_CALLBACK = "THIS_IS_A_UNIQUE_KEY_WE_USE_TO_COMMUNICATE";

    private RecyclerView mRecycleView;
    private TreeViewAdapter mAdapter;
    List<TreeNode> mNodes;
    String stype;
    String a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11; // epson1 data
    String b1,b2,b3,b4,b5,b6,b7, b8, b9, b10, b11; //kuka data

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_aas_browser_l);

        getWindow().addFlags(WindowManager.LayoutParams.FLAG_TURN_SCREEN_ON | WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

        mRecycleView = (RecyclerView) findViewById(R.id.rv);
        mRecycleView.setLayoutManager(new LinearLayoutManager(this));

        mNodes = new ArrayList<>();
        // makeMotorTree();

        /* this part is repeated as bellow*/
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

        stype = getIntent().getStringExtra("type");
        if (stype.equals("motor")) {
            // get motor xml
            ((AppCompatActivity) this).getSupportActionBar().setTitle("Insights into Asset Administration Shell of the Epson C4 Robot");
            loadDataMotor();
        }
        else {
            // get robot xml
            ((AppCompatActivity) this).getSupportActionBar().setTitle("Insights into Asset Administration Shell of the Kuka R540 Robot");
            loadDataRobot();
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
                while(eventType != XmlPullParser.END_DOCUMENT) {
                    switch (eventType) {
                        case XmlPullParser.START_TAG:
                            String startTag = parser.getName();

                            if(startTag.equals("robot1")) {
                                a1 = parser.nextText();
                                Log.e("TTT", "robot1 :" + a1);
                            } else if(startTag.equals("robot2")) {
                                a2 = parser.nextText();
                                Log.e("TTT", "robot2 :" + a2);
                            } else if(startTag.equals("robot3")) {
                                a3 = parser.nextText();
                                Log.e("TTT", "robot3 :" + a3);
                            } else if(startTag.equals("robot4")) {
                                a4 = parser.nextText();
                                Log.e("TTT", "robot4 :" + a4);
                            } else if(startTag.equals("robot5")) {
                                a5 = parser.nextText();
                                Log.e("TTT", "robot5 :" + a5);
                            } else if(startTag.equals("robot6")) {
                                a6 = parser.nextText();
                                Log.e("TTT", "robot6 :" + a6);
                            } else if(startTag.equals("robot7")) {
                                a7 = parser.nextText();
                                Log.e("TTT", "robot7 :" + a7);
                            } else if(startTag.equals("robot8")) {
                                a8 = parser.nextText();
                                Log.e("TTT", "robot8 :" + a8);
                            } else if(startTag.equals("robot9")) {
                                a9 = parser.nextText();
                                Log.e("TTT", "robot9 :" + a9);
                            } else if(startTag.equals("robot10")) {
                                a10 = parser.nextText();
                                Log.e("TTT", "robot10 :" + a10);
                            } else if(startTag.equals("robot11")) {
                                a11 = parser.nextText();
                                Log.e("TTT", "robot11 :" + a11);
                            } else if(startTag.equals("robot12")) {
                                b1 = parser.nextText();
                                Log.e("TTT", "robot12 :" + b1);
                            } else if(startTag.equals("robot13")) {
                                b2 = parser.nextText();
                                Log.e("TTT", "robot13 :" + b2);
                            } else if(startTag.equals("robot14")) {
                                b3 = parser.nextText();
                                Log.e("TTT", "robot14 :" + b3);
                            } else if(startTag.equals("robot15")) {
                                b4 = parser.nextText();
                                Log.e("TTT", "robot15 :" + b4);
                            } else if(startTag.equals("robot16")) {
                                b5 = parser.nextText();
                                Log.e("TTT", "robot16 :" + b5);
                            } else if(startTag.equals("robot17")) {
                                b6 = parser.nextText();
                                Log.e("TTT", "robot17 :" + b6);
                            } else if(startTag.equals("robot18")) {
                                b7 = parser.nextText();
                                Log.e("TTT", "robot18 :" + b7);
                            } else if(startTag.equals("robot19")) {
                                b8 = parser.nextText();
                                Log.e("TTT", "robot19 :" + b8);
                            } else if(startTag.equals("robot20")) {
                                b9 = parser.nextText();
                                Log.e("TTT", "robot20 :" + b9);
                            } else if(startTag.equals("robot21")) {
                                b10 = parser.nextText();
                                Log.e("TTT", "robot21 :" + b10);
                            } else if(startTag.equals("robot22")) {
                                b11 = parser.nextText();
                                Log.e("TTT", "robot22 :" + b11);
                            }
                            break;
                        case XmlPullParser.END_TAG:
                            String endTag = parser.getName();
                            break;
                    }
                    eventType = parser.next();
                }
            } catch(XmlPullParserException e) {
                e.printStackTrace();
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            } catch (IOException e) {
                e.printStackTrace();
            }

            if (stype.equals("motor")) {
                makeMotorTree();
            }
            else {
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

        TreeNode<Dir> appA = new TreeNode<>(new Dir("Asset Administration Shell of Epson C4 Robot"));
        TreeNode<Dir> appH = new TreeNode<>(new Dir("DF Header"));
        TreeNode<Dir> appB = new TreeNode<>(new Dir("DF Body"));
        appA.addChild(appH);
        appA.addChild(appB);
        appH.addChild(new TreeNode<>(new File("- Identification of the Asset:\t\t\t\t\t\t\t\t<URL: http://www.csslab.hanyang.ac.kr/asset/epsonC4>")));
        appH.addChild(new TreeNode<>(new File("- Identification of the AAS:\t\t\t\t\t\t\t\t<URL: http://www.csslab.hanyang.ac.kr/aas/epsonC4>")));
        appH.addChild(new TreeNode<>(new File("- Number of Generic Submodel:\t\t\t\t\t\t\t\t4")));
        appH.addChild(new TreeNode<>(new File("- Number of Specific Submodel:\t\t\t\t\t\t\t\t1")));

        appB.addChild(new TreeNode<>(new Dir("Submodel 1: Index data item"))
                .addChild(new TreeNode<>(new File("- 1: Index data item\t\t\t\t\t\t\t\t<GUID: 6bf6e423-72cd-42d8-9cab-47eb438509bb>")))
                .addChild(new TreeNode<>(new File("- 2: Property Value Statement\t\t\t\t\t\t\t\t<GUID: 8bc98f00-3e5d-4ff1-8992-d74db2b51947>")))
                .addChild(new TreeNode<>(new File("- 3: Documentation\t\t\t\t\t\t\t\t<GUID: c92892db-6531-45ca-a252-c398b823bb55>")))
                .addChild(new TreeNode<>(new File("- 4: Communication\t\t\t\t\t\t\t\t<GUID: a34d3457-091a-49b3-b324-d4c17b55083a>")))
                .addChild(new TreeNode<>(new File("- 5: Pick-and-Place\t\t\t\t\t\t\t\t<GUID: c64d4977-cfab-457b-92f0-cf12a04d2e09>")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 2: Property value statement"))
                .addChild(new TreeNode<>(new File("- Asset name:\t\t\t\t\t\t\t\tEpson C4 Compact 6-Axis Robot")))
                .addChild(new TreeNode<>(new File("- Asset manufacturer:\t\t\t\t\t\t\t\tEPSON")))
                .addChild(new TreeNode<>(new File("- Number of axes:\t\t\t\t\t\t\t\t6")))
                .addChild(new TreeNode<>(new File("- Weight:\t\t\t\t\t\t\t\t27 kg")))
                .addChild(new TreeNode<>(new File("- Cycle time:\t\t\t\t\t\t\t\t0.37 sec")))
                .addChild(new TreeNode<>(new File("- Repeatability:\t\t\t\t\t\t\t\t± 0.02 mm")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submdel 3: Documentation"))
                .addChild(new TreeNode<>(new Dir("Configuration"))
                        .addChild(new TreeNode<>(new File("- Max. payload (kg):\t\t\t\t\t\t\t\t4")))
                        .addChild(new TreeNode<>(new File("- Max. reach (mm):\t\t\t\t\t\t\t\t665")))
                        .addChild(new TreeNode<>(new File("- Max. speed (mm/s):\t\t\t\t\t\t\t\t4710")))
                )
                .addChild(new TreeNode<>(new Dir("Runtime"))
                        .addChild(new TreeNode<>(new File("- Linear speed (POV):\t\t\t\t\t\t\t\t10 %")))
                        .addChild(new TreeNode<>(new File("- isRunning:\t\t\t\t\t\t\t\tTrue")))
                        .addChild(new TreeNode<>(new File("- Controller:\t\t\t\t\t\t\t\tEpson RC700")))
                )
                .addChild(new TreeNode<>(new Dir("Life cycle"))
                        .addChild(new TreeNode<>(new File("- Life cycle stages:\t\t\t\t\t\t\t\tEngineering - Operation - End of Life")))
                        .addChild(new TreeNode<>(new File("- Current stage:\t\t\t\t\t\t\t\tOperation")))
                )
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 4: Communication"))
                .addChild(new TreeNode<>(new File("- Number of interface:\t\t\t\t\t\t\t\t1")))
                .addChild(new TreeNode<>(new File("- External interface:\t\t\t\t\t\t\t\tTCP/IP")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 5: Pick-and-Place"))
                .addChild(new TreeNode<>(new Dir("Control data"))
                        .addChild(new TreeNode<>(new File("- Command:\t\t\t\t\t\t\t\t" + a1)))
                        .addChild(new TreeNode<>(new File("- Data type:\t\t\t\t\t\t\t\tString")))
                )
                .addChild(new TreeNode<>(new Dir("Status data"))
                        .addChild(new TreeNode<>(new File("- Robot_state:\t\t\t\t\t\t\t\t" + a2)))
                        .addChild(new TreeNode<>(new File("- Gripper_state:\t\t\t\t\t\t\t\t" + a3)))
                        .addChild(new TreeNode<>(new File("- Sensors_state (LR):\t\t\t\t\t\t\t\t" + a4)))
                        .addChild(new TreeNode<>(new File("- Lamp_state:\t\t\t\t\t\t\t\t" + a5)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_X (mm):\t\t\t\t\t\t\t\t" + a6)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_Y (mm):\t\t\t\t\t\t\t\t" + a7)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_Z (mm):\t\t\t\t\t\t\t\t" + a8)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_U (°):\t\t\t\t\t\t\t\t" + a9)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_V (°):\t\t\t\t\t\t\t\t" + a10)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_W (°):\t\t\t\t\t\t\t\t" + a11)))
                        .addChild(new TreeNode<>(new File("- Data type:\t\t\t\t\t\t\t\tString")))
                )
        );

        mNodes.add(appA);
    }

    private void makeRobotTree() {
        mNodes.clear();

        TreeNode<Dir> appA = new TreeNode<>(new Dir("Asset Administration Shell of Kuka R540 Robot"));
        TreeNode<Dir> appH = new TreeNode<>(new Dir("DF Header"));
        TreeNode<Dir> appB = new TreeNode<>(new Dir("DF Body"));
        appA.addChild(appH);
        appA.addChild(appB);
        appH.addChild(new TreeNode<>(new File("- Identification of the Asset:\t\t\t\t\t\t\t\t<URL: http://www.csslab.hanyang.ac.kr/asset/kukarobot>")));
        appH.addChild(new TreeNode<>(new File("- Identification of the AAS:\t\t\t\t\t\t\t\t<URL: http://www.csslab.hanyang.ac.kr/aas/kukarobot>")));
        appH.addChild(new TreeNode<>(new File("- Number of Generic Submodel:\t\t\t\t\t\t\t\t4")));
        appH.addChild(new TreeNode<>(new File("- Number of Specific Submodel:\t\t\t\t\t\t\t\t1")));

        appB.addChild(new TreeNode<>(new Dir("Submodel 1: Index data item"))
                .addChild(new TreeNode<>(new File("- 1: Index data item\t\t\t\t\t\t\t\t<GUID: b2774251-652d-4ef9-b758-751c7ef2e870>")))
                .addChild(new TreeNode<>(new File("- 2: Property Value Statement\t\t\t\t\t\t\t\t<GUID: c9dd8b70-0026-419e-82d2-abcf6fccd2c3>")))
                .addChild(new TreeNode<>(new File("- 3: Documentation\t\t\t\t\t\t\t\t<GUID: 23cfb5d6-cc53-4a54-9b35-87a07d1030ad>")))
                .addChild(new TreeNode<>(new File("- 4: Communication\t\t\t\t\t\t\t\t<GUID: 0e07e378-78bf-4335-a9ab-08630c78ef39>")))
                .addChild(new TreeNode<>(new File("- 5: Pick-and-Place\t\t\t\t\t\t\t\t<GUID: 8abb6760-bc2d-4560-ab25-6516c79c8b3f>")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 2: Property value statement"))
                .addChild(new TreeNode<>(new File("- Asset name:\t\t\t\t\t\t\t\tKR 3 R540")))
                .addChild(new TreeNode<>(new File("- Asset manufacturer:\t\t\t\t\t\t\t\tKUKA AG")))
                .addChild(new TreeNode<>(new File("- Number of axes:\t\t\t\t\t\t\t\t6")))
                .addChild(new TreeNode<>(new File("- Footprint:\t\t\t\t\t\t\t\t179 mm x 179 mm")))
                .addChild(new TreeNode<>(new File("- Weight:\t\t\t\t\t\t\t\t26.5 kg")))
                .addChild(new TreeNode<>(new File("- Pose repeatability (ISO 9283):\t\t\t\t\t\t\t\t± 0.02 mm")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 3: Documentation"))
                .addChild(new TreeNode<>(new Dir("Configuration"))
                        .addChild(new TreeNode<>(new File("- Maximum payload (kg):\t\t\t\t\t\t\t\t3")))
                        .addChild(new TreeNode<>(new File("- Maximum reach (mm):\t\t\t\t\t\t\t\t541")))
                )
                .addChild(new TreeNode<>(new Dir("Runtime"))
                        .addChild(new TreeNode<>(new File("- isRunning:\t\t\t\t\t\t\t\tTrue")))
                        .addChild(new TreeNode<>(new File("- Linear speed (POV):\t\t\t\t\t\t\t\t10 %")))
                        .addChild(new TreeNode<>(new File("- Controller:\t\t\t\t\t\t\t\tKR C4 compact")))
                )
                .addChild(new TreeNode<>(new Dir("Life cycle"))
                        .addChild(new TreeNode<>(new File("- Life cycle stages:\t\t\t\t\t\t\t\tEngineering - Operation - End of Life")))
                        .addChild(new TreeNode<>(new File("- Current stage:\t\t\t\t\t\t\t\tOperation")))
                )
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 4: Communication"))
                .addChild(new TreeNode<>(new File("- Number of interface:\t\t\t\t\t\t\t\t1")))
                .addChild(new TreeNode<>(new File("- External interface:\t\t\t\t\t\t\t\tTCP/IP")))
        );

        appB.addChild(new TreeNode<>(new Dir("Submodel 5: Pick-and-Place"))
                .addChild(new TreeNode<>(new Dir("Control data"))
                        .addChild(new TreeNode<>(new File("- Command:\t\t\t\t\t\t\t\t" + b1)))
                        .addChild(new TreeNode<>(new File("- Data type:\t\t\t\t\t\t\t\tString")))
                )
                .addChild(new TreeNode<>(new Dir("Status data"))
                        .addChild(new TreeNode<>(new File("- Robot_state:\t\t\t\t\t\t\t\t" + b2)))
                        .addChild(new TreeNode<>(new File("- Gripper_state:\t\t\t\t\t\t\t\t" + b3)))
                        .addChild(new TreeNode<>(new File("- Sensors_state (LR):\t\t\t\t\t\t\t\t" + b4)))
                        .addChild(new TreeNode<>(new File("- Lamp_state:\t\t\t\t\t\t\t\t" + b5)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_X (mm):\t\t\t\t\t\t\t\t" + b6)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_Y (mm):\t\t\t\t\t\t\t\t" + b7)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_Z (mm):\t\t\t\t\t\t\t\t" + b8)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_A (°):\t\t\t\t\t\t\t\t" + b9)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_B (°):\t\t\t\t\t\t\t\t" + b10)))
                        .addChild(new TreeNode<>(new File("- Position_Axis_C (°):\t\t\t\t\t\t\t\t" + b11)))
                        .addChild(new TreeNode<>(new File("- Data type:\t\t\t\t\t\t\t\tString")))
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
