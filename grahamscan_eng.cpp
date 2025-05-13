#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// 2D noktalarýný tutan yapý
struct Pt {
    int x, y;
};

// Pivot noktasý (baþlangýç noktasý)
Pt pivot;

// Ýki nokta arasýndaki Euclidean mesafesini hesaplayan fonksiyon
int euclidean(Pt p1, Pt p2) {
    return ((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

// Uc nokta arasindaki yonu belirleyen fonksiyon
int orientation(Pt a, Pt b, Pt c) {
    int val = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);//determinant/vektorel carpim kullanilarak yonler belirlenir
    if (val == 0) return 0; // Kolinear
    return (val > 0) ? 1 : 2; // Saat yönü -> 1, Saat yönü tersine -> 2
}

// Karsilastirma
bool compare(Pt p1, Pt p2) {
    int o = orientation(pivot, p1, p2);
    if (o == 0)
        return euclidean(pivot, p1) < euclidean(pivot, p2);  // Noktalarin ayni duzlemde olmasi durumunda karsilastirma
    return o == 2;
}

// Graham Scan algoritmasý
vector<Pt> grahamScan(vector<Pt>& points) {
    int n = points.size(); //vektor boyutu alinir.
    int minY = points[0].y, min = 0; //ilk noktanin y kordinati alinarak minY degiskenine atanir.

    for (int i = 1; i < n; i++) { //sirasi ile noktalarin uzerinden tek tek gecerek Pivot (Minimum Y-ekseni) noktasi bulunur.
        int y = points[i].y;
        if ((y < minY) || (minY == y && points[i].x < points[min].x)) {
            minY = points[i].y;
            min = i;
        }
    }
    swap(points[0], points[min]);
    pivot = points[0]; // Pivot listede basa atilir.

    //polar aciya gore siralama
    sort(points.begin() + 1, points.end(), compare);  //2.elemandan itibaren (points.begin+1 ile) son elemana kadar "compare fonksiyonu" ile polar acilara gore siralanir.

    //convex hull olusturma
    vector<Pt> hull; //hull vektoru olusturulur.
    hull.push_back(points[0]);  // pivot noktasi eklenir.
    hull.push_back(points[1]);  //ikinci nokta eklenir.


    for (int i = 2; i < n; i++) { //3.noktadan baþlayarak geriye kalan noktalari inceler
        while (hull.size() > 1 && orientation(hull[hull.size() - 2], hull.back(), points[i]) != 2) { //vektorde en az iki nokta olup olmadigini kontrol eder.
                //orientation(hull[hull.size() - 2], hull.back(), points[i]) != 2 ifadesi ile son iki nokta ve i noktasi karsilastirilir.
            hull.pop_back();  // Eger orientation fonksiyonundan 2'den farkli bir deger donerse yon degistirme vardir. Bu yuzden yonun degistigi nokta convex hull'a eklenmez.
        }
        hull.push_back(points[i]);  // Yeni nokta ekle
    }

    return hull;
}

int main() {
    vector<Pt> points = {{-7,8}, {-4,6}, {2,6}, {6,4}, {8,6}, {7,-2},
                          {4,-6}, {8,-7}, {0,0}, {3,-2}, {6,-10}, {0,-6},
                          {-9,-5}, {-8,-2}, {-8,0}, {-10,3}, {-2,2}, {-10,4}};

    vector<Pt> convexHull = grahamScan(points); //graham scan fonksiyonu calistirlir ve sonucu convex hull vektorune atanir.

    cout << "Saat Yonunde Sirayla Convex Hull Noktalari: " << endl;
    for (const Pt& p : convexHull) {
        cout << "(" << p.x << ", " << p.y << ") ";
    }
    cout << endl;

    return 0;
}
