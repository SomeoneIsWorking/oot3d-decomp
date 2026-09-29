// OoT3D decomp @ 00429cd8  name=FUN_00429cd8  size=440

void FUN_00429cd8(int param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;

  uVar1 = DAT_00429e90;
  bVar4 = false;
  if ((*(char *)(param_1 + 0xb) != '\0') && (-1 < *(int *)(param_1 + 1000))) {
    iVar5 = param_1 + *(int *)(param_1 + 1000) * 4;
    uVar3 = *(int *)(iVar5 + 0x1c) + 1;
    *(uint *)(iVar5 + 0x1c) = uVar3;
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
    *(uint *)(param_1 + *(int *)(param_1 + 1000) * 4 + 0x1c) = uVar3;
    iVar5 = param_1 + *(int *)(param_1 + 1000) * 4;
    bVar4 = *(int *)(param_1 + 0x10) < *(int *)(iVar5 + 0x40);
    if (bVar4) {
      *(int *)(iVar5 + 0x40) = *(int *)(param_1 + 0x10);
    }
  }
  iVar5 = param_1 + 0x918;
  *(undefined1 *)(*(int *)(param_1 + 0xd48) + 0x6c) = *(undefined1 *)(param_1 + 0xb);
  cVar2 = '\x01' - *(byte *)(param_1 + 0xb);
  if (1 < *(byte *)(param_1 + 0xb)) {
    cVar2 = '\0';
  }
  *(char *)(*(int *)(param_1 + 0xd4c) + 0x6c) = cVar2;
  *(undefined1 *)(*(int *)(param_1 + 0xd58) + 0x6c) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(*(int *)(param_1 + 0x10a0) + 0x6c) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(*(int *)(param_1 + 0xd50) + 0x6c) = *(undefined1 *)(param_1 + 0xb);
  *(bool *)(*(int *)(param_1 + 0xd60) + 0x6c) = bVar4;
  FUN_00307840(iVar5,0,6,0x29,1);
  FUN_00307840(iVar5,0,7,0x27,1);
  FUN_00307840(iVar5,0,10,0x29,1);
  FUN_00307840(iVar5,0,0xdc,0x26,1);
  FUN_00307840(iVar5,0,8,0x2a,1);
  FUN_00307840(iVar5,0,0xc,0x14,1);
  if (*(char *)(param_1 + 0xb) != '\0') {
    iVar6 = 0xd2;
    do {
      *(undefined1 *)(*(int *)(iVar5 + iVar6 * 4 + 0x418) + 0x6c) = 1;
      FUN_00307840(iVar5,0,iVar6,0x21,1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0xda);
  }
  *(undefined1 *)(param_1 + 8) = 10;
  return;
}
