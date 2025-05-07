# GrahamScan_ArastirmaOdevi

Bu proje Convex Hull problemini çözmek için ***Graham Scan*** algoritmasını inceler ve **C++** dilinde uygular.


# Convex Hull Problemi
Convex Hull, düzlemde sonlu sayıda noktayı içine alan ve en küçük alanı kaplayan dışbükey çokgeni oluşturma problemi olarak tanımlanır.Convex Hull problemi, hesaplamalı geometri alanında ilk işlenilen problemlerden biridir. Bilgisayar grafikleri, CAD/CAM uygulamaları, çarpışma analizi, şekil analizi,örüntü tanıma, görüntü işleme gibi birçok alanda kullanılmaktadır.


# Graham Scan Algoritması ve İşleyişi
*Graham Scan* algoritması, 1972 yılında R.L GRAHAM tarafından yayınlanmıştır."Bir sonraki nokta her zaman iki önceki noktanın aynı yönünde olması" prensibine dayanarak çalışmaktadır.

İlk olarak sınırlı düzlemdeki tüm noktaların üzerinden geçilerek **pivot** noktası seçilir.**Pivot** noktası genellikle y-ekseni değeri en düşük nokta olarak seçilir.Bu nokta **daima** convex hull içinde olur.
Bu işlemin maliyeti O(n)'dir.

Sonrasında düzlemdeki noktaların *"polar açıları"* bulunur.*Polar açılar* sıralama algoritmaları ile sıralanır.En büyük polar açıya sahip olan nokta **Convex Hull'un** ikinci noktası olarak seçilir.Bu adım en iyi ihtimalde O(nlogn) karmaşıklığa sahiptir.

Düzlemdeki noktaların üzerinden polar açılarının sırasıyla geçilir.Noktaların yönlerine bakılır.Aynı yönde ilerleyen noktalar **Convex Hull'a** eklenir.Bu admın maliyeti maximum O(n)'dir.

O(n)+O(nlogn)+O(n)=O(nlogn) olduğundan dolayı **Zaman Karmaşıklığı** O(nlogn)'dir. **Alan Karmaşıklığı** O(n)'dir.

# Graham Scan Algoritması Nerelerde Kullanılır?
Graham scan  algoritmasının zaman karmaşıklığı O(nlogn)'dir. Bu yüzden çok büyük veri setlerinde daha verimli algoritmalar trecih edilebilir.

**Bilgisayar Grafikleri**
-2D/3D modellemelerde nesnelerin dış sınırlarının oluşturulmasında
-3D modellemelerde görünmeyen yüzeylerin kaldırılmasında 
*örnek*= 3D bir modelin gölgelendirmesinde convex hull kullanılabilir.

**Robotik**
-Çevresel sınır belirleme
-Engel tespiti
-Hareket planlama
*örnek*= sınırlı alanda ilerlemek isteyen bir insansız hava aracı(drone)'un gidebileceği maximum mesafe convex hull ile hesaplanabilir.

**Coğrafi Bilgi Sistemleri (GIS)**
-Konumsal sınır belirleme
-Navigasyon
-Uydu görüntülerinde şekil analizi
*Örnek*= Konyadaki verimli tarım alanlarının belirlenmesi ve bu alanlara göre planlı tarım yapılması convex hull ile belirlenebilir.

**CAD/CAM**
-2D/3D nesneler üretilirken dış yüzeylerin belirlenmesinde
*Örnek*=Tasarımcıların tasarladıklarının üretilmesinin mümkün olup olmadığını belirlemede convex hull kullanılabilir.

**Çarpışma Analizi**
-oyunlarda ve fizik simulasyonlarında çarpışma tespiti
*Örnek*= Bir fabrikada farklı işlevdeki iki robotun aynı işi yaparken çarpışmaması için convex hull kullanılabilir.

**Örüntü Tanıma(Pattern Recognizition)**
-görsellerdeki desenlerin çevresini sınırlama
*Örnek*=Seri üretim yapılan bir fabrikada defolu ürünlerin tespitinde kullanılabilir.

# Kaynakça




