// OoT3D decomp @ 00188650  name=FUN_00188650  size=160

void FUN_00188650(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x1360),2,900,600);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  uVar1 = DAT_001886f0;
  if ((*(ushort *)(param_1 + 0x135c) & 1) != 0) {
    FUN_0035ff0c(DAT_001886f0,param_1,DAT_001886f8,DAT_001886f4,param_1 + 0x1fc,param_1 + 0xaa0,3);
    uVar2 = DAT_001886fc;
    *(undefined2 *)(param_1 + 0x135e) = 6;
    *(undefined4 *)(param_1 + 100) = uVar2;
    uVar2 = DAT_00188700;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  *(ushort *)(param_1 + 0x135c) = *(ushort *)(param_1 + 0x135c) | 8;
  return;
}
