#include <iostream>
using namespace std;

int main()
{
    cout << "プロセカポイント計算ツール V.1.0.999\n";
    int k;
    do {
        cout << "ひとりでライブ　:ポイント検索:11 ポイントテーブル:12 ポイント検索Plus:13\n";
        cout << "みんなでライブ　:ポイント検索:21 ポイントテーブル:22 ポイント検索Plus:23\n";
        cout << "チアフルライブ　:ポイント検索:31 ポイントテーブル:32 ポイント検索Plus:33\n";
        cout << "チャレンジライブ:ポイント検索:41 ポイントテーブル:42 \n";
        cout << "使い方説明　　　:　　　　　　 00\n";
        cout << "終了　　　　　　:　　　　　　 99\n";
        cin >> k;
        if (k == 11) {
            int pt, base, sum = 0, intcal;
            double cal;

            cout << "ポイント入力\n";
            cin >> pt;

            cout << "基礎点入力(独りんぼエンヴィーの場合:100)\n";
            cin >> base;
            cout << "\n";

            cout.precision(2);

            if (pt >= base && 100 <= base && base <= 130) {
                for (int i = 0; i < 200; i++) {
                    sum = i + 100;
                    for (int j = 600; j >= 0; j--) {
                        cal = ((double)sum * (double)j / 100) + (double)sum;
                        intcal = 10 * cal;
                        cal = intcal * base / 1000;
                        intcal = cal;
                        if (intcal == pt) {
                            cout.width(4);
                            cout << j << "%, ";
                            cout.width(7);
                            cout.fill(' ');
                            cout << i * 20000 << " ~ ";
                            cout.width(7);
                            cout.fill(' ');
                            cout << (i + 1) * 20000 - 1 << "\n";
                            break;
                        }
                    }
                }
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:基準を下回るポイントを入力しているか、存在しない基礎点を入力しています\n";
            }
            cout << "\n";
        }


        else if (k == 12) {
            int base12, sum12;
            double b, cal12;

            cout << "イベントボーナス入力(%) 小数第2位まで\n";
            cin >> b;
            sum12 = b * 100;
            b = (double)sum12 / 100;
            sum12 = 0;

            cout << "基礎点入力(独りんぼエンヴィーの場合:100)\n";
            cin >> base12;
            cout << "\n";

            cout.precision(2);

            if (100 <= base12 && base12 <= 130) {
                for (int i = 0; i < 150; i++) {
                    cout.width(7);
                    cout.fill(' ');
                    cout << i * 20000 << " ~ ";
                    cout.width(7);
                    cout.fill(' ');
                    cout << (i + 1) * 20000 - 1 << ", ";
                    cal12 = 100 + i;
                    cal12 = cal12 * (b / 100) + cal12;
                    sum12 = cal12 * 10;
                    cal12 = (double)sum12 / 10;
                    cal12 = cal12 * base12 / 100;
                    sum12 = cal12;
                    cout.width(4);
                    cout.fill(' ');
                    cout << sum12 << "pt\n";
                }
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:存在しない基礎点を入力しています\n";
            }
            cout << "\n";
        }
        else if (k == 21) {
            int pt21, base21, sum21 = 0, intcal21, c;
            double cal21;

            cout << "ポイント入力\n";
            cin >> pt21;

            cout << "基礎点入力(独りんぼエンヴィーの場合:100)\n";
            cin >> base21;

            cout << "他のプレイヤーのスコアは0か、4420000以上ですか? 0:0 4420000以上:9 ALL:1 1はおすすめしません\n";
            cin >> c;

            cout.precision(2);
            if (pt21 >= base21 + 23 && 100 <= base21 && base21 <= 130) {
                cout << "\n";
                for (int i = 0; i < 200; i++) {
                    for (int life = 0; life <= 13; life++) {
                        sum21 = 110 + i + life;
                        if (c == 0) {
                            for (int j = 600; j >= 0; j--) {
                                cal21 = ((double)sum21 * (double)j / 100) + (double)sum21;
                                intcal21 = 10 * cal21;
                                cal21 = intcal21 * base21 / 1000;
                                intcal21 = cal21;

                                if (intcal21 == pt21) {
                                    cout.width(4);
                                    cout.fill(' ');
                                    cout << j << "%, ";
                                    cout << "Other's Score:";
                                    if (life != 13) {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << life * 340000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (life + 1) * 340000 - 1 << " , ";
                                    }
                                    else {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << life * 340000 << " ~ ";
                                        cout.width(10);
                                        cout.fill(' ');
                                        cout << " , ";
                                    }
                                    cout << "My Score:";
                                    cout.width(7);
                                    cout.fill(' ');
                                    cout << i * 17000 << " ~ ";
                                    cout.width(7);
                                    cout.fill(' ');
                                    cout << (i + 1) * 17000 - 1 << "\n";
                                    break;
                                }
                            }
                            break;
                        }
                        else if (c == 9) {
                            for (int j = 600; j >= 0; j--) {
                                cal21 = ((double)sum21 * (double)j / 100) + (double)sum21;
                                intcal21 = 10 * cal21;
                                cal21 = intcal21 * base21 / 1000;
                                intcal21 = cal21;

                                if (intcal21 == pt21) {
                                    if (life == 13) {
                                        cout.width(4);
                                        cout.fill(' ');
                                        cout << j << "%, ";
                                        cout << "Other's Score:";
                                        if (life != 13) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (life + 1) * 340000 - 1 << " , ";
                                        }
                                        else {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(10);
                                            cout.fill(' ');
                                            cout << " , ";
                                        }
                                        cout << "My Score:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << i * 17000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (i + 1) * 17000 - 1 << "\n";
                                        break;
                                    }
                                }
                            }
                        }
                        else if (c == 1) {
                            for (int j = 600; j >= 0; j--) {
                                cal21 = ((double)sum21 * (double)j / 100) + (double)sum21;
                                intcal21 = 10 * cal21;
                                cal21 = intcal21 * base21 / 1000;
                                intcal21 = cal21;

                                if (intcal21 == pt21) {
                                    cout.width(4);
                                    cout.fill(' ');
                                    cout << j << "%, ";
                                    cout << "Other's Score:";
                                    if (life != 13) {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << life * 340000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (life + 1) * 340000 - 1 << " , ";
                                    }
                                    else {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << life * 340000 << " ~ ";
                                        cout.width(10);
                                        cout.fill(' ');
                                        cout << " , ";
                                    }
                                    cout << "My Score:";
                                    cout.width(7);
                                    cout.fill(' ');
                                    cout << i * 17000 << " ~ ";
                                    cout.width(7);
                                    cout.fill(' ');
                                    cout << (i + 1) * 17000 - 1 << "\n";
                                    break;
                                }
                            }
                        }
                        else {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:0か1を入力してください";
                        }
                    }
                }
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:基準を下回るポイントを入力しているか、存在しない基礎点を入力しています\n";
            }
            cout << "\n";
        }

        else if (k == 22) {
            int base22, sum22, c22;
            double d, cal22;

            cout << "イベントボーナス入力(%) 小数第2位まで\n";
            cin >> d;
            sum22 = d * 100;
            d = (double)sum22 / 100;
            sum22 = 0;

            cout << "基礎点入力(独りんぼエンヴィーの場合:100)\n";
            cin >> base22;

            cout.precision(2);

            cout << "他のプレイヤーのスコアは0か、4420000以上ですか? 0:0 4420000以上:9 PRESET:1\n";
            cin >> c22;
            if (c22 == 0) {
                if (100 <= base22 && base22 <= 130) {
                    for (int i = 0; i < 250; i++) {
                        cout.width(7);
                        cout.fill(' ');
                        cout << i * 17000 << " ~ ";
                        cout.width(7);
                        cout.fill(' ');
                        cout << (i + 1) * 17000 - 1 << ", ";
                        cal22 = 110 + i;
                        cal22 = cal22 * (d / 100) + cal22;
                        sum22 = cal22 * 10;
                        cal22 = (double)sum22 / 10;
                        cal22 = cal22 * base22 / 100;
                        sum22 = cal22;
                        cout.width(4);
                        cout.fill(' ');
                        cout << sum22 << "pt\n";
                    }
                }
                else {
                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                    cout << "?:存在しない基礎点を入力しています\n";
                }
            }
            else if (c22 == 9) {
                if (100 <= base22 && base22 <= 130) {
                    for (int i = 0; i < 250; i++) {
                        cout.width(7);
                        cout.fill(' ');
                        cout << i * 17000 << " ~ ";
                        cout.width(7);
                        cout.fill(' ');
                        cout << (i + 1) * 17000 - 1 << ", ";
                        cal22 = 123 + i;
                        cal22 = cal22 * (d / 100) + cal22;
                        sum22 = cal22 * 10;
                        cal22 = (double)sum22 / 10;
                        cal22 = cal22 * base22 / 100;
                        sum22 = cal22;
                        cout.width(4);
                        cout.fill(' ');
                        cout << sum22 << "pt\n";
                    }
                }
                else {
                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                    cout << "?:存在しない基礎点を入力しています\n";
                }
            }
            else if (c22 == 1) {
                int others;
                cout << "他スコアを入力してください\n";
                cin >> others;
                if (others < 0 || others >= 4420000) {
                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                    cout << "?:範囲外のスコアを入力しています\n";
                }
                else {
                    others = others / 340000;
                    cout << "\n";
                    if (100 <= base22 && base22 <= 150) {
                        for (int i = 0; i < 250; i++) {
                            cout.width(7);
                            cout.fill(' ');
                            cout << i * 17000 << " ~ ";
                            cout.width(7);
                            cout.fill(' ');
                            cout << (i + 1) * 17000 - 1 << ", ";
                            cal22 = 110 + i + others;
                            cal22 = cal22 * (d / 100) + cal22;
                            sum22 = cal22 * 10;
                            cal22 = (double)sum22 / 10;
                            cal22 = cal22 * base22 / 100;
                            sum22 = cal22;
                            cout.width(4);
                            cout.fill(' ');
                            cout << sum22 << "pt\n";
                        }
                    }
                }

            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:存在しない基礎点を入力しています\n";
            }
            cout << "\n";
        }

        else if (k == 31) {
            int pt31, base31, sum31 = 0, intcal31, e, f;
            double cal31;

            cout << "ポイント入力\n";
            cin >> pt31;

            cout << "基礎点入力(独りんぼエンヴィーの場合:100)\n";
            cin >> base31;

            cout.precision(2);

            cout << "他のプレイヤーのスコアは0か、4420000以上ですか? 0:0 4420000以上:9 ALL:1 1はおすすめしません\n";
            cin >> e;

            cout << "残ライフは1000以上、あるいは500未満ですか? 1000以上:0 500未満:9 ALL:1 1はおすすめしません\n";
            cin >> f;

            if (pt31 >= base31 + 23 && 100 <= base31 && base31 <= 130) {
                cout << "\n";
                for (int i = 0; i < 200; i++) {
                    for (int life = 0; life <= 13; life++) {
                        sum31 = 110 + i + life;
                        if (e == 0) {
                            for (int j = 600; j >= 0; j--) {
                                cal31 = ((double)sum31 * (double)j / 100) + (double)sum31;
                                intcal31 = 10 * cal31;
                                cal31 = intcal31 * base31 / 1000;
                                intcal31 = cal31;
                                if (f == 0) {
                                    cal31 = intcal31 * 1.35;
                                    intcal31 = cal31;
                                    if (intcal31 == pt31) {
                                        if (life == 0) {
                                            cout.width(4);
                                            cout.fill(' ');
                                            cout << j << "%, ";
                                            cout << "Other's Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (life + 1) * 340000 - 1 << " , ";
                                            cout << "My Life:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << "1000 , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                        break;
                                    }
                                }
                                else if (f == 9) {
                                    cal31 = intcal31 * 1.25;
                                    intcal31 = cal31;
                                    if (intcal31 == pt31) {
                                        if (life == 0) {
                                            cout.width(4);
                                            cout.fill(' ');
                                            cout << j << "%, ";
                                            cout << "Other's Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (life + 1) * 340000 - 1 << " , ";
                                            cout << "My Life:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << "0 , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                        break;
                                    }
                                }
                                else if (f == 1) {
                                    for (int l = 0; l <= 50; l++) {
                                        int intcal331 = intcal31;
                                        double cal331;
                                        cal331 = intcal331 * (1.15 + ((500 + ((double)l * 10)) / 5000));
                                        int life1 = 500 + l * 10;
                                        intcal331 = cal331;
                                        if (intcal331 == pt31) {
                                            if (life == 0) {
                                                cout.width(4);
                                                cout.fill(' ');
                                                cout << j << "%, ";
                                                cout << "Other's Score:";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << life * 340000 << " ~ ";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (life + 1) * 340000 - 1 << " , ";
                                                cout << "My Life:";
                                                cout.width(5);
                                                cout << life1 << " , ";
                                                cout << "My Score:";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << i * 17000 << " ~ ";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (i + 1) * 17000 - 1 << "\n";
                                            }
                                        }
                                    }
                                }
                                else {
                                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                                    cout << "?:0か9か1を入力してください";
                                }
                            }
                        }
                        else if (e == 9) {
                            for (int j = 600; j >= 0; j--) {
                                cal31 = ((double)sum31 * (double)j / 100) + (double)sum31;
                                intcal31 = 10 * cal31;
                                cal31 = intcal31 * base31 / 1000;
                                intcal31 = cal31;
                                if (f == 0) {
                                    cal31 = intcal31 * 1.35;
                                    intcal31 = cal31;
                                    if (intcal31 == pt31) {
                                        if (life == 13) {
                                            cout.width(4);
                                            cout.fill(' ');
                                            cout << j << "%, ";
                                            cout << "Other's Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(10);
                                            cout.fill(' ');
                                            cout << " , ";
                                            cout << "My Life:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << "1000 , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                        break;
                                    }
                                }
                                else if (f == 9) {
                                    cal31 = intcal31 * 1.25;
                                    intcal31 = cal31;
                                    if (intcal31 == pt31) {
                                        if (life == 13) {
                                            cout.width(4);
                                            cout.fill(' ');
                                            cout << j << "%, ";
                                            cout << "Other's Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(10);
                                            cout.fill(' ');
                                            cout << " , ";
                                            cout << "My Life:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << "0 , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                        break;
                                    }
                                }
                                else if (f == 1) {
                                    for (int l = 0; l <= 50; l++) {
                                        int intcal331 = intcal31;
                                        double cal331;
                                        cal331 = intcal331 * (1.15 + ((500 + ((double)l * 10)) / 5000));
                                        int life1 = 500 + l * 10;
                                        intcal331 = cal331;
                                        if (intcal331 == pt31) {
                                            if (life == 13) {
                                                cout.width(4);
                                                cout.fill(' ');
                                                cout << j << "%, ";
                                                cout << "Other's Score:";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << life * 340000 << " ~ ";
                                                cout.width(10);
                                                cout.fill(' ');
                                                cout << " , ";
                                                cout << "My Life:";
                                                cout.width(5);
                                                cout << life1 << " , ";
                                                cout << "My Score:";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << i * 17000 << " ~ ";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (i + 1) * 17000 - 1 << "\n";
                                            }
                                        }
                                    }
                                }
                                else {
                                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                                    cout << "?:0か9か1を入力してください";
                                }
                            }
                        }
                        else if (e == 1) {
                            for (int j = 600; j >= 0; j--) {
                                cal31 = ((double)sum31 * (double)j / 100) + (double)sum31;
                                intcal31 = 10 * cal31;
                                cal31 = intcal31 * base31 / 1000;
                                intcal31 = cal31;
                                if (f == 0) {
                                    cal31 = intcal31 * 1.35;
                                    intcal31 = cal31;
                                    if (intcal31 == pt31) {
                                        cout.width(4);
                                        cout.fill(' ');
                                        cout << j << "%, ";
                                        cout << "Other's Score:";
                                        if (life != 13) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (life + 1) * 340000 - 1 << " , ";
                                        }
                                        else {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(10);
                                            cout.fill(' ');
                                            cout << " , ";
                                        }
                                        cout << "My Life:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << "1000 , ";
                                        cout << "My Score:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << i * 17000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (i + 1) * 17000 - 1 << "\n";
                                        break;
                                    }
                                }
                                else if (f == 9) {
                                    cal31 = intcal31 * 1.25;
                                    intcal31 = cal31;
                                    if (intcal31 == pt31) {
                                        cout.width(4);
                                        cout.fill(' ');
                                        cout << j << "%, ";
                                        cout << "Other's Score:";
                                        if (life != 13) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (life + 1) * 340000 - 1 << " , ";
                                        }
                                        else {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(10);
                                            cout.fill(' ');
                                            cout << " , ";
                                        }
                                        cout << "My Life:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << "0 , ";
                                        cout << "My Score:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << i * 17000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (i + 1) * 17000 - 1 << "\n";
                                        break;
                                    }
                                }
                                else if (f == 1) {
                                    for (int l = 0; l <= 50; l++) {
                                        int intcal331 = intcal31;
                                        double cal331;
                                        cal331 = intcal331 * (1.15 + ((500 + ((double)l * 10)) / 5000));
                                        int life1 = 500 + l * 10;
                                        intcal331 = cal331;
                                        if (intcal331 == pt31) {
                                            cout.width(4);
                                            cout.fill(' ');
                                            cout << j << "%, ";
                                            cout << "Other's Score:";
                                            if (life != 13) {
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << life * 340000 << " ~ ";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (life + 1) * 340000 - 1 << " , ";
                                            }
                                            else {
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << life * 340000 << " ~ ";
                                                cout.width(10);
                                                cout.fill(' ');
                                                cout << " , ";
                                            }
                                            cout << "My Life:";
                                            cout.width(5);
                                            cout << life1 << " , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                    }
                                }
                                else {
                                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                                    cout << "?:0か9か1を入力してください";
                                }
                            }

                        }
                        else {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:0か9か1を入力してください";
                        }
                    }
                }
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:基準を下回るポイントを入力しているか、存在しない基礎点を入力しています\n";
            }
            cout << "\n";
        }

        else if (k == 32) {
            int base32, sum32, c32, f32;
            double d32, cal32;

            cout << "イベントボーナス入力(%) 小数第2位まで\n";
            cin >> d32;
            sum32 = d32 * 100;
            d32 = (double)sum32 / 100;
            sum32 = 0;

            cout << "基礎点入力(独りんぼエンヴィーの場合:100)\n";
            cin >> base32;

            cout.precision(2);

            cout << "他のプレイヤーのスコアは0か、4420000以上ですか? 0:0 4420000以上:9 PRESET:1\n";
            cin >> c32;

            cout << "残ライフは1000以上、あるいは500未満ですか? 1000以上:0 500未満:9 PRESET:1\n";
            cin >> f32;

            switch (c32) {
            case 0:
                if (f32 == 0) {
                    if (100 <= base32 && base32 <= 130) {
                        for (int i = 0; i < 250; i++) {
                            cout.width(7);
                            cout.fill(' ');
                            cout << i * 17000 << " ~ ";
                            cout.width(7);
                            cout.fill(' ');
                            cout << (i + 1) * 17000 - 1 << ", ";
                            cal32 = 110 + i;
                            cal32 = cal32 * (d32 / 100) + cal32;
                            sum32 = cal32 * 10;
                            cal32 = (double)sum32 / 10;
                            cal32 = cal32 * base32 / 100;
                            sum32 = cal32;
                            cal32 = (double)sum32 * 1.35;
                            sum32 = cal32;
                            cout.width(4);
                            cout.fill(' ');
                            cout << sum32 << "pt\n";
                        }
                    }
                    else {
                        cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                        cout << "?:存在しない基礎点を入力しています\n";
                    }
                }
                else if (f32 == 9) {
                    if (100 <= base32 && base32 <= 130) {
                        for (int i = 0; i < 250; i++) {
                            cout.width(7);
                            cout.fill(' ');
                            cout << i * 17000 << " ~ ";
                            cout.width(7);
                            cout.fill(' ');
                            cout << (i + 1) * 17000 - 1 << ", ";
                            cal32 = 110 + i;
                            cal32 = cal32 * (d32 / 100) + cal32;
                            sum32 = cal32 * 10;
                            cal32 = (double)sum32 / 10;
                            cal32 = cal32 * base32 / 100;
                            sum32 = cal32;
                            cal32 = (double)sum32 * 1.25;
                            sum32 = cal32;
                            cout.width(4);
                            cout.fill(' ');
                            cout << sum32 << "pt\n";
                        }
                    }
                    else {
                        cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                        cout << "?:存在しない基礎点を入力しています\n";
                    }
                }
                else if (f32 == 1) {
                    int others;
                    cout << "残LIFEを入力してください\n";
                    cin >> others;
                    others = others / 10;
                    others = others * 10;
                    if (others <= 500 || others > 1000) {
                        cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                        cout << "?:範囲外のLIFEを入力しています\n";
                    }
                    else {
                        cout << "\n";
                        if (100 <= base32 && base32 <= 150) {
                            for (int i = 0; i < 250; i++) {
                                cout.width(7);
                                cout.fill(' ');
                                cout << i * 17000 << " ~ ";
                                cout.width(7);
                                cout.fill(' ');
                                cout << (i + 1) * 17000 - 1 << ", ";
                                cal32 = 110 + i;
                                cal32 = cal32 * (d32 / 100) + cal32;
                                sum32 = cal32 * 10;
                                cal32 = (double)sum32 / 10;
                                sum32 = cal32 * 10;
                                cal32 = (double)sum32 / 10;
                                cal32 = cal32 * base32 / 100;
                                sum32 = cal32;
                                cal32 = (double)sum32 * (1.15 + ((double)others / 5000));
                                sum32 = cal32;
                                cout.width(4);
                                cout.fill(' ');
                                cout << sum32 << "pt\n";
                            }
                        }
                    }
                }
                else {
                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                    cout << "?:0か9か1を入力してください";
                }
                break;
            case 9:
                if (f32 == 0) {
                    if (100 <= base32 && base32 <= 130) {
                        for (int i = 0; i < 250; i++) {
                            cout.width(7);
                            cout.fill(' ');
                            cout << i * 17000 << " ~ ";
                            cout.width(7);
                            cout.fill(' ');
                            cout << (i + 1) * 17000 - 1 << ", ";
                            cal32 = 123 + i;
                            cal32 = cal32 * (d32 / 100) + cal32;
                            sum32 = cal32 * 10;
                            cal32 = (double)sum32 / 10;
                            cal32 = cal32 * base32 / 100;
                            sum32 = cal32;
                            cal32 = (double)sum32 * 1.35;
                            sum32 = cal32;
                            cout.width(4);
                            cout.fill(' ');
                            cout << sum32 << "pt\n";
                        }
                    }
                    else {
                        cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                        cout << "?:存在しない基礎点を入力しています\n";
                    }
                }
                else if (f32 == 9) {
                    if (100 <= base32 && base32 <= 130) {
                        for (int i = 0; i < 250; i++) {
                            cout.width(7);
                            cout.fill(' ');
                            cout << i * 17000 << " ~ ";
                            cout.width(7);
                            cout.fill(' ');
                            cout << (i + 1) * 17000 - 1 << ", ";
                            cal32 = 123 + i;
                            cal32 = cal32 * (d32 / 100) + cal32;
                            sum32 = cal32 * 10;
                            cal32 = (double)sum32 / 10;
                            cal32 = cal32 * base32 / 100;
                            sum32 = cal32;
                            cal32 = (double)sum32 * 1.25;
                            sum32 = cal32;
                            cout.width(4);
                            cout.fill(' ');
                            cout << sum32 << "pt\n";
                        }
                    }
                    else {
                        cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                        cout << "?:存在しない基礎点を入力しています\n";
                    }
                }
                else if (f32 == 1) {
                    int others;
                    cout << "残LIFEを入力してください\n";
                    cin >> others;
                    others = others / 10;
                    others = others * 10;
                    if (others <= 500 || others > 1000) {
                        cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                        cout << "?:範囲外のLIFEを入力しています\n";
                    }
                    else {
                        cout << "\n";
                        if (100 <= base32 && base32 <= 150) {
                            for (int i = 0; i < 250; i++) {
                                cout.width(7);
                                cout.fill(' ');
                                cout << i * 17000 << " ~ ";
                                cout.width(7);
                                cout.fill(' ');
                                cout << (i + 1) * 17000 - 1 << ", ";
                                cal32 = 123 + i;
                                cal32 = cal32 * (d32 / 100) + cal32;
                                sum32 = cal32 * 10;
                                cal32 = (double)sum32 / 10;
                                sum32 = cal32 * 10;
                                cal32 = (double)sum32 / 10;
                                cal32 = cal32 * base32 / 100;
                                sum32 = cal32;
                                cal32 = (double)sum32 * (1.15 + ((double)others / 5000));
                                sum32 = cal32;
                                cout.width(4);
                                cout.fill(' ');
                                cout << sum32 << "pt\n";
                            }
                        }
                    }
                }
                else {
                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                    cout << "?:0か9か1を入力してください";
                }
                break;
            case 1:
                int others;
                cout << "他スコアを入力してください\n";
                cin >> others;
                if (others < 0 || others >= 4420000) {
                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                    cout << "?:範囲外のスコアを入力しています\n";
                }
                else {
                    others = others / 340000;
                    if (f32 == 0) {
                        if (100 <= base32 && base32 <= 130) {
                            for (int i = 0; i < 250; i++) {
                                cout.width(7);
                                cout.fill(' ');
                                cout << i * 17000 << " ~ ";
                                cout.width(7);
                                cout.fill(' ');
                                cout << (i + 1) * 17000 - 1 << ", ";
                                cal32 = 110 + i + others;
                                cal32 = cal32 * (d32 / 100) + cal32;
                                sum32 = cal32 * 10;
                                cal32 = (double)sum32 / 10;
                                cal32 = cal32 * base32 / 100;
                                sum32 = cal32;
                                cal32 = (double)sum32 * 1.35;
                                sum32 = cal32;
                                cout.width(4);
                                cout.fill(' ');
                                cout << sum32 << "pt\n";
                            }
                        }
                        else {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:存在しない基礎点を入力しています\n";
                        }
                    }
                    else if (f32 == 9) {
                        if (100 <= base32 && base32 <= 130) {
                            for (int i = 0; i < 250; i++) {
                                cout.width(7);
                                cout.fill(' ');
                                cout << i * 17000 << " ~ ";
                                cout.width(7);
                                cout.fill(' ');
                                cout << (i + 1) * 17000 - 1 << ", ";
                                cal32 = 110 + i + others;
                                cal32 = cal32 * (d32 / 100) + cal32;
                                sum32 = cal32 * 10;
                                cal32 = (double)sum32 / 10;
                                cal32 = cal32 * base32 / 100;
                                sum32 = cal32;
                                cal32 = (double)sum32 * 1.25;
                                sum32 = cal32;
                                cout.width(4);
                                cout.fill(' ');
                                cout << sum32 << "pt\n";
                            }
                        }
                        else {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:存在しない基礎点を入力しています\n";
                        }
                    }
                    else if (f32 == 1) {
                        int others32;
                        cout << "残LIFEを入力してください\n";
                        cin >> others32;
                        others32 = others32 / 10;
                        others32 = others32 * 10;
                        if (others32 <= 500 || others32 > 1000) {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:範囲外のLIFEを入力しています\n";
                        }
                        else {
                            cout << "\n";
                            if (100 <= base32 && base32 <= 150) {
                                for (int i = 0; i < 250; i++) {
                                    cout.width(7);
                                    cout.fill(' ');
                                    cout << i * 17000 << " ~ ";
                                    cout.width(7);
                                    cout.fill(' ');
                                    cout << (i + 1) * 17000 - 1 << ", ";
                                    cal32 = 110 + i + others;
                                    cal32 = cal32 * (d32 / 100) + cal32;
                                    sum32 = cal32 * 10;
                                    cal32 = (double)sum32 / 10;
                                    sum32 = cal32 * 10;
                                    cal32 = (double)sum32 / 10;
                                    cal32 = cal32 * base32 / 100;
                                    sum32 = cal32;
                                    cal32 = (double)sum32 * (1.15 + ((double)others32 / 5000));
                                    sum32 = cal32;
                                    cout.width(4);
                                    cout.fill(' ');
                                    cout << sum32 << "pt\n";
                                }
                            }
                        }
                    }
                    else {
                        cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                        cout << "?:0か9か1を入力してください";
                    }
                }
                break;
            default:
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:0か9か1を入力してください";
            }
            cout << "\n";
        }
        else if (k == 41) {
            int pt41, intcal41;

            cout << "ポイント入力 (12000以上かつ、120の倍数のみ)\n";
            cin >> pt41;

            cout.precision(1);
            if (pt41 % 120 != 0 || pt41 < 12000 || pt41 > 30000) {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:存在しないイベントポイントを入力しているか、値が大きすぎます\n";
            }
            else {
                for (int i = 0; i < 150; i++) {
                    intcal41 = (100 + i) * 120;
                    if (intcal41 == pt41) {
                        cout << "Score:";
                        cout.width(7);
                        cout.fill(' ');
                        cout << i * 20000 << " ~ ";
                        cout.width(7);
                        cout.fill(' ');
                        cout << (i + 1) * 20000 - 1 << "\n";
                        break;
                    }
                }
            }
            cout << "\n";
        }

        else if (k == 42) {
            int n, intcal42;
            cout << "表示しますか? Yes:0 No:1\n";
            cin >> n;
            if (n == 0) {
                for (int i = 0; i < 150; i++) {
                    cout.width(7);
                    cout.fill(' ');
                    cout << i * 20000 << " ~ ";
                    cout.width(7);
                    cout.fill(' ');
                    cout << (i + 1) * 20000 - 1 << ", ";
                    intcal42 = (100 + i) * 120;
                    cout.width(4);
                    cout.fill(' ');
                    cout << intcal42 << "pt\n";
                }
            }
            else if (n == 1) {
                cout << "動作を続けます\n";
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:0か1を入力してください\n";
            }
            cout << "\n";
        }



        //番外編




        else if (k == 13) {
            int pt, base, sum = 0, intcal;
            double cal;

            cout << "ポイント入力\n";
            cin >> pt;

            cout << "基礎点入力(独りんぼエンヴィーの場合:100)\n";
            cin >> base;
            cout << "\n";
            cout.precision(2);
            cout.setf(ios::fixed);

            if (pt >= base && 100 <= base && base <= 130) {
                for (int i = 0; i < 200; i++) {
                    sum = i + 100;
                    for (int j = 60000; j >= 0; j--) {
                        cal = ((double)sum * (double)j / 10000) + (double)sum;
                        intcal = 10 * cal;
                        cal = intcal * base / 1000;
                        intcal = cal;
                        if (intcal == pt) {
                            cout.width(7);
                            cout.fill(' ');
                            cout << (double)j / 100 << "%, ";
                            cout.width(7);
                            cout.fill(' ');
                            cout << i * 20000 << " ~ ";
                            cout.width(7);
                            cout.fill(' ');
                            cout << (i + 1) * 20000 - 1 << "\n";
                        }
                    }
                }
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:基準を下回るポイントを入力しているか、存在しない基礎点を入力しています\n";
            }
            cout << "\n";
        }

        else if (k == 23) {
            int pt23, base23, sum23 = 0, intcal23, c23;
            double cal23;

            cout << "ポイント入力\n";
            cin >> pt23;

            cout << "基礎点入力(独りんぼエンヴィーの場合:100)\n";
            cin >> base23;

            cout << "他のプレイヤーのスコアは0か、4420000以上ですか? 0:0 4420000以上:9 ALL:1 1はおすすめしません\n";
            cin >> c23;

            cout.precision(2);
            cout.setf(ios::fixed);

            if (pt23 >= base23 + 23 && 100 <= base23 && base23 <= 130) {
                cout << "\n";
                for (int i = 0; i < 200; i++) {
                    for (int life = 0; life <= 13; life++) {
                        sum23 = 110 + i + life;
                        if (c23 == 0) {
                            for (int j = 60000; j >= 0; j--) {
                                cal23 = ((double)sum23 * (double)j / 10000) + (double)sum23;
                                intcal23 = 10 * cal23;
                                cal23 = intcal23 * base23 / 1000;
                                intcal23 = cal23;

                                if (intcal23 == pt23) {
                                    if (life == 0) {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (double)j / 100 << "%, ";
                                        cout << "Other's Score:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << life * 340000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (life + 1) * 340000 - 1 << " , ";
                                        cout << "My Score:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << i * 17000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (i + 1) * 17000 - 1 << "\n";
                                    }
                                }
                            }
                        }
                        else if (c23 == 9) {
                            for (int j = 60000; j >= 0; j--) {
                                cal23 = ((double)sum23 * (double)j / 10000) + (double)sum23;
                                intcal23 = 10 * cal23;
                                cal23 = intcal23 * base23 / 1000;
                                intcal23 = cal23;

                                if (intcal23 == pt23) {
                                    if (life == 13) {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (double)j / 100 << "%, ";
                                        cout << "Other's Score:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << life * 340000 << " ~ ";
                                        cout.width(10);
                                        cout.fill(' ');
                                        cout << " , ";
                                        cout << "My Score:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << i * 17000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (i + 1) * 17000 - 1 << "\n";
                                    }
                                }
                            }
                        }
                        else if (c23 == 1) {
                            for (int j = 60000; j >= 0; j--) {
                                cal23 = ((double)sum23 * (double)j / 10000) + (double)sum23;
                                intcal23 = 10 * cal23;
                                cal23 = intcal23 * base23 / 1000;
                                intcal23 = cal23;

                                if (intcal23 == pt23) {
                                    cout.width(7);
                                    cout.fill(' ');
                                    cout << (double)j / 100 << "%, ";
                                    cout << "Other's Score:";
                                    if (life != 13) {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << life * 340000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (life + 1) * 340000 - 1 << " , ";
                                    }
                                    else {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << life * 340000 << " ~ ";
                                        cout.width(10);
                                        cout.fill(' ');
                                        cout << " , ";
                                    }
                                    cout << "My Score:";
                                    cout.width(7);
                                    cout.fill(' ');
                                    cout << i * 17000 << " ~ ";
                                    cout.width(7);
                                    cout.fill(' ');
                                    cout << (i + 1) * 17000 - 1 << "\n";
                                }
                            }
                        }
                        else {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:0か1を入力してください";
                        }
                    }
                }
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:基準を下回るポイントを入力しているか、存在しない基礎点を入力しています\n";
            }
            cout << "\n";
        }

        else if (k == 33) {
            int pt33, base33, sum33 = 0, intcal33, e, f;
            double cal33;

            cout << "ポイント入力\n";
            cin >> pt33;

            cout << "基礎点入力(独りんぼエンヴィーの場合:100)\n";
            cin >> base33;

            cout.precision(2);
            cout.setf(ios::fixed);

            cout << "他のプレイヤーのスコアは0か、4420000以上ですか? 0:0 4420000以上:9 ALL:1 1はおすすめしません\n";
            cin >> e;

            cout << "残ライフは1000以上、あるいは500未満ですか? 1000以上:0 500未満:9 ALL:1 1はおすすめしません\n";
            cin >> f;

            if (pt33 >= base33 + 23 && 100 <= base33 && base33 <= 130) {
                cout << "\n";
                for (int i = 0; i < 200; i++) {
                    for (int life = 0; life <= 13; life++) {
                        sum33 = 110 + i + life;
                        if (e == 0) {
                            for (int j = 60000; j >= 0; j--) {
                                cal33 = ((double)sum33 * (double)j / 10000) + (double)sum33;
                                intcal33 = 10 * cal33;
                                cal33 = intcal33 * base33 / 1000;
                                intcal33 = cal33;
                                if (f == 0) {
                                    cal33 = intcal33 * 1.35;
                                    intcal33 = cal33;
                                    if (intcal33 == pt33) {
                                        if (life == 0) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (double)j / 100 << "%, ";
                                            cout << "Other's Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (life + 1) * 340000 - 1 << " , ";
                                            cout << "My Life:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << "1000 , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                    }
                                }
                                else if (f == 9) {
                                    cal33 = intcal33 * 1.25;
                                    intcal33 = cal33;
                                    if (intcal33 == pt33) {
                                        if (life == 0) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (double)j / 100 << "%, ";
                                            cout << "Other's Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (life + 1) * 340000 - 1 << " , ";
                                            cout << "My Life:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << "0 , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                    }
                                }
                                else if (f == 1) {
                                    for (int l = 0; l <= 50; l++) {
                                        int intcal333 = intcal33;
                                        double cal333;
                                        cal333 = intcal333 * (1.15 + ((500 + ((double)l * 10)) / 5000));
                                        int life1 = 500 + l * 10;
                                        intcal333 = cal333;
                                        if (intcal333 == pt33) {
                                            if (life == 0) {
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (double)j / 100 << "%, ";
                                                cout << "Other's Score:";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << life * 340000 << " ~ ";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (life + 1) * 340000 - 1 << " , ";
                                                cout << "My Life:";
                                                cout.width(5);
                                                cout << life1 << " , ";
                                                cout << "My Score:";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << i * 17000 << " ~ ";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (i + 1) * 17000 - 1 << "\n";
                                            }
                                        }
                                    }
                                }
                                else {
                                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                                    cout << "?:0か9か1を入力してください";
                                }
                            }
                        }
                        else if (e == 9) {
                            for (int j = 60000; j >= 0; j--) {
                                cal33 = ((double)sum33 * (double)j / 10000) + (double)sum33;
                                intcal33 = 10 * cal33;
                                cal33 = intcal33 * base33 / 1000;
                                intcal33 = cal33;
                                if (f == 0) {
                                    cal33 = intcal33 * 1.35;
                                    intcal33 = cal33;
                                    if (intcal33 == pt33) {
                                        if (life == 13) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (double)j / 100 << "%, ";
                                            cout << "Other's Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(10);
                                            cout.fill(' ');
                                            cout << " , ";
                                            cout << "My Life:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << "1000 , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                    }
                                }
                                else if (f == 9) {
                                    cal33 = intcal33 * 1.25;
                                    intcal33 = cal33;
                                    if (intcal33 == pt33) {
                                        if (life == 13) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (double)j / 100 << "%, ";
                                            cout << "Other's Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(10);
                                            cout.fill(' ');
                                            cout << " , ";
                                            cout << "My Life:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << "0 , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                    }
                                }
                                else if (f == 1) {
                                    for (int l = 0; l <= 50; l++) {
                                        int intcal333 = intcal33;
                                        double cal333;
                                        cal333 = intcal333 * (1.15 + ((500 + ((double)l * 10)) / 5000));
                                        int life1 = 500 + l * 10;
                                        intcal333 = cal333;
                                        if (intcal333 == pt33) {
                                            if (life == 13) {
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (double)j / 100 << "%, ";
                                                cout << "Other's Score:";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << life * 340000 << " ~ ";
                                                cout.width(10);
                                                cout.fill(' ');
                                                cout << " , ";
                                                cout << "My Life:";
                                                cout.width(5);
                                                cout << life1 << " , ";
                                                cout << "My Score:";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << i * 17000 << " ~ ";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (i + 1) * 17000 - 1 << "\n";
                                            }
                                        }
                                    }
                                }
                                else {
                                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                                    cout << "?:0か9か1を入力してください";
                                }
                            }
                        }
                        else if (e == 1) {
                            for (int j = 60000; j >= 0; j--) {
                                cal33 = ((double)sum33 * (double)j / 10000) + (double)sum33;
                                intcal33 = 10 * cal33;
                                cal33 = intcal33 * base33 / 1000;
                                intcal33 = cal33;
                                if (f == 0) {
                                    cal33 = intcal33 * 1.35;
                                    intcal33 = cal33;
                                    if (intcal33 == pt33) {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (double)j / 100 << "%, ";
                                        cout << "Other's Score:";
                                        if (life != 13) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (life + 1) * 340000 - 1 << " , ";
                                        }
                                        else {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(10);
                                            cout.fill(' ');
                                            cout << " , ";
                                        }
                                        cout << "My Life:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << "1000 , ";
                                        cout << "My Score:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << i * 17000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (i + 1) * 17000 - 1 << "\n";
                                    }
                                }
                                else if (f == 9) {
                                    cal33 = intcal33 * 1.25;
                                    intcal33 = cal33;
                                    if (intcal33 == pt33) {
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (double)j / 100 << "%, ";
                                        cout << "Other's Score:";
                                        if (life != 13) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (life + 1) * 340000 - 1 << " , ";
                                        }
                                        else {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << life * 340000 << " ~ ";
                                            cout.width(10);
                                            cout.fill(' ');
                                            cout << " , ";
                                        }
                                        cout << "My Life:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << "0 , ";
                                        cout << "My Score:";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << i * 17000 << " ~ ";
                                        cout.width(7);
                                        cout.fill(' ');
                                        cout << (i + 1) * 17000 - 1 << "\n";
                                    }
                                }
                                else if (f == 1) {
                                    for (int l = 0; l <= 50; l++) {
                                        int intcal333 = intcal33;
                                        double cal333;
                                        cal333 = intcal333 * (1.15 + ((500 + ((double)l * 10)) / 5000));
                                        int life1 = 500 + l * 10;
                                        intcal333 = cal333;
                                        if (intcal333 == pt33) {
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (double)j / 100 << "%, ";
                                            cout << "Other's Score:";
                                            if (life != 13) {
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << life * 340000 << " ~ ";
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << (life + 1) * 340000 - 1 << " , ";
                                            }
                                            else {
                                                cout.width(7);
                                                cout.fill(' ');
                                                cout << life * 340000 << " ~ ";
                                                cout.width(10);
                                                cout.fill(' ');
                                                cout << " , ";
                                            }
                                            cout << "My Life:";
                                            cout.width(5);
                                            cout << life1 << " , ";
                                            cout << "My Score:";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << i * 17000 << " ~ ";
                                            cout.width(7);
                                            cout.fill(' ');
                                            cout << (i + 1) * 17000 - 1 << "\n";
                                        }
                                    }
                                }
                                else {
                                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                                    cout << "?:0か9か1を入力してください";
                                }
                            }

                        }
                        else {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:0か9か1を入力してください";
                        }
                    }
                }
            }
            cout << "\n";
        }

        else if (k == 0) {
            cout << "\n必ず自己責任でご利用ください.\n";
            cout << "ある程度の動作は保障しますが、このツールの利用によって得た不利益や被害については一切責任を負いません, \n";
            cout << "\n";
            cout << "使い方\n";
            cout << "基本的にこのツールはテンキー部分のみで入力できます.\n";
            cout << "画面の指示に従って数値を入力すると、条件に合った表が出力されます.\n";
            cout << "範囲外の数値を入力すると、エラーメッセージが出るので、それに従いやり直してください.\n";
            cout << "何も出力されなかった場合、その条件に合うものが1つもないことになるので、条件を変えて試してみてください.\n";
            cout << "入力を誤った場合、わざとエラーになるまで動作を進めてください.(現在のバージョンでは戻れません、ご了承ください)\n";
            cout << "\n";
            cout << "注意事項\n";
            cout << "基本的な入力は整数でしか受け付けません、小数はエラーの原因となるのでやめてください.(指定場所を除く)\n";
            cout << "モードの13、23、33や途中の選択肢でおすすめされていないものは、出力量が極端に増えると考えられるものです.\n";
            cout << "これらを利用する場合は、実行時間と動作に気を付けてください.\n";
            cout << "誤りや不具合を発見した場合は、私までご連絡ください.\n";
            cout << "\n";
            cout << "Version 1.0.999\n";
            cout << "License by 999/QWERTYkbd(notnishikori_18)\n\n";
        }

        else if (k == 139) {
            cout << "139はいいぞ\n\n";
        }

        else if (k == 2539) {
            cout << "2539てえてえ\n\n";
        }

        else if (k != 99) {
            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
            cout << "?:正しい数値を入力してください\n\n";
        }

    }while (k != 99);
    return 0;
}