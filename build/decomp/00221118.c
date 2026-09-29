// OoT3D decomp @ 00221118  name=FUN_00221118  size=252

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00221118(int param_1,int param_2)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;

  psVar1 = DAT_00221214;
  *(undefined1 *)(param_1 + 0x1c2) = 0;
  if (*psVar1 == 0) {
    FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0x23);
    uVar2 = FUN_00353fd4(param_1,param_2,6);
    FUN_003532e8(param_1,0);
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
    FUN_003510b0(param_1,DAT_00221218);
    iVar3 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    uVar2 = DAT_00221224;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00221220;
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      *(undefined2 *)(param_1 + 0x1c0) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x2c) = DAT_0022121c;
    }
    *(undefined1 *)(param_1 + 3) = 0xff;
    *psVar1 = 1;
    *(undefined1 *)(param_1 + 0x1c2) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
