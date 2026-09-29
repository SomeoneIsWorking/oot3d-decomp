// OoT3D decomp @ 0026c4a0  name=FUN_0026c4a0  size=520

void FUN_0026c4a0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 *param_6)

{
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar6;
  undefined4 unaff_lr;
  bool bVar7;

  uVar5 = param_6[1];
  uVar6 = param_6[2];
  *(undefined4 *)(param_1 + 0x54) = *param_6;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  FUN_003624c8(param_5,param_1 + 0xbc,0,uVar5,param_4);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (((sVar1 == 5 || sVar1 == 6) || sVar1 == 7) || sVar1 == 8) {
    if (param_4 == 0x11) {
      param_3 = 1;
    }
    else {
      param_3 = 3;
    }
    param_4 = 0;
  }
  *(int *)(param_1 + 0x1dc) = param_4;
  *(undefined1 *)(param_1 + 0x1d1) = 0;
  FUN_00372f38(param_1,param_2,param_1 + 0x1a4,param_3);
  puVar3 = (undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a8) = param_3;
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    uVar5 = DAT_0026c568;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *puVar3 = uVar5;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  *(undefined4 **)(param_1 + 0x1c4) = puVar3;
  *(int *)(param_1 + 0x1b0) = param_1;
  *(int *)(param_1 + 0x1b4) = param_2;
  FUN_00347774(*(undefined4 *)(param_1 + 0x1a4),*(undefined4 *)(param_1 + 0x1c4));
  switch((int)*(short *)(param_1 + 0x1c)) {
  case 1:
  case 4:
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1a4),2);
    return;
  case 5:
  case 6:
  case 7:
  case 8:
    iVar4 = FUN_00357a70(*(short *)(param_1 + 0x1c) + -4);
    bVar7 = *(int *)(param_1 + 0x1a8) != 1;
    if (bVar7) {
      FUN_00358778(*(undefined4 *)(param_1 + 0x1a4),0,4,iVar4,0,unaff_r4,unaff_r5,unaff_lr);
      uVar5 = *(undefined4 *)(param_1 + 0x1a4);
      uVar6 = 4;
    }
    else {
      FUN_00358778(*(undefined4 *)(param_1 + 0x1a4),0,4,iVar4,0,unaff_r4,unaff_r5,unaff_lr);
      FUN_00358778(*(undefined4 *)(param_1 + 0x1a4),0,4,iVar4,0);
      uVar5 = *(undefined4 *)(param_1 + 0x1a4);
      iVar4 = iVar4 + 0x10;
      uVar6 = 3;
    }
    FUN_00358778(uVar5,!bVar7,uVar6,iVar4,0,unaff_r4,unaff_r5,unaff_lr);
    break;
  case 10:
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_00339efc + param_2) != 0)) {
      param_2 = param_2 + 0x3a5c;
    }
    else {
      param_2 = 0;
    }
    uVar5 = FUN_00372f0c(param_2 + 0x10,0);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1a4) + 0xc),uVar5);
    piVar2 = DAT_00339f08;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a4) + 0xc) + 0xc) = DAT_00339f00;
    if (*piVar2 == 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a4) + 0xc) + 8) = DAT_00339f04;
      FUN_003586ec();
      return;
    }
  }
  return;
}
