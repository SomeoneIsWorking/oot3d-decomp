// OoT3D decomp @ 00354570  name=FUN_00354570  size=288

void FUN_00354570(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  uVar4 = DAT_00354690;
  iVar1 = FUN_003695f8();
  iVar2 = *(int *)(param_1 + 0x59c);
  if (iVar1 != 0) {
    uVar4 = DAT_00354694;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x550);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x558);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    iVar3 = *(int *)(param_1 + iVar2 + 0x5a0);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar2 + 0xc) = uVar4;
    }
  } while (iVar1 < 0xf);
  iVar2 = *(int *)(param_1 + 0x8e4);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x8e8);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x8ec);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x8f0);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x8f4);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x8f8);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    iVar3 = *(int *)(param_1 + iVar2 + 0x8fc);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar2 + 0xc) = uVar4;
    }
  } while (iVar1 < 0x1f);
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    iVar3 = *(int *)(param_1 + iVar2 + 0x4f0);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar2 + 0xc) = uVar4;
    }
  } while (iVar1 < 0x18);
  return;
}
