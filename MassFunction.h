#pragma once
//#include <KamataEngine.h>
#include <Novice.h>
#include <math.h>
struct Vector3{
	float x;	///< x座標
	float y;	///< y座標
	float z;	///< z座標
	
};
///
	static const int KColumnWidth = 60;
	static const int KRowHeight = 15;
	/// <summary>
	/// ベクトルの値の描画
	/// </summary>
	/// <param name="x">描画位置ｘ</param>
	/// <param name="y">描画位置ｙ</param>
	/// <param name="vector">ベクトル</param>
	/// <param name="label">関数名</param>
	void VectorScreenPrintf( int x, int y,Vector3& vector, const char* label);

	/// <summary>
	/// ADD 
	/// </summary>
	/// <param name="v1">ベクトル１</param>
	/// <param name="v2">ベクトル２</param>
	/// <returns>ベクトル１＋２</returns>
	Vector3 Add(const Vector3& v1,const Vector3& v2);
	/// <summary>
	/// Subtract
	/// </summary>
	/// <param name="v1">ベクトル１</param>
	/// <param name="v2">ベクトル２</param>
	/// <returns>ベクトル１－２</returns>
	Vector3 Subtract(const Vector3& v1,const Vector3& v2);
	/// <summary>
	/// スカラー倍
	/// </summary>
	/// <param name="scalar">スカラー数</param>
	/// <param name="v">ベクトル</param>
	/// <returns>ベクトル＊スカラー</returns>
	Vector3 Multiply(float scalar,const Vector3& v);
	/// <summary>
	/// DOT
	/// </summary>
	/// <param name="v1">ベクトル１</param>
	/// <param name="v2">ベクトル２</param>
	/// <returns></returns>
	float Dot(const Vector3& v1,const Vector3& v2);
	/// <summary>
	/// Length
	/// </summary>
	/// <param name="v">ベクトル</param>
	/// <returns></returns>
	float Length(const Vector3& v);
	/// <summary>
	/// Normalize
	/// </summary>
	/// <param name="v">ベクトル</param>
	/// <returns>正規化数</returns>
	Vector3 Normalize(const Vector3& v);
//}
