// OoT3D decomp @ 0025ea8c  name=FUN_0025ea8c  size=336

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0025ea8c(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;

  pcVar1 = DAT_0025ebdc;
  *(undefined1 *)(param_1 + 0x21b) = 0;
  if (*pcVar1 == '\0') {
    FUN_00372f38(param_1,param_2,param_1 + 0x220);
    uVar3 = FUN_00353fd4(param_1,param_2,0);
    FUN_003532e8(param_1,1);
    uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
    *(undefined4 *)(param_1 + 0x1a4) = uVar3;
    FUN_003510b0(param_1,DAT_0025ebe0);
    FUN_00353dd0(param_2,param_1 + 0x1bc);
    FUN_00353d24(param_2,param_1 + 0x1bc,param_1,DAT_0025ebe4);
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    iVar4 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    uVar3 = DAT_0025ebf4;
    puVar2 = DAT_0025ebe8;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x214) = DAT_0025ebfc;
      *(undefined4 *)(param_1 + 0x2c) = *puVar2;
    }
    else if (*(int *)(DAT_0025ebec + 4) == 0) {
      *(undefined4 *)(param_1 + 0x214) = DAT_0025ebf0;
      *(byte *)(param_1 + 0x21a) = *(byte *)(param_1 + 0x21a) ^ 1;
      *(undefined4 *)(param_1 + 100) = uVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0x214) = DAT_0025ebf8;
      *(undefined4 *)(param_1 + 0x2c) = *puVar2;
    }
    *(undefined1 *)(param_1 + 3) = 0xff;
    *pcVar1 = '\x01';
    *(undefined1 *)(param_1 + 0x21b) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
