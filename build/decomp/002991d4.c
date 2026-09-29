// OoT3D decomp @ 002991d4  name=FUN_002991d4  size=116

void FUN_002991d4(int param_1,int param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(DAT_00299248 + param_1)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0))
  {
    FUN_003725e0(param_2);
    *(undefined4 *)(param_1 + 0x124) = 0;
    FUN_003724dc(DAT_00299250,DAT_0029924c,param_1,param_2,0x37);
    *(undefined4 *)(param_1 + 0xc7c) = DAT_00299254;
  }
  return;
}
