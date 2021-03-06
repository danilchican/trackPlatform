package com.example.kimentii.application20.activities;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.support.v7.app.ActionBar;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import com.example.kimentii.application20.R;
import com.example.kimentii.application20.connectors.BluetoothConnector;
import com.example.kimentii.application20.constants.Constants;
import com.example.kimentii.application20.controllers.SensorsController;
import com.example.kimentii.application20.settings.Settings;
import com.example.kimentii.application20.wrappers.LanguageWrapper;

public class SensorsActivity extends AppCompatActivity {

    private TextView distanceSensorsTV;
    private TextView lineSensorsTV;
    private TextView connectionStateTextView;

    // distance sensors
    private TextView firstDistanceSensorTV;
    private TextView secondDistanceSensorTV;
    private TextView thirdDistanceSensorTV;
    private TextView fourthDistanceSensorTV;
    private TextView fifthDistanceSensorTV;
    // distance sensors values
    private TextView firstDistanceSensorValueTV;
    private TextView secondDistanceSensorValueTV;
    private TextView thirdDistanceSensorValueTV;
    private TextView fourthDistanceSensorValueTV;
    private TextView fifthDistanceSensorValueTV;

    // line sensors
    private TextView firstLineSensorTV;
    private TextView secondLineSensorTV;
    private TextView thirdLineSensorTV;
    private TextView fourthLineSensorTV;
    private TextView fifthLineSensorTV;
    // line sensors values
    private TextView firstLineSensorValueTV;
    private TextView secondLineSensorValueTV;
    private TextView thirdLineSensorValueTV;
    private TextView fourthLineSensorValueTV;
    private TextView fifthLineSensorValueTV;

    BluetoothConnector bluetoothConnector;
    SensorsController sensorsController;

    private void setLocaleLanguage() {
        if (bluetoothConnector != null && bluetoothConnector.isConnected()) {
            connectionStateTextView.setText(Settings.getInstance().getLanguageWrapper().
                    getViewString(LanguageWrapper.CONNECTED));
        } else {
            connectionStateTextView.setText(Settings.getInstance().getLanguageWrapper().
                    getViewString(LanguageWrapper.NO_CONNECTION));
        }
        distanceSensorsTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.DISTANCE_SENSORS));
        lineSensorsTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.LINE_SENSORS));

        // distance sensors
        firstDistanceSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.FIRST_SENSOR));
        secondDistanceSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.SECOND_SENSOR));
        thirdDistanceSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.THIRD_SENSOR));
        fourthDistanceSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.FOURTH_SENSOR));
        fifthDistanceSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.FIRST_SENSOR));

        // line  sensors
        firstLineSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.FIRST_SENSOR));
        secondLineSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.SECOND_SENSOR));
        thirdLineSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.THIRD_SENSOR));
        fourthLineSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.FOURTH_SENSOR));
        fifthLineSensorTV.setText(Settings.getInstance().getLanguageWrapper().
                getViewString(LanguageWrapper.FIFTH_SENSOR));

    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_sensors);
        ActionBar actionBar = getSupportActionBar();
        actionBar.setHomeButtonEnabled(true);
        actionBar.setDisplayHomeAsUpEnabled(true);

        Handler handler = new Handler() {
            @Override
            public void handleMessage(Message msg) {
                if (msg.what == Constants.Messages.MESSAGES_READ_DISTANCE_SENSORS_VALUES.getValue()) {
                    int data[] = (int[]) msg.obj;
                    firstDistanceSensorValueTV.setText(String.valueOf(data[0]));
                    secondDistanceSensorValueTV.setText(String.valueOf(data[1]));
                    thirdDistanceSensorValueTV.setText(String.valueOf(data[2]));
                    fourthDistanceSensorValueTV.setText(String.valueOf(data[3]));
                    fifthDistanceSensorValueTV.setText(String.valueOf(data[4]));
                } else if (msg.what == Constants.Messages.MESSAGES_READ_LINE_SENSORS_VALUES.getValue()) {
                    int data[] = (int[]) msg.obj;
                    firstLineSensorValueTV.setText(String.valueOf(data[0]));
                    secondLineSensorValueTV.setText(String.valueOf(data[1]));
                    thirdLineSensorValueTV.setText(String.valueOf(data[2]));
                    fourthLineSensorValueTV.setText(String.valueOf(data[3]));
                    fifthLineSensorValueTV.setText(String.valueOf(data[4]));
                }

            }
        };
        bluetoothConnector = BluetoothConnector.getInstance();
        bluetoothConnector.setHandler(handler);

        sensorsController = new SensorsController();

        connectionStateTextView = (TextView) findViewById(R.id.connection_state_tv_sensors_activity);
        distanceSensorsTV = (TextView) findViewById(R.id.distance_sensors_tv);
        lineSensorsTV = (TextView) findViewById(R.id.line_sensors_tv);

        // distance sensors
        firstDistanceSensorTV = (TextView) findViewById(R.id.first_distance_sensor_tv);
        secondDistanceSensorTV = (TextView) findViewById(R.id.second_distance_sensor_tv);
        thirdDistanceSensorTV = (TextView) findViewById(R.id.third_distance_sensor_tv);
        fourthDistanceSensorTV = (TextView) findViewById(R.id.fourth_distance_sensor_tv);
        fifthDistanceSensorTV = (TextView) findViewById(R.id.fifth_distance_sensor_tv);

        // line sensors
        firstLineSensorTV = (TextView) findViewById(R.id.first_line_sensor_tv);
        secondLineSensorTV = (TextView) findViewById(R.id.second_line_sensor_tv);
        thirdLineSensorTV = (TextView) findViewById(R.id.third_line_sensor_tv);
        fourthLineSensorTV = (TextView) findViewById(R.id.fourth_line_sensor_tv);
        fifthLineSensorTV = (TextView) findViewById(R.id.fifth_line_sensor_tv);

        setLocaleLanguage();

        // distance sensors values
        firstDistanceSensorValueTV = (TextView) findViewById(R.id.first_distance_sensor_value_tv);
        secondDistanceSensorValueTV = (TextView) findViewById(R.id.second_distance_sensor_value_tv);
        thirdDistanceSensorValueTV = (TextView) findViewById(R.id.third_distance_sensor_value_tv);
        fourthDistanceSensorValueTV = (TextView) findViewById(R.id.fourth_distance_sensor_value_tv);
        fifthDistanceSensorValueTV = (TextView) findViewById(R.id.fifth_distance_sensor_value_tv);

        // line sensors values
        firstLineSensorValueTV = (TextView) findViewById(R.id.first_line_sensor_value_tv);
        secondLineSensorValueTV = (TextView) findViewById(R.id.second_line_sensor_value_tv);
        thirdLineSensorValueTV = (TextView) findViewById(R.id.third_line_sensor_value_tv);
        fourthLineSensorValueTV = (TextView) findViewById(R.id.fourth_line_sensor_value_tv);
        fifthLineSensorValueTV = (TextView) findViewById(R.id.fifth_line_sensor_value_tv);

        sensorsController.getDataFromDistanceSensors();
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        sensorsController.getDataFromLineSensors();
    }

    public static Intent newIntent(Context context) {
        return new Intent(context, SensorsActivity.class);
    }
}
