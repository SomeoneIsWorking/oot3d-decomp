// OoT3D decomp @ 0029937c  name=FUN_0029937c  size=176

void FUN_0029937c(int param_1,int param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(param_1 + 0xc8e)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    FUN_0035239c((int)(short)(*(short *)(*DAT_00299430 + 0x12d8) + 0x32),
                 *(ushort *)(DAT_0029942c + 0xf2) & 0x100);
    FUN_00352318(DAT_00299434);
    FUN_0036e980(param_2,0,7);
    *(short *)(DAT_0029943c + param_1) = (short)DAT_00299438;
    *(undefined2 *)(param_1 + 0xc8e) = 5;
    *(undefined2 *)(param_1 + 0xca4) = 2;
    *(undefined4 *)(param_1 + 0xc7c) = DAT_00299440;
  }
  return;
}
