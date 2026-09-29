// OoT3D decomp @ 002aa134  name=FUN_002aa134  size=232

void FUN_002aa134(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  uint in_fpscr;

  uVar7 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_002aa224,DAT_002aa220,uVar7,DAT_002aa21c,param_1 + 0x1a4,0);
  *(undefined2 *)(param_1 + 0x93e) = 300;
  uVar6 = FUN_00367d74(param_2);
  *(undefined2 *)(param_1 + 0x95c) = uVar6;
  FUN_00320d7c(param_2,0,1);
  FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x95c),7);
  uVar1 = DAT_002aa22c;
  uVar7 = DAT_002aa228;
  *(undefined4 *)(param_1 + 0x908) = DAT_002aa228;
  uVar2 = DAT_002aa230;
  *(undefined4 *)(param_1 + 0x90c) = uVar1;
  uVar3 = DAT_002aa234;
  *(undefined4 *)(param_1 + 0x910) = uVar2;
  uVar4 = DAT_002aa238;
  *(undefined4 *)(param_1 + 0x8e4) = uVar3;
  uVar5 = DAT_002aa23c;
  *(undefined4 *)(param_1 + 0x8e8) = uVar4;
  *(undefined4 *)(param_1 + 0x8ec) = uVar5;
  *(undefined4 *)(param_1 + 0x8cc) = uVar7;
  *(undefined4 *)(param_1 + 0x8d0) = uVar1;
  *(undefined4 *)(param_1 + 0x8d4) = uVar2;
  *(undefined4 *)(param_1 + 0x8d8) = uVar3;
  *(undefined4 *)(param_1 + 0x8dc) = uVar4;
  *(undefined4 *)(param_1 + 0x8e0) = uVar5;
  FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x95c),param_1 + 0x8cc,param_1 + 0x8d8);
  *(undefined4 *)(param_1 + 0x8a8) = DAT_002aa240;
  return;
}
