#pragma once



// +---------+
// | Structs |
// +---------+

// A 2-dimensional vector with double values.
struct Vector2
{
	double x, y;

	Vector2();
	Vector2(double x, double y);

	Vector2 operator+(const Vector2& other) const;
	Vector2 operator-(const Vector2& other) const;
	Vector2 operator*(const double& other) const;
	Vector2 operator/(const double& other) const;

	Vector2& operator=(const Vector2& other);
	Vector2& operator+=(const Vector2& other);
	Vector2& operator-=(const Vector2& other);
	Vector2& operator*=(const double& other);
	Vector2& operator/=(const double& other);

	bool operator==(const Vector2& other) const;
	bool operator!=(const Vector2& other) const;
};

// A 3-dimensional vector with double values.
struct Vector3
{
	double x, y, z;

	Vector3();
	Vector3(double x, double y, double z);

	Vector3 operator+(const Vector3& other) const;
	Vector3 operator-(const Vector3& other) const;
	Vector3 operator*(const double& other) const;
	Vector3 operator/(const double& other) const;

	Vector3& operator=(const Vector3& other);
	Vector3& operator+=(const Vector3& other);
	Vector3& operator-=(const Vector3& other);
	Vector3& operator*=(const double& other);
	Vector3& operator/=(const double& other);

	bool operator==(const Vector3& other) const;
	bool operator!=(const Vector3& other) const;
};

// A 4-dimensional vector with double values.
struct Vector4
{
	double x, y, z, w;

	Vector4();
	Vector4(double x, double y, double z, double w);

	Vector4 operator+(const Vector4& other) const;
	Vector4 operator-(const Vector4& other) const;
	Vector4 operator*(const double& other) const;
	Vector4 operator/(const double& other) const;

	Vector4& operator=(const Vector4& other);
	Vector4& operator+=(const Vector4& other);
	Vector4& operator-=(const Vector4& other);
	Vector4& operator*=(const double& other);
	Vector4& operator/=(const double& other);

	bool operator==(const Vector4& other) const;
	bool operator!=(const Vector4& other) const;
};

// A 2x2 matrix.
struct Matrix2x2
{
	Vector2 x, y;

	Matrix2x2();
	Matrix2x2(const Vector2& x, const Vector2& y);
	Matrix2x2(double xx, double yx, 
				 double xy, double yy);

	Matrix2x2 operator+(const Matrix2x2& other) const;
	Matrix2x2 operator-(const Matrix2x2& other) const;
	Matrix2x2 operator*(const double& other) const;
	Matrix2x2 operator/(const double& other) const;

	Matrix2x2& operator=(const Matrix2x2& other);
	Matrix2x2& operator+=(const Matrix2x2& other);
	Matrix2x2& operator-=(const Matrix2x2& other);
	Matrix2x2& operator*=(const double& other);
	Matrix2x2& operator/=(const double& other);

	bool operator==(const Matrix2x2& other) const;
	bool operator!=(const Matrix2x2& other) const;
};

// A 3x3 matrix.
struct Matrix3x3
{
	Vector3 x, y, z;

	Matrix3x3();
	Matrix3x3(const Vector3& x, const Vector3& y, const Vector3& z);
	Matrix3x3(double xx, double yx, double zx,
				 double xy, double yy, double zy,
				 double xz, double yz, double zz);

	Matrix3x3 operator+(const Matrix3x3& other) const;
	Matrix3x3 operator-(const Matrix3x3& other) const;
	Matrix3x3 operator*(const double& other) const;
	Matrix3x3 operator/(const double& other) const;

	Matrix3x3& operator=(const Matrix3x3& other);
	Matrix3x3& operator+=(const Matrix3x3& other);
	Matrix3x3& operator-=(const Matrix3x3& other);
	Matrix3x3& operator*=(const double& other);
	Matrix3x3& operator/=(const double& other);

	bool operator==(const Matrix3x3& other) const;
	bool operator!=(const Matrix3x3& other) const;
};

// A 4x4 matrix.
struct Matrix4x4
{
	Vector4 x, y, z, w;

	Matrix4x4();
	Matrix4x4(const Vector4& x, const Vector4& y,
				 const Vector4& z, const Vector4& w);
	Matrix4x4(double xx, double yx, double zx, double wx,
				 double xy, double yy, double zy, double wy,
				 double xz, double yz, double zz, double wz,
				 double xw, double yw, double zw, double ww);

	Matrix4x4 operator+(const Matrix4x4& other) const;
	Matrix4x4 operator-(const Matrix4x4& other) const;
	Matrix4x4 operator*(const double& other) const;
	Matrix4x4 operator/(const double& other) const;

	Matrix4x4& operator=(const Matrix4x4& other);
	Matrix4x4& operator+=(const Matrix4x4& other);
	Matrix4x4& operator-=(const Matrix4x4& other);
	Matrix4x4& operator*=(const double& other);
	Matrix4x4& operator/=(const double& other);

	bool operator==(const Matrix4x4& other) const;
	bool operator!=(const Matrix4x4& other) const;
};


// +--------------------+
// | External operators |
// +--------------------+

Vector2 operator*(const double& lhs, const Vector2& rhs);
Vector3 operator*(const double& lhs, const Vector3& rhs);
Vector4 operator*(const double& lhs, const Vector4& rhs);
Matrix2x2 operator*(const double& lhs, const Matrix2x2& rhs);
Matrix3x3 operator*(const double& lhs, const Matrix3x3& rhs);
Matrix4x4 operator*(const double& lhs, const Matrix4x4& rhs);


// +-----------+
// | Functions |
// +-----------+

/// <summary>
/// Get the length of a vector 'vec'.
/// </summary>
/// <param name="vec">The vector you want the length of.</param>
/// <returns>The length of the vector 'vec' as a double value.</returns>
double Length(Vector2 vec);

/// <summary>
/// Get the length of a vector 'vec'.
/// </summary>
/// <param name="vec">The vector you want the length of.</param>
/// <returns>The length of the vector 'vec' as a double value.</returns>
double Length(Vector3 vec);

/// <summary>
/// Get the length of a vector 'vec'.
/// </summary>
/// <param name="vec">The vector you want the length of.</param>
/// <returns>The length of the vector 'vec' as a double value.</returns>
double Length(Vector4 vec);

/// <summary>
/// Get the normalized vector of a vector 'vec'.
/// </summary>
/// <param name="vec">The vector you want normalized.</param>
/// <returns>A vector of length 1 with the same direction as 'vec'.</returns>
Vector2 Normalized(Vector2 vec);

/// <summary>
/// Get the normalized vector of a vector 'vec'.
/// </summary>
/// <param name="vec">The vector you want normalized.</param>
/// <returns>A vector of length 1 with the same direction as 'vec'.</returns>
Vector3 Normalized(Vector3 vec);

/// <summary>
/// Get the normalized vector of a vector 'vec'.
/// </summary>
/// <param name="vec">The vector you want normalized.</param>
/// <returns>A vector of length 1 with the same direction as 'vec'.</returns>
Vector4 Normalized(Vector4 vec);

/// <summary>
/// Get the dot product of vectors 'vec1' and 'vec2'.
/// </summary>
/// <param name="vec1">The left-hand side vector.</param>
/// <param name="vec2">The right-hand side vector.</param>
/// <returns>The dot product of 'vec1' and 'vec2' as a double value.</returns>
double Dot(Vector2 vec1, Vector2 vec2);

/// <summary>
/// Get the dot product of vectors 'vec1' and 'vec2'.
/// </summary>
/// <param name="vec1">The left-hand side vector.</param>
/// <param name="vec2">The right-hand side vector.</param>
/// <returns>The dot product of 'vec1' and 'vec2' as a double value.</returns>
double Dot(Vector3 vec1, Vector3 vec2);

/// <summary>
/// Get the dot product of vectors 'vec1' and 'vec2'.
/// </summary>
/// <param name="vec1">The left-hand side vector.</param>
/// <param name="vec2">The right-hand side vector.</param>
/// <returns>The dot product of 'vec1' and 'vec2' as a double value.</returns>
double Dot(Vector4 vec1, Vector4 vec2);

/// <summary>
/// Get the cross product of vectors 'vec1' and 'vec2'.
/// The order of the vectors is important.
/// </summary>
/// <param name="vec1">The left-hand side vector.</param>
/// <param name="vec2">The right-hand side vector.</param>
/// <returns>The cross product of 'vec1' and 'vec2'.</returns>
Vector3 Cross(Vector3 vec1, Vector3 vec2);

/// <summary>
/// Get the vector from transforming vector 'vec' through transfomation
/// matrix 'mat'.
/// </summary>
/// <param name="vec">The vactor to transform.</param>
/// <param name="mat">The transformation matrix.</param>
/// <returns>The result from transforming 'vec' through 'mat'.</returns>
Vector2 MatrixTransform(Vector2 vec, Matrix2x2 mat);

/// <summary>
/// Get the vector from transforming vector 'vec' through transfomation
/// matrix 'mat'.
/// </summary>
/// <param name="vec">The vactor to transform.</param>
/// <param name="mat">The transformation matrix.</param>
/// <returns>The result from transforming 'vec' through 'mat'.</returns>
Vector3 MatrixTransform(Vector3 vec, Matrix3x3 mat);

/// <summary>
/// Get the vector from transforming vector 'vec' through transfomation
/// matrix 'mat'.
/// </summary>
/// <param name="vec">The vactor to transform.</param>
/// <param name="mat">The transformation matrix.</param>
/// <returns>The result from transforming 'vec' through 'mat'.</returns>
Vector4 MatrixTransform(Vector4 vec, Matrix4x4 mat);

/// <summary>
/// Get the transposed matrix of matrix 'mat'.
/// </summary>
/// <param name="mat">The matrix to transpose.</param>
/// <returns>The transposed matrix of 'mat'.</returns>
Matrix2x2 Transposed(Matrix2x2 mat);

/// <summary>
/// Get the transposed matrix of matrix 'mat'.
/// </summary>
/// <param name="mat">The matrix to transpose.</param>
/// <returns>The transposed matrix of 'mat'.</returns>
Matrix3x3 Transposed(Matrix3x3 mat);

/// <summary>
/// Get the transposed matrix of matrix 'mat'.
/// </summary>
/// <param name="mat">The matrix to transpose.</param>
/// <returns>The transposed matrix of 'mat'.</returns>
Matrix4x4 Transposed(Matrix4x4 mat);