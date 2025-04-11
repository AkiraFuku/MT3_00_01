#include "MassFunction.h"
//namespace KamataEngine{
	void VectorScreenPrintf(int x, int y, Vector3& vector, const char* label){
		Novice::ScreenPrintf(x, y, "%.02f", vector.x);
		Novice::ScreenPrintf(x + KColumnWidth, y, "%.02f", vector.y);
		Novice::ScreenPrintf(x + KColumnWidth * 2, y, "%.02f", vector.z);
		Novice::ScreenPrintf(x + KColumnWidth * 3, y, "%s", label);
	}
	//加算
	Vector3 Add(const Vector3& v1, const Vector3& v2){
		Vector3 result={
			v1.x + v2.x,
			v1.y + v2.y,
			v1.z + v2.z
		
		};
		return result;
	}
	//
	Vector3 Subtract(const Vector3& v1, const Vector3& v2){
		Vector3 result = {
			v1.x - v2.x,
			v1.y - v2.y,
			v1.z - v2.z
		};
		return result;
	}
	//
	Vector3 Multiply(float scalar, const Vector3& v){
		Vector3 result = {
			scalar * v.x,
			scalar * v.y,
			scalar * v.z
		};
		return result;
	}
	//
	float Dot(const Vector3& v1, const Vector3& v2){
		
		float result = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
		return result ;
	}
	//
	float Length(const Vector3& v){
		float length = v.x * v.x + v.y * v.y + v.z * v.z;
		if (length > 0.0f) {
			return sqrtf(length);
		}
		return length;
	}
	//
	Vector3 Normalize(const Vector3& v){
		float length = Length(v);
		if (length > 0.0f) {
			Vector3 result = {
				v.x / length,
				v.y / length,
				v.z / length
			};
			return result;
		}
		Vector3 result = { 0.0f, 0.0f, 0.0f };
		return result;

	}
//}