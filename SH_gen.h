SH_product_3(const double *a, const double *b, double &*c)
{
  double ta, tb, t

  // [0,0]: 0
  c[0] = 0.282095*b[0]*a[0]

  // [1,1]: 0, 6, 8
  ta = 0.282093*a[0] + -0.126156*a[6] + -0.218505*a[8]
  tb = 0.282093*b[0] + -0.126156*b[6] + -0.218505*b[8]
  c[1] = ta*b[1] + tb*a[1]
  t = a[1]*b[1]
  c[0] += 0.282093*t
  c[6] = -0.126156*t
  c[8] = -0.218505*t

  // [1,2]: 5
  ta = 0.218508*a[5]
  tb = 0.218508*b[5]
  c[1] += ta*b[2] + tb*a[2]
  c[2] = ta*b[1] + tb*a[1]
  t = a[1]*b[2] + a[2]*b[1]
  c[5] = 0.218508*t

  // [1,3]: 4
  ta = 0.218511*a[4]
  tb = 0.218511*b[4]
  c[1] += ta*b[3] + tb*a[3]
  c[3] = ta*b[1] + tb*a[1]
  t = a[1]*b[3] + a[3]*b[1]
  c[4] = 0.218511*t

  // [2,2]: 0, 6
  ta = 0.282094*a[0] + 0.252313*a[6]
  tb = 0.282094*b[0] + 0.252313*b[6]
  c[2] += ta*b[2] + tb*a[2]
  t = a[2]*b[2]
  c[0] += 0.282094*t
  c[6] += 0.252313*t

  // [2,3]: 7
  ta = 0.218511*a[7]
  tb = 0.218511*b[7]
  c[2] += ta*b[3] + tb*a[3]
  c[3] += ta*b[2] + tb*a[2]
  t = a[2]*b[3] + a[3]*b[2]
  c[7] = 0.218511*t

  // [3,3]: 0, 6, 8
  ta = 0.282097*a[0] + -0.126159*a[6] + 0.218512*a[8]
  tb = 0.282097*b[0] + -0.126159*b[6] + 0.218512*b[8]
  c[3] += ta*b[3] + tb*a[3]
  t = a[3]*b[3]
  c[0] += 0.282097*t
  c[6] += -0.126159*t
  c[8] += 0.218512*t

  // [4,4]: 0, 6
  ta = 0.282097*a[0] + -0.180225*a[6]
  tb = 0.282097*b[0] + -0.180225*b[6]
  c[4] += ta*b[4] + tb*a[4]
  t = a[4]*b[4]
  c[0] += 0.282097*t
  c[6] += -0.180225*t

  // [4,5]: 7
  ta = 0.15608*a[7]
  tb = 0.15608*b[7]
  c[4] += ta*b[5] + tb*a[5]
  c[5] += ta*b[4] + tb*a[4]
  t = a[4]*b[5] + a[5]*b[4]
  c[7] += 0.15608*t

  // [5,5]: 0, 6, 8
  ta = 0.282092*a[0] + 0.0901089*a[6] + -0.156075*a[8]
  tb = 0.282092*b[0] + 0.0901089*b[6] + -0.156075*b[8]
  c[5] += ta*b[5] + tb*a[5]
  t = a[5]*b[5]
  c[0] += 0.282092*t
  c[6] += 0.0901089*t
  c[8] += -0.156075*t

  // [6,6]: 0, 6
  ta = 0.282095*a[0]
  tb = 0.282095*b[0]
  c[6] += ta*b[6] + tb*a[6]
  t = a[6]*b[6]
  c[0] += 0.282095*t
  c[6] += 0.180225*t

  // [7,7]: 0, 6, 8
  ta = 0.282096*a[0] + 0.0901119*a[6] + 0.156078*a[8]
  tb = 0.282096*b[0] + 0.0901119*b[6] + 0.156078*b[8]
  c[7] += ta*b[7] + tb*a[7]
  t = a[7]*b[7]
  c[0] += 0.282096*t
  c[6] += 0.0901119*t
  c[8] += 0.156078*t

  // [8,8]: 0, 6
  ta = 0.282094*a[0] + -0.180224*a[6]
  tb = 0.282094*b[0] + -0.180224*b[6]
  c[8] += ta*b[8] + tb*a[8]
  t = a[8]*b[8]
  c[0] += 0.282094*t
  c[6] += -0.180224*t

  // entry count: 13
  // multiply count: 106
  // addition count: 68
}

SH_square_3(const double *a, double *c)
{
  double ta, t

  // [0,0]: 0
  c[0] = 0.282095*a[0]*a[0]

  // [1,1]: 0, 6, 8
  ta = 0.564186*a[0] + -0.252312*a[6] + -0.43701*a[8]
  c[1] = ta*a[1]
  t = a[1]*a[1]
  c[0] += 0.282093*t
  c[6] = -0.126156*t
  c[8] = -0.218505*t

  // [1,2]: 5
  ta = 0.437016*a[5]
  c[1] += ta*a[2]
  c[2] = ta*a[1]
  t = a[1]*a[2]
  c[5] = 0.437016*t

  // [1,3]: 4
  ta = 0.437022*a[4]
  c[1] += ta*a[3]
  c[3] = ta*a[1]
  t = a[1]*a[3]
  c[4] = 0.437022*t

  // [2,2]: 0, 6
  ta = 0.564188*a[0] + 0.504626*a[6]
  c[2] += ta*a[2]
  t = a[2]*a[2]
  c[0] += 0.282094*t
  c[6] += 0.252313*t

  // [2,3]: 7
  ta = 0.437022*a[7]
  c[2] += ta*a[3]
  c[3] += ta*a[2]
  t = a[2]*a[3]
  c[7] = 0.437022*t

  // [3,3]: 0, 6, 8
  ta = 0.564194*a[0] + -0.252318*a[6] + 0.437024*a[8]
  c[3] += ta*a[3]
  t = a[3]*a[3]
  c[0] += 0.282097*t
  c[6] += -0.126159*t
  c[8] += 0.218512*t

  // [4,4]: 0, 6
  ta = 0.564194*a[0] + -0.36045*a[6]
  c[4] += ta*a[4]
  t = a[4]*a[4]
  c[0] += 0.282097*t
  c[6] += -0.180225*t

  // [4,5]: 7
  ta = 0.31216*a[7]
  c[4] += ta*a[5]
  c[5] += ta*a[4]
  t = a[4]*a[5]
  c[7] += 0.31216*t

  // [5,5]: 0, 6, 8
  ta = 0.564184*a[0] + 0.1802178*a[6] + -0.31215*a[8]
  c[5] += ta*a[5]
  t = a[5]*a[5]
  c[0] += 0.282092*t
  c[6] += 0.0901089*t
  c[8] += -0.156075*t

  // [6,6]: 0, 6
  ta = 0.56419*a[0]
  c[6] += ta*a[6]
  t = a[6]*a[6]
  c[0] += 0.282095*t
  c[6] += 0.180225*t

  // [7,7]: 0, 6, 8
  ta = 0.564192*a[0] + 0.1802238*a[6] + 0.312156*a[8]
  c[7] += ta*a[7]
  t = a[7]*a[7]
  c[0] += 0.282096*t
  c[6] += 0.0901119*t
  c[8] += 0.156078*t

  // [8,8]: 0, 6
  ta = 0.564188*a[0] + -0.360448*a[6]
  c[8] += ta*a[8]
  t = a[8]*a[8]
  c[0] += 0.282094*t
  c[6] += -0.180224*t

  // entry count: 13
  // multiply count: 78
  // addition count: 52
}
