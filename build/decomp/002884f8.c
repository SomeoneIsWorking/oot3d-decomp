// OoT3D decomp @ 002884f8  name=FUN_002884f8  size=144

void FUN_002884f8(int param_1,int param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(param_1 + 0xc8e)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    FUN_0036e980(param_2,0,7);
    *(short *)(DAT_00288588 + -0x3f40 + param_1) = (short)DAT_00288588;
    *(undefined2 *)(param_1 + 0xc8e) = 5;
    *(undefined2 *)(param_1 + 0xca4) = 1;
    *(ushort *)(DAT_0028858c + 0xf2) = *(ushort *)(DAT_0028858c + 0xf2) | 0x8000;
    *(undefined4 *)(param_1 + 0xc7c) = DAT_00288590;
  }
  return;
}
