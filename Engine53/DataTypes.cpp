#include "DataTypes.h"
#include <cmath>



// +-----------------+
// | Vector2 methods |
// +-----------------+

Vector2::Vector2()
{
	x = 0.0;
	y = 0.0;
}

Vector2::Vector2(double x, double y)
{
	this->x = x;
	this->y = y;
}

Vector2 Vector2::operator+(const Vector2& other) const
{
	return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator-(const Vector2& other) const
{
	return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator*(const double& other) const
{
	return Vector2(x * other, y * other);
}

Vector2 Vector2::operator/(const double& other) const
{
	return Vector2(x / other, y / other);
}

Vector2& Vector2::operator=(const Vector2& other)
{
	if (this == &other)
	{
		return *this;
	}

	x = other.x;
	y = other.y;

	return *this;
}

Vector2& Vector2::operator+=(const Vector2& other)
{
	*this = *this + other;

	return *this;
}

Vector2& Vector2::operator-=(const Vector2& other)
{
	*this = *this - other;

	return *this;
}

Vector2& Vector2::operator*=(const double& other)
{
	*this = *this * other;

	return *this;
}

Vector2& Vector2::operator/=(const double& other)
{
	*this = *this / other;

	return *this;
}

bool Vector2::operator==(const Vector2& other) const
{
	return x == other.x && y == other.y;
}

bool Vector2::operator!=(const Vector2& other) const
{
	return !(*this == other);
}


// +-----------------+
// | Vector3 methods |
// +-----------------+

Vector3::Vector3()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

Vector3::Vector3(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator+(const Vector3& other) const
{
	return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const
{
	return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(const double& other) const
{
	return Vector3(x * other, y * other, z * other);
}

Vector3 Vector3::operator/(const double& other) const
{
	return Vector3(x / other, y / other, z / other);
}

Vector3& Vector3::operator=(const Vector3& other)
{
	if (this == &other)
	{
		return *this;
	}

	x = other.x;
	y = other.y;

	return *this;
}

Vector3& Vector3::operator+=(const Vector3& other)
{
	*this = *this + other;

	return *this;
}

Vector3& Vector3::operator-=(const Vector3& other)
{
	*this = *this - other;

	return *this;
}

Vector3& Vector3::operator*=(const double& other)
{
	*this = *this * other;

	return *this;
}

Vector3& Vector3::operator/=(const double& other)
{
	*this = *this / other;

	return *this;
}

bool Vector3::operator==(const Vector3& other) const
{
	return x == other.x && y == other.y;
}

bool Vector3::operator!=(const Vector3& other) const
{
	return !(*this == other);
}


// +-----------------+
// | Vector4 methods |
// +-----------------+

Vector4::Vector4()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
	w = 0.0;
}

Vector4::Vector4(double x, double y, double z, double w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

Vector4 Vector4::operator+(const Vector4& other) const
{
	return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
}

Vector4 Vector4::operator-(const Vector4& other) const
{
	return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
}

Vector4 Vector4::operator*(const double& other) const
{
	return Vector4(x * other, y * other, z * other, w * other);
}

Vector4 Vector4::operator/(const double& other) const
{
	return Vector4(x / other, y / other, z / other, w / other);
}

Vector4& Vector4::operator=(const Vector4& other)
{
	if (this == &other)
	{
		return *this;
	}

	x = other.x;
	y = other.y;

	return *this;
}

Vector4& Vector4::operator+=(const Vector4& other)
{
	*this = *this + other;

	return *this;
}

Vector4& Vector4::operator-=(const Vector4& other)
{
	*this = *this - other;

	return *this;
}

Vector4& Vector4::operator*=(const double& other)
{
	*this = *this * other;

	return *this;
}

Vector4& Vector4::operator/=(const double& other)
{
	*this = *this / other;
	return *this;
}

bool Vector4::operator==(const Vector4& other) const
{
	return x == other.x && y == other.y;
}

bool Vector4::operator!=(const Vector4& other) const
{
	return !(*this == other);
}


// +-------------------+
// | Matrix2x2 methods |
// +-------------------+

Matrix2x2::Matrix2x2()
{
	x = Vector2();
	y = Vector2();
}

Matrix2x2::Matrix2x2(const Vector2& x, const Vector2& y)
{
	this->x = x;
	this->y = y;
}

Matrix2x2::Matrix2x2(double xx, double yx,
							double xy, double yy)
{
	x = Vector2(xx, xy);
	y = Vector2(yx, yy);
}

Matrix2x2 Matrix2x2::operator+(const Matrix2x2& other) const
{
	return Matrix2x2(x + other.x, y + other.y);
}

Matrix2x2 Matrix2x2::operator-(const Matrix2x2& other) const
{
	return Matrix2x2(x - other.x, y - other.y);
}

Matrix2x2 Matrix2x2::operator*(const double& other) const
{
	return Matrix2x2(x * other, y * other);
}

Matrix2x2 Matrix2x2::operator/(const double& other) const
{
	return Matrix2x2(x / other, y / other);
}

Matrix2x2& Matrix2x2::operator=(const Matrix2x2& other)
{
	if (this == &other)
	{
		return *this;
	}

	x = other.x;
	y = other.y;

	return *this;
}

Matrix2x2& Matrix2x2::operator+=(const Matrix2x2& other)
{
	*this = *this + other;

	return *this;
}

Matrix2x2& Matrix2x2::operator-=(const Matrix2x2& other)
{
	*this = *this - other;

	return *this;
}

Matrix2x2& Matrix2x2::operator*=(const double& other)
{
	*this = *this * other;

	return *this;
}

Matrix2x2& Matrix2x2::operator/=(const double& other)
{
	*this = *this / other;

	return *this;
}

bool Matrix2x2::operator==(const Matrix2x2& other) const
{
	return x == other.x && y == other.y;
}

bool Matrix2x2::operator!=(const Matrix2x2& other) const
{
	return !(*this == other);
}


// +-------------------+
// | Matrix3x3 methods |
// +-------------------+

Matrix3x3::Matrix3x3()
{
	x = Vector3();
	y = Vector3();
}

Matrix3x3::Matrix3x3(const Vector3& x, const Vector3& y, const Vector3& z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Matrix3x3::Matrix3x3(double xx, double yx, double zx,
							double xy, double yy, double zy,
							double xz, double yz, double zz)
{
	x = Vector3(xx, xy, xz);
	y = Vector3(yx, yy, yz);
	z = Vector3(zx, zy, zz);
}

Matrix3x3 Matrix3x3::operator+(const Matrix3x3& other) const
{
	return Matrix3x3(x + other.x, y + other.y, z + other.z);
}

Matrix3x3 Matrix3x3::operator-(const Matrix3x3& other) const
{
	return Matrix3x3(x - other.x, y - other.y, z - other.z);
}

Matrix3x3 Matrix3x3::operator*(const double& other) const
{
	return Matrix3x3(x * other, y * other, z * other);
}

Matrix3x3 Matrix3x3::operator/(const double& other) const
{
	return Matrix3x3(x / other, y / other, z * other);
}

Matrix3x3& Matrix3x3::operator=(const Matrix3x3& other)
{
	if (this == &other)
	{
		return *this;
	}

	x = other.x;
	y = other.y;
	z = other.z;

	return *this;
}

Matrix3x3& Matrix3x3::operator+=(const Matrix3x3& other)
{
	*this = *this + other;

	return *this;
}

Matrix3x3& Matrix3x3::operator-=(const Matrix3x3& other)
{
	*this = *this - other;

	return *this;
}

Matrix3x3& Matrix3x3::operator*=(const double& other)
{
	*this = *this * other;

	return *this;
}

Matrix3x3& Matrix3x3::operator/=(const double& other)
{
	*this = *this / other;

	return *this;
}

bool Matrix3x3::operator==(const Matrix3x3& other) const
{
	return x == other.x && y == other.y && z == other.z;
}

bool Matrix3x3::operator!=(const Matrix3x3& other) const
{
	return !(*this == other);
}


// +-------------------+
// | Matrix4x4 methods |
// +-------------------+

Matrix4x4::Matrix4x4()
{
	x = Vector4();
	y = Vector4();
}

Matrix4x4::Matrix4x4(const Vector4& x, const Vector4& y,
							const Vector4& z, const Vector4& w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->z = w;
}

Matrix4x4::Matrix4x4(double xx, double yx, double zx, double wx,
							double xy, double yy, double zy, double wy,
							double xz, double yz, double zz, double wz,
							double xw, double yw, double zw, double ww)
{
	x = Vector4(xx, xy, xz, xw);
	y = Vector4(yx, yy, yz, yw);
	z = Vector4(zx, zy, zz, zw);
	w = Vector4(wx, wy, wz, ww);
}

Matrix4x4 Matrix4x4::operator+(const Matrix4x4& other) const
{
	return Matrix4x4(x + other.x, y + other.y, z + other.z, w + other.w);
}

Matrix4x4 Matrix4x4::operator-(const Matrix4x4& other) const
{
	return Matrix4x4(x - other.x, y - other.y, z - other.z, w - other.w);
}

Matrix4x4 Matrix4x4::operator*(const double& other) const
{
	return Matrix4x4(x * other, y * other, z * other, w * other);
}

Matrix4x4 Matrix4x4::operator/(const double& other) const
{
	return Matrix4x4(x / other, y / other, z * other, w / other);
}

Matrix4x4& Matrix4x4::operator=(const Matrix4x4& other)
{
	if (this == &other)
	{
		return *this;
	}

	x = other.x;
	y = other.y;
	z = other.z;
	w = other.w;

	return *this;
}

Matrix4x4& Matrix4x4::operator+=(const Matrix4x4& other)
{
	*this = *this + other;

	return *this;
}

Matrix4x4& Matrix4x4::operator-=(const Matrix4x4& other)
{
	*this = *this - other;

	return *this;
}

Matrix4x4& Matrix4x4::operator*=(const double& other)
{
	*this = *this * other;

	return *this;
}

Matrix4x4& Matrix4x4::operator/=(const double& other)
{
	*this = *this / other;

	return *this;
}

bool Matrix4x4::operator==(const Matrix4x4& other) const
{
	return x == other.x && y == other.y && z == other.z && w == other.w;
}

bool Matrix4x4::operator!=(const Matrix4x4& other) const
{
	return !(*this == other);
}


// +--------------------+
// | External operators |
// +--------------------+

Vector2 operator*(const double& lhs, const Vector2& rhs)
{
	return rhs * lhs;
}

Vector3 operator*(const double& lhs, const Vector3& rhs)
{
	return rhs * lhs;
}

Vector4 operator*(const double& lhs, const Vector4& rhs)
{
	return rhs * lhs;
}

Matrix2x2 operator*(const double& lhs, const Matrix2x2& rhs)
{
	return rhs * lhs;
}

Matrix3x3 operator*(const double& lhs, const Matrix3x3& rhs)
{
	return rhs * lhs;
}

Matrix4x4 operator*(const double& lhs, const Matrix4x4& rhs)
{
	return rhs * lhs;
}


// +-----------+
// | Functions |
// +-----------+

double Length(Vector2 vec)
{
	return sqrt(pow(vec.x, 2.0) + pow(vec.y, 2.0));
}

double Length(Vector3 vec)
{
	return sqrt(pow(vec.x, 2.0) + pow(vec.y, 2.0) + pow(vec.z, 2.0));
}

double Length(Vector4 vec)
{
	return sqrt(pow(vec.x, 2.0) + pow(vec.y, 2.0) +
					pow(vec.z, 2.0) + pow(vec.w, 2.0));
}

Vector2 Normalized(Vector2 vec)
{
	return vec / Length(vec);
}

Vector3 Normalized(Vector3 vec)
{
	return vec / Length(vec);
}

Vector4 Normalized(Vector4 vec)
{
	return vec / Length(vec);
}

double Dot(Vector2 lhs, Vector2 rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y;
}

double Dot(Vector3 lhs, Vector3 rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
}

double Dot(Vector4 lhs, Vector4 rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z + lhs.w * rhs.w;
}

Vector3 Cross(Vector3 lhs, Vector3 rhs)
{
	return Vector3(lhs.y * rhs.z - lhs.z * rhs.y,
						lhs.z * rhs.x - lhs.x * rhs.z,
						lhs.x * rhs.y - lhs.y * rhs.x);
}

Vector2 MatrixTransform(Vector2 vec, Matrix2x2 mat)
{
	return Vector2(Dot(vec, mat.x), Dot(vec, mat.y));
}

Vector3 MatrixTransform(Vector3 vec, Matrix3x3 mat)
{
	return Vector3(Dot(vec, mat.x), Dot(vec, mat.y), Dot(vec, mat.z));
}

Vector4 MatrixTransform(Vector4 vec, Matrix4x4 mat)
{
	return Vector4(Dot(vec, mat.x), Dot(vec, mat.y),
						Dot(vec, mat.z), Dot(vec, mat.w));
}

Matrix2x2 Transposed(Matrix2x2 mat)
{
	return Matrix2x2(mat.x.x, mat.x.y,
						  mat.y.x, mat.y.y);
}

Matrix3x3 Transposed(Matrix3x3 mat)
{
	return Matrix3x3(mat.x.x, mat.x.y, mat.x.z,
						  mat.y.x, mat.y.y, mat.y.z,
						  mat.z.x, mat.z.y, mat.z.z);
}

Matrix4x4 Transposed(Matrix4x4 mat)
{
	return Matrix4x4(mat.x.x, mat.x.y, mat.x.z, mat.x.w,
					     mat.y.x, mat.y.y, mat.y.z, mat.y.w,
						  mat.z.x, mat.z.y, mat.z.z, mat.z.w,
						  mat.w.x, mat.w.y, mat.w.z, mat.w.w);
}
