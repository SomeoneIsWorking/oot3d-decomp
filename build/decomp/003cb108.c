// OoT3D decomp @ 003cb108  name=FUN_003cb108  size=144

void FUN_003cb108(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 == 0) {
    FUN_003724dc(DAT_003cb1a4,DAT_003cb1a0,param_1,param_2,0xc);
    if ((*(uint *)(DAT_003cb1a8 + param_2) & 0xd) == 0) {
      FUN_00368a98(DAT_003cb1b4,DAT_003cb1b4,DAT_003cb1b0,DAT_003cb1ac,param_2,param_1 + 0x28);
      return;
    }
  }
  else {
    *(ushort *)(DAT_003cb198 + 0xf4) = *(ushort *)(DAT_003cb198 + 0xf4) | 8;
    FUN_00375c10(param_2,3);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003cb19c;
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  return;
}
