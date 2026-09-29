// OoT3D decomp @ 00309280  name=FUN_00309280  size=260

void FUN_00309280(int param_1,undefined1 *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x50) = *param_2;
  puVar1 = DAT_00309394;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar5 = *(int *)(param_1 + iVar4 * 4);
      if (iVar5 != 0) {
        FUN_00401604(iVar5,1);
        uVar3 = 1;
        switch(*(undefined1 *)(param_1 + 0x50)) {
        case 0:
          uVar3 = 0;
          break;
        case 3:
          uVar3 = 2;
        }
        FUN_00401624(iVar5,uVar3);
        FUN_004015d0(iVar5,*(undefined4 *)(param_2 + 8));
        if (((*puVar1 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00309394), iVar2 != 0)) {
          FUN_0030c5b8(DAT_00309398);
        }
        uVar3 = 0;
        if (*(char *)(DAT_00309398 + 2) == '\0') {
          uVar3 = 2;
        }
        else if (*(char *)(DAT_00309398 + 2) == '\x01') {
          uVar3 = 1;
        }
        FUN_00401648(iVar5,uVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}
