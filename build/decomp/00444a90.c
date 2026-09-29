// OoT3D decomp @ 00444a90  name=FUN_00444a90  size=500

void FUN_00444a90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_18;

  uVar3 = DAT_00444c90;
  uVar2 = DAT_00444c8c;
  iVar1 = DAT_00444c88;
  iVar5 = DAT_00444c84;
  if (*(char *)(DAT_00444c84 + 0x571) == -1) {
    FUN_002f8ce0(DAT_00444c8c,*(undefined4 *)(DAT_00444c88 + 0x14),3);
    uVar4 = *(uint *)(iVar1 + 0x68) | 0x1000000;
  }
  else {
    FUN_002f8ce0(DAT_00444c90,*(undefined4 *)(DAT_00444c88 + 0x14),3);
    uVar4 = *(uint *)(iVar1 + 0x68) & 0xfeffffff;
  }
  *(uint *)(iVar1 + 0x68) = uVar4;
  if (*(char *)(iVar5 + 0x570) == -1) {
    FUN_002f8ce0(uVar2,*(undefined4 *)(iVar1 + 0x14),4);
    uVar4 = *(uint *)(iVar1 + 0x68) | 0x800000;
  }
  else {
    FUN_002f8ce0(uVar3,*(undefined4 *)(iVar1 + 0x14),4);
    uVar4 = *(uint *)(iVar1 + 0x68) & 0xff7fffff;
  }
  *(uint *)(iVar1 + 0x68) = uVar4;
  if (*(char *)(iVar5 + 0x572) == -1) {
    FUN_002f8ce0(uVar2,*(undefined4 *)(iVar1 + 0x14),1);
    uVar4 = *(uint *)(iVar1 + 0x68) | 0x4000000;
  }
  else {
    FUN_002f8ce0(uVar3,*(undefined4 *)(iVar1 + 0x14),1);
    uVar4 = *(uint *)(iVar1 + 0x68) & 0xfbffffff;
  }
  *(uint *)(iVar1 + 0x68) = uVar4;
  if (*(char *)(iVar5 + 0x573) == -1) {
    FUN_002f8ce0(uVar2,*(undefined4 *)(iVar1 + 0x14),2);
    uVar4 = *(uint *)(iVar1 + 0x68) | 0x2000000;
  }
  else {
    FUN_002f8ce0(uVar3,*(undefined4 *)(iVar1 + 0x14),2);
    uVar4 = *(uint *)(iVar1 + 0x68) & 0xfdffffff;
  }
  *(uint *)(iVar1 + 0x68) = uVar4;
  iVar5 = FUN_002efff8();
  uVar2 = DAT_00444c94;
  if (iVar5 == 2) {
    FUN_002f8ce0(DAT_00444c98,*(undefined4 *)(iVar1 + 0x14),0);
    uVar4 = *(uint *)(iVar1 + 0x68) | 0x8000000;
    *(uint *)(iVar1 + 0x68) = uVar4;
  }
  else {
    iVar5 = FUN_002efff8();
    if (iVar5 == 0) {
      FUN_002f8ce0(uVar2,*(undefined4 *)(iVar1 + 0x14),0);
      uVar4 = *(uint *)(iVar1 + 0x68) | 0x8000000;
    }
    else {
      FUN_002f8ce0(uVar3,*(undefined4 *)(iVar1 + 0x14),0);
      uVar4 = *(uint *)(iVar1 + 0x68) & 0xf7ffffff;
    }
    *(uint *)(iVar1 + 0x68) = uVar4;
  }
  if ((uVar4 & 0x10000000) != 0) {
    local_18 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_18,1,0x1c);
    return;
  }
  local_18 = uVar3;
  FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_18,1,0x1c);
  return;
}
