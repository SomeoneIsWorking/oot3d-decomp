// OoT3D decomp @ 0018cbb8  name=FUN_0018cbb8  size=820

void FUN_0018cbb8(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint in_fpscr;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 0x19a) = 1;
  puVar1 = puRam0018cef0;
  iVar4 = param_2;
  if (*(byte *)(param_1 + 0x1e) < 0x13) {
    iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80;
    iVar4 = *(int *)(iRam0018ceec + iVar3);
    if (iVar4 != 0) {
      iVar3 = iVar3 + 0x3a5c;
      goto LAB_0018cbf8;
    }
  }
  iVar3 = 0;
LAB_0018cbf8:
  iVar3 = iVar3 + 0x10;
  if ((*puRam0018cef0 & 1) == 0) {
    uVar7 = FUN_003679b4(puRam0018cef0);
    iVar4 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      FUN_0036788c(iRam0018cef4);
      iVar4 = iRam0018cefc;
    }
  }
  piVar6 = *(int **)(iRam0018cef4 + 0x17c);
  piVar6[2] = 0;
  if ((*puVar1 & 1) == 0) {
    uVar7 = FUN_003679b4(puRam0018cef0,iVar4);
    iVar4 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      FUN_0036788c(iRam0018cef4);
      iVar4 = iRam0018cefc;
    }
  }
  iVar4 = func_0x00410350(uRam0018cf00,iVar4);
  if (iVar4 == 0 || iVar4 == 2) {
    uVar5 = 2;
    *(undefined1 *)(param_1 + 0x1ce) = 1;
  }
  else {
    uVar5 = 3;
    *(undefined1 *)(param_1 + 0x1ce) = 2;
  }
  uVar5 = FUN_00358ef8(iVar3,uVar5);
  uVar5 = (**(code **)(*piVar6 + 8))(piVar6,uVar5,0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  uVar5 = FUN_00358ef8(iVar3,0);
  uVar5 = (**(code **)(*piVar6 + 8))(piVar6,uVar5,0);
  *(undefined4 *)(param_1 + 0x1a8) = uVar5;
  uVar5 = FUN_00358ef8(iVar3,1);
  uVar5 = (**(code **)(*piVar6 + 8))(piVar6,uVar5,0);
  *(undefined4 *)(param_1 + 0x1ac) = uVar5;
  uVar5 = FUN_003487ec(uRam0018cf04);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1a8) + 0xc);
  uVar5 = FUN_00372f0c(iVar3,uVar5);
  FUN_00372d94(iVar4,uVar5);
  piVar6 = piRam0018cf08;
  *(undefined1 *)(iVar4 + 0x10) = 1;
  puVar2 = puRam0018cf10;
  uVar5 = uRam0018cf0c;
  iVar4 = *piVar6;
  *(undefined2 *)(iVar4 + 0x496) = 0x3f;
  *(undefined2 *)(iVar4 + 0x49a) = 0x50;
  *(undefined2 *)(iVar4 + 0x49c) = 0xff;
  *(undefined2 *)(iVar4 + 0x49e) = 0x1e;
  *(undefined2 *)(iVar4 + 0x4a0) = 0x1e;
  *(undefined2 *)(iVar4 + 0x4a2) = 0x77;
  *(undefined2 *)(iVar4 + 0x4a4) = 7;
  *(undefined2 *)(iVar4 + 0x4a6) = 5;
  *(undefined2 *)(iVar4 + 0x4a8) = 3;
  *(undefined2 *)(iVar4 + 0xf1c) = 1;
  *(undefined2 *)(iVar4 + 0xf1e) = 6;
  *(undefined2 *)(iVar4 + 0xf20) = 2;
  *(undefined2 *)(param_1 + 0x1ca) = 6;
  *(undefined2 *)(param_1 + 0x1cc) = 10;
  *(undefined2 *)(iVar4 + 0xf3a) = 99;
  *(undefined2 *)(iVar4 + 0xf3e) = 9;
  *(undefined2 *)(iVar4 + 0xf42) = 10;
  *(undefined2 *)(iVar4 + 0xf44) = 8;
  *(undefined2 *)(param_1 + 0x1c6) = 0x3c;
  *(undefined4 *)(param_1 + 0x1d8) = uVar5;
  *(undefined4 *)(param_1 + 0x1d4) = uVar5;
  *(undefined4 *)(param_1 + 0x1d0) = uVar5;
  *(undefined2 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = uVar5;
  *(undefined2 *)(param_1 + 0x1c4) = 0;
  FUN_003480a8(*puVar2,0);
  uVar5 = uRam0018cf18;
  iVar4 = iRam0018cf14;
  if (*(char *)(iRam0018cf14 + 0x576) != '\0') {
    *(undefined4 *)(param_1 + 0x1d4) = uRam0018cf18;
    *(undefined4 *)(param_1 + 0x1d8) = uVar5;
    *(undefined4 *)(param_1 + 0x1d0) = uVar5;
    *(undefined4 *)(param_1 + 0x1dc) = uVar5;
    *(undefined1 *)(iVar4 + 0x576) = 0;
    *(undefined2 *)(param_1 + 0x1c8) = 2;
    *(undefined2 *)(param_1 + 0x1c0) = 0x1e;
    *(undefined1 *)(iVar4 + 0x5a6) = 1;
    *(undefined1 *)(iVar4 + 0x5a7) = 0xff;
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(iRam0018ceec + param_2) != 0)) {
      param_2 = param_2 + 0x3a5c;
    }
    else {
      param_2 = 0;
    }
    piVar6 = (int *)FUN_0034807c(param_2 + 0x10,*(undefined1 *)(param_1 + 0x1ce));
    func_0x00348068(*(undefined4 *)(param_1 + 0x1a4),piVar6);
    uVar5 = VectorSignedToFloat(*(int *)(*piVar6 + *(int *)(*piVar6 + 0x14) + 0x10) + 1,
                                (byte)(in_fpscr >> 0x15) & 3);
    func_0x00348054(uVar5,*(undefined4 *)(param_1 + 0x1a4));
    func_0x00347fbc(*puVar2,1);
  }
  *(undefined2 *)(param_1 + 0x1bc) = 0;
  *(undefined2 *)(param_1 + 0x1be) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined2 *)(param_1 + 0x1c2) = 0;
  return;
}

