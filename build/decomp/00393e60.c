// OoT3D decomp @ 00393e60  name=FUN_00393e60  size=148

void FUN_00393e60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = DAT_00393ef8;
  if (*(char *)(*(int *)(DAT_00393ef8 +
                         *(int *)(DAT_00393ef4 + (uint)*(byte *)(param_1 + 0xc3e) * 4) * 4 + 4) +
               0xc39) == '\0') {
    *(short *)(DAT_00393f00 + param_1) = (short)DAT_00393efc;
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined1 *)(*(int *)(iVar2 + iVar1 + 4) + 0xc64) = 0;
    } while (iVar3 < 5);
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_00393f04);
    FUN_003523dc(0);
    FUN_00370778(param_2);
    *(undefined4 *)(param_1 + 0xc04) = DAT_00393f08;
  }
  return;
}
