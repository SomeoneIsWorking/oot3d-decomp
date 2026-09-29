// OoT3D decomp @ 001f778c  name=FUN_001f778c  size=180

void FUN_001f778c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  bool bVar6;

  *(int *)(param_1 + 0x1cc) = param_4;
  uVar2 = FUN_0035010c(param_4 << 7);
  *(undefined4 *)(param_1 + 0x1c8) = uVar2;
  FUN_00343280(uVar2,param_4 << 7);
  uVar2 = param_5[1];
  uVar5 = param_5[2];
  *(undefined4 *)(param_1 + 0x54) = *param_5;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  uVar2 = param_5[1];
  uVar5 = param_5[2];
  *(undefined4 *)(param_1 + 0x210) = *param_5;
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x218) = uVar5;
  FUN_00372f38(param_1,param_2,param_1 + 0x1a4,param_3);
  puVar3 = (undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a8) = param_3;
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *puVar3 = DAT_001f7840;
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
    bVar6 = *(int *)(param_1 + 0x1a8) != 1;
    if (bVar6) {
      FUN_00358778(*(undefined4 *)(param_1 + 0x1a4),0,4,iVar4,0,unaff_r4,unaff_r5,unaff_lr);
      uVar2 = *(undefined4 *)(param_1 + 0x1a4);
      uVar5 = 4;
    }
    else {
      FUN_00358778(*(undefined4 *)(param_1 + 0x1a4),0,4,iVar4,0,unaff_r4,unaff_r5,unaff_lr);
      FUN_00358778(*(undefined4 *)(param_1 + 0x1a4),0,4,iVar4,0);
      uVar2 = *(undefined4 *)(param_1 + 0x1a4);
      iVar4 = iVar4 + 0x10;
      uVar5 = 3;
    }
    FUN_00358778(uVar2,!bVar6,uVar5,iVar4,0,unaff_r4,unaff_r5,unaff_lr);
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
    uVar2 = FUN_00372f0c(param_2 + 0x10,0);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1a4) + 0xc),uVar2);
    piVar1 = DAT_00339f08;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a4) + 0xc) + 0xc) = DAT_00339f00;
    if (*piVar1 == 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a4) + 0xc) + 8) = DAT_00339f04;
      FUN_003586ec();
      return;
    }
  }
  return;
}
