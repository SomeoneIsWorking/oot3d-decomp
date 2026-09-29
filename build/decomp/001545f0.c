// OoT3D decomp @ 001545f0  name=FUN_001545f0  size=228

void FUN_001545f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_001546d4;
  iVar4 = FUN_003736fc(*(undefined4 *)(param_1 + 0x2b8),DAT_001546d4,param_1 + 0x1a4);
  if (iVar4 != 0) {
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,0xb);
    uVar3 = DAT_001546dc;
    uVar2 = DAT_001546d8;
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,DAT_001546dc,uVar5,DAT_001546d8,param_1 + 0x1a4,0xb,0);
    *(undefined4 *)(param_1 + 0x1050) = uVar3;
    *(undefined4 *)(param_1 + 0x1054) = uVar3;
    uVar1 = DAT_001546e0;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined4 *)(param_1 + 0x22c) = uVar1;
    *(undefined2 *)(param_1 + 0x272) = 0x5c;
    *(undefined2 *)(param_1 + 0x232) = 0;
    *(undefined2 *)(param_1 + 0x26e) = 0xe1;
  }
  FUN_0036f00c(DAT_001546e8,DAT_001546e4,param_2,param_1,param_1 + 0x28,4,500,10,1);
  return;
}
