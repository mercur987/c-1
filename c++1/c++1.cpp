

// c++1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	const int STD_BMI = 22; // 標準BMI
	double stdWeight;   // 標準体重
	double height;
	double weight;
	double bmi;

	cout << "身長(m)を入力してください:";
	cin >> height;
	cout << "体重(kg)を入力してください:";
	cin >> weight;
	stdWeight = STD_BMI * height * height;
	bmi = weight / height / height;
	cout << "あなたのBMIは、" << bmi << "です" << endl;
	if (bmi  18.5) {
		cout << "低体重です" << endl;
	}
	else if (18.5 <= bmi < 25) {
		cout << "普通体重です" << endl;
	}
	else if (25 <= bmi < 30) {
		cout << "肥満(1度)です" << endl;
	}
	else if (30 <= bmi < 35) {
		cout << "肥満(2度)です" << endl;
	}
	else if (35 <= bmi < 40) {
		cout << "肥満(3度)です" << endl;
	}
	else {
		cout << "肥満(4度)です" << endl;
	}
	cout << "あなたの標準体重は、" << stdWeight << "です" << endl;
	return 0;
}
// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
