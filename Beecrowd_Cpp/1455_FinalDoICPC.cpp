#include <bits/stdc++.h>
using namespace std;

struct point_properties{
    long double distance = 0;
    long double x = 0;
    long double y = 0;
};

int main(){
    int n;
    int instance = 1;

    while(cin >> n, n != 0){
        cout << "----------------------" << endl;
        cout << "TESTE " << instance << endl;
        point_properties most_distant_point_to_origin, most_distant_point;
        vector<vector<long double>> points;
        long double circle_center_x, circle_center_y, circle_radius; 

        for(int i = 0; i < n; i++){
            long double _x, _y;
            cin >> _x >> _y;
            points.push_back({_x, _y});
        }
        cout << "Size: " << points.size() << endl;
        /*
        // Calculate ym and xm
        long double xm = 0, ym =0;
        for(auto point : points){
            long double x = point[0], y = point[1];
            xm += x;
            ym += y;
        }
        cout << "ym: " << ym << endl;
        cout << "xm: " << xm << endl;
        ym = ym / (double)points.size();
        xm = xm / (double)points.size();
        cout << "ymd: " << ym << endl;
        cout << "xmd: " << xm << endl;

        cout << "xm, ym: " <<"(" <<  xm << ", " << ym << ")" << endl;

        // Get most distant point to origin xm, ym
        long double x_r, y_r, d_r = 0;
        for(auto point : points){
            long double x = point[0], y = point[1];
            long double distance = sqrt(pow(x-xm, 2) + pow(y-ym, 2));
            if( distance > d_r) { 
                d_r = distance; y_r = y; x_r = x;
            }
        }

        cout<< "most distant to RO: " <<"(" <<  x_r << ", " << y_r << ")" << " / " << d_r <<  endl;



        // Get extreme point (x, y);
        for(auto point : points){
            long double x = point[0], y = point[1];
            // Get distance to origin 0,0
            long double current_point_distance_to_origin = sqrt(pow(x-0, 2) + (y-0, 2));
            if(current_point_distance_to_origin >= most_distant_point_to_origin.distance){ 
                most_distant_point_to_origin.distance = current_point_distance_to_origin;
                most_distant_point_to_origin.x = x;
                most_distant_point_to_origin.y = y;
            }
        }

        cout << "Most distant point to origin: " << most_distant_point_to_origin.x << " " << most_distant_point_to_origin.y << " / " << most_distant_point_to_origin.distance << endl;

        // Get extreme point to most_distance_point_to_origin
        for(auto point: points){
            long double x = point[0], y = point[1];
            long double current_point_distance = sqrt(pow(x-most_distant_point_to_origin.x, 2) + pow(y-most_distant_point_to_origin.y, 2));
            if(current_point_distance >= most_distant_point.distance){
                most_distant_point.distance = current_point_distance;
                most_distant_point.x = x;
                most_distant_point.y = y;
            }
        }
        cout << "Most distant point: " << most_distant_point.x << " " << most_distant_point.y << " / " << most_distant_point.distance << endl;
        */

        //Not optimized test
        auto start = chrono::high_resolution_clock::now();

        for(auto point : points){
            long double x1 = point[0], y1 = point[1];
            for(auto other_point : points){
                long double x2 = other_point[0], y2 = other_point[1];
                long double distance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
                if(distance > most_distant_point.distance) {
                    most_distant_point.distance = distance; most_distant_point.x = x1; most_distant_point.y = y1;
                    most_distant_point_to_origin.distance = distance; most_distant_point_to_origin.x = x2; most_distant_point_to_origin.y = y2;
                }
            }
        }
        auto end = chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end-start;
        long double circle_diameter = sqrt(pow(most_distant_point.x - most_distant_point_to_origin.x, 2) + pow(most_distant_point.y - most_distant_point_to_origin.y, 2));
        circle_radius = circle_diameter/2.0;
        circle_center_x = (most_distant_point.x + most_distant_point_to_origin.x) / 2.0;
        circle_center_y = (most_distant_point.y + most_distant_point_to_origin.y) / 2.0;
        cout << "----------------------TEST" << endl;
        cout << fixed << setprecision(20);
        cout << "Time: " << duration.count() << "s" << endl;
        cout << fixed << setprecision(2);
        cout << "Radius : " << circle_radius << "x: " << circle_center_x << " y: " << circle_center_y << endl;
        cout << "----------------------TEST" << endl;

        /*
        // Calculate circle center and radius
        long double circle_diameter = sqrt(pow(most_distant_point.x - most_distant_point_to_origin.x, 2) + pow(most_distant_point.y - most_distant_point_to_origin.y, 2));
        circle_radius = circle_diameter/2.0;
        circle_center_x = (most_distant_point_to_origin.x - most_distant_point.x) / 2.0;
        circle_center_y = (most_distant_point_to_origin.y - most_distant_point.y) / 2.0;

        // Cout
        if(instance > 1){ cout << endl; }
        cout << fixed << setprecision(2);
        cout << "Instancia " << instance << endl;
        cout << circle_center_x << " " << circle_center_y << " " << circle_radius << endl;
        */

        instance++;
    }

    return 0;
}