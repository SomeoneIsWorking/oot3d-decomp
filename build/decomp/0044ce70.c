// OoT3D decomp @ 0044ce70  name=FUN_0044ce70  size=628

int FUN_0044ce70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 uVar10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 auStack_194 [64];
  undefined1 auStack_154 [280];

  uVar1 = in_stack_0000000c;
  uVar5 = in_stack_00000008;
  *(undefined4 *)(param_1 + 0x38) = DAT_0044d0e4;
  *(undefined4 *)(param_1 + 0x40) = 3;
  puVar3 = (undefined4 *)FUN_00313ce0(0xc,in_stack_00000008);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = DAT_0044d0e8;
    FUN_003051bc(puVar3);
  }
  *(undefined4 **)(param_1 + 0x3c) = puVar3;
  FUN_002df620(puVar3,uVar5,uVar1);
  iVar4 = FUN_00313ce0(0x1c4,uVar5);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002e77e8();
  }
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  FUN_002e76b8(uVar5,param_1 + 0x38,0x100,0x100,0x100);
  FUN_004568fc(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0xf0),*(undefined4 *)(param_1 + 0x3c));
  FUN_00456974(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0xf0),0);
  if (((*DAT_0044d0ec & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0044d0ec), iVar4 != 0)) {
    FUN_0036788c(DAT_0044d0f0);
  }
  iVar6 = FUN_004563d4(auStack_194,0x40,*(undefined4 *)(DAT_0044d0fc + 0xf3c),&stack0x00000000);
  iVar4 = DAT_0044d114;
  uVar2 = DAT_0044d110;
  uVar1 = DAT_0044d10c;
  puVar3 = DAT_0044d108;
  uVar5 = DAT_0044d104;
  uVar10 = VectorUnsignedToFloat(iVar6 << 3,(byte)(in_fpscr >> 0x15) & 3);
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 0x48) = DAT_0044d100;
  do {
    FUN_002df6ac(uVar5,*(undefined4 *)(param_1 + 0x34),auStack_194,iVar6,param_2,param_3,iVar6 << 3,
                 0x10,auStack_154,0);
    iVar7 = (**(code **)(*(int *)*puVar3 + 8))((int *)*puVar3,0x1b8);
    uVar10 = 0;
    if (iVar7 != 0) {
      uVar10 = FUN_00348f34(iVar7,auStack_154);
    }
    iVar9 = param_1 + iVar8 * 4;
    *(undefined4 *)(iVar9 + 8) = uVar10;
    iVar7 = (**(code **)(*(int *)*DAT_0044d118 + 8))((int *)*DAT_0044d118,0x54);
    uVar10 = 0;
    if (iVar7 != 0) {
      uVar10 = FUN_002ffa20();
    }
    *(undefined4 *)(param_1 + iVar8 * 4) = uVar10;
    FUN_002ccf04(*(undefined4 *)(param_1 + 0x34),uVar10,0);
    FUN_00348a64(*(undefined4 *)(iVar9 + 8),0,*(undefined4 *)(param_1 + iVar8 * 4),uVar2,uVar2,uVar1
                 ,uVar1);
    if (((*DAT_0044d0ec & 1) == 0) && (iVar7 = FUN_003679b4(DAT_0044d0ec), iVar7 != 0)) {
      FUN_0036788c(DAT_0044d0f0);
    }
    uVar10 = BoardModelFactory_0034897c(*(undefined4 *)(iVar4 + 0x47c),*(undefined4 *)(iVar9 + 8),0)
    ;
    iVar8 = iVar8 + 1;
    *(undefined4 *)(iVar9 + 0x10) = uVar10;
  } while (iVar8 < 1);
  return param_1;
}
