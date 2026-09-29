// OoT3D decomp @ 0021c120  name=FUN_0021c120  size=164

void FUN_0021c120(int param_1,int param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x8ac,param_1 + 0x8b2,
               0x4300);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(DAT_0021c1c4 + param_1)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0))
  {
    FUN_003725e0(param_2);
    *(ushort *)(DAT_0021c1c8 + 0x1c) = *(ushort *)(DAT_0021c1c8 + 0x1c) | 0x1000;
    FUN_0036e980(param_2,0,8);
    *(undefined4 *)(param_1 + 0x8a8) = DAT_0021c1cc;
  }
  return;
}
