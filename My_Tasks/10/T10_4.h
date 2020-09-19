namespace SALES
{
    class Sales
    {
        private:
            static const int QUARTERS = 4;
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        
        public:
            Sales();
            // kopiuje najmniejszą z czterech lub n elementów z tablicy ar
            // do składowej sales struktury s i oblicza oraz zachowuje w odpowiednich
            // składowych struktury sales wartości: średnią, minimalną i maksymalną:
            // zeruje pozostałe elementy tablicy sales (jeśli są)
            Sales(double ar[], int n);
            //pobiera interaktywnie informacje dla 4 kwartałów,
            //zachowuje je w składowej sales struktury s i oblicza oraz zachowuje
            // w odpowiednich składowych s wartość średnią, minimalną i maksymalną
            void setSales(SALES::Sales &);
            //wyświetla komplet informacji ze struktury s
            void showSales() const; 
    };
}

