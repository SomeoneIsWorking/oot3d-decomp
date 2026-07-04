// OoT3D decomp @ 00448c88  name=FUN_00448c88  size=396

undefined4 FUN_00448c88(int param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x20ac);
  FUN_002e547c(param_1 + 0x364,iVar4);
  FUN_00332284(param_1 + 0x364,0);
  if ((*(ushort *)(iVar4 + 0x1c) & 0xff) != 0xff) {
    FUN_003387a8(param_1 + 0x364);
  }
  if (*(short *)(*UNK_00448e14 + 0x4b2) == 0x20) {
    uVar2 = 2;
  }
  else {
    if (*(short *)(*UNK_00448e14 + 0x4b2) != 0x10) {
      *(undefined1 *)(param_1 + 0x7f24) = 0;
      goto LAB_00448cfc;
    }
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x7f24) = uVar2;
LAB_00448cfc:
  FUN_004517bc(param_1);
  FUN_0045b990(param_1,*(undefined4 *)(param_1 + 0x20ac));
  FUN_002e5428(param_1 + 0x3410);
  puVar1 = UNK_00448e18;
  uVar3 = extraout_r1;
  if ((*UNK_00448e18 & 1) == 0) {
    uVar5 = FUN_003679b4(UNK_00448e18);
    uVar3 = (int)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      FUN_0036788c(UNK_00448e1c);
      uVar3 = UNK_00448e24;
    }
  }
  iVar4 = UNK_00448e28;
  if (((-1 < *(int *)(UNK_00448e28 + 0x3ec)) &&
      (FUN_00454f7c(UNK_00448e28,uVar3), uVar3 = extraout_r1_00, *(int *)(iVar4 + 1000) == 8)) &&
     (*(int *)(iVar4 + 0x3ec) != 0)) {
    FUN_003542c4(iVar4,0,*(int *)(iVar4 + 0x3ec) != 1);
    uVar3 = extraout_r1_01;
  }
  if ((*puVar1 & 1) == 0) {
    uVar5 = FUN_003679b4(UNK_00448e18);
    uVar3 = (int)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      FUN_0036788c(UNK_00448e1c);
      uVar3 = UNK_00448e24;
    }
  }
  FUN_002e4fd8(*(undefined4 *)(UNK_00448e2c + 0x2d4),uVar3);
  *(undefined4 *)(UNK_00448e30 + 0x4ec) = 0;
  *(undefined2 *)(UNK_00448e34 + param_1) = 0xffff;
  FUN_004569e8();
  return 2;
}

