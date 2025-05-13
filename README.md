**Elif Nisa Gelen** **241230023** **KTUN YZMÖ**
# Convex Hull Arastirma Odevi

Bu proje Convex Hull problemini çözmek için ***Graham Scan*** algoritmasını inceler ve **C++** dilinde uygular.


# Convex Hull Problemi
Convex Hull, düzlemde sonlu sayıda noktayı içine alan ve en küçük alanı kaplayan dışbükey çokgeni oluşturma problemi olarak tanımlanır.Convex Hull problemi, hesaplamalı geometri alanında ilk işlenilen problemlerden biridir. Bilgisayar grafikleri, CAD/CAM uygulamaları, çarpışma analizi, şekil analizi,örüntü tanıma, görüntü işleme gibi birçok alanda kullanılmaktadır.


# Graham Scan Algoritması ve İşleyişi
*Graham Scan* algoritması, 1972 yılında R.L GRAHAM tarafından yayınlanmıştır."Bir sonraki nokta her zaman iki önceki noktanın aynı yönünde olması" prensibine dayanarak çalışmaktadır.

İlk olarak sınırlı düzlemdeki tüm noktaların üzerinden geçilerek **pivot** noktası seçilir.**Pivot** noktası y-ekseni değeri en düşük nokta olarak seçilir.Bu nokta **daima** convex hull içinde olur.
Bu işlemin maliyeti O(n)'dir.

Sonrasında düzlemdeki noktaların *"polar açıları"* bulunur.*Polar açılar* sıralama algoritmaları ile sıralanır.En büyük polar açıya sahip olan nokta **Convex Hull'un** ikinci noktası olarak seçilir.Bu adım en iyi ihtimalde O(nlogn) karmaşıklığa sahiptir.

Düzlemdeki noktaların üzerinden polar açılarının sırasıyla geçilir.Noktaların yönlerine bakılır.Aynı yönde ilerleyen noktalar **Convex Hull'a** eklenir.Bu admın maliyeti maximum O(n)'dir.

O(n)+O(nlogn)+O(n)=O(nlogn) olduğundan dolayı **Zaman Karmaşıklığı** O(nlogn)'dir. **Alan Karmaşıklığı** O(n)'dir.

# Graham Scan Algoritması Nerelerde Kullanılır?
Graham scan  algoritmasının zaman karmaşıklığı O(nlogn)'dir. Bu yüzden çok büyük veri setlerinde daha verimli algoritmalar trecih edilebilir.

**Bilgisayar Grafikleri**
-2D/3D modellemelerde nesnelerin dış sınırlarının oluşturulmasında
-3D modellemelerde görünmeyen yüzeylerin kaldırılmasında 


**Robotik**
-Çevresel sınır belirleme
-Engel tespiti
-Hareket planlama

**Coğrafi Bilgi Sistemleri (GIS)**
-Konumsal sınır belirleme
-Navigasyon
-Uydu görüntülerinde şekil analizi


**CAD/CAM**
-2D/3D nesneler üretilirken dış yüzeylerin belirlenmesinde


**Çarpışma Analizi**
-oyunlarda ve fizik simulasyonlarında çarpışma tespiti


**Örüntü Tanıma(Pattern Recognizition)**
-görsellerdeki desenlerin çevresini sınırlama


# Graham Scan Kod Örneği
Kod dosyasına ulaşmak için [buraya](src/grahamscan_eng.cpp) tıklayınız.


# Kaynakça
1. de Berg, M., van Kreveld, M., Overmars, M., & Schwarzkopf, O. (2008). *Computational Geometry: Algorithms and Applications* (3rd ed.). Springer.  
2. Akgül, B., & Kutucu, H. (2015). Convex Hull Problemine Genel Bakış: Algoritmalar ve Karmaşıklıkları. *Akademik Bilişim 2015 - XVII. Akademik Bilişim Konferansı Bildirileri*, 4-6 Şubat 2015, Eskişehir.  
3. Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). *Introduction to Algorithms* (3rd ed.). MIT Press.




