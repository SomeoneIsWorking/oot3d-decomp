// OoT3D decomp @ 00308c20  name=FUN_00308c20  size=100

uint FUN_00308c20(uint param_1,int param_2)

{
  int iVar1;

  if (param_2 != 0) {
    if (param_2 == 1) {
      return param_1 << 1;
    }
    if (param_2 != 3) {
      return 0;
    }
    iVar1 = param_1 + (uint)((ulonglong)DAT_00308c84 * (ulonglong)param_1 + (ulonglong)DAT_00308c84
                            >> 0x22) * -0xe;
    param_1 = (uint)((ulonglong)DAT_00308c84 * (ulonglong)param_1 + (ulonglong)DAT_00308c84 >> 0x22)
              * 0x10;
    if (iVar1 != 0) {
      param_1 = param_1 + iVar1 + 2;
    }
    param_1 = param_1 >> 1;
  }
  return param_1;
}
