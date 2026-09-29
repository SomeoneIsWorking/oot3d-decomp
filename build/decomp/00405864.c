// OoT3D decomp @ 00405864  name=FUN_00405864  size=108

uint FUN_00405864(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;

  uVar1 = 0;
  if (param_2 == 0) {
    return param_1;
  }
  if (param_2 == 1) {
    return param_1 << 1;
  }
  if (param_2 == 3) {
    uVar1 = (uint)((ulonglong)DAT_004058d0 * (ulonglong)param_1 + (ulonglong)DAT_004058d0 >> 0x22) *
            8;
    iVar2 = param_1 + (uint)((ulonglong)DAT_004058d0 * (ulonglong)param_1 + (ulonglong)DAT_004058d0
                            >> 0x22) * -0xe;
    if (iVar2 != 0) {
      uVar1 = uVar1 + (iVar2 + 1U >> 1) + 1;
    }
  }
  return uVar1;
}
