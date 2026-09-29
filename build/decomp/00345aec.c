// OoT3D decomp @ 00345aec  name=FUN_00345aec  size=408

void FUN_00345aec(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint in_fpscr;

  FUN_003524ec(DAT_00345c88,DAT_00345c84,param_1,param_2,0);
  iVar7 = FUN_0036c5bc(param_2,0);
  iVar9 = *(int *)(param_2 + 0x20ac);
  *(undefined2 *)(param_1 + 0x26c) = 4;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  FUN_00367494(param_2,param_2 + 0x2298);
  FUN_0036e980(param_2,param_1,1);
  uVar5 = FUN_00367d74(param_2);
  *(undefined2 *)(param_1 + 600) = uVar5;
  FUN_00320d7c(param_2,0,3);
  FUN_00320d7c(param_2,(int)*(short *)(param_1 + 600),7);
  uVar8 = FUN_0036ae14(param_1 + 0x1a4,0xc);
  uVar1 = DAT_00345c8c;
  uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00345c90,DAT_00345c8c,uVar8,DAT_00345c8c,param_1 + 0x1a4,0xc,2);
  uVar8 = FUN_0036ae14(param_1 + 0x1a4,0xc);
  uVar3 = DAT_00345ca4;
  uVar2 = DAT_00345ca0;
  uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2b8) = uVar8;
  *(undefined4 *)(param_1 + 0x1050) = uVar1;
  uVar8 = DAT_00345c94;
  *(undefined4 *)(param_1 + 0x1054) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x30) = DAT_00345c98;
  uVar1 = DAT_00345c9c;
  *(undefined4 *)(iVar9 + 0x28) = DAT_00345c9c;
  *(undefined4 *)(iVar9 + 0x30) = uVar2;
  *(undefined4 *)(iVar9 + 0x108) = uVar1;
  *(undefined4 *)(iVar9 + 0x110) = uVar2;
  *(undefined4 *)(iVar9 + 8) = uVar1;
  *(undefined4 *)(iVar9 + 0x10) = uVar2;
  *(short *)(iVar9 + 0xbe) = (short)uVar3;
  *(short *)(iVar9 + 0x36) = (short)uVar3;
  sVar6 = FUN_0036e800(param_1,*(undefined4 *)(param_2 + 0x20ac));
  uVar1 = DAT_00345ca8;
  *(short *)(param_1 + 0x36) = sVar6 + -0x8000;
  *(undefined4 *)(param_1 + 0x32c) = uVar1;
  fVar4 = DAT_00345cb0;
  *(undefined4 *)(param_1 + 0x334) = DAT_00345cac;
  *(float *)(param_1 + 0x330) = *(float *)(iVar7 + 0x90) + fVar4;
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x26e) = 0x32;
  FUN_003655d0(0,1);
  return;
}
