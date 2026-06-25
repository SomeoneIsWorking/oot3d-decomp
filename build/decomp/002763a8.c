// OoT3D decomp @ 002763a8  name=FUN_002763a8  size=260

undefined4 FUN_002763a8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 1) == 0) ||
      (iVar3 = FUN_0036b4ec(param_1 + 0x1764,param_2), iVar3 != 0)) &&
     (FUN_0035d27c(param_1,DAT_002764ac), (*(uint *)(param_1 + 0x1710) & 0x800000) == 0)) {
    iVar6 = *(int *)(param_1 + 0x1708);
    iVar3 = DAT_002764b0;
    if (iVar6 != DAT_002764b0) {
      iVar3 = DAT_002764b4;
    }
    if (iVar6 != DAT_002764b0 && iVar6 != iVar3) {
      uVar4 = FUN_0034d628(param_1);
      uVar1 = DAT_002764b8;
      uVar5 = FUN_003603c0(param_1 + 0x254,uVar4);
      uVar2 = DAT_002764bc;
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00360190(DAT_002764bc,uVar1,uVar5,uVar1,param_1 + 0x254,param_2,uVar4,2);
      uVar5 = FUN_003603c0(param_1 + 0x254,uVar4);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00360190(uVar2,uVar1,uVar5,uVar1,param_1 + 0x1764,param_2,uVar4,2);
    }
  }
  FUN_0036b02c(param_2,param_1);
  return 1;
}

