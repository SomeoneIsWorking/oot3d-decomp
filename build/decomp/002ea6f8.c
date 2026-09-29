// OoT3D decomp @ 002ea6f8  name=FUN_002ea6f8  size=172

void FUN_002ea6f8(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;

  puVar1 = DAT_002ea7a4;
  *DAT_002ea7a4 = 0;
  if (puVar1[2] != '\0') {
    uVar3 = DAT_002ea7a8;
    if ((*(int *)(puVar1 + 8) != 0) && (puVar1[1] == '\0')) {
      uVar3 = FUN_002fa7d0(*(int *)(puVar1 + 8),*(undefined4 *)(puVar1 + 0x18),
                           *(undefined4 *)(puVar1 + 0x1c),*(undefined2 *)(puVar1 + 4),
                           *(undefined2 *)(puVar1 + 6),puVar1 + 1);
    }
    uVar5 = uVar3 >> 0x1b;
    if ((uVar3 & 0x80000000) != 0) {
      uVar5 = uVar5 - 0x20;
    }
    if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
      FUN_003351b4();
    }
    iVar2 = DAT_002ea7ac;
    iVar6 = 0;
    do {
      pcVar4 = *(code **)(iVar2 + iVar6 * 4);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    puVar1[2] = 0;
  }
  return;
}
