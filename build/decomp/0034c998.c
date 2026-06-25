// OoT3D decomp @ 0034c998  name=FUN_0034c998  size=156

void FUN_0034c998(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = DAT_0034ca34;
  *(char *)(param_1 + 0x1ac) = *(char *)(param_1 + 0x1a9);
  uVar4 = (uint)*(byte *)(iVar2 + *(char *)(param_1 + 0x1a9));
  if (((uVar4 == 2) && (*(int *)(DAT_0034ca38 + 4) != 0)) && (*(char *)(param_1 + 0x1a6) == '\x02'))
  {
    uVar4 = 1;
  }
  *(char *)(param_1 + 0x1b0) = (char)uVar4;
  if (uVar4 == 1) {
    *(undefined *)(param_1 + 0x1b3) = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_0034ca3c + uVar4 * 5);
    *(byte *)(param_1 + 0x1b3) = bVar1;
    if (2 < bVar1) goto LAB_0034ca10;
  }
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    *(undefined *)(param_1 + 0x1b3) = 0;
  }
LAB_0034ca10:
  FUN_0032c2c0(param_1);
  uVar3 = DAT_0034ca44;
  *(undefined *)(DAT_0034ca40 + param_1) = 0;
  iVar2 = DAT_0034ca48;
  *(undefined4 *)(DAT_0034ca48 + 0xcc) = uVar3;
  *(undefined *)(iVar2 + 0xd4) = 0;
  return;
}

