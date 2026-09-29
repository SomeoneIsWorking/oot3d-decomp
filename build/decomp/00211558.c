// OoT3D decomp @ 00211558  name=FUN_00211558  size=280

void FUN_00211558(int param_1,int param_2)

{
  int iVar1;

  if ((*(short *)(*DAT_00211670 + 0x5be) != 0) && (*(char *)(param_1 + 0x1b0) == '\0')) {
    *(undefined2 *)(*DAT_00211670 + 0x5be) = 0;
    iVar1 = FUN_003353dc(param_1,param_2);
    if (iVar1 != 0) {
      FUN_0037547c(DAT_0021167c,param_1 + 0x28,4,DAT_00211678,DAT_00211678,DAT_00211674);
      iVar1 = DAT_00211680;
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffdfff;
      *(undefined2 *)(iVar1 + 100) = *(undefined2 *)(param_2 + 0x104);
      FUN_003521f0(*(undefined4 *)(param_2 + 0xa54),8,param_1);
      FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),0x38);
      FUN_003353a4(*(undefined4 *)(param_2 + 0xa54),4,0,0,0x51,0,0);
    }
  }
  if ((*(uint *)(param_1 + 0xe54) & 0x2000) == 0) {
    *(undefined2 *)(DAT_00211684 + param_1) = 0;
    FUN_003352c8(param_1,param_2);
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(byte *)(param_1 + 0xeee) = *(byte *)(param_1 + 0xeee) | 1;
    *(byte *)(param_1 + 0xf46) = *(byte *)(param_1 + 0xf46) | 1;
    *(byte *)(param_1 + 0xf9e) = *(byte *)(param_1 + 0xf9e) | 1;
  }
  return;
}
