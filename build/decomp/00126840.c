// OoT3D decomp @ 00126840  name=FUN_00126840  size=296

void FUN_00126840(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x22c) == 0) {
    iVar1 = FUN_00370378(param_1 + 0xbc,0xffffc000);
    if (iVar1 == 0) {
      *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xbc) << 1;
    }
    else {
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -0x8000;
      *(undefined2 *)(param_1 + 0xc0) = 0;
      *(undefined2 *)(param_1 + 0x22c) = 1;
    }
  }
  else {
    FUN_00370378(param_1 + 0xbc,0x1800);
    if (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0xc)) {
      if (0 < *(short *)(param_1 + 0xbc)) {
        FUN_0036e670(param_2,param_1 + 0x28,0,0,1,400);
        FUN_00375bcc(param_1,DAT_00126968);
      }
      FUN_001c8264(param_1);
      return;
    }
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      FUN_00375c08(DAT_00126974,DAT_00126970,DAT_00126970,DAT_0012696c,param_1 + 0x1a4,4,0);
      *(undefined2 *)(param_1 + 0x22c) = 0x3c;
      *(byte *)(param_1 + 0x7f8) = *(byte *)(param_1 + 0x7f8) | 1;
      *(undefined4 *)(param_1 + 0x228) = DAT_00126978;
      return;
    }
  }
  return;
}
