#include <iostream>
using namespace std;

int main()
{
    cout << "�v���Z�J�|�C���g�v�Z�c�[�� V.1.0.999\n";
    int k;
    do {
        cout << "�ЂƂ�Ń��C�u�@:�|�C���g����:11 �|�C���g�e�[�u��:12 �|�C���g����Plus:13\n";
        cout << "�݂�ȂŃ��C�u�@:�|�C���g����:21 �|�C���g�e�[�u��:22 �|�C���g����Plus:23\n";
        cout << "�`�A�t�����C�u�@:�|�C���g����:31 �|�C���g�e�[�u��:32 �|�C���g����Plus:33\n";
        cout << "�`�������W���C�u:�|�C���g����:41 �|�C���g�e�[�u��:42 \n";
        cout << "�g���������@�@�@:�@�@�@�@�@�@ 00\n";
        cout << "�I���@�@�@�@�@�@:�@�@�@�@�@�@ 99\n";
        cin >> k;
        if (k == 11) {
            int pt, base, sum = 0, intcal;
            double cal;

            cout << "�|�C���g����\n";
            cin >> pt;

            cout << "��b�_����(�Ƃ��ڃG�����B�[�̏ꍇ:100)\n";
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
                cout << "?:��������|�C���g����͂��Ă��邩�A���݂��Ȃ���b�_����͂��Ă��܂�\n";
            }
            cout << "\n";
        }


        else if (k == 12) {
            int base12, sum12;
            double b, cal12;

            cout << "�C�x���g�{�[�i�X����(%) ������2�ʂ܂�\n";
            cin >> b;
            sum12 = b * 100;
            b = (double)sum12 / 100;
            sum12 = 0;

            cout << "��b�_����(�Ƃ��ڃG�����B�[�̏ꍇ:100)\n";
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
                cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
            }
            cout << "\n";
        }
        else if (k == 21) {
            int pt21, base21, sum21 = 0, intcal21, c;
            double cal21;

            cout << "�|�C���g����\n";
            cin >> pt21;

            cout << "��b�_����(�Ƃ��ڃG�����B�[�̏ꍇ:100)\n";
            cin >> base21;

            cout << "���̃v���C���[�̃X�R�A��0���A4420000�ȏ�ł���? 0:0 4420000�ȏ�:9 ALL:1 1�͂������߂��܂���\n";
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
                            cout << "?:0��1����͂��Ă�������";
                        }
                    }
                }
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:��������|�C���g����͂��Ă��邩�A���݂��Ȃ���b�_����͂��Ă��܂�\n";
            }
            cout << "\n";
        }

        else if (k == 22) {
            int base22, sum22, c22;
            double d, cal22;

            cout << "�C�x���g�{�[�i�X����(%) ������2�ʂ܂�\n";
            cin >> d;
            sum22 = d * 100;
            d = (double)sum22 / 100;
            sum22 = 0;

            cout << "��b�_����(�Ƃ��ڃG�����B�[�̏ꍇ:100)\n";
            cin >> base22;

            cout.precision(2);

            cout << "���̃v���C���[�̃X�R�A��0���A4420000�ȏ�ł���? 0:0 4420000�ȏ�:9 PRESET:1\n";
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
                    cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
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
                    cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
                }
            }
            else if (c22 == 1) {
                int others;
                cout << "���X�R�A����͂��Ă�������\n";
                cin >> others;
                if (others < 0 || others >= 4420000) {
                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                    cout << "?:�͈͊O�̃X�R�A����͂��Ă��܂�\n";
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
                cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
            }
            cout << "\n";
        }

        else if (k == 31) {
            int pt31, base31, sum31 = 0, intcal31, e, f;
            double cal31;

            cout << "�|�C���g����\n";
            cin >> pt31;

            cout << "��b�_����(�Ƃ��ڃG�����B�[�̏ꍇ:100)\n";
            cin >> base31;

            cout.precision(2);

            cout << "���̃v���C���[�̃X�R�A��0���A4420000�ȏ�ł���? 0:0 4420000�ȏ�:9 ALL:1 1�͂������߂��܂���\n";
            cin >> e;

            cout << "�c���C�t��1000�ȏ�A���邢��500�����ł���? 1000�ȏ�:0 500����:9 ALL:1 1�͂������߂��܂���\n";
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
                                    cout << "?:0��9��1����͂��Ă�������";
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
                                    cout << "?:0��9��1����͂��Ă�������";
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
                                    cout << "?:0��9��1����͂��Ă�������";
                                }
                            }

                        }
                        else {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:0��9��1����͂��Ă�������";
                        }
                    }
                }
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:��������|�C���g����͂��Ă��邩�A���݂��Ȃ���b�_����͂��Ă��܂�\n";
            }
            cout << "\n";
        }

        else if (k == 32) {
            int base32, sum32, c32, f32;
            double d32, cal32;

            cout << "�C�x���g�{�[�i�X����(%) ������2�ʂ܂�\n";
            cin >> d32;
            sum32 = d32 * 100;
            d32 = (double)sum32 / 100;
            sum32 = 0;

            cout << "��b�_����(�Ƃ��ڃG�����B�[�̏ꍇ:100)\n";
            cin >> base32;

            cout.precision(2);

            cout << "���̃v���C���[�̃X�R�A��0���A4420000�ȏ�ł���? 0:0 4420000�ȏ�:9 PRESET:1\n";
            cin >> c32;

            cout << "�c���C�t��1000�ȏ�A���邢��500�����ł���? 1000�ȏ�:0 500����:9 PRESET:1\n";
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
                        cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
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
                        cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
                    }
                }
                else if (f32 == 1) {
                    int others;
                    cout << "�cLIFE����͂��Ă�������\n";
                    cin >> others;
                    others = others / 10;
                    others = others * 10;
                    if (others <= 500 || others > 1000) {
                        cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                        cout << "?:�͈͊O��LIFE����͂��Ă��܂�\n";
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
                    cout << "?:0��9��1����͂��Ă�������";
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
                        cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
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
                        cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
                    }
                }
                else if (f32 == 1) {
                    int others;
                    cout << "�cLIFE����͂��Ă�������\n";
                    cin >> others;
                    others = others / 10;
                    others = others * 10;
                    if (others <= 500 || others > 1000) {
                        cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                        cout << "?:�͈͊O��LIFE����͂��Ă��܂�\n";
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
                    cout << "?:0��9��1����͂��Ă�������";
                }
                break;
            case 1:
                int others;
                cout << "���X�R�A����͂��Ă�������\n";
                cin >> others;
                if (others < 0 || others >= 4420000) {
                    cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                    cout << "?:�͈͊O�̃X�R�A����͂��Ă��܂�\n";
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
                            cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
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
                            cout << "?:���݂��Ȃ���b�_����͂��Ă��܂�\n";
                        }
                    }
                    else if (f32 == 1) {
                        int others32;
                        cout << "�cLIFE����͂��Ă�������\n";
                        cin >> others32;
                        others32 = others32 / 10;
                        others32 = others32 * 10;
                        if (others32 <= 500 || others32 > 1000) {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:�͈͊O��LIFE����͂��Ă��܂�\n";
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
                        cout << "?:0��9��1����͂��Ă�������";
                    }
                }
                break;
            default:
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:0��9��1����͂��Ă�������";
            }
            cout << "\n";
        }
        else if (k == 41) {
            int pt41, intcal41;

            cout << "�|�C���g���� (12000�ȏォ�A120�̔{���̂�)\n";
            cin >> pt41;

            cout.precision(1);
            if (pt41 % 120 != 0 || pt41 < 12000 || pt41 > 30000) {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:���݂��Ȃ��C�x���g�|�C���g����͂��Ă��邩�A�l���傫�����܂�\n";
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
            cout << "�\�����܂���? Yes:0 No:1\n";
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
                cout << "����𑱂��܂�\n";
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:0��1����͂��Ă�������\n";
            }
            cout << "\n";
        }



        //�ԊO��




        else if (k == 13) {
            int pt, base, sum = 0, intcal;
            double cal;

            cout << "�|�C���g����\n";
            cin >> pt;

            cout << "��b�_����(�Ƃ��ڃG�����B�[�̏ꍇ:100)\n";
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
                cout << "?:��������|�C���g����͂��Ă��邩�A���݂��Ȃ���b�_����͂��Ă��܂�\n";
            }
            cout << "\n";
        }

        else if (k == 23) {
            int pt23, base23, sum23 = 0, intcal23, c23;
            double cal23;

            cout << "�|�C���g����\n";
            cin >> pt23;

            cout << "��b�_����(�Ƃ��ڃG�����B�[�̏ꍇ:100)\n";
            cin >> base23;

            cout << "���̃v���C���[�̃X�R�A��0���A4420000�ȏ�ł���? 0:0 4420000�ȏ�:9 ALL:1 1�͂������߂��܂���\n";
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
                            cout << "?:0��1����͂��Ă�������";
                        }
                    }
                }
            }
            else {
                cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                cout << "?:��������|�C���g����͂��Ă��邩�A���݂��Ȃ���b�_����͂��Ă��܂�\n";
            }
            cout << "\n";
        }

        else if (k == 33) {
            int pt33, base33, sum33 = 0, intcal33, e, f;
            double cal33;

            cout << "�|�C���g����\n";
            cin >> pt33;

            cout << "��b�_����(�Ƃ��ڃG�����B�[�̏ꍇ:100)\n";
            cin >> base33;

            cout.precision(2);
            cout.setf(ios::fixed);

            cout << "���̃v���C���[�̃X�R�A��0���A4420000�ȏ�ł���? 0:0 4420000�ȏ�:9 ALL:1 1�͂������߂��܂���\n";
            cin >> e;

            cout << "�c���C�t��1000�ȏ�A���邢��500�����ł���? 1000�ȏ�:0 500����:9 ALL:1 1�͂������߂��܂���\n";
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
                                    cout << "?:0��9��1����͂��Ă�������";
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
                                    cout << "?:0��9��1����͂��Ă�������";
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
                                    cout << "?:0��9��1����͂��Ă�������";
                                }
                            }

                        }
                        else {
                            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
                            cout << "?:0��9��1����͂��Ă�������";
                        }
                    }
                }
            }
            cout << "\n";
        }

        else if (k == 0) {
            cout << "\n�K�����ȐӔC�ł����p��������.\n";
            cout << "������x�̓���͕ۏႵ�܂����A���̃c�[���̗��p�ɂ���ē����s���v���Q�ɂ��Ă͈�ؐӔC�𕉂��܂���, \n";
            cout << "\n";
            cout << "�g����\n";
            cout << "��{�I�ɂ��̃c�[���̓e���L�[�����݂̂œ��͂ł��܂�.\n";
            cout << "��ʂ̎w���ɏ]���Đ��l����͂���ƁA�����ɍ������\���o�͂���܂�.\n";
            cout << "�͈͊O�̐��l����͂���ƁA�G���[���b�Z�[�W���o��̂ŁA����ɏ]����蒼���Ă�������.\n";
            cout << "�����o�͂���Ȃ������ꍇ�A���̏����ɍ������̂�1���Ȃ����ƂɂȂ�̂ŁA������ς��Ď����Ă݂Ă�������.\n";
            cout << "���͂�������ꍇ�A�킴�ƃG���[�ɂȂ�܂œ����i�߂Ă�������.(���݂̃o�[�W�����ł͖߂�܂���A��������������)\n";
            cout << "\n";
            cout << "���ӎ���\n";
            cout << "��{�I�ȓ��͂͐����ł����󂯕t���܂���A�����̓G���[�̌����ƂȂ�̂ł�߂Ă�������.(�w��ꏊ������)\n";
            cout << "���[�h��13�A23�A33��r���̑I�����ł������߂���Ă��Ȃ����̂́A�o�͗ʂ��ɒ[�ɑ�����ƍl��������̂ł�.\n";
            cout << "�����𗘗p����ꍇ�́A���s���ԂƓ���ɋC��t���Ă�������.\n";
            cout << "����s��𔭌������ꍇ�́A���܂ł��A����������.\n";
            cout << "\n";
            cout << "Version 1.0.999\n";
            cout << "License by 999/QWERTYkbd(notnishikori_18)\n\n";
        }

        else if (k == 139) {
            cout << "139�͂�����\n\n";
        }

        else if (k == 2539) {
            cout << "2539�Ă��Ă�\n\n";
        }

        else if (k != 99) {
            cout << "Invalid Range! Please Enter A VALID VALUE.\n";
            cout << "?:���������l����͂��Ă�������\n\n";
        }

    }while (k != 99);
    return 0;
}