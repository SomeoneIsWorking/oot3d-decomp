// OoT3D decomp @ 00438410  name=FUN_00438410  size=232

void FUN_00438410(char *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (*param_1 == '\0') {
    iVar5 = 0;
    do {
      FUN_0044a5e0((int)(char)iVar5,param_1 + iVar5 * 4 + 0x7c,param_1 + iVar5 * 4 + 0x284);
      FUN_00309d64((int)(char)iVar5,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    iVar3 = 0;
    iVar5 = 0;
    do {
      iVar4 = iVar3 + 1;
      pcVar1 = param_1 + iVar3 * 4 + 0x84;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      iVar5 = iVar5 + 2;
      iVar3 = iVar3 + 2;
      pcVar1 = param_1 + iVar4 * 4 + 0x84;
      pcVar1[0] = '\0';
      iVar4 = DAT_004384f8;
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    } while (iVar5 < 0x80);
    *(int *)(param_1 + 0x88) = DAT_004384f8;
    *(int *)(param_1 + 0x8c) = iVar4 + 4;
    *(int *)(param_1 + 0x90) = iVar4 + 8;
    *(int *)(param_1 + 0x94) = iVar4 + 0xc;
    uVar2 = DAT_004384fc;
    *(int *)(param_1 + 0x98) = iVar4 + 0x10;
    FUN_002ea038(uVar2);
    iVar5 = FUN_0044a9e4();
    if (iVar5 == 0) {
      param_1[1] = '\0';
    }
    else if (iVar5 == 1) {
      param_1[1] = '\x01';
    }
    else if (iVar5 == 2) {
      param_1[1] = '\x02';
    }
    *param_1 = '\x01';
  }
  return;
}
