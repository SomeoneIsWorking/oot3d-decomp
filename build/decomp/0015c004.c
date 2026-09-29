// OoT3D decomp @ 0015c004  name=FUN_0015c004  size=320

void FUN_0015c004(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;

  iVar4 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x245));
  iVar3 = DAT_0015c144;
  if (iVar4 != 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x1c) << 0x11;
    uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x18) >> 0x1e;
    uVar2 = uVar5 >> 0x1e;
    if (uVar1 == 1) {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x245);
    if (uVar1 != 1) {
      if (uVar1 == 2) {
        uVar5 = 2;
      }
      else {
        uVar5 = (uint)*(char *)(uVar2 * 3 + iVar3 + 1);
      }
    }
    FUN_00372f38(param_1,param_2,param_1 + 0x1c0,uVar5,0);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    *(undefined4 *)(param_1 + 0x140) = DAT_0015c148;
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_0015c14c + iVar4) != 0)) {
      iVar4 = iVar4 + 0x3a5c;
    }
    else {
      iVar4 = 0;
    }
    uVar6 = FUN_003532c0(iVar4 + 0x10,*(undefined1 *)(iVar3 + uVar2 * 3));
    uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar6);
    *(undefined4 *)(param_1 + 0x1a4) = uVar6;
    if (uVar2 == 3) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0015c154;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0015c150;
    }
  }
  return;
}
