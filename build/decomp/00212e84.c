// OoT3D decomp @ 00212e84  name=FUN_00212e84  size=264

void FUN_00212e84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  uint uVar3;

  iVar2 = *(int *)(DAT_00212f8c + param_2);
  *(undefined1 *)(param_1 + 0x225) = 1;
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xab4);
  (**(code **)(param_1 + 0xab0))(param_1,param_2);
  if ((*(ushort *)(param_1 + 0xb14) & 8) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xb30) = *(undefined4 *)(iVar2 + 0x3c);
  iVar1 = param_1 + 0xb18;
  *(undefined4 *)(param_1 + 0xb34) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(iVar2 + 0x44);
  if ((*(ushort *)(param_1 + 0xb14) & 0x10) != 0) {
    FUN_0034c664(param_1,iVar1,0,4);
    return;
  }
  uVar3 = VectorSignedToFloat((int)*(short *)(param_1 + 0x92) - (int)*(short *)(param_1 + 0xbe),
                              (byte)(in_fpscr >> 0x15) & 3);
  if (((int)uVar3 < (int)DAT_00212f90) && (uVar3 < (DAT_00212f90 | DAT_00212f90 << 0xf))) {
    FUN_0034c664(param_1,iVar1,0,2);
    return;
  }
  FUN_0034c664(param_1,iVar1,0,1);
  return;
}
